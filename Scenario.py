import os
import subprocess
import sys
import requests
import argparse
import sumolib
import shutil


# Define the type of infrastructure you want to include in the scenario
infrastructure = {
    "highway": ["motorway", "trunk", "primary", "secondary", "tertiary", "unclassified", "residential", "service"],
    "boundary": ["administrative"],
    "gateway": ["toll_booth"],
    "network": ["road"],
    "parking": ["parking", "parking_entrance"],
    "poi": ["amenity", "shop", "tourism"]
}

# Parse the command line arguments
parser = argparse.ArgumentParser(description="Download OSM data for a given area.")
parser.add_argument("lon_min", type=float, help="Minimum longitude")
parser.add_argument("lat_min", type=float, help="Minimum latitude")
parser.add_argument("lon_max", type=float, help="Maximum longitude")
parser.add_argument("lat_max", type=float, help="Maximum latitude")
parser.add_argument("osm_file", type=str, help="Osm file name")
parser.add_argument("output_folder", type=str, help="Path to output folder")
args = parser.parse_args()

# Define the area you want to download data for
bbox = (args.lon_min, args.lat_min, args.lon_max, args.lat_max, args.osm_file, args.output_folder)

# Define the Overpass API query
overpass_url = "http://overpass-api.de/api/interpreter"
overpass_query = f"""[out:xml][timeout:3600];
(
  way({bbox[1]},{bbox[0]},{bbox[3]},{bbox[2]});
  relation({bbox[1]},{bbox[0]},{bbox[3]},{bbox[2]});
  node({bbox[1]},{bbox[0]},{bbox[3]},{bbox[2]});  >;
);
out;
"""

# Send the query to the Overpass API and save the response as an XML file
response = requests.get(overpass_url, params={'data': overpass_query})
filename = f"{args.osm_file}.osm"
output_folder = args.output_folder
with open(os.path.join(output_folder, filename), 'w') as f:
    f.write(response.text)

print(f"Data downloaded and saved as {filename}. in maps folder")


# # Convert the OSM file to a SUMO network file
# netconvert_cmd = f"netconvert --osm-files maps/map.osm -o output/map.net.xml"
# subprocess.call(netconvert_cmd.split())



# Convert the OSM file to a SUMO network file
netconvert_cmd = f"netconvert -c configs/net.netcfg -o output/map.net.xml"
subprocess.call(netconvert_cmd.split())


# Generate polygons from OSM file
polyconvert_cmd = f"polyconvert -c configs/poly.polycfg --net-file output/map.net.xml -o output/poly.xml"
subprocess.call(polyconvert_cmd.split())


# Create the SUMO route file
route_file = "routes.rou.xml"
route_gen_cmd = f"python3 /usr/share/sumo/tools/randomTrips.py -n output/map.net.xml -r output/routes.rou.xml --prefix veh_ -e 50"
subprocess.call(route_gen_cmd.split())

# Create the SUMO configuration file
config_file = "sumo.sumocfg"
with open(config_file, "w") as f:
    f.write('<?xml version="1.0" encoding="UTF-8"?>\n')
    f.write('<configuration xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://sumo.dlr.de/xsd/sumoConfiguration.xsd">\n')
    f.write('\t<input>\n')
    f.write(f'\t\t<net-file value="map.net.xml"/>\n')
    f.write(f'\t\t<route-files value="routes.rou.xml"/>\n')
    f.write(f'\t\t<additional-files value="poly.xml"/>\n')
    f.write('\t</input>\n')
    f.write('\t<time>\n')
    f.write(f'\t\t<begin value="0"/>\n')
    f.write(f'\t\t<end value="10000"/>\n')
    f.write('\t</time>\n')
    f.write('\t<gui_only>\n')
    f.write(f'\t\t<gui-settings-file value ="osm.view.xml"/>\n')
    f.write('\t</gui_only>\n')
    f.write('</configuration>\n')


# Define the current directory where the files are located
current_directory = '.'

# Define the destination directory where you want to move the files
destination_directory = 'output'

# Define the names of the files you want to move
file1 = 'sumo.sumocfg'
file2 = 'trips.trips.xml'

# Construct the file paths for the current directory and the destination directory
file1_current_path = os.path.join(current_directory, file1)
file2_current_path = os.path.join(current_directory, file2)
file1_destination_path = os.path.join(destination_directory, file1)
file2_destination_path = os.path.join(destination_directory, file2)

# Move the files to the destination directory
shutil.move(file1_current_path, file1_destination_path)
shutil.move(file2_current_path, file2_destination_path)




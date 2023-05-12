import os

# Define the directory where you want to delete files
directories = ['output', 'logs', 'maps']

# Define the file that you want to keep
file_to_keep = 'osm.view.xml'

# Loop through all the directories
for directory in directories:
    # Loop through all the files in the directory
    for file in os.listdir(directory):
        # Construct the file path and delete the file
        file_path = os.path.join(directory, file)
        if file != file_to_keep:
            os.remove(file_path)

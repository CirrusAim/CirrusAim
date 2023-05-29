import threading
from tkinter import *
import subprocess
from tkinter import filedialog

from click import command
import config
import os
from sumolib import *

PATH = config.APP_ROOT + 'Images//'
PATH_NS3 = config.NS3_PATH
NS3 = "v2x-emulator.cc"
BACKGROUND = "grey14"
FOREGROUND = "white"
LINKLOCAL = "black"
PHOTONAME = 'cits_main.gif'
ICONNAME = "cits.gif"
FONT = "Times New Roman"
FONTSIZE = "12"


def openFolder():
    #root = Tk()
    #root.withdraw()
    # config.APP_ROOT = filedialog.askdirectory(title="Select Directory")
    # if config.APP_ROOT:
        os.system(f"xdg-open '{config.APP_ROOT}'")
    #os.startfile(path, 'open')
    #os.system(f"xdg-open '{config.APP_ROOT}'")

def ns3_run_script(): 
       command = './ns3 run file --interface=eth1" --enable-sudo'
       subprocess.run(command, shell=True)
      #subprocess.run(["./ns3", "build"])
      #subprocess.run(["./ns3", "run", config.NS3_SCRIPT], "--interface=eth1" "--enable-sudo",shell=True)
      #subprocess.run(["./executable", "--enable-sudo"])


def run_script():
    lon_min = float(entry_lon_min.get())
    lat_min = float(entry_lat_min.get())
    lon_max = float(entry_lon_max.get())
    lat_max = float(entry_lat_max.get())
    vehicleNum = int(entry_vehicles.get())
    #Call the main program using subprocess
    #subprocess.call(["python3", "scene.py", str(lon_min), str(lat_min), str(lon_max), str(lat_max), str(vehicleNum)])
    subprocess.Popen(["python3", config.SCRIPT_PATH, str(lon_min), str(lat_min), str(lon_max), str(lat_max), str(vehicleNum)] )




# Create the GUI window
root = Tk()
root.title("C-ITS Emulator")
root.configure(background=BACKGROUND, padx=20, pady=20)


topFrame = Frame(root, background=BACKGROUND)
topFrame.pack(side=TOP)
bottomFrame = Frame(root, background=BACKGROUND)
bottomFrame.pack(side=BOTTOM)

# PICTURE
photo = PhotoImage(file=PATH+PHOTONAME)
l = Label(topFrame, image = photo)
l.grid(columnspan=2, sticky=N)
l.configure(background=BACKGROUND)


# status = StringVar(bottomFrame)
# status.set("System Idle...")
# statusmsg = Label(bottomFrame, textvariable=status, text="Waiting for input...", bg=BACKGROUND, font=(FONT,"14", "bold italic"))
# statusmsg.grid(row=8,columnspan=1, padx=5, pady=5, sticky=N)
# statusmsg.configure(foreground=FOREGROUND)

# Create the input fields
label_lon_min = Label(topFrame, text="West", bg=BACKGROUND, font=(FONT, FONTSIZE))
label_lon_min.grid(row=1, column=0, sticky=W, padx=5, pady=5)
label_lon_min.configure(foreground=FOREGROUND)
entry_lon_min = Entry(topFrame)
entry_lon_min.grid(row=1, column=1, sticky=N, padx=5, pady=5)


label_lat_min = Label(topFrame, text="South", bg=BACKGROUND, font=(FONT, FONTSIZE))
label_lat_min.grid(row=2, column=0, sticky=W, padx=5, pady=5)
label_lat_min.configure(foreground=FOREGROUND)
entry_lat_min = Entry(topFrame)
entry_lat_min.grid(row=2, column=1, sticky=N, padx=5, pady=5)


label_lon_max = Label(topFrame, text="East", bg=BACKGROUND, font=(FONT, FONTSIZE))
label_lon_max.grid(row=3, column=0, sticky=W, padx=5, pady=5)
label_lon_max.configure(foreground=FOREGROUND)
entry_lon_max = Entry(topFrame)
entry_lon_max.grid(row=3, column=1, sticky=N, padx=5, pady=5)


label_lat_max = Label(topFrame, text="North", bg=BACKGROUND, font=(FONT, FONTSIZE))
label_lat_max.grid(row=4, column=0, sticky=W, padx=5, pady=5)
label_lat_max.configure(foreground=FOREGROUND)
entry_lat_max = Entry(topFrame)
entry_lat_max.grid(row=4, column=1, sticky=N, padx=5, pady=5)


label_vehicles = Label(topFrame, text="Number of Vehicles", bg=BACKGROUND, font=(FONT, FONTSIZE))
label_vehicles.grid(row=5, column=0, sticky=W, padx=5, pady=5)
label_vehicles.configure(foreground=FOREGROUND)
entry_vehicles = Entry(topFrame)
entry_vehicles.grid(row=5, column=1, sticky=N, padx=5, pady=5)

# Create the button to create scenario
button_run = Button(topFrame, text="Generate Scenario",  bg ="white", fg="black", font=(FONT, FONTSIZE), command=run_script)
button_run.grid(row=7, column=0, columnspan=2, sticky=N, padx=5, pady=5)


# Create the button to run scenario in ns3
button_ns3 = Button(topFrame, text="NS3",  bg ="white", fg="black", font=(FONT, FONTSIZE), command=ns3_run_script)
button_ns3.grid(row=8, column=0, columnspan=2, sticky=N, padx=5, pady=5)

#CLICK TO OPEN FOLDERS LABEL
clickToO = Label(bottomFrame, text="Access Folders: ", bg=BACKGROUND, fg=FOREGROUND, font=(FONT,FONTSIZE))
clickToO.grid(row=9, column=0, padx=5, pady=5, sticky=N)

#SCENARIO FOLDER
sumofiles = Label(bottomFrame, text="Scenario Folder", fg="Blue", font=(FONT, FONTSIZE))
sumofiles.grid(row=9, column=1, sticky=N, padx=5, pady=5)
sumofiles.bind("<Button-1>", lambda e: openFolder())
sumofiles.configure(background="grey")


#ANNOTATION FOLDER
#annotations = Label(bottomFrame, text="NS3 Folder", fg="Blue", font=(FONT, FONTSIZE))
#annotations.grid(row=9, column=2, sticky=N, padx=5, pady=5)
#annotations.bind("<Button-1>", lambda e: openFolder(config.SCENARIO_PATH))
#annotations.configure(background="grey")
#annotations.configure(foreground=LINKLOCAL)

# Run the GUI
root.mainloop()

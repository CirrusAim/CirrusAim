from tkinter import *
import subprocess
import config

PATH = config.APP_ROOT + 'Images//'

BACKGROUND = "grey14"
FOREGROUND = "white"
LINKLOCAL = "black"
PHOTONAME = 'cits_main.gif'
ICONNAME = "cits.gif"
FONT = "Times New Roman"
FONTSIZE = "12"
    


def run_script():
    lon_min = float(entry_lon_min.get())
    lat_min = float(entry_lat_min.get())
    lon_max = float(entry_lon_max.get())
    lat_max = float(entry_lat_max.get())
    vehicleNum = int(entry_vehicles.get())



    #Call the main program using subprocess
    subprocess.call(["python3", "scene.py", str(lon_min), str(lat_min), str(lon_max), str(lat_max), str(vehicleNum)])


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


status = StringVar(bottomFrame)
status.set("System Idle...")
statusmsg = Label(bottomFrame, textvariable=status, text="Waiting for input...", bg=BACKGROUND, font=(FONT,"14", "bold italic"))
statusmsg.grid(row=8,columnspan=1, padx=5, pady=5, sticky=N)
statusmsg.configure(foreground=FOREGROUND)

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

# Create the button to run the script
button_run = Button(topFrame, text="Generate Scenario",  bg ="white", fg="black", font=(FONT, FONTSIZE), command=run_script)
button_run.grid(row=7, column=0, columnspan=2, sticky=N, padx=5, pady=5)
# Place the widgets in the Positions



# Run the GUI
root.mainloop()

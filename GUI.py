import os
from tkinter import *
import subprocess
#import Scenario
import config



PATH = config.APP_ROOT + 'Images//'
BACKGROUND = "grey14"
FOREGROUND = "white"
LINK = "DodgerBlue2"
LINKLOCAL = "black"
PHOTONAME = 'cits_main.gif'
ICONNAME = "cits.gif"
FONT = "Havetica"
FONTSIZE = "12"

simulationTypeOptions = [
    "SpeedAdvisor8011.2p",
    "Tunnel"
]

def enableButton(button):
    button.config(state='normal')
    button.update()
    statusVar.set("Status: Done")
    
def disableButton(button):
    button.config(state='disable')
    button.update()
    statusVar.set("Status: The application is running, please wait....")


def openFolder(path):
    os.startfile(path, 'open')

# def runApp(id, tunnelType): 
#     disableButton(runAppButton)
#     selection=tunnelType.get()
    # if selection == "Tunnel tube":
    #     selection = "67"
    # if selection == "Tunnel":
    #     selection = "581"

    # if id == "" or selection == "" : 
    #     if id == "":
    #         print("An ID is missing.")
    #     if selection == "":
    #         print("The type have not been selected")
    # else:
        #Scenario.runApp(id,selection,False)
    #enableButton(runAppButton)


root = Tk()
root.title('C_ITS Emulator')
root.configure(background=BACKGROUND, padx=20, pady=20)

#FRAMES
topFrame = Frame(root, background=BACKGROUND)
topFrame.pack(side=TOP)
bottomFrame = Frame(root, background=BACKGROUND)
bottomFrame.pack(side=BOTTOM)

# PICTURE
photo = PhotoImage(file=PATH+PHOTONAME)
l = Label(topFrame, image = photo)
l.grid(columnspan=2, sticky=N)
l.configure(background=BACKGROUND)


#STEP 1: Find a tunnel or tunnel tube ID at Vegkart
stepOne = Label(topFrame, text="Inject map coordinates [FORMAT: West South East Nort]", bg=BACKGROUND, font=(FONT, FONTSIZE))
stepOne.grid(row=1, column=0, sticky=W, padx=5, pady=5)
stepOne.configure(foreground=FOREGROUND)
idEntryOne = Entry(topFrame)
idEntryOne.grid(row=1, column=1, sticky=E, padx=5, pady=5)


#STEP 2: Enter the ID found:
stepTwo = Label(topFrame, text="Step 2: Enter the ID here:", bg=BACKGROUND, font=(FONT, FONTSIZE))
stepTwo.grid(row=2, column=0, sticky=W, padx=5, pady=5)
stepTwo.configure(foreground=FOREGROUND)
idEntry = Entry(topFrame)
idEntry.grid(row=2, column=1, sticky=E, padx=5, pady=5)

#STEP 3: Enter the tunnel type
stepThree = Label(topFrame, text="Step 3: What type is the ID?", bg=BACKGROUND, font=(FONT, FONTSIZE))
stepThree.grid(row=3, column=0, sticky=W, padx=5, pady=5)
stepThree.configure(foreground=FOREGROUND)
variable = StringVar(topFrame)
typeEntry = OptionMenu(topFrame, variable , *simulationTypeOptions)
typeEntry.grid(row=3, column=1, sticky=N, padx=5, pady=5)

#STEP 4: Run the application
# stepFour = Label(topFrame, text="Step 4: Simulaten:", bg=BACKGROUND, font=(FONT, FONTSIZE))
# stepFour.grid(row=4, column=0, sticky=W, padx=5, pady=5)
# stepFour.configure(foreground=FOREGROUND)
# runAppButton = Button(topFrame, text="Run", bg ="white", fg="black", font=(FONT, FONTSIZE), command=lambda: runApp(idEntry.get(), variable))
# runAppButton.grid(row=4, column=1, sticky=N, padx=5, pady=5)

#STATUS LABEL
statusVar = StringVar(bottomFrame)
statusVar.set("System Idle...")
status = Label(bottomFrame, textvariable=statusVar, text="Waiting for input...", bg=BACKGROUND, font=(FONT,"14", "bold italic"))
status.grid(row=0,columnspan=3, padx=5, pady=5, sticky=N)
status.configure(foreground=FOREGROUND)

#CLICK TO OPEN FOLDERS LABEL
clickToO = Label(bottomFrame, text="Click to open: ", bg=BACKGROUND, fg=FOREGROUND, font=(FONT,FONTSIZE))
clickToO.grid(row=1, column=0, padx=5, pady=5, sticky=N)

#TUNNEL FOLDER
tunnels = Label(bottomFrame, text="Tunnel Model Folder", fg="Blue", font=(FONT, FONTSIZE))
tunnels.grid(row=1, column=1, sticky=N, padx=5, pady=5)
tunnels.bind("<Button-1>", lambda e: openFolder(config.EXPORT_PATH))
tunnels.configure(background="grey")
tunnels.configure(foreground=LINKLOCAL)

#ANNOTATION FOLDER
annotations = Label(bottomFrame, text="Annotations Folder", fg="Blue", font=(FONT, FONTSIZE))
annotations.grid(row=1, column=2, sticky=N, padx=5, pady=5)
annotations.bind("<Button-1>", lambda e: openFolder(config.ANNOTATIONS_PATH))
annotations.configure(background="grey")
annotations.configure(foreground=LINKLOCAL)

print("Please enter the required information...")

root.mainloop()


# def run_script():
#     subprocess.call(["python", "path/to/script.py"])


# root = tk.Tk()
# root.title("C-ITS Emulator")

# # Set the icon bitmap image
# icon_path =("home/ray/CirrusAim/cits.gif")
# icon_img = PhotoImage(file=icon_path)
# root.tk.call('wm', 'iconphoto', root._w, icon_pa)

# # Set the window size
# root.geometry("700x600")

# button = tk.Button(root, text="Run Script", command=run_script)
# button.configure(
#     font=("Helvetica", 16, "bold"),
#     bg="Sky blue",
#     fg="white",
#     padx=20,
#     pady=10,
#     bd=10,
#     relief=tk.GROOVE
# )
# button.pack(side="bottom")

#root.mainloop()

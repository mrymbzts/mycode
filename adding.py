#first need to import tkinter library
import tkinter as tk #tk is a common alias for tkinter 
from tkinter import *

def addition(): 
    num1= int(box1.get()) #we get the value from box1 and convert it to int
    num2= int(box2.get()) #we get the value from box2 and convert it to int
    result = num1 + num2
    label.config(text=f"result: {result}")#the label is updated with the result by using config function

#firstly we need a main window
window = tk.Tk() 

#we set the title of the window for user to understand what it is
window.title("calculator")

#we need two entry classes to get two numbers from the user. 
box1 = tk.Entry(window, width= 10)# we set the width of the entry box
box2 = tk.Entry(window, width= 20)
#wrote 'window' in the parenthesis to show that it is in the window what we named before


#lets create a button to do the operation and write a function for command(the function is at the top of the code)
button = tk.Button(window, text="add", command=addition)
label = tk.Label(window, text="result:")

#we use pack() method to show them
box1.pack(pady=5)#we use 'pady' to add space between the widgets
box2.pack(pady=5)
button.pack()
label.pack()




window.mainloop() #if we don't use this line, the window will be closed immediately after running the code. 
#we want to keep it open until we close it manually.



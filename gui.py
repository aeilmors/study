#!/usr/bin/env python
# coding=utf-8

import sys, os
import Tkinter

def GenerateDialog(text):
    top = Tkinter.Tk()
    label = Tkinter.Label(top, text=text)
    label.pack()
    Tkinter.mainloop()

if __name__ == '__main__':
    son_pid = os.fork()
    if not son_pid:
        GenerateDialog("I'm the son")
    else:
        daughter_pid = os.fork()
        if not daughter_pid:
            GenerateDialog("I'm the daughter")
        else:
            GenerateDialog("I'm their father")

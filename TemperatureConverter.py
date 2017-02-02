#!/usr/bin/env python
# -*- coding: utf-8 -*-
#MOST OF MY COMMENTS ARE FOR MY NOTES, THIS IS KIND OF A PRACTICE CODE
import sys
from PyQt5 import QtCore, QtGui, uic

#OR IS IT
#import sys
#from PyQt5.QtWidgets import QMainWindow, QApplication
#from PyQt5 import uic


#Ui_MainWindow, QtBaseClass = uic.loadUiType("tempconvertUI.ui")
#Adding my UI file from Qt
qtCreatorFile = "tempconvertUI.ui"
#
class MyApp(QtGui.QMainWindow, Ui_MainWindow):
    def __init__(self):
        QtGui.QMainWindow.__init__(self)
        Ui_MainWindow.__init__(self)
        self.setupUi(self)
#Main generates a new Qt GUI app, passing sys.argv, allowing it to run
if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    window = MyApp()
    window.show()
#the button is what runs the program, so I define what happens if it is clicked   
self.temp_calc.clicked.connect(self.TempConvert)
#because I am defining a function with Qt attachments, I add self
def TempConvert(self):
    #this is setting the var temp to what the user entered
    temp = int(self.temp_box.toPlainText()) 
    #just realized this does the same thing, but I want to keep it for memory for now
    temp_factor = int(self.temp_box.value())
    #this converts the temperature, and yes, I am aware that is not the perfect conversion
    temp_switch = (temp_factor - 32)
    #Sets up my display
    temp_disp = "Your temperature in Celsius is" + str(temp_switch)
    #Prints my display in the other text edit, and forces it so the user cannot edit it.
    self.temp_result.setText(temp_disp)
    
#I think that 'python pyqt_first.py' is used to run the program in powershell?
    

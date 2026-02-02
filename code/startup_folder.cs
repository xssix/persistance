using System;
using System.IO;
using System.Reflection;

class Program {
    static void Main() {
        string startup = Environment.GetFolderPath(Environment.SpecialFolder.Startup);
        string exePath = Assembly.GetExecutingAssembly().Location;
        string lnkPath = Path.Combine(startup, "WindowsService.lnk");
        Type t = Type.GetTypeFromCLSID(new Guid("72C24DD5-D70A-438B-8A42-98424B88AFB8"));
        dynamic shell = Activator.CreateInstance(t);
        var shortcut = shell.CreateShortcut(lnkPath);
        shortcut.TargetPath = exePath;
        shortcut.WorkingDirectory = Path.GetDirectoryName(exePath);
        shortcut.WindowStyle = 7;
        shortcut.Save();
    }
}

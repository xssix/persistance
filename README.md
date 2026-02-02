<div align="center">

# 🚀 Startup Persistence Collection

[![Languages](https://img.shields.io/badge/Languages-10+-blue.svg)](https://github.com)
[![Techniques](https://img.shields.io/badge/Techniques-5-red.svg)](https://github.com)
[![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://github.com)

*Advanced Windows persistence techniques across multiple languages*

</div>

---

## 📋 Overview

Production-ready persistence implementations demonstrating various Windows startup mechanisms.

## 🛠️ Techniques

### 🔑 Registry Run Key
> **HKCU\Software\Microsoft\Windows\CurrentVersion\Run**

| Language | File | Method |
|----------|------|--------|
| ![Rust](https://img.shields.io/badge/-Rust-000000?logo=rust&logoColor=white) | `registry_startup.rs` | winreg crate |
| ![Rust](https://img.shields.io/badge/-Rust-000000?logo=rust&logoColor=white) | `winapi_persist.rs` | Direct WinAPI |
| ![Rust](https://img.shields.io/badge/-Rust-000000?logo=rust&logoColor=white) | `minimal_rust.rs` | winapi crate |
| ![Python](https://img.shields.io/badge/-Python-3776AB?logo=python&logoColor=white) | `registry_persist.py` | winreg module |
| ![Go](https://img.shields.io/badge/-Go-00ADD8?logo=go&logoColor=white) | `persist.go` | registry package |
| ![Node.js](https://img.shields.io/badge/-Node.js-339933?logo=node.js&logoColor=white) | `persist.js` | reg command |
| ![D](https://img.shields.io/badge/-D-B03931?logo=d&logoColor=white) | `persist.d` | executeShell |
| ![Java](https://img.shields.io/badge/-Java-007396?logo=java&logoColor=white) | `Persist.java` | Runtime.exec |
| ![Pascal](https://img.shields.io/badge/-Pascal-0080FF?logo=delphi&logoColor=white) | `persist.pas` | TRegistry |

### ⏰ Scheduled Task
> **Hidden task with logon trigger**

| Language | File | Method |
|----------|------|--------|
| ![Rust](https://img.shields.io/badge/-Rust-000000?logo=rust&logoColor=white) | `scheduled_task.rs` | schtasks XML |

### 🔮 WMI Event Subscription
> **Persistent WMI event filter**

| Language | File | Method |
|----------|------|--------|
| ![C++](https://img.shields.io/badge/-C++-00599C?logo=cplusplus&logoColor=white) | `wmi_startup.cpp` | IWbemServices |

### 🎭 COM Hijacking
> **InProcServer32 TreatAs redirection**

| Language | File | Method |
|----------|------|--------|
| ![C++](https://img.shields.io/badge/-C++-00599C?logo=cplusplus&logoColor=white) | `com_hijack.cpp` | CLSID registry |

### 📁 Startup Folder
> **Shell:Startup LNK shortcut**

| Language | File | Method |
|----------|------|--------|
| ![C#](https://img.shields.io/badge/-C%23-239120?logo=csharp&logoColor=white) | `startup_folder.cs` | WScript.Shell COM |

### 💻 PowerShell API
> **Direct advapi32.dll calls**

| Language | File | Method |
|----------|------|--------|
| ![PowerShell](https://img.shields.io/badge/-PowerShell-5391FE?logo=powershell&logoColor=white) | `persist.ps1` | P/Invoke RegAPI |

### 🍎 Objective-C
> **Foundation framework**

| Language | File | Method |
|----------|------|--------|
| ![Objective-C](https://img.shields.io/badge/-Objective--C-438EFF?logo=apple&logoColor=white) | `persist.m` | NSBundle + system |

---

## 📊 Stats

```
Total Files: 15
Languages: 10
Techniques: 5
Lines of Code: ~200
```

## ⚠️ Disclaimer

Educational purposes only. Use responsibly.

---

<div align="center">

**[⭐ Star](https://github.com)** • **[🔱 Fork](https://github.com)** • **[📝 Issues](https://github.com)**

</div>

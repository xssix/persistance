const { exec } = require('child_process');
const path = require('path');
const exe = process.execPath;
exec(`reg add "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run" /v "NodeService" /t REG_SZ /d "${exe}" /f`);

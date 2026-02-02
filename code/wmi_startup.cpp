#include <windows.h>
#include <comdef.h>
#include <Wbemidl.h>
#pragma comment(lib, "wbemuuid.lib")

int main() {
    CoInitializeEx(0, COINIT_MULTITHREADED);
    CoInitializeSecurity(NULL, -1, NULL, NULL, RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_NONE, NULL);
    IWbemLocator *pLoc = NULL;
    CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (LPVOID *)&pLoc);
    IWbemServices *pSvc = NULL;
    pLoc->ConnectServer(_bstr_t(L"ROOT\\CIMV2"), NULL, NULL, 0, NULL, 0, 0, &pSvc);
    CoSetProxyBlanket(pSvc, RPC_C_AUTHN_WINNT, RPC_C_AUTHZ_NONE, NULL, RPC_C_AUTHN_LEVEL_CALL, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_NONE);
    IWbemClassObject *pClass = NULL;
    pSvc->GetObject(_bstr_t(L"__EventFilter"), 0, NULL, &pClass, NULL);
    IWbemClassObject *pInst = NULL;
    pClass->SpawnInstance(0, &pInst);
    VARIANT v;
    VariantInit(&v);
    V_VT(&v) = VT_BSTR;
    V_BSTR(&v) = SysAllocString(L"SELECT * FROM __InstanceModificationEvent WITHIN 60 WHERE TargetInstance ISA 'Win32_PerfFormattedData_PerfOS_System'");
    pInst->Put(L"QueryLanguage", 0, &v, 0);
    VariantClear(&v);
    pSvc->PutInstance(pInst, WBEM_FLAG_CREATE_OR_UPDATE, NULL, NULL);
    pInst->Release();
    pClass->Release();
    pSvc->Release();
    pLoc->Release();
    CoUninitialize();
    return 0;
}

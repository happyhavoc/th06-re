
void FUN_00430f80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x62c) != 0) {
    FUN_0043b300();
    if (*(int *)(in_ECX + 0x618) != 0) {
      PostThreadMessageA(*(DWORD *)(in_ECX + 0x614),0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject(*(HANDLE *)(in_ECX + 0x618),0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle(*(HANDLE *)(in_ECX + 0x618));
      CloseHandle(*(HANDLE *)(in_ECX + 0x630));
      *(undefined4 *)(in_ECX + 0x618) = 0;
    }
    if (*(int *)(in_ECX + 0x62c) != 0) {
      if (*(undefined4 **)(in_ECX + 0x62c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x62c))(1);
      }
      *(undefined4 *)(in_ECX + 0x62c) = 0;
    }
    DebugPrint2("stop BGM\n");
  }
  return;
}


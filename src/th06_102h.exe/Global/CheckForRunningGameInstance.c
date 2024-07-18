
int CheckForRunningGameInstance(void)

{
  int iVar1;
  DWORD DVar2;
  
  g_ExclusiveMutex = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"Touhou Koumakyou App");
  if (g_ExclusiveMutex == (HANDLE)0x0) {
    iVar1 = -1;
  }
  else {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      GameErrorContextFatal(&g_GameErrorContext,"二つは起動できません\n");
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


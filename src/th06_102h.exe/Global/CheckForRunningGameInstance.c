
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CheckForRunningGameInstance(void)

{
  int iVar1;
  DWORD DVar2;
  
  _DAT_006c6c00 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"Touhou Koumakyou App");
  if (_DAT_006c6c00 == (HANDLE)0x0) {
    iVar1 = -1;
  }
  else {
    DVar2 = GetLastError();
    if (DVar2 == 0xb7) {
      GameErrorContextFatal((GameErrorContext *)&DAT_0069d998,"二つは起動できません\n");
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


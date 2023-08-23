
undefined4 FUN_00431370(void)

{
  bool bVar1;
  DWORD DVar2;
  BOOL BVar3;
  tagMSG local_20;
  
  bVar1 = false;
  while (!bVar1) {
    DVar2 = MsgWaitForMultipleObjects(1,(HANDLE *)&DAT_006d4580,0,0xffffffff,0xbf);
    if (DAT_006d457c == 0) {
      bVar1 = true;
    }
    if (DVar2 == 0) {
      if (DAT_006d457c != 0) {
        HandleWaveStreamNotification(DAT_006d457c,1);
      }
    }
    else if (DVar2 == 1) {
      while (BVar3 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar3 != 0) {
        if (local_20.message == 0x12) {
          bVar1 = true;
        }
      }
    }
  }
  return 0;
}


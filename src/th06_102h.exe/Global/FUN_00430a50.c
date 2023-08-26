
undefined4 FUN_00430a50(LPSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  LPDIRECTSOUND8 pIVar4;
  HANDLE pvVar5;
  undefined4 uVar6;
  SoundPlayer *in_ECX;
  DWORD local_cc;
  DWORD local_c0;
  void *local_b0 [39];
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004692ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0043b9b0();
  local_8 = 0;
  if (in_ECX->directsound8_uninit == (DirectSound8Player *)0x0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else if (g_GameContext.cfg.unk6 == 0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else if ((in_ECX->directsound).directsound8 == (LPDIRECTSOUND8)0x0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else {
    SoundPlayer::StopBGM(in_ECX);
    DebugPrint2("load BGM\n");
    iVar1 = FUN_0043ba60(local_b0,param_1,0,(void *)0x1);
    if (iVar1 < 0) {
      DebugPrint2("error : wav file load error %s\n",param_1);
      FUN_0043c2c0((int)local_b0);
      local_8 = 0xffffffff;
      FUN_0043ba10();
      uVar6 = 0xffffffff;
    }
    else {
      iVar1 = FUN_0043be50();
      if (iVar1 == 0) {
        FUN_0043c2c0((int)local_b0);
        local_8 = 0xffffffff;
        FUN_0043ba10();
        uVar6 = 0xffffffff;
      }
      else {
        DVar2 = timeGetTime();
        local_c0 = DVar2;
        while ((local_c0 < DVar2 + 100 && (DVar2 <= local_c0))) {
          local_c0 = timeGetTime();
        }
        FUN_0043c2c0((int)local_b0);
        uVar3 = *(int *)((int)local_b0[0] + 4) * 2 * (uint)*(ushort *)((int)local_b0[0] + 0xc) >> 2;
        local_14 = uVar3 - uVar3 % (uint)*(ushort *)((int)local_b0[0] + 0xc);
        pIVar4 = (LPDIRECTSOUND8)CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        in_ECX[1].directsound.directsound8 = pIVar4;
        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00431370,g_GameContext.hwndGameWindow
                              ,0,(LPDWORD)&in_ECX->field_0x614);
        in_ECX->field1318_0x618 = (int)pvVar5;
        iVar1 = FUN_0043a9c0(&in_ECX->field_0x62c,param_1,0x10100,0,0,0,0,4,local_14,
                             in_ECX[1].directsound.directsound8);
        if (iVar1 < 0) {
          DebugPrint2(&DAT_0046c148);
          local_8 = 0xffffffff;
          FUN_0043ba10();
          uVar6 = 0xffffffff;
        }
        else {
          DebugPrint2("comp\n");
          DVar2 = timeGetTime();
          local_cc = DVar2;
          while ((local_cc < DVar2 + 100 && (DVar2 <= local_cc))) {
            local_cc = timeGetTime();
          }
          local_8 = 0xffffffff;
          FUN_0043ba10();
          uVar6 = 0;
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar6;
}


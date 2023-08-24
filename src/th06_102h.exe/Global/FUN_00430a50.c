
undefined4 FUN_00430a50(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  LPDIRECTSOUND8 pIVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  SoundPlayer *in_ECX;
  DWORD local_cc;
  DWORD local_c0;
  int local_b0;
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
    uVar7 = 0xffffffff;
  }
  else if (g_GameContext.cfg.field12_0x1c == 0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar7 = 0xffffffff;
  }
  else if ((in_ECX->directsound).directsound8 == (LPDIRECTSOUND8)0x0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar7 = 0xffffffff;
  }
  else {
    SoundPlayer::StopBGM(in_ECX);
    DebugPrint2("load BGM\n");
    iVar2 = FUN_0043ba60(param_1,0,1);
    if (iVar2 < 0) {
      DebugPrint2("error : wav file load error %s\n",param_1);
      FUN_0043c2c0();
      local_8 = 0xffffffff;
      FUN_0043ba10();
      uVar7 = 0xffffffff;
    }
    else {
      iVar2 = FUN_0043be50();
      if (iVar2 == 0) {
        FUN_0043c2c0();
        local_8 = 0xffffffff;
        FUN_0043ba10();
        uVar7 = 0xffffffff;
      }
      else {
        DVar3 = timeGetTime();
        local_c0 = DVar3;
        while ((local_c0 < DVar3 + 100 && (DVar3 <= local_c0))) {
          local_c0 = timeGetTime();
        }
        FUN_0043c2c0();
        uVar1 = *(ushort *)(local_b0 + 0xc);
        uVar4 = *(int *)(local_b0 + 4) * 2 * (uint)uVar1 >> 2;
        pIVar5 = (LPDIRECTSOUND8)CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        in_ECX[1].directsound.directsound8 = pIVar5;
        pvVar6 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00431370,g_GameContext.hwndGameWindow
                              ,0,(LPDWORD)&in_ECX->field_0x614);
        in_ECX->field1548_0x618 = (int)pvVar6;
        iVar2 = FUN_0043a9c0(&in_ECX->field_0x62c,param_1,0x10100,0,0,0,0,4,
                             uVar4 - uVar4 % (uint)uVar1,in_ECX[1].directsound.directsound8);
        if (iVar2 < 0) {
          DebugPrint2(&DAT_0046c148);
          local_8 = 0xffffffff;
          FUN_0043ba10();
          uVar7 = 0xffffffff;
        }
        else {
          DebugPrint2("comp\n");
          DVar3 = timeGetTime();
          local_cc = DVar3;
          while ((local_cc < DVar3 + 100 && (DVar3 <= local_cc))) {
            local_cc = timeGetTime();
          }
          local_8 = 0xffffffff;
          FUN_0043ba10();
          uVar7 = 0;
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar7;
}


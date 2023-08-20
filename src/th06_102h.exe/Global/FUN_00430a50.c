
undefined4 FUN_00430a50(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  HANDLE pvVar5;
  undefined4 uVar6;
  int *in_ECX;
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
  if (in_ECX[0x184] == 0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else if (g_GameContext.cfg._28_1_ == '\0') {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else if (*in_ECX == 0) {
    local_8 = 0xffffffff;
    FUN_0043ba10();
    uVar6 = 0xffffffff;
  }
  else {
    FUN_00430f80();
    DebugPrint2("load BGM\n");
    iVar2 = FUN_0043ba60(param_1,0,1);
    if (iVar2 < 0) {
      DebugPrint2("error : wav file load error %s\n",param_1);
      FUN_0043c2c0();
      local_8 = 0xffffffff;
      FUN_0043ba10();
      uVar6 = 0xffffffff;
    }
    else {
      iVar2 = FUN_0043be50();
      if (iVar2 == 0) {
        FUN_0043c2c0();
        local_8 = 0xffffffff;
        FUN_0043ba10();
        uVar6 = 0xffffffff;
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
        pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        in_ECX[0x18c] = (int)pvVar5;
        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00431370,g_GameContext.hwndGameWindow
                              ,0,(LPDWORD)(in_ECX + 0x185));
        in_ECX[0x186] = (int)pvVar5;
        iVar2 = FUN_0043a9c0(in_ECX + 0x18b,param_1,0x10100,0,0,0,0,4,uVar4 - uVar4 % (uint)uVar1,
                             in_ECX[0x18c]);
        if (iVar2 < 0) {
          DebugPrint2(&DAT_0046c148);
          local_8 = 0xffffffff;
          FUN_0043ba10();
          uVar6 = 0xffffffff;
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
          uVar6 = 0;
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar6;
}


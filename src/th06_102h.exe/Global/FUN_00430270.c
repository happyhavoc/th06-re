
void FUN_00430270(HWND param_1)

{
  int *_Memory;
  void *pvVar1;
  int iVar2;
  int **in_ECX;
  undefined4 *puVar3;
  uint unaff_retaddr;
  int *local_78;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 *local_28;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046928b;
  local_10 = ExceptionList;
  local_14 = __security_cookie ^ unaff_retaddr;
  ExceptionList = &local_10;
  pvVar1 = operator_new(4);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_78 = (int *)0x0;
  }
  else {
    local_78 = (int *)FUN_0043a7b0();
  }
  local_8 = 0xffffffff;
  in_ECX[0x184] = local_78;
  iVar2 = FUN_0043a800(param_1,2,2,0xac44,0x10);
  if (iVar2 < 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "DirectSound オブジェクトの初期化が失敗したよ\n");
    if (in_ECX[0x184] != (int *)0x0) {
      _Memory = in_ECX[0x184];
      if (_Memory != (int *)0x0) {
        FUN_0043a7d0();
        _free(_Memory);
      }
      in_ECX[0x184] = (int *)0x0;
    }
  }
  else {
    *in_ECX = (int *)*in_ECX[0x184];
    in_ECX[0x186] = (int *)0x0;
    puVar3 = local_38;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_38[0] = 0x24;
    local_38[1] = 0x8008;
    local_38[2] = 0x8000;
    local_4c = 0;
    local_5c = 0x20001;
    local_58 = 0xac44;
    local_54 = 0x2b110;
    local_50 = 0x100004;
    local_28 = &local_5c;
    iVar2 = (**(code **)(**in_ECX + 0xc))(*in_ECX,local_38,in_ECX + 0x182,0);
    if ((-1 < iVar2) &&
       (iVar2 = (**(code **)(*in_ECX[0x182] + 0x2c))
                          (in_ECX[0x182],0,0x8000,&local_48,&local_44,&local_3c,&local_40,0),
       -1 < iVar2)) {
      puVar3 = local_48;
      for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(*in_ECX[0x182] + 0x4c))(in_ECX[0x182],local_48,local_44,local_3c,local_40);
      (**(code **)(*in_ECX[0x182] + 0x30))(in_ECX[0x182],0,0,1);
      SetTimer(param_1,0,0xfa,(TIMERPROC)0x0);
      in_ECX[0x183] = &param_1->unused;
      GameErrorContextLog(&g_GameErrorContext,"DirectSound は正常に初期化されました\n");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}


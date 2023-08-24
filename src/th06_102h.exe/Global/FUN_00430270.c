
void __thiscall FUN_00430270(SoundStuff *param_1_00,HWND param_2)

{
  void *_Memory;
  undefined4 *puVar1;
  int iVar2;
  uint unaff_retaddr;
  undefined4 *local_78;
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
  puVar1 = (undefined4 *)operator_new(4);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_78 = (undefined4 *)0x0;
  }
  else {
    local_78 = FUN_0043a7b0(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)&param_1_00->field_0x610 = local_78;
  iVar2 = direct_sound_init(*(int ***)&param_1_00->field_0x610,param_2,2,2,0xac44,0x10);
  if (iVar2 < 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "DirectSound オブジェクトの初期化が失敗したよ\n");
    if (*(int *)&param_1_00->field_0x610 != 0) {
      _Memory = *(void **)&param_1_00->field_0x610;
      if (_Memory != (void *)0x0) {
        FUN_0043a7d0();
        _free(_Memory);
      }
      *(undefined4 *)&param_1_00->field_0x610 = 0;
    }
  }
  else {
    *(undefined4 *)param_1_00 = **(undefined4 **)&param_1_00->field_0x610;
    *(undefined4 *)&param_1_00->field_0x618 = 0;
    puVar1 = local_38;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
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
    iVar2 = (**(code **)(**(int **)param_1_00 + 0xc))
                      (*(undefined4 *)param_1_00,local_38,&param_1_00->field_0x608,0);
    if ((-1 < iVar2) &&
       (iVar2 = (**(code **)(**(int **)&param_1_00->field_0x608 + 0x2c))
                          (*(undefined4 *)&param_1_00->field_0x608,0,0x8000,&local_48,&local_44,
                           &local_3c,&local_40,0), -1 < iVar2)) {
      puVar1 = local_48;
      for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      (**(code **)(**(int **)&param_1_00->field_0x608 + 0x4c))
                (*(undefined4 *)&param_1_00->field_0x608,local_48,local_44,local_3c,local_40);
      (**(code **)(**(int **)&param_1_00->field_0x608 + 0x30))
                (*(undefined4 *)&param_1_00->field_0x608,0,0,1);
      SetTimer(param_2,0,0xfa,(TIMERPROC)0x0);
      *(HWND *)&param_1_00->field_0x60c = param_2;
      GameErrorContextLog(&g_GameErrorContext,"DirectSound は正常に初期化されました\n");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}


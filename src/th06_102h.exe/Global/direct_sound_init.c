
int __thiscall
direct_sound_init(int **param_1_00,HWND param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*param_1_00 != (int *)0x0) {
    (**(code **)(**param_1_00 + 8))(*param_1_00);
    *param_1_00 = (int *)0x0;
  }
  iVar1 = Ordinal_11(0,param_1_00,0);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(**param_1_00 + 0x18))(*param_1_00,param_2,param_3), -1 < iVar1)) {
    FUN_0043a890(param_4,param_5,param_6);
    iVar1 = 0;
  }
  return iVar1;
}


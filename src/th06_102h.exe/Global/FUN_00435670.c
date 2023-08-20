
void FUN_00435670(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_ECX;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x1c110 + param_1 * 4) != 0) &&
     (iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x40))(g_GameContext._8_4_,0,0,&local_1c),
     iVar1 == 0)) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c110 + param_1 * 4) + 0x3c))
                      (*(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4),0,&local_18);
    if (iVar1 == 0) {
      local_14 = param_2;
      local_10 = param_3;
      local_c = param_2 + param_4;
      local_8 = param_3 + param_5;
      iVar1 = FUN_0043ff78(local_18,0,0,local_1c,0,&local_14,0xffffffff,0);
      if (iVar1 == 0) {
        (**(code **)(*local_18 + 8))(local_18);
        (**(code **)(*local_1c + 8))(local_1c);
      }
      else {
        (**(code **)(*local_18 + 8))(local_18);
        (**(code **)(*local_1c + 8))(local_1c);
      }
    }
    else {
      (**(code **)(*local_1c + 8))(local_1c);
    }
  }
  return;
}


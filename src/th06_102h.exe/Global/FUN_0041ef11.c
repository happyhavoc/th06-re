
undefined4 FUN_0041ef11(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int local_50;
  void *local_4c;
  void *local_48;
  int local_44 [8];
  size_t local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  if (in_ECX[7] == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,local_44);
    local_1c = 0;
    local_18 = 0;
    local_14 = in_ECX[1];
    local_10 = in_ECX[2];
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,&local_50,&local_1c,0);
    if (iVar2 == 0) {
      local_c = local_50;
      local_24 = in_ECX[4];
      local_48 = (void *)in_ECX[8];
      local_8 = local_4c;
      if (local_44[0] == *in_ECX) {
        for (local_20 = 0; local_20 < in_ECX[2]; local_20 = local_20 + 1) {
          _memcpy(local_8,local_48,local_24);
          local_48 = (void *)((int)local_48 + local_24);
          local_8 = (void *)((int)local_8 + local_c);
        }
      }
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


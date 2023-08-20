
int FUN_0043b240(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int local_c;
  int *local_8;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    local_8 = (int *)FUN_0043b140();
    if (local_8 == (int *)0x0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      iVar1 = FUN_0043b090(local_8,&local_c);
      if (-1 < iVar1) {
        if (local_c != 0) {
          iVar1 = FUN_0043aea0(local_8,0);
          if (iVar1 < 0) {
            return iVar1;
          }
          FUN_0043b3b0();
        }
        *(undefined4 *)(in_ECX + 0x1c) = 0;
        *(undefined4 *)(in_ECX + 0x14) = 0;
        *(undefined4 *)(in_ECX + 0x18) = 0;
        iVar1 = (**(code **)(*local_8 + 0x30))(local_8,0,param_1,param_2);
      }
    }
  }
  return iVar1;
}


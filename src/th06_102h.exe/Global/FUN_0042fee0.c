
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042fee0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x44200000;
  local_8 = 0x43f00000;
  _DAT_006c6de0 = 0;
  DAT_006c6de4 = 0;
  DAT_006c6de8 = 0x280;
  DAT_006c6dec = 0x1e0;
  (**(code **)(*DAT_006c6d20 + 0xa0))(DAT_006c6d20,&DAT_006c6de0);
  FUN_0042f8b0(&local_14,*(int *)(param_1 + 0x10) << 0x18 | *(uint *)(param_1 + 0x18));
  return 1;
}


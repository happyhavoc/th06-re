
void __thiscall FUN_00417458(void *param_1_00,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1_00 + 4);
  *(undefined4 *)(iVar1 + 0x2c24) = 0x43600000;
  *(undefined4 *)(iVar1 + 0x2c28) = 0x41800000;
  *(undefined4 *)(iVar1 + 0x2c2c) = 0;
  *(undefined4 *)(*(int *)((int)param_1_00 + 4) + 0x2c34) = 1;
  iVar1 = *(int *)((int)param_1_00 + 4);
  *(undefined4 *)(iVar1 + 0x2c40) = 0;
  *(undefined4 *)(iVar1 + 0x2c3c) = 0;
  *(undefined4 *)(iVar1 + 0x2c38) = 0xfffffc19;
  *(undefined4 *)(*(int *)((int)param_1_00 + 4) + 0x2c30) = param_2;
  return;
}


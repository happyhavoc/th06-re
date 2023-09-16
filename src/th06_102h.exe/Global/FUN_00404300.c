
undefined4 FUN_00404300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xfffffc19;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar1 = FUN_00404690((&PTR_s_dummy_004760e0)[DAT_0069d6d4 * 2],
                       (&PTR_s_dummy_004760e4)[DAT_0069d6d4 * 2]);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0xff000000;
    *(undefined4 *)(param_1 + 0x48) = 0x43480000;
    *(undefined4 *)(param_1 + 0x4c) = 0x43fa0000;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c4) = 1;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0xfffffc19;
    *(undefined *)(param_1 + 0x2a8) = 0;
    (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x22,*(undefined4 *)(param_1 + 0x50));
    (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x24,*(undefined4 *)(param_1 + 0x48));
    (**(code **)(*DAT_006c6d20 + 200))(DAT_006c6d20,0x25,*(undefined4 *)(param_1 + 0x4c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


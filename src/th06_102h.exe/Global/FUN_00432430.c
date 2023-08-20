
void FUN_00432430(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xffffff3f;
  FUN_00403580();
  *(int *)(param_1 + 0xb8) = param_2;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xfffffc19;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
  if (param_2 != 0) {
    FUN_00433960(param_1);
  }
  return;
}


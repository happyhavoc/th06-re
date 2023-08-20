
void FUN_004051b0(int param_1,int param_2)

{
  int in_ECX;
  
  *(undefined2 *)(param_1 + 0xb4) = (undefined2)param_2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined *)(param_1 + 0x10d) = 0xf;
  *(undefined *)(param_1 + 0x10c) = 0xf;
  FUN_00432430(param_1,*(undefined4 *)(in_ECX + 0x1c934 + param_2 * 4));
  return;
}


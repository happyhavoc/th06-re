
undefined2 * __fastcall FUN_0041c720(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 **)(param_1 + 0xc) = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = param_1[1] & 0xfffe;
  return param_1;
}


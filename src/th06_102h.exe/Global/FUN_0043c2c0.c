
undefined4 __fastcall FUN_0043c2c0(int param_1)

{
  if (*(int *)(param_1 + 0x7c) == 1) {
    mmioClose(*(HMMIO *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}


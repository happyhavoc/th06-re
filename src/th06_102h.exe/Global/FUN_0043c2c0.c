
undefined4 FUN_0043c2c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7c) == 1) {
    mmioClose(*(HMMIO *)(in_ECX + 4),0);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return 0;
}


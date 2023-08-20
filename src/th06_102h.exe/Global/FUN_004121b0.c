
void FUN_004121b0(void)

{
  int in_ECX;
  
  if (*(byte *)(in_ECX + 0xe51) >> 5 == 0) {
    *(byte *)(in_ECX + 0xe50) = *(byte *)(in_ECX + 0xe50) & 0x7f;
  }
  else {
    *(byte *)(in_ECX + 0xe51) = *(byte *)(in_ECX + 0xe51) & 0xfe;
  }
  if ((*(byte *)(in_ECX + 0xe51) >> 3 & 1) != 0) {
    DAT_0069bc50 = 0;
  }
  if (*(int *)(in_ECX + 0xea0) != 0) {
    FUN_004114c0();
  }
  return;
}



void FUN_00421a40(void)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x21118)) {
    FUN_00435670(*(undefined4 *)(in_ECX + 0x21118),*(undefined4 *)(in_ECX + 0x2111c),
                 *(undefined4 *)(in_ECX + 0x21120),*(undefined4 *)(in_ECX + 0x21124),
                 *(undefined4 *)(in_ECX + 0x21128));
    *(undefined4 *)(in_ECX + 0x21118) = 0xffffffff;
  }
  return;
}


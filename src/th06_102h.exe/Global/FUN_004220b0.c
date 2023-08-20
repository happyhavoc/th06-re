
void FUN_004220b0(void)

{
  int in_ECX;
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)(in_ECX + 0x114); local_8 = local_8 + 1) {
    _free(*(void **)(*(int *)(in_ECX + 0x138) + 0x10 + local_8 * 0x20));
  }
  _free(*(void **)(in_ECX + 0x138));
  *(undefined4 *)(in_ECX + 0x138) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  return;
}


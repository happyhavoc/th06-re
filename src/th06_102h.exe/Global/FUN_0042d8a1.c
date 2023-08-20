
void * FUN_0042d8a1(void)

{
  void *in_ECX;
  undefined4 *local_58;
  int local_50;
  int local_34;
  int local_18;
  
  local_18 = 0x26;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720();
  }
  local_34 = 0x10;
  while (local_34 = local_34 + -1, -1 < local_34) {
    FUN_00403720();
  }
  FUN_00403720();
  local_50 = 0x14;
  local_58 = (undefined4 *)((int)in_ECX + 0x3ab0);
  while (local_50 = local_50 + -1, -1 < local_50) {
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58 = local_58 + 3;
  }
  _memset(in_ECX,0,0x56b0);
  *(undefined4 *)((int)in_ECX + 0x10) = 1;
  return in_ECX;
}


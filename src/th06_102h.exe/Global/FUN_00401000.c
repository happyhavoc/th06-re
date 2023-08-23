
int FUN_00401000(void)

{
  int in_ECX;
  int local_88;
  int local_80;
  int local_28;
  
  FUN_00403720(in_ECX);
  FUN_00403720(in_ECX + 0x110);
  local_28 = 0x100;
  do {
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  FUN_004010e0();
  FUN_004010e0();
  local_80 = 0x203;
  local_88 = in_ECX + 0x7134;
  while (local_80 = local_80 + -1, -1 < local_80) {
    FUN_00424127((undefined4 *)(local_88 + 0x18));
    local_88 = local_88 + 0x28;
  }
  return in_ECX;
}


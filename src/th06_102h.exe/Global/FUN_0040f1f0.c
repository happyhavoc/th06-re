
undefined4 FUN_0040f1f0(int param_1)

{
  int local_c;
  int local_8;
  
  local_8 = param_1 + 8;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)(local_8 + 0x178) != '\0') {
      *(undefined4 *)(local_8 + 0x90) = *(undefined4 *)(local_8 + 0x110);
      *(undefined4 *)(local_8 + 0x94) = *(undefined4 *)(local_8 + 0x114);
      *(undefined4 *)(local_8 + 0x98) = *(undefined4 *)(local_8 + 0x118);
      FUN_00433150(local_8);
    }
    local_8 = local_8 + 0x17c;
  }
  return 1;
}


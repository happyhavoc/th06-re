
void FUN_00420130(void)

{
  int in_ECX;
  int local_c;
  int local_8;
  
  local_c = in_ECX;
  for (local_8 = 0; local_8 < 0x200; local_8 = local_8 + 1) {
    if (*(char *)(local_c + 0x141) != '\0') {
      *(undefined *)(local_c + 0x143) = 1;
    }
    local_c = local_c + 0x144;
  }
  return;
}


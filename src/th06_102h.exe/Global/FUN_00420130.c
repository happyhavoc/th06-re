
void __fastcall FUN_00420130(int param_1)

{
  int local_c;
  int local_8;
  
  local_c = param_1;
  for (local_8 = 0; local_8 < 0x200; local_8 = local_8 + 1) {
    if (*(char *)(local_c + 0x141) != '\0') {
      *(undefined *)(local_c + 0x143) = 1;
    }
    local_c = local_c + 0x144;
  }
  return;
}


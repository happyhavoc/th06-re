
undefined4 FUN_00401140(int param_1)

{
  int local_c;
  int local_8;
  
  if ((DAT_0069d4bf == '\0') && (DAT_0069d4c0 == '\0')) {
    local_c = param_1 + 0x7134;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (*(char *)(local_c + 0x24) != '\0') {
        *(float *)(local_c + 0xc) = *(float *)(local_c + 0xc) - DAT_006c6ec0 * 0.5;
        *(undefined4 *)(local_c + 0x18) = *(undefined4 *)(local_c + 0x20);
        FUN_00424285(local_c + 0x20,local_c + 0x1c);
        if (0x3c < *(int *)(local_c + 0x20)) {
          *(undefined *)(local_c + 0x24) = 0;
        }
      }
      local_c = local_c + 0x28;
    }
  }
  else if (DAT_0069d4bf != '\0') {
    FUN_00401b80((int *)(param_1 + 0x6244));
  }
  if (DAT_0069d4c0 != '\0') {
    FUN_00402870();
  }
  return 1;
}


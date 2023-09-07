
undefined4 FUN_00401140(InputChainArg *param_1)

{
  undefined *local_c;
  int local_8;
  
  if ((DAT_0069d4bf == '\0') && (DAT_0069d4c0 == '\0')) {
    local_c = &param_1->field_0x7134;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (local_c[0x24] != '\0') {
        *(float *)(local_c + 0xc) = *(float *)(local_c + 0xc) - (float)g_GameContext._424_4_ * 0.5;
        *(undefined4 *)(local_c + 0x18) = *(undefined4 *)(local_c + 0x20);
        FUN_00424285(&g_GameContext,(int *)(local_c + 0x20),(float *)(local_c + 0x1c));
        if (0x3c < *(int *)(local_c + 0x20)) {
          local_c[0x24] = 0;
        }
      }
      local_c = local_c + 0x28;
    }
  }
  else if (DAT_0069d4bf != '\0') {
    FUN_00401b80((int *)&param_1->field_0x6244);
  }
  if (DAT_0069d4c0 != '\0') {
    FUN_00402870((int *)&param_1->field_0x69bc);
  }
  return 1;
}


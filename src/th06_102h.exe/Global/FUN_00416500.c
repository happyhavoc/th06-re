
undefined4 FUN_00416500(int param_1)

{
  float10 fVar1;
  float fVar2;
  float10 fVar3;
  int local_20;
  int local_1c;
  int local_10;
  int local_8;
  
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,8);
  local_10 = param_1 + 0xec000;
  for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
    if (*(int *)(local_10 + 600) != 0) {
      fVar1 = (float10)fcos((float10)*(float *)(local_10 + 0x22c));
      fVar3 = (float10)fsin((float10)*(float *)(local_10 + 0x22c));
      fVar2 = (*(float *)(local_10 + 0x234) - *(float *)(local_10 + 0x230)) / 2.0 +
              *(float *)(local_10 + 0x230);
      *(float *)(local_10 + 0x90) = (float)fVar1 * fVar2 + *(float *)(local_10 + 0x220);
      *(float *)(local_10 + 0x94) = (float)fVar3 * fVar2 + *(float *)(local_10 + 0x224);
      *(undefined4 *)(local_10 + 0x98) = 0;
      *(undefined2 *)(local_10 + 0x26a) = 0xffff;
      FUN_00433150(local_10);
      if ((*(float *)(local_10 + 0x230) < 16.0 != NAN(*(float *)(local_10 + 0x230))) ||
         (NAN(*(float *)(local_10 + 0x240)) != (*(float *)(local_10 + 0x240) == 0.0))) {
        *(float *)(local_10 + 0x1a0) =
             (float)fVar1 * *(float *)(local_10 + 0x230) + *(float *)(local_10 + 0x220);
        *(float *)(local_10 + 0x1a4) =
             (float)fVar3 * *(float *)(local_10 + 0x230) + *(float *)(local_10 + 0x224);
        *(undefined4 *)(local_10 + 0x1a8) = 0;
        *(undefined4 *)(local_10 + 0x18c) = *(undefined4 *)(local_10 + 0x7c);
        *(uint *)(local_10 + 400) = *(uint *)(local_10 + 400) | 8;
        *(uint *)(local_10 + 0x18c) = *(uint *)(local_10 + 0x18c) & 0xffffff | 0xff000000;
        *(float *)(local_10 + 300) =
             ((16.0 - *(float *)(local_10 + 0x230)) / 16.0) * (*(float *)(local_10 + 0x23c) / 10.0);
        *(undefined4 *)(local_10 + 0x128) = *(undefined4 *)(local_10 + 300);
        if (*(float *)(local_10 + 0x128) < 0.0 != NAN(*(float *)(local_10 + 0x128))) {
          *(float *)(local_10 + 300) = *(float *)(local_10 + 0x23c) / 10.0;
          *(undefined4 *)(local_10 + 0x128) = *(undefined4 *)(local_10 + 300);
        }
        FUN_00433150(local_10 + 0x110);
      }
    }
    local_10 = local_10 + 0x270;
  }
  FUN_00420190();
  if (DAT_006c7114 == '\0') {
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_20 + 0x5be) != 0) && (0x10 < *(byte *)(local_20 + 0x55d))) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\x10')) &&
         ((*(short *)(local_20 + 0xb4) == 0x201 || (*(short *)(local_20 + 0xb4) == 0x203)))) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\x10')) &&
          (*(short *)(local_20 + 0xb4) != 0x201)) && (*(short *)(local_20 + 0xb4) != 0x203)) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\b')) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
  }
  else {
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_1c + 0x5be) != 0) && (0x10 < *(byte *)(local_1c + 0x55d))) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\x10')) &&
         ((*(short *)(local_1c + 0xb4) == 0x201 || (*(short *)(local_1c + 0xb4) == 0x203)))) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\x10')) &&
          (*(short *)(local_1c + 0xb4) != 0x201)) && (*(short *)(local_1c + 0xb4) != 0x203)) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\b')) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,4);
  return 1;
}


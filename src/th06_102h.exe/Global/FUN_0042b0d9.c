
char * FUN_0042b0d9(undefined4 param_1)

{
  char *pcVar1;
  void *pvVar2;
  int local_24;
  int *local_20;
  int local_1c;
  char *local_18;
  short local_14;
  byte local_d;
  int local_c;
  char *local_8;
  
  local_8 = (char *)OpenPath(param_1,1);
  if (local_8 != (char *)0x0) {
    if (g_FileSize < 0x14) {
      _free(local_8);
    }
    else {
      local_14 = 0;
      local_d = 0;
      local_c = 0;
      pcVar1 = local_8;
      for (local_1c = g_FileSize - 2; local_18 = pcVar1 + 1, 0 < local_1c; local_1c = local_1c + -1)
      {
        local_d = (byte)((int)((byte)(local_d + *local_18) & 0xe0) >> 5) |
                  (byte)(((byte)(local_d + *local_18) & 0x1f) << 3);
        pcVar1[2] = pcVar1[2] ^ local_d;
        if (1 < local_c) {
          local_14 = local_14 + (ushort)(byte)pcVar1[2];
        }
        local_c = local_c + 1;
        pcVar1 = local_18;
      }
      if (*(short *)(local_8 + 2) == local_14) {
        local_20 = (int *)(local_8 + *(int *)(local_8 + 8));
        local_24 = *(int *)(local_8 + 0x10) - *(int *)(local_8 + 8);
        while ((0 < local_24 && (*local_20 != 0x4b364854))) {
          local_20 = (int *)((int)local_20 + (uint)*(ushort *)(local_20 + 1));
          local_24 = local_24 - (uint)*(ushort *)(local_20 + 1);
        }
        if (0 < local_24) goto LAB_0042b248;
        _free(local_8);
      }
      else {
        _free(local_8);
      }
    }
  }
  local_8 = (char *)_malloc(0x14);
  *(undefined4 *)(local_8 + 8) = 0x14;
  *(undefined4 *)(local_8 + 0x10) = 0x14;
LAB_0042b248:
  pvVar2 = _malloc(0xc);
  *(void **)(local_8 + 0xc) = pvVar2;
  *(undefined4 *)(*(int *)(local_8 + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)(local_8 + 0xc) + 8) = 0;
  **(undefined4 **)(local_8 + 0xc) = 0;
  return local_8;
}


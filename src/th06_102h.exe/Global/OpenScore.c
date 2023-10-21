
byte * OpenScore(char *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  int local_24;
  int *local_20;
  int remaining_data;
  byte *idx;
  short checksum;
  byte xor_value;
  int local_c;
  byte *score_data;
  
  score_data = FileSystem::OpenPath(param_1,1);
  if (score_data != (byte *)0x0) {
    if (g_LastFileSize < 0x14) {
      _free(score_data);
    }
    else {
      checksum = 0;
      xor_value = 0;
      local_c = 0;
      pbVar1 = score_data;
                    /* This while loop seems to deobfuscate the score data */
      for (remaining_data = g_LastFileSize - 2; idx = pbVar1 + 1, 0 < remaining_data;
          remaining_data = remaining_data + -1) {
                    /* Invert top 3 bits and bottom 5 bits */
        xor_value = (byte)((int)((byte)(xor_value + *idx) & 0xe0) >> 5) |
                    (byte)(((byte)(xor_value + *idx) & 0x1f) << 3);
                    /* xor two bytes later with the resulting inverted bits */
        pbVar1[2] = pbVar1[2] ^ xor_value;
        if (1 < local_c) {
                    /* some kind of checksum */
          checksum = checksum + (ushort)pbVar1[2];
        }
        local_c = local_c + 1;
        pbVar1 = idx;
      }
      if (*(short *)(score_data + 2) == checksum) {
        local_20 = (int *)(score_data + *(int *)(score_data + 8));
        local_24 = *(int *)(score_data + 0x10) - *(int *)(score_data + 8);
        while ((0 < local_24 && (*local_20 != L'\x4b364854'))) {
          local_20 = (int *)((int)local_20 + (uint)*(ushort *)(local_20 + 1));
          local_24 = local_24 - (uint)*(ushort *)(local_20 + 1);
        }
        if (0 < local_24) goto LAB_0042b248;
        _free(score_data);
      }
      else {
        _free(score_data);
      }
    }
  }
  score_data = (byte *)_malloc(0x14);
  *(undefined4 *)(score_data + 8) = 0x14;
  *(undefined4 *)(score_data + 0x10) = 0x14;
LAB_0042b248:
  pvVar2 = _malloc(0xc);
  *(void **)(score_data + 0xc) = pvVar2;
  *(undefined4 *)(*(int *)(score_data + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)(score_data + 0xc) + 8) = 0;
  **(undefined4 **)(score_data + 0xc) = 0;
  return score_data;
}



ScoreDat * OpenScore(char *param_1)

{
  ScoreDat *pSVar1;
  ResultScreenUnk3ab0 *pRVar2;
  int local_24;
  byte *local_20;
  int remaining_data;
  ScoreDat *idx;
  ushort checksum;
  byte xor_value;
  int local_c;
  ScoreDat *score_data;
  
  score_data = (ScoreDat *)FileSystem::OpenPath(param_1,1);
  if (score_data != (ScoreDat *)0x0) {
    if (g_LastFileSize < 0x14) {
      _free(score_data);
    }
    else {
      checksum = 0;
      xor_value = 0;
      local_c = 0;
      pSVar1 = score_data;
                    /* This while loop seems to deobfuscate the score data */
      for (remaining_data = g_LastFileSize - 2; idx = (ScoreDat *)(pSVar1->xorseed + 1),
          0 < remaining_data; remaining_data = remaining_data + -1) {
        xor_value = xor_value + idx->xorseed[0];
                    /* Invert top 3 bits and bottom 5 bits */
        xor_value = (byte)((int)(xor_value & 0xe0) >> 5) | (byte)((xor_value & 0x1f) << 3);
                    /* xor two bytes later with the resulting inverted bits */
        *(byte *)&pSVar1->csum = *(byte *)&pSVar1->csum ^ xor_value;
        if (1 < local_c) {
                    /* some kind of checksum */
          checksum = checksum + *(byte *)&pSVar1->csum;
        }
        local_c = local_c + 1;
        pSVar1 = idx;
      }
      if (score_data->csum == checksum) {
        local_20 = score_data->xorseed + score_data->data_offset;
        local_24 = score_data->file_length - score_data->data_offset;
        while ((0 < local_24 && (*(int *)local_20 != L'\x4b364854'))) {
          local_20 = local_20 + *(ushort *)(local_20 + 4);
          local_24 = local_24 - (uint)*(ushort *)(local_20 + 4);
        }
        if (0 < local_24) goto LAB_0042b248;
        _free(score_data);
      }
      else {
        _free(score_data);
      }
    }
  }
  score_data = (ScoreDat *)_malloc(0x14);
  score_data->data_offset = 0x14;
  score_data->file_length = 0x14;
LAB_0042b248:
  pRVar2 = (ResultScreenUnk3ab0 *)_malloc(0xc);
  score_data->unk2 = pRVar2;
  score_data->unk2->unk2__ResultScreenUnk3ab0 = (ResultScreenUnk3ab0 *)0x0;
  score_data->unk2->unk3 = (Hscr *)0x0;
  score_data->unk2->unk1 = (ResultScreenUnk3ab0 *)0x0;
  return score_data;
}


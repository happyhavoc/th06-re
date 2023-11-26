
int FUN_0042a140(ReplayData *data,int size)

{
  int iVar1;
  byte *local_1c;
  int local_18;
  char *cur_byte;
  byte obf_offset;
  int idx;
  
  if (data == (ReplayData *)0x0) {
    iVar1 = -1;
  }
  else if ((char  [4])data->magic == (char  [4])0x50523654) {
    cur_byte = &data->field_0xf;
    obf_offset = data->field_0xe;
    for (idx = 0; idx < size + -0xf; idx = idx + 1) {
      *cur_byte = *cur_byte - obf_offset;
      obf_offset = obf_offset + 7;
      cur_byte = cur_byte + 1;
    }
    local_1c = &data->field_0xe;
    local_18 = 0x3f000318;
    for (idx = 0; idx < size + -0xe; idx = idx + 1) {
      local_18 = local_18 + (uint)*local_1c;
      local_1c = local_1c + 1;
    }
    if (local_18 == *(int *)&data->field_0x8) {
      if (data->version == 0x102) {
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


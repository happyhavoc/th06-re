
ZunResult validateReplayData(ReplayData *data,int size)

{
  ZunResult unpackResult;
  uint8_t *local_1c;
  uint32_t checksum_base;
  char *cur_byte;
  byte obf_offset;
  int idx;
  
  if (data == (ReplayData *)0x0) {
    unpackResult = ZUN_ERROR;
  }
  else {
                    /* "T6RP" magic bytes */
    if ((char  [4])data->magic == (char  [4])0x50523654) {
      cur_byte = &data->field_0xf;
      obf_offset = data->key;
      for (idx = 0; idx < size + -0xf; idx = idx + 1) {
        *cur_byte = *cur_byte - obf_offset;
        obf_offset = obf_offset + 7;
        cur_byte = cur_byte + 1;
      }
      local_1c = &data->key;
      checksum_base = 0x3f000318;
                    /* (0x3f000318 + key + sum(c for c in decrypted_data)) % (2 ** 32) */
      for (idx = 0; idx < size + -0xe; idx = idx + 1) {
        checksum_base = checksum_base + *local_1c;
        local_1c = local_1c + 1;
      }
      if (checksum_base == data->checksum) {
        if (data->version == 0x102) {
          unpackResult = ZUN_SUCCESS;
        }
        else {
          unpackResult = ZUN_ERROR;
        }
      }
      else {
        unpackResult = ZUN_ERROR;
      }
    }
    else {
      unpackResult = ZUN_ERROR;
    }
  }
  return unpackResult;
}



ZunResult ParseClrd(ScoreDat *scoredat,Clrd *param_2)

{
  ushort *puVar1;
  ZunResult ZVar2;
  int iVar3;
  Th6k *pTVar4;
  Clrd *pCVar5;
  int local_14;
  int local_10;
  int local_c;
  Th6k *local_8;
  
  if (param_2 == (Clrd *)0x0) {
    ZVar2 = ZUN_ERROR;
  }
  else {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      _memset(param_2 + local_c,0,0x18);
      param_2[local_c].base.magic = 0x44524c43;
      param_2[local_c].base.unk_len = 0x18;
      param_2[local_c].base.th6k_len = 0x18;
      param_2[local_c].base.version_ = '\x10';
      param_2[local_c].character_shottype = (byte)local_c;
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        param_2[local_c].difficulty_cleared_with_retries[local_14] = 1;
        param_2[local_c].difficulty_cleared_without_retries[local_14] = 1;
      }
    }
    local_8 = (Th6k *)(scoredat->xorseed + scoredat->data_offset);
    for (local_10 = scoredat->file_length - scoredat->data_offset; 0 < local_10;
        local_10 = local_10 - (uint)*puVar1) {
      if ((local_8->magic == L'\x44524c43') && (local_8->version_ == '\x10')) {
        if (3 < (byte)local_8[1].field_0xa) break;
        pTVar4 = local_8;
        pCVar5 = param_2 + (byte)local_8[1].field_0xa;
                    /* memcpy(param2[idx], local_10, sizeof(Th6k)); */
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pCVar5->base).magic = pTVar4->magic;
          pTVar4 = (Th6k *)&pTVar4->th6k_len;
          pCVar5 = (Clrd *)&(pCVar5->base).th6k_len;
        }
      }
      puVar1 = &local_8->th6k_len;
      local_8 = (Th6k *)((int)&local_8->magic + (uint)local_8->th6k_len);
    }
    ZVar2 = ZUN_SUCCESS;
  }
  return ZVar2;
}


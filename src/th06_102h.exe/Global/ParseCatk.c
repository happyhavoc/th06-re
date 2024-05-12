
ZunResult ParseCatk(ScoreDat *score_dat,Catk *out_catk)

{
  Th6k *pTVar1;
  ZunResult ZVar2;
  int iVar3;
  Catk *pCVar4;
  Catk *pCVar5;
  int local_c;
  Catk *local_8;
  
  if (out_catk == (Catk *)0x0) {
    ZVar2 = ZUN_ERROR;
  }
  else {
    local_8 = (Catk *)(score_dat->xorseed + score_dat->data_offset);
    for (local_c = score_dat->file_length - score_dat->data_offset; 0 < local_c;
        local_c = local_c - (uint)pTVar1->th6k_len) {
      if (((local_8->base).magic == L'\x4b544143') && ((local_8->base).version_ == '\x10')) {
        if (0x3f < local_8->idx) break;
        pCVar4 = local_8;
        pCVar5 = out_catk + local_8->idx;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pCVar5->base).magic = (pCVar4->base).magic;
          pCVar4 = (Catk *)&(pCVar4->base).th6k_len;
          pCVar5 = (Catk *)&(pCVar5->base).th6k_len;
        }
      }
      pTVar1 = &local_8->base;
      local_8 = (Catk *)(local_8->name + ((local_8->base).th6k_len - 0x18));
    }
    ZVar2 = ZUN_SUCCESS;
  }
  return ZVar2;
}


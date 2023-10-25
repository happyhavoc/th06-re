
undefined4 ParseCatk(ScoreDat *param_1,Catk *param_2)

{
  Th6k *pTVar1;
  undefined4 uVar2;
  int iVar3;
  Catk *pCVar4;
  Catk *pCVar5;
  int local_c;
  Catk *local_8;
  
  if (param_2 == (Catk *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_8 = (Catk *)(param_1->xorseed + param_1->data_offset);
    for (local_c = param_1->file_length - param_1->data_offset; 0 < local_c;
        local_c = local_c - (uint)pTVar1->th6k_len) {
      if (((local_8->base).magic == L'\x4b544143') && ((local_8->base).version_ == '\x10')) {
        if (0x3f < local_8->idx) break;
        pCVar4 = local_8;
        pCVar5 = param_2 + local_8->idx;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pCVar5->base).magic = (pCVar4->base).magic;
          pCVar4 = (Catk *)&(pCVar4->base).th6k_len;
          pCVar5 = (Catk *)&(pCVar5->base).th6k_len;
        }
      }
      pTVar1 = &local_8->base;
      local_8 = (Catk *)(local_8->name + ((local_8->base).th6k_len - 0x18));
    }
    uVar2 = 0;
  }
  return uVar2;
}


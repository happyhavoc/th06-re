
undefined4 ParsePscr(ScoreDat *scoredat,Pscr *param_2)

{
  Th6k *pTVar1;
  undefined4 uVar2;
  int iVar3;
  Pscr *pPVar4;
  Pscr *pPVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  Pscr *local_c;
  Pscr *local_8;
  
  if (param_2 == (Pscr *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_8 = param_2;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          _memset(local_8,0,0x14);
          (local_8->base).magic = L'\x52435350';
          (local_8->base).unk_len = 0x14;
          (local_8->base).th6k_len = 0x14;
          (local_8->base).version_ = '\x10';
          local_8->character = (byte)local_10;
          local_8->difficulty = (byte)local_1c;
          local_8->stage = (byte)local_14;
          local_8 = local_8 + 1;
        }
      }
    }
    local_c = (Pscr *)(scoredat->xorseed + scoredat->data_offset);
    for (local_18 = scoredat->file_length - scoredat->data_offset; 0 < local_18;
        local_18 = local_18 - (uint)pTVar1->th6k_len) {
      if (((local_c->base).magic == L'\x52435350') && ((local_c->base).version_ == '\x10')) {
        if ((3 < local_c->character) || ((4 < local_c->difficulty || (6 < local_c->stage)))) break;
        pPVar4 = local_c;
        pPVar5 = param_2 + (uint)local_c->stage * 4 + (uint)local_c->character * 0x18 +
                           (uint)local_c->difficulty;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pPVar5->base).magic = (pPVar4->base).magic;
          pPVar4 = (Pscr *)&(pPVar4->base).th6k_len;
          pPVar5 = (Pscr *)&(pPVar5->base).th6k_len;
        }
      }
      pTVar1 = &local_c->base;
      local_c = (Pscr *)((int)&(local_c->base).magic + (uint)(local_c->base).th6k_len);
    }
    uVar2 = 0;
  }
  return uVar2;
}


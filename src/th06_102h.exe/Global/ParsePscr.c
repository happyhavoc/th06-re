
undefined4 ParsePscr(int scoredat,Pscr *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  Pscr *pPVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  Pscr *local_8;
  
  if (param_2 == (Pscr *)0x0) {
    uVar1 = 0xffffffff;
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
          local_8->idx2 = (byte)local_10;
          local_8->idx3 = (byte)local_1c;
          local_8->idx1 = (byte)local_14;
          local_8 = local_8 + 1;
        }
      }
    }
    local_c = (uint *)(scoredat + *(int *)(scoredat + 8));
    for (local_18 = *(int *)(scoredat + 0x10) - *(int *)(scoredat + 8); 0 < local_18;
        local_18 = local_18 - (uint)*(ushort *)puVar3) {
      if ((*local_c == L'\x52435350') && (*(char *)(local_c + 2) == '\x10')) {
        if ((3 < *(byte *)(local_c + 4)) ||
           ((4 < *(byte *)((int)local_c + 0x11) || (6 < *(byte *)((int)local_c + 0x12))))) break;
        puVar3 = local_c;
        pPVar4 = param_2 + (uint)*(byte *)((int)local_c + 0x12) * 4 +
                           (uint)*(byte *)(local_c + 4) * 0x18 +
                           (uint)*(byte *)((int)local_c + 0x11);
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pPVar4->base).magic = *puVar3;
          puVar3 = puVar3 + 1;
          pPVar4 = (Pscr *)&(pPVar4->base).th6k_len;
        }
      }
      puVar3 = local_c + 1;
      local_c = (uint *)((int)local_c + (uint)*(ushort *)(local_c + 1));
    }
    uVar1 = 0;
  }
  return uVar1;
}


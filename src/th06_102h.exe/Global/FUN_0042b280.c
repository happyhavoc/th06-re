
undefined4
FUN_0042b280(ScoreDat *param_1,ResultScreenUnk3ab0 *param_2,uint character,uint difficulty)

{
  Th6k *pTVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  Hscr *local_8;
  
  if (param_2 == (ResultScreenUnk3ab0 *)0x0) {
    FUN_0042b437((uint *)param_1->unk2);
    *(undefined4 *)((int)param_1->unk2 + 4) = 0;
    *(undefined4 *)((int)param_1->unk2 + 8) = 0;
    *(undefined4 *)param_1->unk2 = 0;
  }
  local_8 = (Hscr *)(param_1->xorseed + param_1->data_offset);
  for (local_c = param_1->file_length - param_1->data_offset; 0 < local_c;
      local_c = local_c - (uint)pTVar1->th6k_len) {
    if (((((local_8->base).magic == L'\x52435348') && ((local_8->base).version_ == '\x10')) &&
        (local_8->character == character)) && (local_8->difficulty == difficulty)) {
      if (param_2 == (ResultScreenUnk3ab0 *)0x0) {
        FUN_0042b3a6((ResultScreenUnk3ab0 *)param_1->unk2,local_8);
      }
      else {
        FUN_0042b3a6(param_2,local_8);
      }
    }
    pTVar1 = &local_8->base;
    local_8 = (Hscr *)(local_8->name + ((local_8->base).th6k_len - 0x13));
  }
  if (*(int *)((int)param_1->unk2 + 4) == 0) {
    local_18 = 1000000;
  }
  else {
    if (*(uint *)(*(int *)(*(int *)((int)param_1->unk2 + 4) + 8) + 0xc) < 0xf4241) {
      local_14 = 1000000;
    }
    else {
      local_14 = *(undefined4 *)(*(int *)(*(int *)((int)param_1->unk2 + 4) + 8) + 0xc);
    }
    local_18 = local_14;
  }
  return local_18;
}


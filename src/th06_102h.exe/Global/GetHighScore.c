
uint GetHighScore(ScoreDat *param_1,ResultScreenUnk3ab0 *param_2,int character,int difficulty)

{
  Th6k *pTVar1;
  uint score;
  uint local_14;
  int local_c;
  Hscr *local_8;
  
  if (param_2 == (ResultScreenUnk3ab0 *)0x0) {
    ZunFree((int *)param_1->unk2);
    param_1->unk2->unk2__ResultScreenUnk3ab0 = (ResultScreenUnk3ab0 *)0x0;
    param_1->unk2->unk3 = (Hscr *)0x0;
    param_1->unk2->unk1 = (ResultScreenUnk3ab0 *)0x0;
  }
  local_8 = (Hscr *)(param_1->xorseed + param_1->data_offset);
  for (local_c = param_1->file_length - param_1->data_offset; 0 < local_c;
      local_c = local_c - (uint)pTVar1->th6k_len) {
    if (((((local_8->base).magic == 0x52435348) && ((local_8->base).version_ == 0x10)) &&
        ((uint)local_8->character == character)) && ((uint)local_8->difficulty == difficulty)) {
      if (param_2 == (ResultScreenUnk3ab0 *)0x0) {
        FUN_0042b3a6(param_1->unk2,local_8);
      }
      else {
        FUN_0042b3a6(param_2,local_8);
      }
    }
    pTVar1 = &local_8->base;
    local_8 = (Hscr *)(local_8->name + ((local_8->base).th6k_len - 0x13));
  }
  if (param_1->unk2->unk2__ResultScreenUnk3ab0 == (ResultScreenUnk3ab0 *)0x0) {
    score = 1000000;
  }
  else {
    if (param_1->unk2->unk2__ResultScreenUnk3ab0->unk3->score < 0xf4241) {
      local_14 = 1000000;
    }
    else {
      local_14 = param_1->unk2->unk2__ResultScreenUnk3ab0->unk3->score;
    }
    score = local_14;
  }
  return score;
}


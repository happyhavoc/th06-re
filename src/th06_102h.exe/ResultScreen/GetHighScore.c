
uint ResultScreen::GetHighScore
               (ScoreDat *score_dat,ScoreListNode *param_2,uint character,uint difficulty)

{
  Th6k *pTVar1;
  uint score;
  uint score_related;
  int local_c;
  Hscr *local_8;
  
  if (param_2 == (ScoreListNode *)0x0) {
    ZunFreeArray(score_dat->scores);
    score_dat->scores->next = (ScoreListNode *)0x0;
    score_dat->scores->data = (Hscr *)0x0;
    score_dat->scores->prev = (ScoreListNode *)0x0;
  }
  local_8 = (Hscr *)(score_dat->xorseed + score_dat->data_offset);
  for (local_c = score_dat->file_length - score_dat->data_offset; 0 < local_c;
      local_c = local_c - (uint)pTVar1->th6k_len) {
    if (((((local_8->base).magic == 0x52435348) && ((local_8->base).version_ == 0x10)) &&
        (local_8->character == character)) && (local_8->difficulty == difficulty)) {
      if (param_2 == (ScoreListNode *)0x0) {
        LinkScore(score_dat->scores,local_8);
      }
      else {
        LinkScore(param_2,local_8);
      }
    }
    pTVar1 = &local_8->base;
    local_8 = (Hscr *)(local_8->name + ((local_8->base).th6k_len - 0x13));
  }
  if (score_dat->scores->next == (ScoreListNode *)0x0) {
    score = 1000000;
  }
  else {
    if (score_dat->scores->next->data->score < 0xf4241) {
      score_related = 1000000;
    }
    else {
      score_related = score_dat->scores->next->data->score;
    }
    score = score_related;
  }
  return score;
}


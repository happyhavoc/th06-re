
undefined4 ReplayManager::OnAdd(ReplayManager *param_1)

{
  ReplayData *pRVar1;
  StageReplayData *pSVar2;
  int local_c;
  
  param_1->frame_id = 0;
  if (param_1->data == (ReplayData *)0x0) {
    pRVar1 = (ReplayData *)operator_new(0x50);
    param_1->data = pRVar1;
    param_1->data->magic = (char *)(char  [4])0x50523654;
    param_1->data->shottype_chara = g_GameManager.shottype + g_GameManager.character * '\x02';
    param_1->data->version = 0x102;
    param_1->data->difficulty = (byte)g_GameManager.difficulty;
    pRVar1 = param_1->data;
    pRVar1->field_0x19 = 'N';
    pRVar1->field_0x1a = 'O';
    pRVar1->field_0x1b = ' ';
    pRVar1->field_0x1c = 'N';
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      param_1->data->stage_score[local_c + 1] = (StageReplayData *)0x0;
    }
  }
  else {
    pSVar2 = param_1->data->stage_score[g_GameManager.current_stage - 1];
    if (pSVar2 == (StageReplayData *)0x0) {
      return 0xffffffff;
    }
    pSVar2->score = g_GameManager.score;
  }
  if (param_1->data->stage_score[g_GameManager.current_stage] != (StageReplayData *)0x0) {
    DebugPrint2("error : replay.cpp");
  }
  pSVar2 = (StageReplayData *)_malloc(0x69780);
  param_1->data->stage_score[g_GameManager.current_stage] = pSVar2;
  pSVar2 = param_1->data->stage_score[g_GameManager.current_stage];
  pSVar2->bombs_remaining = g_GameManager.bombs_remaining;
  pSVar2->lives_remaining = g_GameManager.lives_remaining;
  pSVar2->power = (byte)g_GameManager.current_power;
  pSVar2->rank = (byte)g_GameManager.rank;
  pSVar2->unk6 = g_GameManager.field30_0x1816;
  pSVar2->random_seed = g_GameManager.field53_0x1a2c;
  pSVar2->power_item_count_for_score = g_GameManager.power_item_count_for_score;
  param_1->replay_inputs = pSVar2->replay_inputs;
  param_1->replay_inputs->frame_num = 0;
  param_1->replay_inputs->input_key = 0;
  param_1->field56_0x44 = 0;
  return 0;
}


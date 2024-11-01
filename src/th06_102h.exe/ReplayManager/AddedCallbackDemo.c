
/* WARNING: Removing unreachable block (ram,0x0042a940) */

ZunResult th06::ReplayManager::AddedCallbackDemo(ReplayManager *param_1)

{
  ReplayData *pRVar2;
  ZunResult ZVar3;
  int local_c;
  StageReplayData *pSVar1;
  
  param_1->frame_id = 0;
  if (param_1->data == (ReplayData *)0x0) {
    pRVar2 = (ReplayData *)
             FileSystem::OpenPath(param_1->replay_file,(uint)(g_GameManager.demo_mode == 0));
    param_1->data = pRVar2;
    ZVar3 = ValidateReplayData(param_1->data,g_LastFileSize);
    if (ZVar3 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if (param_1->data->stage_replay_data[local_c] != (StageReplayData *)0x0) {
        param_1->data->stage_replay_data[local_c] =
             (StageReplayData *)
             (param_1->data->date +
             (int)(param_1->data->stage_replay_data[local_c][-1].replay_inputs + 0xd2ec));
      }
    }
  }
  if (param_1->data->stage_replay_data[g_GameManager.current_stage + -1] == (StageReplayData *)0x0)
  {
    ZVar3 = ZUN_ERROR;
  }
  else {
    pSVar1 = param_1->data->stage_replay_data[g_GameManager.current_stage + -1];
    g_GameManager.character = (byte)((int)(uint)param_1->data->shottype_chara >> 1);
    g_GameManager.shottype = param_1->data->shottype_chara & 1;
    g_GameManager.difficulty = (Difficulty)param_1->data->difficulty;
    g_GameManager.point_items_collected = pSVar1->point_items_collected;
    g_Rng.seed = pSVar1->random_seed;
    g_Rng.generationCount = 0;
    g_GameManager.rank = (int)pSVar1->rank;
    g_GameManager.lives_remaining = pSVar1->lives_remaining;
    g_GameManager.bombs_remaining = pSVar1->bombs_remaining;
    g_GameManager.current_power = (ushort)pSVar1->power;
    param_1->replay_inputs = pSVar1->replay_inputs;
    g_GameManager.power_item_count_for_score = pSVar1->power_item_count_for_score;
    if ((1 < g_GameManager.current_stage) &&
       (param_1->data->stage_replay_data[g_GameManager.current_stage + -2] != (StageReplayData *)0x0
       )) {
      g_GameManager.gui_score =
           param_1->data->stage_replay_data[g_GameManager.current_stage + -2]->score;
      g_GameManager.score = g_GameManager.gui_score;
    }
    ZVar3 = ZUN_SUCCESS;
  }
  return ZVar3;
}


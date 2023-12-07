
/* WARNING: Removing unreachable block (ram,0x0042a940) */

undefined4 FUN_0042a840(ReplayManager *param_1)

{
  StageReplayData *pSVar1;
  ReplayData *pRVar2;
  int iVar3;
  undefined4 uVar4;
  int local_c;
  
  param_1->frame_id = 0;
  if (param_1->data == (ReplayData *)0x0) {
    pRVar2 = (ReplayData *)
             FileSystem::OpenPath(param_1->replay_file,(uint)(g_GameManager.demo_mode == 0));
    param_1->data = pRVar2;
    iVar3 = FUN_0042a140(param_1->data,g_LastFileSize);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if (param_1->data->stage_score[local_c + 1] != (StageReplayData *)0x0) {
        param_1->data->stage_score[local_c + 1] =
             (StageReplayData *)
             ((int)param_1->data->stage_score +
             (int)(param_1->data->stage_score[local_c + 1][-1].replay_inputs + 0xd2e8));
      }
    }
  }
  if (param_1->data->stage_score[g_GameManager.current_stage] == (StageReplayData *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    pSVar1 = param_1->data->stage_score[g_GameManager.current_stage];
    g_GameManager.character = (byte)((int)(uint)param_1->data->shottype_chara >> 1);
    g_GameManager.shottype = param_1->data->shottype_chara & 1;
    g_GameManager.difficulty = (uint)param_1->data->difficulty;
    g_GameManager.field33_0x1816 = pSVar1->unk6;
    g_Rng.seed = pSVar1->random_seed;
    g_Rng.unk4 = 0;
    g_GameManager.rank = (uint)pSVar1->rank;
    g_GameManager.lives_remaining = pSVar1->lives_remaining;
    g_GameManager.bombs_remaining = pSVar1->bombs_remaining;
    g_GameManager.current_power = (ushort)pSVar1->power;
    param_1->replay_inputs = pSVar1->replay_inputs;
    g_GameManager.power_item_count_for_score = pSVar1->power_item_count_for_score;
    if ((1 < (int)g_GameManager.current_stage) &&
       (param_1->data->stage_score[g_GameManager.current_stage - 1] != (StageReplayData *)0x0)) {
      g_GameManager.field0_0x0 = param_1->data->stage_score[g_GameManager.current_stage - 1]->score;
      g_GameManager.score = g_GameManager.field0_0x0;
    }
    uVar4 = 0;
  }
  return uVar4;
}


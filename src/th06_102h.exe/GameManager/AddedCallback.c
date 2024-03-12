
ZunResult GameManager::AddedCallback(GameManager *param_1)

{
  bool bVar1;
  ushort uVar2;
  ScoreDat *scoredat;
  int iVar3;
  ZunResult ZVar4;
  Pscr *pPVar5;
  uint local_14;
  int local_10;
  Catk *local_c;
  
  bVar1 = false;
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  if (g_Supervisor.curState == 3) {
    param_1->field0_0x0 = param_1->score;
    param_1->field2_0x8 = 0;
  }
  else {
    g_Supervisor.bombCount = g_GameManager.bombs_remaining;
    g_Supervisor.lifeCount = g_GameManager.lives_remaining;
    (param_1->arcade_region_top_left_pos).x = 32.0;
    (param_1->arcade_region_top_left_pos).y = 16.0;
    (param_1->arcade_region_size).x = 384.0;
    (param_1->arcade_region_size).y = 448.0;
    param_1->field49_0x1a4c = 8.0;
    param_1->field50_0x1a50 = 16.0;
    param_1->field51_0x1a54 = 368.0;
    param_1->field52_0x1a58 = 416.0;
    param_1->counat = 0;
    param_1->field0_0x0 = 0;
    param_1->score = 0;
    param_1->field2_0x8 = 0;
    param_1->high_score = 100000;
    param_1->current_power = 0;
    param_1->num_retries = 0;
    if (5 < (int)param_1->current_stage) {
      param_1->difficulty = 4;
    }
    if ((int)param_1->difficulty < 4) {
      param_1->field23_0x181c = 0;
    }
    else {
      param_1->field23_0x181c = 4;
    }
    g_GameManager.power_item_count_for_score = 0;
    param_1->rank = 8;
    param_1->field6_0x18 = 0;
    param_1->field18_0x1816 = 0;
    local_c = param_1->catk;
    for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        uVar2 = Rng::GetRandomU16(&g_Rng);
        *(ushort *)(local_c->name + local_14 * 2 + -0x18) = uVar2;
      }
      (local_c->base).magic = 0x4b544143;
      (local_c->base).unk_len = 0x40;
      (local_c->base).th6k_len = 0x40;
      (local_c->base).version_ = '\x10';
      local_c->idx = (ushort)local_10;
      local_c->num_successes = 0;
      local_c->unk_3e = 0;
      local_c = local_c + 1;
    }
    scoredat = (ScoreDat *)OpenScore("score.dat");
    g_GameManager.high_score =
         FUN_0042b280(scoredat,(ResultScreenUnk3ab0 *)0x0,
                      (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2,
                      g_GameManager.difficulty);
    ParseCatk(scoredat,param_1->catk);
    ParseClrd(scoredat,param_1->clrd);
    pPVar5 = param_1->pscr;
    ParsePscr(scoredat,pPVar5);
    if (param_1->field30_0x1823 != 0) {
      pPVar5 = (Pscr *)(g_GameManager.difficulty * 0x14);
      g_GameManager.high_score =
           *(uint *)((int)&pPVar5[((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2)
                                  * 0x18 + g_GameManager.current_stage * 4].score +
                    (int)param_1->pscr);
    }
    ScoreDat::FUN_0042b7dc(pPVar5,scoredat);
    param_1->rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].rank;
    param_1->min_rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].min_rank;
    param_1->max_rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].max_rank;
    param_1->field8_0x20 = 0;
    param_1->field9_0x24 = 0;
    param_1->field10_0x28 = 0;
  }
  param_1->subrank = 0;
  param_1->point_items_collected_in_stage = 0;
  param_1->graze_in_stage = 0;
  param_1->is_in_game_menu = 0;
  param_1->current_stage = param_1->current_stage + 1;
  if (g_GameManager.field7_0x1c == 0) {
    iVar3 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if ((param_1->num_retries == 0) &&
       ((int)(uint)param_1->clrd[iVar3].difficulty_cleared_with_retries[g_GameManager.difficulty] <
        (int)(param_1->current_stage - 1))) {
      param_1->clrd[iVar3].difficulty_cleared_with_retries[g_GameManager.difficulty] =
           (char)param_1->current_stage - 1;
    }
    if ((int)(uint)param_1->clrd[iVar3].difficulty_cleared_without_retries[g_GameManager.difficulty]
        < (int)(param_1->current_stage - 1)) {
      param_1->clrd[iVar3].difficulty_cleared_without_retries[g_GameManager.difficulty] =
           (char)param_1->current_stage - 1;
    }
  }
  if ((param_1->field30_0x1823 != 0) && (param_1->current_stage != 1)) {
    if (param_1->current_stage == 2) {
      param_1->current_power = 0x40;
    }
    else {
      param_1->current_power = 0x80;
    }
  }
  Supervisor::LoadPbg3(&g_Supervisor,4,"紅魔郷CM.dat");
  Supervisor::LoadPbg3(&g_Supervisor,2,"紅魔郷ST.dat");
  if (g_GameManager.field7_0x1c == 1) {
    iVar3 = ReplayManager::RegisterChain(1,g_GameManager.replay_file);
    if (iVar3 != 0) {
      bVar1 = true;
    }
    while (UINT_ARRAY_004764b0[(char)param_1->field23_0x181c] <= (uint)param_1->field0_0x0) {
      param_1->field23_0x181c = param_1->field23_0x181c + 1;
    }
    param_1->min_rank = DifficultyInfo_ARRAY_00476528[g_GameManager.difficulty].min_rank;
    param_1->max_rank = DifficultyInfo_ARRAY_00476528[g_GameManager.difficulty].max_rank;
  }
  g_Rng.generationCount = 0;
  param_1->field41_0x1a2c = g_Rng.seed;
  iVar3 = Stage::RegisterChain(param_1->current_stage);
  if (iVar3 == 0) {
    ZVar4 = Player::RegisterChain(0);
    if (ZVar4 == ZUN_SUCCESS) {
      iVar3 = BulletManager::RegisterChain("data/etama.anm");
      if (iVar3 == 0) {
        ZVar4 = EnemyManager::RegisterChain
                          ((&PTR_s_dummy_004764e8)[param_1->current_stage * 2],
                           (&PTR_s_dummy_004764ec)[param_1->current_stage * 2]);
        if (ZVar4 == ZUN_SUCCESS) {
          iVar3 = EclManager::FUN_00407340
                            (&g_EclManager,(&PTR_s_dummy_004764c4)[param_1->current_stage]);
          if (iVar3 == 0) {
            iVar3 = EffectManager::RegisterChain();
            if (iVar3 == 0) {
              ZVar4 = Gui::RegisterChain();
              if (ZVar4 == ZUN_SUCCESS) {
                if (g_GameManager.field7_0x1c == 0) {
                  ReplayManager::RegisterChain(0,"replay/th6_00.rpy");
                }
                if (g_GameManager.demo_mode == 0) {
                  FUN_00424aac(1,g_Stage.stdData + 0x310);
                  Supervisor::PlayAudio((char *)(g_Stage.stdData + 0x290));
                }
                param_1->is_in_retry_menu = 0;
                param_1->is_in_menu = 1;
                if (g_Supervisor.curState != 3) {
                  g_Supervisor.unk_frame_related1 = 0.0;
                  g_Supervisor.unk_frames_related2 = 0.0;
                }
                *(undefined *)&param_1->field11_0x2c = 0;
                param_1->score = 0;
                param_1->unk_1822 = 0;
                AsciiManager::InitializeVms(&g_AsciiManager);
                if (bVar1) {
                  g_Supervisor.curState = 1;
                }
                g_Supervisor.unk198 = 3;
                ZVar4 = ZUN_SUCCESS;
              }
              else {
                GameErrorContextLog(&g_GameErrorContext,
                                    "error : 2D表���の初期化に失敗しました\n");
                ZVar4 = ZUN_ERROR;
              }
            }
            else {
              GameErrorContextLog(&g_GameErrorContext,
                                  "error : エフェクトの初期化に失敗しました\n");
              ZVar4 = ZUN_ERROR;
            }
          }
          else {
            GameErrorContextLog(&g_GameErrorContext,
                                "error : 敵頭脳の初期化に失敗しました\n");
            ZVar4 = ZUN_ERROR;
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"error : 敵の初期化に失敗しました\n");
          ZVar4 = ZUN_ERROR;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 敵弾の初期化に失敗しました\n")
        ;
        ZVar4 = ZUN_ERROR;
      }
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "error : プレイヤーの初期化に失敗しました\n");
      ZVar4 = ZUN_ERROR;
    }
  }
  else {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : 背景データの初期化に失敗しました\n");
    ZVar4 = ZUN_ERROR;
  }
  return ZVar4;
}


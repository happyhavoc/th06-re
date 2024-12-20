
ZunResult th06::GameManager::AddedCallback(GameManager *gameManager)

{
  int iVar1;
  ushort uVar2;
  ScoreDat *scoredat;
  ZunResult ZVar4;
  uint local_14;
  int local_10;
  Catk *local_c;
  bool bVar1;
  
  bVar1 = false;
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  if (g_Supervisor.curState == 3) {
    gameManager->gui_score = gameManager->score;
    gameManager->score_increment = 0;
  }
  else {
    g_Supervisor.defaultConfig.bombCount = g_GameManager.bombs_remaining;
    g_Supervisor.defaultConfig.lifeCount = g_GameManager.lives_remaining;
    (gameManager->arcade_region_top_left_pos).x = 32.0;
    (gameManager->arcade_region_top_left_pos).y = 16.0;
    (gameManager->arcade_region_size).x = 384.0;
    (gameManager->arcade_region_size).y = 448.0;
    (gameManager->playerMovementAreaTopLeftPos).x = 8.0;
    (gameManager->playerMovementAreaTopLeftPos).y = 16.0;
    (gameManager->playerMovementAreaSize).x = 368.0;
    (gameManager->playerMovementAreaSize).y = 416.0;
    gameManager->counat = 0;
    gameManager->gui_score = 0;
    gameManager->score = 0;
    gameManager->score_increment = 0;
    gameManager->high_score = 100000;
    gameManager->current_power = 0;
    gameManager->num_retries = 0;
    if (5 < gameManager->current_stage) {
      gameManager->difficulty = EXTRA;
    }
    if ((int)gameManager->difficulty < 4) {
      gameManager->extra_lives = 0;
    }
    else {
      gameManager->extra_lives = 4;
    }
    g_GameManager.power_item_count_for_score = 0;
    gameManager->rank = 8;
    gameManager->graze_in_total = 0;
    gameManager->point_items_collected = 0;
    local_c = gameManager->catk;
    for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        uVar2 = Rng::GetRandomU16(&g_Rng);
        *(ushort *)(local_c->name + local_14 * 2 + -0x18) = uVar2;
      }
      (local_c->base).magic = 0x4b544143;
      (local_c->base).unk_len = 0x40;
      (local_c->base).th6k_len = 0x40;
      (local_c->base).version_ = 0x10;
      local_c->idx = (ushort)local_10;
      local_c->num_successes = 0;
      local_c->unk_3e = 0;
      local_c = local_c + 1;
    }
    scoredat = ResultScreen::OpenScore("score.dat");
    g_GameManager.high_score =
         ResultScreen::GetHighScore
                   (scoredat,(ScoreListNode *)0x0,
                    (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2,
                    g_GameManager.difficulty);
    ResultScreen::ParseCatk(scoredat,gameManager->catk);
    ResultScreen::ParseClrd(scoredat,gameManager->clrd);
    ResultScreen::ParsePscr(scoredat,gameManager->pscr);
    if (gameManager->is_in_practice_mode != 0) {
      g_GameManager.high_score =
           gameManager->pscr
           [((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18 +
            g_GameManager.current_stage * 4 + g_GameManager.difficulty].score;
    }
    ResultScreen::ReleaseScoreDat(scoredat);
    gameManager->rank = g_DifficultyInfo[g_GameManager.difficulty].rank;
    gameManager->min_rank = g_DifficultyInfo[g_GameManager.difficulty].min_rank;
    gameManager->max_rank = g_DifficultyInfo[g_GameManager.difficulty].max_rank;
    gameManager->deaths = 0;
    gameManager->bombs_used = 0;
    gameManager->spell_cards_captured = 0;
  }
  gameManager->subrank = 0;
  gameManager->point_items_collected_in_stage = 0;
  gameManager->graze_in_stage = 0;
  gameManager->is_in_game_menu = 0;
  gameManager->current_stage = gameManager->current_stage + 1;
  if (g_GameManager.is_in_replay == 0) {
    iVar1 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if ((gameManager->num_retries == 0) &&
       ((int)(uint)gameManager->clrd[iVar1].difficulty_cleared_with_retries
                   [g_GameManager.difficulty] < gameManager->current_stage + -1)) {
      gameManager->clrd[iVar1].difficulty_cleared_with_retries[g_GameManager.difficulty] =
           (char)gameManager->current_stage - 1;
    }
    if ((int)(uint)gameManager->clrd[iVar1].difficulty_cleared_without_retries
                   [g_GameManager.difficulty] < gameManager->current_stage + -1) {
      gameManager->clrd[iVar1].difficulty_cleared_without_retries[g_GameManager.difficulty] =
           (char)gameManager->current_stage - 1;
    }
  }
  if ((gameManager->is_in_practice_mode != 0) && (gameManager->current_stage != 1)) {
    if (gameManager->current_stage == 2) {
      gameManager->current_power = 0x40;
    }
    else {
      gameManager->current_power = 0x80;
    }
  }
  Supervisor::LoadPbg3(&g_Supervisor,4,"紅魔郷CM.dat");
  Supervisor::LoadPbg3(&g_Supervisor,2,"紅魔郷ST.dat");
  if (g_GameManager.is_in_replay == 1) {
    ZVar4 = ReplayManager::RegisterChain(1,g_GameManager.replay_file);
    if (ZVar4 != ZUN_SUCCESS) {
      bVar1 = true;
    }
    while (g_ExtraLivesScores[(char)gameManager->extra_lives] <= gameManager->gui_score) {
      gameManager->extra_lives = gameManager->extra_lives + 1;
    }
    gameManager->min_rank = g_DifficultyInfoForReplay[g_GameManager.difficulty].min_rank;
    gameManager->max_rank = g_DifficultyInfoForReplay[g_GameManager.difficulty].max_rank;
  }
  g_Rng.generationCount = 0;
  *(ushort *)&gameManager->random_seed = g_Rng.seed;
  ZVar4 = Stage::RegisterChain(gameManager->current_stage);
  if (ZVar4 == ZUN_SUCCESS) {
    ZVar4 = Player::RegisterChain(0);
    if (ZVar4 == ZUN_SUCCESS) {
      ZVar4 = BulletManager::RegisterChain("data/etama.anm");
      if (ZVar4 == ZUN_SUCCESS) {
        ZVar4 = EnemyManager::RegisterChain
                          (g_AnmStageFiles[gameManager->current_stage].stageName1,
                           g_AnmStageFiles[gameManager->current_stage].stageName2);
        if (ZVar4 == ZUN_SUCCESS) {
          ZVar4 = EclManager::Load(&g_EclManager,g_EclFiles[gameManager->current_stage]);
          if (ZVar4 == ZUN_SUCCESS) {
            ZVar4 = EffectManager::RegisterChain();
            if (ZVar4 == ZUN_SUCCESS) {
              ZVar4 = Gui::RegisterChain();
              if (ZVar4 == ZUN_SUCCESS) {
                if (g_GameManager.is_in_replay == 0) {
                  ReplayManager::RegisterChain(0,"replay/th6_00.rpy");
                }
                if (g_GameManager.demo_mode == 0) {
                  Supervisor::ReadMidiFile(&g_Supervisor,1,(g_Stage.stdData)->song2Path);
                  Supervisor::PlayAudio(&g_Supervisor,(g_Stage.stdData)->song1Path);
                }
                gameManager->is_in_retry_menu = 0;
                gameManager->is_in_menu = 1;
                if (g_Supervisor.curState != 3) {
                  g_Supervisor.unk_frame_related1 = 0.0;
                  g_Supervisor.unk_frames_related2 = 0.0;
                }
                *(undefined *)&gameManager->isTimeStopped = 0;
                gameManager->score = 0;
                gameManager->is_game_completed = 0;
                AsciiManager::InitializeVms(&g_AsciiManager);
                if (bVar1) {
                  g_Supervisor.curState = 1;
                }
                g_Supervisor.unk198 = 3;
                ZVar4 = ZUN_SUCCESS;
              }
              else {
                GameErrorContext::Log
                          (&g_GameErrorContext,"error : 2D表示の初期化に失敗しました\n"
                          );
                ZVar4 = ZUN_ERROR;
              }
            }
            else {
              GameErrorContext::Log
                        (&g_GameErrorContext,
                         "error : エフェクトの初期化に失敗しました\n");
              ZVar4 = ZUN_ERROR;
            }
          }
          else {
            GameErrorContext::Log
                      (&g_GameErrorContext,"error : 敵頭脳の初期化に失敗しました\n");
            ZVar4 = ZUN_ERROR;
          }
        }
        else {
          GameErrorContext::Log
                    (&g_GameErrorContext,"error : 敵の初期化に失敗しました\n");
          ZVar4 = ZUN_ERROR;
        }
      }
      else {
        GameErrorContext::Log
                  (&g_GameErrorContext,"error : 敵弾の初期化に失敗しました\n");
        ZVar4 = ZUN_ERROR;
      }
    }
    else {
      GameErrorContext::Log
                (&g_GameErrorContext,"error : プレイヤーの初期化に失敗しました\n");
      ZVar4 = ZUN_ERROR;
    }
  }
  else {
    GameErrorContext::Log
              (&g_GameErrorContext,"error : 背景データの初期化に失敗しました\n");
    ZVar4 = ZUN_ERROR;
  }
  return ZVar4;
}


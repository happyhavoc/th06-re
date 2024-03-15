
ZunResult GameManager::AddedCallback(GameManager *gameManager)

{
  ushort uVar2;
  ScoreDat *scoredat;
  int iVar3;
  ZunResult ZVar4;
  Pscr *pPVar5;
  uint local_14;
  int local_10;
  Catk *local_c;
  bool bVar1;
  
  bVar1 = false;
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  if (g_Supervisor.curState == 3) {
    gameManager->field0_0x0 = gameManager->score;
    gameManager->field2_0x8 = 0;
  }
  else {
    g_Supervisor.bombCount = g_GameManager.bombs_remaining;
    g_Supervisor.lifeCount = g_GameManager.lives_remaining;
    (gameManager->arcade_region_top_left_pos).x = 32.0;
    (gameManager->arcade_region_top_left_pos).y = 16.0;
    (gameManager->arcade_region_size).x = 384.0;
    (gameManager->arcade_region_size).y = 448.0;
    gameManager->field49_0x1a4c = 8.0;
    gameManager->field50_0x1a50 = 16.0;
    gameManager->field51_0x1a54 = 368.0;
    gameManager->field52_0x1a58 = 416.0;
    gameManager->counat = 0;
    gameManager->field0_0x0 = 0;
    gameManager->score = 0;
    gameManager->field2_0x8 = 0;
    gameManager->high_score = 100000;
    gameManager->current_power = 0;
    gameManager->num_retries = 0;
    if (5 < gameManager->current_stage) {
      gameManager->difficulty = 4;
    }
    if (gameManager->difficulty < 4) {
      gameManager->field23_0x181c = 0;
    }
    else {
      gameManager->field23_0x181c = 4;
    }
    g_GameManager.power_item_count_for_score = 0;
    gameManager->rank = 8;
    gameManager->field6_0x18 = 0;
    gameManager->field18_0x1816 = 0;
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
    scoredat = OpenScore("score.dat");
    g_GameManager.high_score =
         GetHighScore(scoredat,(ResultScreenUnk3ab0 *)0x0,
                      (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2,
                      g_GameManager.difficulty);
    ParseCatk(scoredat,gameManager->catk);
    ParseClrd(scoredat,gameManager->clrd);
    pPVar5 = gameManager->pscr;
    ParsePscr(scoredat,pPVar5);
    if (gameManager->field30_0x1823 != 0) {
      pPVar5 = (Pscr *)(g_GameManager.difficulty * 0x14);
      g_GameManager.high_score =
           *(uint *)((int)&pPVar5[((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2)
                                  * 0x18 + g_GameManager.current_stage * 4].score +
                    (int)gameManager->pscr);
    }
    ScoreDat::FUN_0042b7dc(pPVar5,scoredat);
    gameManager->rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].rank;
    gameManager->min_rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].min_rank;
    gameManager->max_rank = DifficultyInfo_ARRAY_00476564[g_GameManager.difficulty].max_rank;
    gameManager->field8_0x20 = 0;
    gameManager->field9_0x24 = 0;
    gameManager->field10_0x28 = 0;
  }
  gameManager->subrank = 0;
  gameManager->point_items_collected_in_stage = 0;
  gameManager->graze_in_stage = 0;
  gameManager->is_in_game_menu = 0;
  gameManager->current_stage = gameManager->current_stage + 1;
  if (g_GameManager.field7_0x1c == 0) {
    iVar3 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if ((gameManager->num_retries == 0) &&
       ((int)(uint)gameManager->clrd[iVar3].difficulty_cleared_with_retries
                   [g_GameManager.difficulty] < gameManager->current_stage + -1)) {
      gameManager->clrd[iVar3].difficulty_cleared_with_retries[g_GameManager.difficulty] =
           (char)gameManager->current_stage - 1;
    }
    if ((int)(uint)gameManager->clrd[iVar3].difficulty_cleared_without_retries
                   [g_GameManager.difficulty] < gameManager->current_stage + -1) {
      gameManager->clrd[iVar3].difficulty_cleared_without_retries[g_GameManager.difficulty] =
           (char)gameManager->current_stage - 1;
    }
  }
  if ((gameManager->field30_0x1823 != 0) && (gameManager->current_stage != 1)) {
    if (gameManager->current_stage == 2) {
      gameManager->current_power = 0x40;
    }
    else {
      gameManager->current_power = 0x80;
    }
  }
  Supervisor::LoadPbg3(&g_Supervisor,4,"紅魔郷CM.dat");
  Supervisor::LoadPbg3(&g_Supervisor,2,"紅魔郷ST.dat");
  if (g_GameManager.field7_0x1c == 1) {
    iVar3 = ReplayManager::RegisterChain(1,g_GameManager.replay_file);
    if (iVar3 != 0) {
      bVar1 = true;
    }
    while (UINT_ARRAY_004764b0[(char)gameManager->field23_0x181c] <= (uint)gameManager->field0_0x0)
    {
      gameManager->field23_0x181c = gameManager->field23_0x181c + 1;
    }
    gameManager->min_rank = DifficultyInfo_ARRAY_00476528[g_GameManager.difficulty].min_rank;
    gameManager->max_rank = DifficultyInfo_ARRAY_00476528[g_GameManager.difficulty].max_rank;
  }
  g_Rng.generationCount = 0;
  gameManager->field41_0x1a2c = g_Rng.seed;
  iVar3 = Stage::RegisterChain(gameManager->current_stage);
  if (iVar3 == 0) {
    ZVar4 = Player::RegisterChain(0);
    if (ZVar4 == ZUN_SUCCESS) {
      iVar3 = BulletManager::RegisterChain("data/etama.anm");
      if (iVar3 == 0) {
        ZVar4 = EnemyManager::RegisterChain
                          ((&PTR_s_dummy_004764e8)[gameManager->current_stage * 2],
                           (&PTR_s_dummy_004764ec)[gameManager->current_stage * 2]);
        if (ZVar4 == ZUN_SUCCESS) {
          iVar3 = EclManager::FUN_00407340
                            (&g_EclManager,(&PTR_s_dummy_004764c4)[gameManager->current_stage]);
          if (iVar3 == 0) {
            iVar3 = EffectManager::RegisterChain();
            if (iVar3 == 0) {
              ZVar4 = Gui::RegisterChain();
              if (ZVar4 == ZUN_SUCCESS) {
                if (g_GameManager.field7_0x1c == 0) {
                  ReplayManager::RegisterChain(0,"replay/th6_00.rpy");
                }
                if (g_GameManager.demo_mode == 0) {
                  readMidiFile(1,g_Stage.stdData + 0x310);
                  Supervisor::PlayAudio((char *)(g_Stage.stdData + 0x290));
                }
                gameManager->is_in_retry_menu = 0;
                gameManager->is_in_menu = 1;
                if (g_Supervisor.curState != 3) {
                  g_Supervisor.unk_frame_related1 = 0.0;
                  g_Supervisor.unk_frames_related2 = 0.0;
                }
                *(undefined *)&gameManager->field11_0x2c = 0;
                gameManager->score = 0;
                gameManager->unk_1822 = 0;
                AsciiManager::InitializeVms(&g_AsciiManager);
                if (bVar1) {
                  g_Supervisor.curState = 1;
                }
                g_Supervisor.unk198 = 3;
                ZVar4 = ZUN_SUCCESS;
              }
              else {
                GameErrorContextLog(&g_GameErrorContext,
                                    "error : 2D表示の初期化に失敗しました\n");
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
                                "error : 敵��脳の初期化に失敗しました\n");
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


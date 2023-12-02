
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 FUN_0041bb02(GameManager *param_1)

{
  bool bVar1;
  ushort uVar2;
  ScoreDat *scoredat;
  int iVar3;
  undefined4 uVar4;
  ZunResult ZVar5;
  Pscr *pPVar6;
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
    *(undefined4 *)&param_1->field_0x1a4c = 0x41000000;
    *(undefined4 *)&param_1->field_0x1a50 = 0x41800000;
    *(undefined4 *)&param_1->field_0x1a54 = 0x43b80000;
    *(undefined4 *)&param_1->field_0x1a58 = 0x43d00000;
    *(undefined4 *)&param_1->field_0x1a6c = 0;
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
      param_1->field_0x181c = 0;
    }
    else {
      param_1->field_0x181c = 4;
    }
    g_GameManager.power_item_count_for_score = 0;
    param_1->rank = 8;
    *(undefined4 *)param_1->field6_0x18 = 0;
    param_1->field13_0x1816 = 0;
    local_c = param_1->catk;
    for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        uVar2 = GetRandomU16(&g_Rng.seed);
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
    pPVar6 = param_1->pscr;
    ParsePscr(scoredat,pPVar6);
    if (param_1->field_0x1823 != '\0') {
      pPVar6 = (Pscr *)(g_GameManager.difficulty * 0x14);
      g_GameManager.high_score =
           *(uint *)((int)&pPVar6[((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2)
                                  * 0x18 + g_GameManager.current_stage * 4].score +
                    (int)param_1->pscr);
    }
    FUN_0042b7dc(pPVar6,scoredat);
    param_1->rank = *(uint *)(&DAT_00476564 + g_GameManager.difficulty * 0xc);
    param_1->min_rank = *(uint *)(&DAT_00476568 + g_GameManager.difficulty * 0xc);
    param_1->max_rank = *(uint *)(&DAT_0047656c + g_GameManager.difficulty * 0xc);
    *(undefined4 *)(param_1->field6_0x18 + 8) = 0;
    *(undefined4 *)(param_1->field6_0x18 + 0xc) = 0;
    *(undefined4 *)(param_1->field6_0x18 + 0x10) = 0;
  }
  param_1->subrank = 0;
  param_1->point_items_collected_in_stage = 0;
  param_1->graze_in_stage = 0;
  param_1->field_0x181f = 0;
  param_1->current_stage = param_1->current_stage + 1;
  if (g_GameManager.field6_0x18._4_4_ == 0) {
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
  if ((param_1->field_0x1823 != '\0') && (param_1->current_stage != 1)) {
    if (param_1->current_stage == 2) {
      param_1->current_power = 0x40;
    }
    else {
      param_1->current_power = 0x80;
    }
  }
  Supervisor::LoadPbg3(&g_Supervisor,4,s__g_CM_dat_0046af84);
  Supervisor::LoadPbg3(&g_Supervisor,2,s__g_ST_dat_0046af74);
  if (g_GameManager.field6_0x18._4_4_ == 1) {
    iVar3 = FUN_0042a240(1,g_GameManager.replay_file);
    if (iVar3 != 0) {
      bVar1 = true;
    }
    while (*(uint *)(&DAT_004764b0 + (char)param_1->field_0x181c * 4) <= (uint)param_1->field0_0x0)
    {
      param_1->field_0x181c = param_1->field_0x181c + '\x01';
    }
    param_1->min_rank = *(uint *)(&DAT_0047652c + g_GameManager.difficulty * 0xc);
    param_1->max_rank = *(uint *)(&DAT_00476530 + g_GameManager.difficulty * 0xc);
  }
  g_Rng.unk4 = 0;
  param_1->field36_0x1a2c = g_Rng.seed;
  iVar3 = Stage::RegisterChain(param_1->current_stage);
  if (iVar3 == 0) {
    iVar3 = Player::RegisterChain(0);
    if (iVar3 == 0) {
      iVar3 = FUN_004148f0("data/etama.anm");
      if (iVar3 == 0) {
        iVar3 = EnemyManager::RegisterChain
                          ((&PTR_s_dummy_004764e8)[param_1->current_stage * 2],
                           (&PTR_s_dummy_004764ec)[param_1->current_stage * 2]);
        if (iVar3 == 0) {
          iVar3 = FUN_00407340((&PTR_s_dummy_004764c4)[param_1->current_stage]);
          if (iVar3 == 0) {
            iVar3 = EffectManager::RegisterChain();
            if (iVar3 == 0) {
              ZVar5 = Gui::RegisterChain();
              if (ZVar5 == ZUN_SUCCESS) {
                if (g_GameManager.field6_0x18._4_4_ == 0) {
                  FUN_0042a240(0,"replay/th6_00.rpy");
                }
                if (g_GameManager.demo_mode == 0) {
                  FUN_00424aac(1,g_Stage.stdData + 0x310);
                  FUN_00424b5d((char *)(g_Stage.stdData + 0x290));
                }
                param_1->field22_0x1820 = 0;
                param_1->field23_0x1821 = 1;
                if (g_Supervisor.curState != 3) {
                  g_Supervisor.field84_0x1b4 = 0.0;
                  g_Supervisor.field85_0x1b8 = 0.0;
                }
                param_1->field6_0x18[0x14] = 0;
                param_1->score = 0;
                param_1->unk_1822 = 0;
                AsciiManager::Initialize(&g_AsciiManager);
                if (bVar1) {
                  g_Supervisor.curState = 1;
                }
                g_Supervisor.unk198 = 3;
                uVar4 = 0;
              }
              else {
                GameErrorContextLog(&g_GameErrorContext,
                                    "error : 2D表示の初期化に失敗しました\n");
                uVar4 = 0xffffffff;
              }
            }
            else {
              GameErrorContextLog(&g_GameErrorContext,
                                  "error : エフェクトの初期化に失敗しました\n");
              uVar4 = 0xffffffff;
            }
          }
          else {
            GameErrorContextLog(&g_GameErrorContext,
                                "error : 敵頭脳の初期化に失敗しました\n");
            uVar4 = 0xffffffff;
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"error : 敵の初期化に失敗しました\n");
          uVar4 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 敵弾の初期化に失敗しました\n")
        ;
        uVar4 = 0xffffffff;
      }
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "error : プレイヤーの初期化に失敗しました\n");
      uVar4 = 0xffffffff;
    }
  }
  else {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : 背景データの初期化に失敗しました\n");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


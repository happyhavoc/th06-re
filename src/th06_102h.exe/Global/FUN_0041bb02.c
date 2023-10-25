
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041bb02(uint *param_1)

{
  bool bVar1;
  ushort uVar2;
  ScoreDat *scoredat;
  int iVar3;
  undefined4 uVar4;
  Pscr *pPVar5;
  uint local_14;
  int local_10;
  uint *local_c;
  
  bVar1 = false;
  (*(g_GameContext.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3dDevice,0);
  if (g_GameContext.unkInput2 == 3) {
    *param_1 = param_1[1];
    param_1[2] = 0;
  }
  else {
    g_GameContext.bombCount = g_GameManager.bombs_remaining;
    g_GameContext.lifeCount = g_GameManager.lives_remaining;
    param_1[0x68f] = 0x42000000;
    param_1[0x690] = 0x41800000;
    param_1[0x691] = 0x43c00000;
    param_1[0x692] = 0x43e00000;
    param_1[0x693] = 0x41000000;
    param_1[0x694] = 0x41800000;
    param_1[0x695] = 0x43b80000;
    param_1[0x696] = 0x43d00000;
    param_1[0x69b] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 100000;
    *(undefined2 *)(param_1 + 0x604) = 0;
    *(undefined *)(param_1 + 0x606) = 0;
    if (5 < (int)param_1[0x68d]) {
      param_1[4] = 4;
    }
    if ((int)param_1[4] < 4) {
      *(undefined *)(param_1 + 0x607) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x607) = 4;
    }
    g_GameManager.power_item_count_for_score = 0;
    param_1[0x69c] = 8;
    param_1[6] = 0;
    *(undefined2 *)((int)param_1 + 0x1816) = 0;
    local_c = param_1 + 0xc;
    for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
        uVar2 = FUN_0041e780(&DAT_0069d8f8);
        *(ushort *)((int)local_c + local_14 * 2) = uVar2;
      }
      *local_c = 0x4b544143;
      *(undefined2 *)((int)local_c + 6) = 0x40;
      *(undefined2 *)(local_c + 1) = 0x40;
      *(undefined *)(local_c + 2) = 0x10;
      *(undefined2 *)(local_c + 4) = (undefined2)local_10;
      *(undefined2 *)(local_c + 0xf) = 0;
      *(undefined2 *)((int)local_c + 0x3e) = 0;
      local_c = local_c + 0x10;
    }
    scoredat = (ScoreDat *)OpenScore("score.dat");
    g_GameManager.high_score =
         FUN_0042b280(scoredat,(ResultScreenUnk3ab0 *)0x0,
                      (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2,
                      g_GameManager.difficulty);
    ParseCatk(scoredat,(Catk *)(param_1 + 0xc));
    ParseClrd(scoredat,(Clrd *)(param_1 + 0x40c));
    pPVar5 = (Pscr *)(param_1 + 0x424);
    ParsePscr(scoredat,pPVar5);
    if (*(char *)((int)param_1 + 0x1823) != '\0') {
      pPVar5 = (Pscr *)(g_GameManager.difficulty * 0x14);
      g_GameManager.high_score =
           (param_1 +
           ((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x78 +
           g_GameManager.current_stage * 0x14 + 0x427)[g_GameManager.difficulty * 5];
    }
    FUN_0042b7dc(pPVar5,scoredat);
    param_1[0x69c] = *(uint *)(&DAT_00476564 + g_GameManager.difficulty * 0xc);
    param_1[0x69e] = *(uint *)(&DAT_00476568 + g_GameManager.difficulty * 0xc);
    param_1[0x69d] = *(uint *)(&DAT_0047656c + g_GameManager.difficulty * 0xc);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  param_1[0x69f] = 0;
  *(undefined2 *)(param_1 + 0x605) = 0;
  param_1[5] = 0;
  *(undefined *)((int)param_1 + 0x181f) = 0;
  param_1[0x68d] = param_1[0x68d] + 1;
  if (g_GameManager.field6_0x18._4_4_ == 0) {
    iVar3 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if ((*(char *)(param_1 + 0x606) == '\0') &&
       ((int)(uint)*(byte *)((int)param_1 + g_GameManager.difficulty + iVar3 * 0x18 + 0x103c) <
        (int)(param_1[0x68d] - 1))) {
      *(char *)((int)param_1 + g_GameManager.difficulty + iVar3 * 0x18 + 0x103c) =
           (char)param_1[0x68d] + -1;
    }
    if ((int)(uint)*(byte *)((int)param_1 + g_GameManager.difficulty + iVar3 * 0x18 + 0x1041) <
        (int)(param_1[0x68d] - 1)) {
      *(char *)((int)param_1 + g_GameManager.difficulty + iVar3 * 0x18 + 0x1041) =
           (char)param_1[0x68d] + -1;
    }
  }
  if ((*(char *)((int)param_1 + 0x1823) != '\0') && (param_1[0x68d] != 1)) {
    if (param_1[0x68d] == 2) {
      *(undefined2 *)(param_1 + 0x604) = 0x40;
    }
    else {
      *(undefined2 *)(param_1 + 0x604) = 0x80;
    }
  }
  GameContext::LoadPBG3(&g_GameContext,4,(byte *)s__g_CM_dat_0046af84);
  GameContext::LoadPBG3(&g_GameContext,2,(byte *)s__g_ST_dat_0046af74);
  if (g_GameManager.field6_0x18._4_4_ == 1) {
    iVar3 = FUN_0042a240(1,g_GameManager.replay_file);
    if (iVar3 != 0) {
      bVar1 = true;
    }
    while (*(uint *)(&DAT_004764b0 + *(char *)(param_1 + 0x607) * 4) <= *param_1) {
      *(char *)(param_1 + 0x607) = *(char *)(param_1 + 0x607) + '\x01';
    }
    param_1[0x69e] = *(uint *)(&DAT_0047652c + g_GameManager.difficulty * 0xc);
    param_1[0x69d] = *(uint *)(&DAT_00476530 + g_GameManager.difficulty * 0xc);
  }
  _DAT_0069d8fc = 0;
  *(undefined2 *)(param_1 + 0x68b) = DAT_0069d8f8;
  iVar3 = Stage::RegisterChain(param_1[0x68d]);
  if (iVar3 == 0) {
    iVar3 = FUN_00428780(0);
    if (iVar3 == 0) {
      iVar3 = FUN_004148f0("data/etama.anm");
      if (iVar3 == 0) {
        iVar3 = FUN_00412320((&PTR_s_dummy_004764e8)[param_1[0x68d] * 2],
                             (&PTR_s_dummy_004764ec)[param_1[0x68d] * 2]);
        if (iVar3 == 0) {
          iVar3 = FUN_00407340((&PTR_s_dummy_004764c4)[param_1[0x68d]]);
          if (iVar3 == 0) {
            iVar3 = FUN_0040f3f0();
            if (iVar3 == 0) {
              iVar3 = FUN_0041b252();
              if (iVar3 == 0) {
                if (g_GameManager.field6_0x18._4_4_ == 0) {
                  FUN_0042a240(0,"replay/th6_00.rpy");
                }
                if (g_GameManager.demo_mode == 0) {
                  FUN_00424aac(1,g_Stage.stdData + 0x310);
                  FUN_00424b5d((char *)(g_Stage.stdData + 0x290));
                }
                *(undefined *)(param_1 + 0x608) = 0;
                *(undefined *)((int)param_1 + 0x1821) = 1;
                if (g_GameContext.unkInput2 != 3) {
                  g_GameContext._436_4_ = 0;
                  g_GameContext._440_4_ = 0;
                }
                *(undefined *)(param_1 + 0xb) = 0;
                param_1[1] = 0;
                *(undefined *)((int)param_1 + 0x1822) = 0;
                AsciiManager::Initialize(&g_AsciiManager);
                if (bVar1) {
                  g_GameContext.unkInput2 = 1;
                }
                g_GameContext.field77_0x198 = 3;
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


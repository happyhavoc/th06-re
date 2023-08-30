
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041bb02(uint *param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_14;
  int local_10;
  uint *local_c;
  
  bVar1 = false;
  (*(g_GameContext.d3d_device)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3d_device,0);
  if (g_GameContext.unkInput2 == 3) {
    *param_1 = param_1[1];
    param_1[2] = 0;
  }
  else {
    g_GameContext.bombCount = BOMB_COUNT;
    g_GameContext.lifeCount = LIFE_COUNT;
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
    DAT_0069d4b9 = 0;
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
    uVar3 = FUN_0042b0d9("score.dat");
    DAT_0069bcac = FUN_0042b280(uVar3,0,(uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2,CUR_RANK);
    FUN_0042b466(uVar3,param_1 + 0xc);
    FUN_0042b502(uVar3,param_1 + 0x40c);
    FUN_0042b65e(uVar3,param_1 + 0x424);
    if (*(char *)((int)param_1 + 0x1823) != '\0') {
      DAT_0069bcac = param_1[((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x78 +
                             CUR_STAGE * 0x14 + CUR_RANK * 5 + 0x427];
    }
    FUN_0042b7dc(uVar3);
    param_1[0x69c] = *(uint *)(&DAT_00476564 + CUR_RANK * 0xc);
    param_1[0x69e] = *(uint *)(&DAT_00476568 + CUR_RANK * 0xc);
    param_1[0x69d] = *(uint *)(&DAT_0047656c + CUR_RANK * 0xc);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  param_1[0x69f] = 0;
  *(undefined2 *)(param_1 + 0x605) = 0;
  param_1[5] = 0;
  *(undefined *)((int)param_1 + 0x181f) = 0;
  param_1[0x68d] = param_1[0x68d] + 1;
  if (_DAT_0069bcbc == 0) {
    iVar4 = (uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2;
    if ((*(char *)(param_1 + 0x606) == '\0') &&
       ((int)(uint)*(byte *)((int)param_1 + CUR_RANK + iVar4 * 0x18 + 0x103c) <
        (int)(param_1[0x68d] - 1))) {
      *(char *)((int)param_1 + CUR_RANK + iVar4 * 0x18 + 0x103c) = (char)param_1[0x68d] + -1;
    }
    if ((int)(uint)*(byte *)((int)param_1 + CUR_RANK + iVar4 * 0x18 + 0x1041) <
        (int)(param_1[0x68d] - 1)) {
      *(char *)((int)param_1 + CUR_RANK + iVar4 * 0x18 + 0x1041) = (char)param_1[0x68d] + -1;
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
  GameContext::FUN_00424375(&g_GameContext,4,&DAT_0046af84);
  GameContext::FUN_00424375(&g_GameContext,2,&DAT_0046af74);
  if (_DAT_0069bcbc == 1) {
    iVar4 = FUN_0042a240(1,&DAT_0069d4cc);
    if (iVar4 != 0) {
      bVar1 = true;
    }
    while (*(uint *)(&DAT_004764b0 + *(char *)(param_1 + 0x607) * 4) <= *param_1) {
      *(char *)(param_1 + 0x607) = *(char *)(param_1 + 0x607) + '\x01';
    }
    param_1[0x69e] = *(uint *)(&DAT_0047652c + CUR_RANK * 0xc);
    param_1[0x69d] = *(uint *)(&DAT_00476530 + CUR_RANK * 0xc);
  }
  _DAT_0069d8fc = 0;
  *(undefined2 *)(param_1 + 0x68b) = DAT_0069d8f8;
  iVar4 = FUN_004044c0(param_1[0x68d]);
  if (iVar4 == 0) {
    iVar4 = FUN_00428780(0);
    if (iVar4 == 0) {
      iVar4 = FUN_004148f0("data/etama.anm");
      if (iVar4 == 0) {
        iVar4 = FUN_00412320((&PTR_s_dummy_004764e8)[param_1[0x68d] * 2],
                             (&PTR_s_dummy_004764ec)[param_1[0x68d] * 2]);
        if (iVar4 == 0) {
          iVar4 = FUN_00407340((&PTR_s_dummy_004764c4)[param_1[0x68d]]);
          if (iVar4 == 0) {
            iVar4 = FUN_0040f3f0();
            if (iVar4 == 0) {
              iVar4 = FUN_0041b252();
              if (iVar4 == 0) {
                if (_DAT_0069bcbc == 0) {
                  FUN_0042a240(0,"replay/th6_00.rpy");
                }
                if (DAT_0069d4c4 == '\0') {
                  FUN_00424aac(1,DAT_00487b14 + 0x310);
                  FUN_00424b5d(DAT_00487b14 + 0x290);
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
                FUN_00401410((InputChainArg *)&DAT_0047b900);
                if (bVar1) {
                  g_GameContext.unkInput2 = 1;
                }
                g_GameContext._408_4_ = 3;
                uVar3 = 0;
              }
              else {
                GameErrorContextLog(&g_GameErrorContext,
                                    "error : 2D表示の初期化に失敗しました\n");
                uVar3 = 0xffffffff;
              }
            }
            else {
              GameErrorContextLog(&g_GameErrorContext,
                                  "error : エフェクトの初期化に失敗しました\n");
              uVar3 = 0xffffffff;
            }
          }
          else {
            GameErrorContextLog(&g_GameErrorContext,
                                "error : 敵頭脳の初期化に失敗しました\n");
            uVar3 = 0xffffffff;
          }
        }
        else {
          GameErrorContextLog(&g_GameErrorContext,"error : 敵の初期化に失敗しました\n");
          uVar3 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 敵弾の初期化に失敗しました\n")
        ;
        uVar3 = 0xffffffff;
      }
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "error : プレイヤーの初期化に失敗しました\n");
      uVar3 = 0xffffffff;
    }
  }
  else {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : 背景データの初期化に失敗しました\n");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


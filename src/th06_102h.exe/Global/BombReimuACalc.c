
void BombReimuACalc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  float local_90;
  int local_28;
  float local_24;
  float local_20;
  float local_18;
  AnmVm *local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x75d8) < *(int *)(param_1 + 0x75cc)) {
    if ((*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0)) &&
       (*(int *)(param_1 + 0x75d8) == 0)) {
      FUN_00417acd(0x69bc30,0x4a1,&DAT_0046a3f4);
      *(undefined4 *)(param_1 + 0x75cc) = 300;
      *(undefined4 *)(param_1 + 0x75bc) = 0x168;
      *(undefined4 *)(param_1 + 0x75b8) = 0;
      *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        *(undefined4 *)(param_1 + 0x75e4 + local_10 * 4) = 0;
      }
      FUN_00420130(0x69e268);
      EffectManager::FUN_0040ef50
                ((int *)&g_EffectManager,0xc,(float *)(param_1 + 0x440),1,0xff4040ff);
      *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x440);
      *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x444);
      *(undefined4 *)(param_1 + 0x940) = 0x43800000;
      *(undefined4 *)(param_1 + 0x944) = 0x43800000;
    }
    if ((0x3b < *(int *)(param_1 + 0x75d8)) && (*(int *)(param_1 + 0x75d8) < 0xb4)) {
      uVar7 = *(uint *)(param_1 + 0x75d8) & 0x8000000f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar7 == 0) &&
         (iVar6 = *(int *)(param_1 + 0x75d8) + -0x3c,
         iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4, iVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x75e4 + iVar6 * 4) = 1;
        *(undefined4 *)(param_1 + 0x7604 + iVar6 * 4) = 0x40800000;
        puVar1 = (undefined4 *)(param_1 + 0x7624 + iVar6 * 0xc);
        *puVar1 = *(undefined4 *)(param_1 + 0x440);
        puVar1[1] = *(undefined4 *)(param_1 + 0x444);
        puVar1[2] = *(undefined4 *)(param_1 + 0x448);
        fVar9 = GetRandomF32ZeroToOne(&g_Rng.seed);
        fVar9 = fVar9 * 6.283185 - 3.141593;
        fVar8 = (float10)FUN_0045bda4((double)fVar9);
        *(float *)(param_1 + 0x7684 + iVar6 * 0xc) =
             (float)fVar8 * *(float *)(param_1 + 0x7604 + iVar6 * 4);
        fVar8 = (float10)FUN_0045bcf4((double)fVar9);
        *(float *)(param_1 + 0x7688 + iVar6 * 0xc) =
             (float)fVar8 * *(float *)(param_1 + 0x7604 + iVar6 * 4);
        *(undefined4 *)(param_1 + 0x838 + iVar6 * 4) = 0;
        local_14 = (AnmVm *)(param_1 + 0x76e4 + iVar6 * 0x440);
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::FUN_004051b0(g_AnmManager,local_14,local_28 + 0x485);
          local_14 = local_14 + 1;
        }
        FUN_004311e0(0xd);
      }
    }
    *(undefined *)(param_1 + 0x9e0) = 3;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)(param_1 + 0x75e4 + local_10 * 4) != 0) {
        if (*(int *)(param_1 + 0x75e4 + local_10 * 4) == 1) {
          if (*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0)) {
            if (*(float *)(param_1 + 0xa1c) <= -100.0) {
              local_24 = *(float *)(param_1 + 0x440);
              local_20 = *(float *)(param_1 + 0x444);
            }
            else {
              local_24 = *(float *)(param_1 + 0xa1c);
              local_20 = *(float *)(param_1 + 0xa20);
            }
            local_24 = local_24 - *(float *)(param_1 + 0x7624 + local_10 * 0xc);
            local_20 = local_20 - *(float *)(param_1 + 0x7628 + local_10 * 0xc);
            fVar8 = (float10)FUN_0045bc34((double)(local_24 * local_24 + local_20 * local_20));
            local_18 = (float)fVar8 / (*(float *)(param_1 + 0x7604 + local_10 * 4) / 8.0);
            if (local_18 < 1.0 != NAN(local_18)) {
              local_18 = 1.0;
            }
            fVar4 = local_24 / local_18 + *(float *)(param_1 + 0x7684 + local_10 * 0xc);
            fVar5 = local_20 / local_18 + *(float *)(param_1 + 0x7688 + local_10 * 0xc);
            fVar8 = (float10)FUN_0045bc34((double)(fVar4 * fVar4 + fVar5 * fVar5));
            fVar9 = (float)fVar8;
            local_90 = fVar9;
            if (10.0 < fVar9) {
              local_90 = 10.0;
            }
            *(float *)(param_1 + 0x7604 + local_10 * 4) = local_90;
            fVar3 = *(float *)(param_1 + 0x7604 + local_10 * 4);
            if (fVar3 < 1.0 != NAN(fVar3)) {
              *(undefined4 *)(param_1 + 0x7604 + local_10 * 4) = 0x3f800000;
            }
            *(float *)(param_1 + 0x7684 + local_10 * 0xc) =
                 (fVar4 * *(float *)(param_1 + 0x7604 + local_10 * 4)) / fVar9;
            *(float *)(param_1 + 0x7688 + local_10 * 0xc) =
                 (fVar5 * *(float *)(param_1 + 0x7604 + local_10 * 4)) / fVar9;
            *(undefined4 *)(param_1 + 0x638 + local_10 * 0xc) = 0x42400000;
            *(undefined4 *)(param_1 + 0x63c + local_10 * 0xc) = 0x42400000;
            puVar1 = (undefined4 *)(param_1 + 0x7624 + local_10 * 0xc);
            puVar2 = (undefined4 *)(param_1 + 0x4b8 + local_10 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            *(undefined4 *)(param_1 + 0x7b8 + local_10 * 4) = 8;
            *(undefined4 *)(param_1 + 0x8b8 + local_10 * 0x10) =
                 *(undefined4 *)(param_1 + 0x7624 + local_10 * 0xc);
            *(undefined4 *)(param_1 + 0x8bc + local_10 * 0x10) =
                 *(undefined4 *)(param_1 + 0x7628 + local_10 * 0xc);
            *(undefined4 *)(param_1 + 0x8c0 + local_10 * 0x10) = 0x42400000;
            *(undefined4 *)(param_1 + 0x8c4 + local_10 * 0x10) = 0x42400000;
            if ((99 < *(int *)(param_1 + 0x838 + local_10 * 4)) ||
               (*(int *)(param_1 + 0x75cc) + -0x1e <= *(int *)(param_1 + 0x75d8))) {
              EffectManager::FUN_0040ef50
                        ((int *)&g_EffectManager,6,(float *)(param_1 + 0x7624 + local_10 * 0xc),8,
                         0xffffffff);
              EffectManager::FUN_0040ef50
                        ((int *)&g_EffectManager,0xc,(float *)(param_1 + 0x7624 + local_10 * 0xc),1,
                         0xff4040ff);
              *(undefined4 *)(param_1 + 0x75e4 + local_10 * 4) = 2;
              *(undefined2 *)(param_1 + 0x776e + local_10 * 0x440) = 1;
              *(undefined2 *)(param_1 + 0x776e + (local_10 * 4 + 1) * 0x110) = 1;
              *(undefined2 *)(param_1 + 0x776e + (local_10 * 4 + 2) * 0x110) = 1;
              *(undefined2 *)(param_1 + 0x776e + (local_10 * 4 + 3) * 0x110) = 1;
              *(undefined4 *)(param_1 + 0x638 + local_10 * 0xc) = 0x43800000;
              *(undefined4 *)(param_1 + 0x63c + local_10 * 0xc) = 0x43800000;
              *(undefined4 *)(param_1 + 0x7b8 + local_10 * 4) = 200;
              *(undefined4 *)(param_1 + 0x8c0 + local_10 * 0x10) = 0x43800000;
              *(undefined4 *)(param_1 + 0x8c4 + local_10 * 0x10) = 0x43800000;
              FUN_004311e0(0xf);
              FUN_0042fd30(1,0x10,8,0);
            }
          }
        }
        else if (((*(int *)(param_1 + 0x75e4 + local_10 * 4) != 0) &&
                 (*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0))) &&
                (*(int *)(param_1 + 0x75e4 + local_10 * 4) =
                      *(int *)(param_1 + 0x75e4 + local_10 * 4) + 1,
                0x1d < *(int *)(param_1 + 0x75e4 + local_10 * 4))) {
          *(undefined4 *)(param_1 + 0x75e4 + local_10 * 4) = 0;
        }
        *(float *)(param_1 + 0x7624 + local_10 * 0xc) =
             g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x7684 + local_10 * 0xc) +
             *(float *)(param_1 + 0x7624 + local_10 * 0xc);
        *(float *)(param_1 + 0x7628 + local_10 * 0xc) =
             g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x7688 + local_10 * 0xc) +
             *(float *)(param_1 + 0x7628 + local_10 * 0xc);
        AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + local_10 * 0x440));
        AnmManager::ExecuteScript
                  (g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + (local_10 * 4 + 1) * 0x110));
        AnmManager::ExecuteScript
                  (g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + (local_10 * 4 + 2) * 0x110));
        AnmManager::ExecuteScript
                  (g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + (local_10 * 4 + 3) * 0x110));
      }
    }
    *(undefined4 *)(param_1 + 0x75d0) = *(undefined4 *)(param_1 + 0x75d8);
    Supervisor::FUN_00424285(&g_Supervisor,(int *)(param_1 + 0x75d8),(float *)(param_1 + 0x75d4));
  }
  else {
    FUN_00417314();
    *(undefined4 *)(param_1 + 0x75c8) = 0;
  }
  return;
}


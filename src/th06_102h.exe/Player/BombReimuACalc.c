
void Player::BombReimuACalc(Player *param_1)

{
  PlayerUnknown *pPVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int local_28;
  float local_24;
  float local_20;
  float local_18;
  AnmVm *local_14;
  int local_10;
  
  if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4) {
    if (((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) &&
       ((param_1->inner).field2_0x8.current == 0)) {
      Gui::FUN_00417acd(&g_Gui,0x4a1,"霊符「夢想封印」");
      (param_1->inner).field1_0x4 = 300;
      (param_1->field35_0x75b4).current = 0x168;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4) = 0;
      }
      ItemManager::FUN_00420130(g_ItemManager);
      EffectManager::FUN_0040ef50(&g_EffectManager,0xc,&param_1->position,1,0xff4040ff);
      param_1->field15_0x8b8[8].position1.x = (param_1->position).x;
      param_1->field15_0x8b8[8].position1.y = (param_1->position).y;
      param_1->field15_0x8b8[8].size1.x = 256.0;
      param_1->field15_0x8b8[8].size1.y = 256.0;
    }
    if ((0x3b < (param_1->inner).field2_0x8.current) && ((param_1->inner).field2_0x8.current < 0xb4)
       ) {
      uVar6 = (param_1->inner).field2_0x8.current & 0x8000000f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar6 == 0) &&
         (iVar5 = (param_1->inner).field2_0x8.current + -0x3c,
         iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4, iVar5 != 0)) {
        *(undefined4 *)((param_1->inner).field5_0x1c + iVar5 * 4) = 1;
        *(undefined4 *)((param_1->inner).field5_0x1c + iVar5 * 4 + 0x20) = 0x40800000;
        pPVar1 = (param_1->inner).field6_0x5c + iVar5;
        pPVar1->field0_0x0 = (param_1->position).x;
        pPVar1->field1_0x4 = (param_1->position).y;
        pPVar1->field2_0x8 = (param_1->position).z;
        fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        fVar8 = fVar8 * 6.283185 - 3.141593;
        dVar9 = cos((double)fVar8);
        (param_1->inner).field8_0xbc[iVar5 * 3] =
             (int)((float)dVar9 * *(float *)((param_1->inner).field5_0x1c + iVar5 * 4 + 0x20));
        dVar9 = sin((double)fVar8);
        (param_1->inner).field8_0xbc[iVar5 * 3 + 1] =
             (int)((float)dVar9 * *(float *)((param_1->inner).field5_0x1c + iVar5 * 4 + 0x20));
        param_1->field14_0x838[iVar5] = 0;
        local_14 = (param_1->inner).field10_0x11c + iVar5 * 4;
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::ExecuteAnmIdx(g_AnmManager,local_14,local_28 + 0x485);
          local_14 = local_14 + 1;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xd);
      }
    }
    param_1->field21_0x9e0 = 3;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)((param_1->inner).field5_0x1c + local_10 * 4) != 0) {
        if (*(int *)((param_1->inner).field5_0x1c + local_10 * 4) == 1) {
          if ((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) {
            if ((param_1->position_of_last_enemy_hit).x <= -100.0) {
              local_24 = (param_1->position).x;
              local_20 = (param_1->position).y;
            }
            else {
              local_24 = (param_1->position_of_last_enemy_hit).x;
              local_20 = (param_1->position_of_last_enemy_hit).y;
            }
            fVar8 = (param_1->inner).field6_0x5c[local_10].field0_0x0;
            fVar3 = (param_1->inner).field6_0x5c[local_10].field1_0x4;
            fVar7 = (float10)FUN_0045bc34();
            local_18 = (float)fVar7 /
                       (*(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) / 8.0);
            if (local_18 < 1.0 != NAN(local_18)) {
              local_18 = 1.0;
            }
            fVar4 = (local_24 - fVar8) / local_18 +
                    (float)(param_1->inner).field8_0xbc[local_10 * 3];
            fVar3 = (local_20 - fVar3) / local_18 +
                    (float)(param_1->inner).field8_0xbc[local_10 * 3 + 1];
            fVar7 = (float10)FUN_0045bc34((double)(fVar4 * fVar4 + fVar3 * fVar3));
            fVar8 = (float)fVar7;
            fVar10 = fVar8;
            if (10.0 < fVar8) {
              fVar10 = 10.0;
            }
            *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) = fVar10;
            fVar10 = *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20);
            if (fVar10 < 1.0 != NAN(fVar10)) {
              *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) = 0x3f800000;
            }
            (param_1->inner).field8_0xbc[local_10 * 3] =
                 (int)((fVar4 * *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20)) /
                      fVar8);
            (param_1->inner).field8_0xbc[local_10 * 3 + 1] =
                 (int)((fVar3 * *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20)) /
                      fVar8);
            param_1->field12_0x638[local_10].x = 48.0;
            param_1->field12_0x638[local_10].y = 48.0;
            pPVar1 = (param_1->inner).field6_0x5c + local_10;
            pDVar2 = param_1->field11_0x4b8 + local_10;
            pDVar2->x = pPVar1->field0_0x0;
            pDVar2->y = pPVar1->field1_0x4;
            pDVar2->z = pPVar1->field2_0x8;
            param_1->field13_0x7b8[local_10] = 8;
            param_1->field15_0x8b8[local_10].position1.x =
                 (param_1->inner).field6_0x5c[local_10].field0_0x0;
            param_1->field15_0x8b8[local_10].position1.y =
                 (param_1->inner).field6_0x5c[local_10].field1_0x4;
            param_1->field15_0x8b8[local_10].size1.x = 48.0;
            param_1->field15_0x8b8[local_10].size1.y = 48.0;
            if ((99 < param_1->field14_0x838[local_10]) ||
               ((param_1->inner).field1_0x4 + -0x1e <= (param_1->inner).field2_0x8.current)) {
              EffectManager::FUN_0040ef50
                        (&g_EffectManager,6,(D3DXVECTOR3 *)((param_1->inner).field6_0x5c + local_10)
                         ,8,0xffffffff);
              EffectManager::FUN_0040ef50
                        (&g_EffectManager,0xc,
                         (D3DXVECTOR3 *)((param_1->inner).field6_0x5c + local_10),1,0xff4040ff);
              *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4) = 2;
              (param_1->inner).field10_0x11c[local_10 * 4].pendingInterrupt = 1;
              (param_1->inner).field10_0x11c[local_10 * 4 + 1].pendingInterrupt = 1;
              (param_1->inner).field10_0x11c[local_10 * 4 + 2].pendingInterrupt = 1;
              (param_1->inner).field10_0x11c[local_10 * 4 + 3].pendingInterrupt = 1;
              param_1->field12_0x638[local_10].x = 256.0;
              param_1->field12_0x638[local_10].y = 256.0;
              param_1->field13_0x7b8[local_10] = 200;
              param_1->field15_0x8b8[local_10].size1.x = 256.0;
              param_1->field15_0x8b8[local_10].size1.y = 256.0;
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xf);
              ScreenEffect::RegisterChain();
            }
          }
        }
        else if (((*(int *)((param_1->inner).field5_0x1c + local_10 * 4) != 0) &&
                 ((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous)) &&
                (*(int *)((param_1->inner).field5_0x1c + local_10 * 4) =
                      *(int *)((param_1->inner).field5_0x1c + local_10 * 4) + 1,
                0x1d < *(int *)((param_1->inner).field5_0x1c + local_10 * 4))) {
          *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4) = 0;
        }
        (param_1->inner).field6_0x5c[local_10].field0_0x0 =
             g_Supervisor.effectiveFramerateMultiplier *
             (float)(param_1->inner).field8_0xbc[local_10 * 3] +
             (param_1->inner).field6_0x5c[local_10].field0_0x0;
        (param_1->inner).field6_0x5c[local_10].field1_0x4 =
             g_Supervisor.effectiveFramerateMultiplier *
             (float)(param_1->inner).field8_0xbc[local_10 * 3 + 1] +
             (param_1->inner).field6_0x5c[local_10].field1_0x4;
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_10 * 4);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_10 * 4 + 1);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_10 * 4 + 2);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_10 * 4 + 3);
      }
    }
    (param_1->inner).field2_0x8.previous = (param_1->inner).field2_0x8.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->inner).field2_0x8.current,
               &(param_1->inner).field2_0x8.subFrame);
  }
  else {
    Gui::FUN_00417314(&g_Gui);
    (param_1->inner).field0_0x0 = 0;
  }
  return;
}


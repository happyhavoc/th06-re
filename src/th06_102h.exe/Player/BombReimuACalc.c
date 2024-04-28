
void Player::BombReimuACalc(Player *param_1)

{
  PlayerUnknown *pPVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int local_28;
  float local_24;
  float local_20;
  float local_18;
  AnmVm *local_14;
  int local_10;
  
  if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4) {
    if (((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) &&
       ((param_1->inner).field2_0x8.current == 0)) {
      Gui::string_related(&g_Gui,0x4a1,"霊符「夢想封印」");
      (param_1->inner).field1_0x4 = 300;
      (param_1->field35_0x75b4).current = 0x168;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4) = 0;
      }
      ItemManager::FUN_00420130((ItemManager *)&g_ItemManager);
      EffectManager::SpawnEffect(&g_EffectManager,0xc,&param_1->position,1,0xff4040ff);
      param_1->field15_0x8b8[8].position1.x = (param_1->position).x;
      param_1->field15_0x8b8[8].position1.y = (param_1->position).y;
      param_1->field15_0x8b8[8].size1.x = 256.0;
      param_1->field15_0x8b8[8].size1.y = 256.0;
    }
    if ((0x3b < (param_1->inner).field2_0x8.current) && ((param_1->inner).field2_0x8.current < 0xb4)
       ) {
      uVar5 = (param_1->inner).field2_0x8.current & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar5 == 0) &&
         (iVar4 = (param_1->inner).field2_0x8.current + -0x3c,
         iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4, iVar4 != 0)) {
        *(undefined4 *)((param_1->inner).field5_0x1c + iVar4 * 4) = 1;
        *(undefined4 *)((param_1->inner).field5_0x1c + iVar4 * 4 + 0x20) = 0x40800000;
        pPVar1 = (param_1->inner).field6_0x5c + iVar4;
        pPVar1->field0_0x0 = (param_1->position).x;
        pPVar1->field1_0x4 = (param_1->position).y;
        pPVar1->field2_0x8 = (param_1->position).z;
        fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        fVar6 = fVar6 * 6.283185 - 3.141593;
        dVar8 = cos((double)fVar6);
        (param_1->inner).field8_0xbc[iVar4 * 3] =
             (int)((float)dVar8 * *(float *)((param_1->inner).field5_0x1c + iVar4 * 4 + 0x20));
        dVar8 = sin((double)fVar6);
        (param_1->inner).field8_0xbc[iVar4 * 3 + 1] =
             (int)((float)dVar8 * *(float *)((param_1->inner).field5_0x1c + iVar4 * 4 + 0x20));
        param_1->field14_0x838[iVar4] = 0;
        local_14 = (param_1->inner).field10_0x11c + iVar4 * 4;
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::ExecuteAnmIdx(g_AnmManager,local_14,local_28 + 0x485);
          local_14 = local_14 + 1;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMU_A,0);
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
            local_24 = local_24 - (param_1->inner).field6_0x5c[local_10].field0_0x0;
            local_20 = local_20 - (param_1->inner).field6_0x5c[local_10].field1_0x4;
            local_18 = FUN_0045bc34(SUB84((double)(local_24 * local_24 + local_20 * local_20),0));
            local_18 = local_18 /
                       (*(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) / 8.0);
            if (local_18 < 1.0 != NAN(local_18)) {
              local_18 = 1.0;
            }
            fVar6 = local_24 / local_18 + (float)(param_1->inner).field8_0xbc[local_10 * 3];
            fVar3 = local_20 / local_18 + (float)(param_1->inner).field8_0xbc[local_10 * 3 + 1];
            fVar7 = FUN_0045bc34(SUB84((double)(fVar6 * fVar6 + fVar3 * fVar3),0));
            fVar9 = fVar7;
            if (10.0 < fVar7) {
              fVar9 = 10.0;
            }
            *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) = fVar9;
            fVar9 = *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20);
            if (fVar9 < 1.0 != NAN(fVar9)) {
              *(undefined4 *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20) = 0x3f800000;
            }
            (param_1->inner).field8_0xbc[local_10 * 3] =
                 (int)((fVar6 * *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20)) /
                      fVar7);
            (param_1->inner).field8_0xbc[local_10 * 3 + 1] =
                 (int)((fVar3 * *(float *)((param_1->inner).field5_0x1c + local_10 * 4 + 0x20)) /
                      fVar7);
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
              EffectManager::SpawnEffect
                        (&g_EffectManager,6,(D3DXVECTOR3 *)((param_1->inner).field6_0x5c + local_10)
                         ,8,0xffffffff);
              EffectManager::SpawnEffect
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
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_F,0);
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


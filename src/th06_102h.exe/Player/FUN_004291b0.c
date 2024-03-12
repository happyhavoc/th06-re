
void Player::FUN_004291b0(Player *param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  D3DXVECTOR3 *pDVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float local_38;
  PlayerBullet *local_18;
  float local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (param_1->field16_0x9b8[local_10].current != 0) {
      ZunTimer::Decrement(param_1->field16_0x9b8 + local_10,1);
    }
  }
  local_18 = param_1->bullets;
  for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
    if (local_18->field11_0x14e != 0) {
      sVar2 = local_18->field12_0x150;
      if (sVar2 == 1) {
        if (local_18->field11_0x14e == 1) {
          if ((((param_1->position_of_last_enemy_hit).x <= -100.0) ||
              (0x27 < (local_18->field9_0x140).current)) ||
             ((local_18->field9_0x140).current == (local_18->field9_0x140).previous)) {
            if (local_18->field7_0x138 < 10.0 != NAN(local_18->field7_0x138)) {
              local_18->field7_0x138 = local_18->field7_0x138 + 0.3333333;
              fVar1 = local_18->field3_0x128;
              fVar3 = local_18->field4_0x12c;
              fVar8 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar3 * fVar3));
              local_18->field3_0x128 = (fVar1 * local_18->field7_0x138) / (float)fVar8;
              local_18->field4_0x12c = (fVar3 * local_18->field7_0x138) / (float)fVar8;
            }
          }
          else {
            fVar1 = (param_1->position_of_last_enemy_hit).x - (local_18->field1_0x110).x;
            fVar3 = (param_1->position_of_last_enemy_hit).y - (local_18->field1_0x110).y;
            fVar8 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar3 * fVar3));
            local_14 = (float)fVar8 / (local_18->field7_0x138 / 4.0);
            if (local_14 < 1.0 != NAN(local_14)) {
              local_14 = 1.0;
            }
            fVar4 = fVar1 / local_14 + local_18->field3_0x128;
            fVar3 = fVar3 / local_14 + local_18->field4_0x12c;
            fVar8 = (float10)FUN_0045bc34((double)(fVar4 * fVar4 + fVar3 * fVar3));
            fVar1 = (float)fVar8;
            local_38 = fVar1;
            if (10.0 < fVar1) {
              local_38 = 10.0;
            }
            local_18->field7_0x138 = local_38;
            if (local_18->field7_0x138 < 1.0 != NAN(local_18->field7_0x138)) {
              local_18->field7_0x138 = 1.0;
            }
            local_18->field3_0x128 = (fVar4 * local_18->field7_0x138) / fVar1;
            local_18->field4_0x12c = (fVar3 * local_18->field7_0x138) / fVar1;
          }
        }
      }
      else if (sVar2 == 2) {
        if (local_18->field11_0x14e == 1) {
          local_18->field4_0x12c = local_18->field4_0x12c - 0.3;
        }
      }
      else if (sVar2 == 3) {
        if (param_1->field16_0x9b8[local_18->field13_0x152].current == 0x46) {
          (local_18->vm).pendingInterrupt = 1;
        }
        else if (param_1->field16_0x9b8[local_18->field13_0x152].current == 1) {
          (local_18->vm).pendingInterrupt = 1;
        }
        pDVar5 = param_1->field10_0x4a0 + local_18->field14_0x154 + -1;
        (local_18->field1_0x110).x = pDVar5->x;
        (local_18->field1_0x110).y = pDVar5->y;
        (local_18->field1_0x110).z = pDVar5->z;
        (local_18->field1_0x110).x = (local_18->field1_0x110).x + local_18->field5_0x130;
        (local_18->field1_0x110).y = (local_18->field1_0x110).y / 2.0;
        (local_18->field1_0x110).z = 0.44;
        fVar1 = (local_18->field1_0x110).y;
        (local_18->vm).scaleY = (fVar1 + fVar1) / 14.0;
        fVar1 = (local_18->field1_0x110).y;
        (local_18->field2_0x11c).y = fVar1 + fVar1;
      }
      pDVar5 = &local_18->field1_0x110;
      pDVar5->x = g_Supervisor.effectiveFramerateMultiplier * local_18->field3_0x128 + pDVar5->x;
      (local_18->vm).pos.x = pDVar5->x;
      pfVar7 = &(local_18->field1_0x110).y;
      *pfVar7 = g_Supervisor.effectiveFramerateMultiplier * local_18->field4_0x12c + *pfVar7;
      (local_18->vm).pos.y = *pfVar7;
      (local_18->vm).pos.z = (local_18->field1_0x110).z;
      if ((local_18->field12_0x150 != 3) &&
         (iVar6 = GameManager::collision_related
                            ((local_18->field1_0x110).x,(local_18->field1_0x110).y,
                             ((local_18->vm).sprite)->widthPx,((local_18->vm).sprite)->heightPx),
         iVar6 == 0)) {
        local_18->field11_0x14e = 0;
      }
      iVar6 = AnmManager::ExecuteScript(g_AnmManager,&local_18->vm);
      if (iVar6 != 0) {
        local_18->field11_0x14e = 0;
      }
      (local_18->field9_0x140).previous = (local_18->field9_0x140).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(local_18->field9_0x140).current,&(local_18->field9_0x140).subFrame)
      ;
    }
    local_18 = local_18 + 1;
  }
  return;
}


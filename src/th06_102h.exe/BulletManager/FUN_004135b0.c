
undefined4 __thiscall
BulletManager::FUN_004135b0
          (BulletManager *this,EnemyBulletShooter *param_1,uint param_2,int param_3,float param_4)

{
  undefined *puVar1;
  float fVar2;
  float10 fVar3;
  undefined4 uVar4;
  int iVar5;
  BulletTypeVms *pBVar6;
  AnmVm *pAVar7;
  Bullet *pBVar8;
  AnmVm *pAVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float local_14;
  Bullet *local_10;
  int local_c;
  float local_8;
  
  local_10 = this->bullets + this->next_bullet_index;
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    this->next_bullet_index = this->next_bullet_index + 1;
    if (0x27f < this->next_bullet_index) {
      this->next_bullet_index = 0;
    }
    if (local_10->state == 0) break;
    local_10 = local_10 + 1;
    if (this->next_bullet_index == 0) {
      local_10 = this->bullets;
    }
  }
  if (local_c < 0x280) {
    local_14 = 0.0;
    local_8 = param_1->speed1 -
              ((param_1->speed1 - param_1->speed2) * (float)param_3) /
              (float)(int)(short)param_1->count2;
    switch(param_1->aim_mode) {
    case 0:
    case 1:
      if ((param_1->count1 & 1) == 0) {
        local_14 = param_1->angle2 * 0.5 + (float)((int)param_2 / 2) * param_1->angle2;
      }
      else {
        local_14 = (float)((int)(param_2 + 1) / 2) * param_1->angle2;
      }
      local_14 = local_14 + 0.0;
      if ((param_2 & 1) != 0) {
        local_14 = local_14 * -1.0;
      }
      if (param_1->aim_mode == 0) {
        local_14 = local_14 + param_4;
      }
      local_14 = local_14 + param_1->angle1;
      break;
    case 2:
      local_14 = param_4 + 0.0;
    case 3:
      local_14 = (float)param_3 * param_1->angle2 + param_1->angle1 +
                 ((float)param_2 * 6.283185) / (float)(int)(short)param_1->count1 + local_14;
      break;
    case 4:
      local_14 = param_4 + 0.0;
    case 5:
      local_14 = ((float)param_2 * 6.283185) / (float)(int)(short)param_1->count1 +
                 3.141593 / (float)(int)(short)param_1->count1 + local_14 + param_1->angle1;
      break;
    case 6:
      fVar12 = param_1->angle1;
      fVar2 = param_1->angle2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_14 = fVar11 * (fVar12 - fVar2) + param_1->angle2;
      break;
    case 7:
      fVar12 = param_1->speed1;
      fVar2 = param_1->speed2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar11 * (fVar12 - fVar2) + param_1->speed2;
      local_14 = (float)param_3 * param_1->angle2 + param_1->angle1 +
                 ((float)param_2 * 6.283185) / (float)(int)(short)param_1->count1 + 0.0;
      break;
    case 8:
      fVar12 = param_1->angle1;
      fVar2 = param_1->angle2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_14 = fVar11 * (fVar12 - fVar2) + param_1->angle2;
      fVar12 = param_1->speed1;
      fVar2 = param_1->speed2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar11 * (fVar12 - fVar2) + param_1->speed2;
    }
    local_10->state = 1;
    local_10->field20_0x5c2 = 1;
    local_10->speed = local_8;
    fVar12 = add_normalize_angle(local_14,0.0);
    local_10->angle = fVar12;
    (local_10->pos).x = (param_1->position).x;
    (local_10->pos).y = (param_1->position).y;
    (local_10->pos).z = (param_1->position).z;
    (local_10->pos).z = 0.1;
    fVar3 = (float10)fcos((float10)local_10->angle);
    fVar10 = (float10)fsin((float10)local_10->angle);
    (local_10->velocity).x = (float)(fVar3 * (float10)local_8);
    (local_10->velocity).y = (float)(fVar10 * (float10)local_8);
    local_10->ex_flags = *(ushort *)&param_1->flags;
    local_10->color = param_1->color;
    pBVar6 = this->bullet_type_templates + (short)param_1->sprite;
    pBVar8 = local_10;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pBVar8->vms).vm0.rotation.x = (pBVar6->vm0).rotation.x;
      pBVar6 = (BulletTypeVms *)&(pBVar6->vm0).rotation.y;
      pBVar8 = (Bullet *)&(pBVar8->vms).vm0.rotation.y;
    }
    pAVar7 = &this->bullet_type_templates[(short)param_1->sprite].vm5;
    pAVar9 = &(local_10->vms).vm5;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pAVar9->rotation).x = (pAVar7->rotation).x;
      pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
      pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
    }
    puVar1 = &this->bullet_type_templates[(short)param_1->sprite].field_0x550;
    *(undefined4 *)&(local_10->vms).field_0x550 = *(undefined4 *)puVar1;
    *(undefined4 *)&(local_10->vms).field_0x554 = *(undefined4 *)(puVar1 + 4);
    *(undefined4 *)&(local_10->vms).field_0x558 = *(undefined4 *)(puVar1 + 8);
    (local_10->vms).field17_0x55c =
         this->bullet_type_templates[(short)param_1->sprite].field17_0x55c;
    (local_10->vms).field18_0x55d =
         this->bullet_type_templates[(short)param_1->sprite].field18_0x55d;
    if ((local_10->ex_flags & 2) == 0) {
      if ((local_10->ex_flags & 4) == 0) {
        if ((local_10->ex_flags & 8) != 0) {
          pAVar7 = &this->bullet_type_templates[(short)param_1->sprite].spawn_effect_long;
          pAVar9 = &(local_10->vms).spawn_effect_long;
          for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pAVar9->rotation).x = (pAVar7->rotation).x;
            pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
            pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
          }
          fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
          if (fVar12 < 16.0 == (fVar12 == 16.0)) {
            fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
            if (fVar12 < 32.0 == (fVar12 == 32.0)) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(local_10->vms).spawn_effect_long,
                         (int)(local_10->vms).spawn_effect_long.spriteNumber +
                         (int)(short)param_1->color);
            }
            else if ((local_10->vms).vm0.anmFileIndex == 0x207) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(local_10->vms).spawn_effect_long,
                         (int)(local_10->vms).spawn_effect_long.spriteNumber + 1);
            }
            else {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(local_10->vms).spawn_effect_long,
                         (int)(local_10->vms).spawn_effect_long.spriteNumber +
                         *(int *)(&DAT_00476480 + (short)param_1->color * 4));
            }
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(local_10->vms).spawn_effect_long,
                       (int)(local_10->vms).spawn_effect_long.spriteNumber +
                       *(int *)(&DAT_00476440 + (short)param_1->color * 4));
          }
          local_10->state = 4;
        }
      }
      else {
        pAVar7 = &this->bullet_type_templates[(short)param_1->sprite].spawn_effect_medium;
        pAVar9 = &(local_10->vms).spawn_effect_medium;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pAVar9->rotation).x = (pAVar7->rotation).x;
          pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
          pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
        }
        fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
        if (fVar12 < 16.0 == (fVar12 == 16.0)) {
          fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
          if (fVar12 < 32.0 == (fVar12 == 32.0)) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(local_10->vms).spawn_effect_medium,
                       (int)(local_10->vms).spawn_effect_medium.spriteNumber +
                       (int)(short)param_1->color);
          }
          else if ((local_10->vms).vm0.anmFileIndex == 0x207) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(local_10->vms).spawn_effect_medium,
                       (int)(local_10->vms).spawn_effect_medium.spriteNumber + 1);
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(local_10->vms).spawn_effect_medium,
                       (int)(local_10->vms).spawn_effect_medium.spriteNumber +
                       *(int *)(&DAT_00476480 + (short)param_1->color * 4));
          }
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(local_10->vms).spawn_effect_medium,
                     (int)(local_10->vms).spawn_effect_medium.spriteNumber +
                     *(int *)(&DAT_00476440 + (short)param_1->color * 4));
        }
        local_10->state = 3;
      }
    }
    else {
      pAVar7 = &this->bullet_type_templates[(short)param_1->sprite].spawn_effect_short;
      pAVar9 = &(local_10->vms).spawn_effect_short;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pAVar9->rotation).x = (pAVar7->rotation).x;
        pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
        pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
      }
      fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
      if (fVar12 < 16.0 == (fVar12 == 16.0)) {
        fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
        if (fVar12 < 32.0 == (fVar12 == 32.0)) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(local_10->vms).spawn_effect_short,
                     (int)(local_10->vms).spawn_effect_short.spriteNumber +
                     (int)(short)param_1->color);
        }
        else if ((local_10->vms).vm0.anmFileIndex == 0x207) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(local_10->vms).spawn_effect_short,
                     (int)(local_10->vms).spawn_effect_short.spriteNumber + 1);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(local_10->vms).spawn_effect_short,
                     (int)(local_10->vms).spawn_effect_short.spriteNumber +
                     *(int *)(&DAT_00476480 + (short)param_1->color * 4));
        }
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(local_10->vms).spawn_effect_short,
                   (int)(local_10->vms).spawn_effect_short.spriteNumber +
                   *(int *)(&DAT_00476440 + (short)param_1->color * 4));
      }
      local_10->state = 2;
    }
    AnmManager::SetActiveSprite
              (g_AnmManager,(AnmVm *)local_10,
               (int)(local_10->vms).vm0.spriteNumber + (int)(short)param_1->color);
    fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
    if (fVar12 < 16.0 == (fVar12 == 16.0)) {
      fVar12 = ((local_10->vms).vm0.sprite)->heightPx;
      if (fVar12 < 32.0 == (fVar12 == 32.0)) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(local_10->vms).vm5,
                   (int)(local_10->vms).vm5.spriteNumber + (int)(short)param_1->color);
      }
      else if ((local_10->vms).vm0.anmFileIndex == 0x207) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(local_10->vms).vm5,(int)(local_10->vms).vm5.spriteNumber + 1);
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(local_10->vms).vm5,
                   (int)(local_10->vms).vm5.spriteNumber +
                   *(int *)(&DAT_00476480 + (short)param_1->color * 4));
      }
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&(local_10->vms).vm5,
                 (int)(local_10->vms).vm5.spriteNumber +
                 *(int *)(&DAT_00476440 + (short)param_1->color * 4));
    }
    if ((local_10->ex_flags & 0x10) == 0) {
      if ((local_10->ex_flags & 0x20) != 0) {
        local_10->ex_5_float_0 = param_1->ex_floats[0];
        local_10->ex_5_float_1 = param_1->ex_floats[1];
        local_10->ex_5_int_0 = param_1->ex_ints[0];
      }
    }
    else {
      if (param_1->ex_floats[1] < -999.0 == (param_1->ex_floats[1] == -999.0)) {
        fVar12 = param_1->ex_floats[0];
        fVar3 = (float10)fcos((float10)param_1->ex_floats[1]);
        fVar10 = (float10)fsin((float10)param_1->ex_floats[1]);
        (local_10->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar12);
        (local_10->ex_4_acceleration).y = (float)(fVar10 * (float10)fVar12);
      }
      else {
        fVar12 = param_1->ex_floats[0];
        fVar3 = (float10)fcos((float10)local_14);
        fVar10 = (float10)fsin((float10)local_14);
        (local_10->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar12);
        (local_10->ex_4_acceleration).y = (float)(fVar10 * (float10)fVar12);
      }
      if (param_1->ex_ints[0] < 1) {
        local_10->ex_5_int_0 = 99999;
      }
      else {
        local_10->ex_5_int_0 = param_1->ex_ints[0];
      }
      (local_10->ex_4_acceleration).z = 0.0;
    }
    if ((local_10->ex_flags & 0x1c0) != 0) {
      local_10->dir_change__rotation_arg = param_1->ex_floats[0];
      if (param_1->ex_floats[1] < 0.0) {
        local_10->dir_change__speed_arg = local_8;
      }
      else {
        local_10->dir_change__speed_arg = param_1->ex_floats[1];
      }
      local_10->dir_change__interval = param_1->ex_ints[0];
      local_10->dir_change__max_times = param_1->ex_ints[1];
      local_10->dir_change__num_times = 0;
    }
    if ((local_10->ex_flags & 0xc00) != 0) {
      if (param_1->ex_floats[0] < 0.0) {
        local_10->dir_change__speed_arg = local_8;
      }
      else {
        local_10->dir_change__speed_arg = param_1->ex_floats[0];
      }
      local_10->dir_change__max_times = param_1->ex_ints[0];
      local_10->dir_change__num_times = 0;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


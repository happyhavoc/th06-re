
undefined4 BulletManager::OnUpdate(BulletManager *arg)

{
  double dVar1;
  char cVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  Bullet *pBVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float fVar8;
  float local_260;
  float local_38;
  float local_34;
  AnmVm *local_2c;
  int local_28;
  Bullet *local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  local_24 = arg->bullets;
  if ((char)g_GameManager.field11_0x2c == '\0') {
    ItemManager::FUN_0041f4a0((ItemManager *)&g_ItemManager);
    arg->bullet_count = 0;
    for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
      if (local_24->state == 0) goto LAB_00414a1a;
      arg->bullet_count = arg->bullet_count + 1;
      switch(local_24->state) {
      case 1:
        goto switchD_00414a97_caseD_1;
      case 2:
        fVar8 = (local_24->velocity).z * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        fVar4 = (local_24->velocity).y * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        (local_24->pos).x =
             (local_24->velocity).x * 0.5 * g_Supervisor.effectiveFramerateMultiplier +
             (local_24->pos).x;
        (local_24->pos).y = fVar4 + (local_24->pos).y;
        (local_24->pos).z = fVar8 + (local_24->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(local_24->vms).spawn_effect_short);
        break;
      case 3:
        fVar8 = (local_24->velocity).z * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        fVar4 = (local_24->velocity).y * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        (local_24->pos).x =
             (local_24->velocity).x * 0.4 * g_Supervisor.effectiveFramerateMultiplier +
             (local_24->pos).x;
        (local_24->pos).y = fVar4 + (local_24->pos).y;
        (local_24->pos).z = fVar8 + (local_24->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(local_24->vms).spawn_effect_medium);
        break;
      case 4:
        fVar8 = (local_24->velocity).z * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        fVar4 = (local_24->velocity).y * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        (local_24->pos).x =
             (local_24->velocity).x * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier +
             (local_24->pos).x;
        (local_24->pos).y = fVar4 + (local_24->pos).y;
        (local_24->pos).z = fVar8 + (local_24->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(local_24->vms).spawn_effect_long);
        break;
      case 5:
        fVar8 = (local_24->velocity).z * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        fVar4 = (local_24->velocity).y * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        (local_24->pos).x =
             (local_24->velocity).x * 0.5 * g_Supervisor.effectiveFramerateMultiplier +
             (local_24->pos).x;
        (local_24->pos).y = fVar4 + (local_24->pos).y;
        (local_24->pos).z = fVar8 + (local_24->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(local_24->vms).vm5);
        if (iVar5 != 0) {
          pBVar6 = local_24;
          for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pBVar6->vms).vm0.rotation.x = 0.0;
            pBVar6 = (Bullet *)&(pBVar6->vms).vm0.rotation.y;
          }
          goto LAB_00414a1a;
        }
      default:
        goto switchD_00414a97_caseD_5;
      }
      if (iVar5 == 0) {
switchD_00414a97_caseD_5:
        (local_24->timer).previous = (local_24->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(local_24->timer).current,&(local_24->timer).subFrame);
      }
      else {
        local_24->state = 1;
        (local_24->timer).current = 0;
        (local_24->timer).subFrame = 0.0;
        (local_24->timer).previous = -999;
switchD_00414a97_caseD_1:
        if (local_24->ex_flags != 0) {
          if ((local_24->ex_flags & 1) == 0) {
            if ((local_24->ex_flags & 0x10) == 0) {
              if ((local_24->ex_flags & 0x20) != 0) {
                if ((local_24->timer).current < local_24->ex_5_int_0) {
                  fVar8 = add_normalize_angle(local_24->angle,
                                              g_Supervisor.effectiveFramerateMultiplier *
                                              local_24->ex_5_float_1);
                  local_24->angle = fVar8;
                  local_24->speed =
                       g_Supervisor.effectiveFramerateMultiplier * local_24->ex_5_float_0 +
                       local_24->speed;
                  fVar8 = local_24->speed;
                  fVar3 = (float10)fcos((float10)local_24->angle);
                  fVar7 = (float10)fsin((float10)local_24->angle);
                  (local_24->velocity).x = (float)(fVar3 * (float10)fVar8);
                  (local_24->velocity).y = (float)(fVar7 * (float10)fVar8);
                }
                else {
                  local_24->ex_flags = local_24->ex_flags & 0xffdf;
                }
              }
            }
            else if ((local_24->timer).current < local_24->ex_5_int_0) {
              fVar8 = g_Supervisor.effectiveFramerateMultiplier * (local_24->ex_4_acceleration).z;
              fVar4 = g_Supervisor.effectiveFramerateMultiplier * (local_24->ex_4_acceleration).y;
              (local_24->velocity).x =
                   g_Supervisor.effectiveFramerateMultiplier * (local_24->ex_4_acceleration).x +
                   (local_24->velocity).x;
              (local_24->velocity).y = fVar4 + (local_24->velocity).y;
              (local_24->velocity).z = fVar8 + (local_24->velocity).z;
              dVar1 = (double)(local_24->velocity).y;
              FUN_0045be40(SUB81(dVar1,0),(char)((ulonglong)dVar1 >> 0x20));
              local_24->angle = (float)extraout_ST0;
            }
            else {
              local_24->ex_flags = local_24->ex_flags & 0xffef;
            }
          }
          else if ((local_24->timer).current < 0x11) {
            local_10 = 5.0 - (((float)(local_24->timer).current + (local_24->timer).subFrame) * 5.0)
                             / 16.0;
            fVar8 = local_10 + local_24->speed;
            fVar3 = (float10)fcos((float10)local_24->angle);
            fVar7 = (float10)fsin((float10)local_24->angle);
            (local_24->velocity).x = (float)(fVar3 * (float10)fVar8);
            (local_24->velocity).y = (float)(fVar7 * (float10)fVar8);
          }
          else {
            local_24->ex_flags = local_24->ex_flags ^ 1;
          }
          if ((local_24->ex_flags & 0x40) == 0) {
            if ((local_24->ex_flags & 0x100) == 0) {
              if ((local_24->ex_flags & 0x80) == 0) {
                if ((local_24->ex_flags & 0x400) == 0) {
                  if (((local_24->ex_flags & 0x800) != 0) &&
                     (iVar5 = GameManager::collision_related
                                        ((local_24->pos).x,(local_24->pos).y,
                                         ((local_24->vms).vm0.sprite)->widthPx,
                                         ((local_24->vms).vm0.sprite)->heightPx), iVar5 == 0)) {
                    fVar8 = (local_24->pos).x;
                    if ((fVar8 < 0.0 != NAN(fVar8)) || (384.0 <= (local_24->pos).x)) {
                      local_24->angle = -local_24->angle - 3.141593;
                      fVar8 = add_normalize_angle(local_24->angle,0.0);
                      local_24->angle = fVar8;
                    }
                    fVar8 = (local_24->pos).y;
                    if (fVar8 < 0.0 != NAN(fVar8)) {
                      local_24->angle = -local_24->angle;
                    }
                    local_24->speed = local_24->dir_change__speed_arg;
                    local_10 = local_24->speed;
                    fVar3 = (float10)fcos((float10)local_24->angle);
                    fVar7 = (float10)fsin((float10)local_24->angle);
                    (local_24->velocity).x = (float)(fVar3 * (float10)local_10);
                    (local_24->velocity).y = (float)(fVar7 * (float10)local_10);
                    local_24->dir_change__num_times = local_24->dir_change__num_times + 1;
                    if (local_24->dir_change__max_times <= local_24->dir_change__num_times) {
                      local_24->ex_flags = local_24->ex_flags & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar5 = GameManager::collision_related
                                    ((local_24->pos).x,(local_24->pos).y,
                                     ((local_24->vms).vm0.sprite)->widthPx,
                                     ((local_24->vms).vm0.sprite)->heightPx);
                  if (iVar5 == 0) {
                    fVar8 = (local_24->pos).x;
                    if ((fVar8 < 0.0 != NAN(fVar8)) || (384.0 <= (local_24->pos).x)) {
                      local_24->angle = -local_24->angle - 3.141593;
                      fVar8 = add_normalize_angle(local_24->angle,0.0);
                      local_24->angle = fVar8;
                    }
                    fVar8 = (local_24->pos).y;
                    if ((fVar8 < 0.0 != NAN(fVar8)) || (448.0 <= (local_24->pos).y)) {
                      local_24->angle = -local_24->angle;
                    }
                    local_24->speed = local_24->dir_change__speed_arg;
                    local_10 = local_24->speed;
                    fVar3 = (float10)fcos((float10)local_24->angle);
                    fVar7 = (float10)fsin((float10)local_24->angle);
                    (local_24->velocity).x = (float)(fVar3 * (float10)local_10);
                    (local_24->velocity).y = (float)(fVar7 * (float10)local_10);
                    local_24->dir_change__num_times = local_24->dir_change__num_times + 1;
                    if (local_24->dir_change__max_times <= local_24->dir_change__num_times) {
                      local_24->ex_flags = local_24->ex_flags & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((local_24->timer).current <
                    local_24->dir_change__interval * (local_24->dir_change__num_times + 1)) {
                  local_10 = local_24->speed -
                             ((((float)(local_24->timer).current + (local_24->timer).subFrame) -
                              (float)(local_24->dir_change__interval *
                                     local_24->dir_change__num_times)) * local_24->speed) /
                             (float)local_24->dir_change__interval;
                }
                else {
                  local_24->dir_change__num_times = local_24->dir_change__num_times + 1;
                  if (local_24->dir_change__max_times <= local_24->dir_change__num_times) {
                    local_24->ex_flags = local_24->ex_flags & 0xff7f;
                  }
                  fVar8 = Player::FUN_00428700(&g_Player,&(local_24->pos).x);
                  local_24->angle = fVar8 + local_24->dir_change__rotation_arg;
                  local_24->speed = local_24->dir_change__speed_arg;
                  local_10 = local_24->speed;
                }
                fVar3 = (float10)fcos((float10)local_24->angle);
                fVar7 = (float10)fsin((float10)local_24->angle);
                (local_24->velocity).x = (float)(fVar3 * (float10)local_10);
                (local_24->velocity).y = (float)(fVar7 * (float10)local_10);
              }
            }
            else {
              if ((local_24->timer).current <
                  local_24->dir_change__interval * (local_24->dir_change__num_times + 1)) {
                local_10 = local_24->speed -
                           ((((float)(local_24->timer).current + (local_24->timer).subFrame) -
                            (float)(local_24->dir_change__interval * local_24->dir_change__num_times
                                   )) * local_24->speed) / (float)local_24->dir_change__interval;
              }
              else {
                local_24->dir_change__num_times = local_24->dir_change__num_times + 1;
                if (local_24->dir_change__max_times <= local_24->dir_change__num_times) {
                  local_24->ex_flags = local_24->ex_flags & 0xfeff;
                }
                local_24->angle = local_24->dir_change__rotation_arg;
                local_24->speed = local_24->dir_change__speed_arg;
                local_10 = local_24->speed;
              }
              fVar3 = (float10)fcos((float10)local_24->angle);
              fVar7 = (float10)fsin((float10)local_24->angle);
              (local_24->velocity).x = (float)(fVar3 * (float10)local_10);
              (local_24->velocity).y = (float)(fVar7 * (float10)local_10);
            }
          }
          else {
            if ((local_24->timer).current <
                local_24->dir_change__interval * (local_24->dir_change__num_times + 1)) {
              local_10 = local_24->speed -
                         ((((float)(local_24->timer).current + (local_24->timer).subFrame) -
                          (float)(local_24->dir_change__interval * local_24->dir_change__num_times))
                         * local_24->speed) / (float)local_24->dir_change__interval;
            }
            else {
              local_24->dir_change__num_times = local_24->dir_change__num_times + 1;
              if (local_24->dir_change__max_times <= local_24->dir_change__num_times) {
                local_24->ex_flags = local_24->ex_flags & 0xffbf;
              }
              local_24->angle = local_24->angle + local_24->dir_change__rotation_arg;
              local_24->speed = local_24->dir_change__speed_arg;
              local_10 = local_24->speed;
            }
            fVar3 = (float10)fcos((float10)local_24->angle);
            fVar7 = (float10)fsin((float10)local_24->angle);
            (local_24->velocity).x = (float)(fVar3 * (float10)local_10);
            (local_24->velocity).y = (float)(fVar7 * (float10)local_10);
          }
        }
        fVar8 = g_Supervisor.effectiveFramerateMultiplier * (local_24->velocity).z;
        fVar4 = g_Supervisor.effectiveFramerateMultiplier * (local_24->velocity).y;
        (local_24->pos).x =
             g_Supervisor.effectiveFramerateMultiplier * (local_24->velocity).x + (local_24->pos).x;
        (local_24->pos).y = fVar4 + (local_24->pos).y;
        (local_24->pos).z = fVar8 + (local_24->pos).z;
        iVar5 = GameManager::collision_related
                          ((local_24->pos).x,(local_24->pos).y,((local_24->vms).vm0.sprite)->widthPx
                           ,((local_24->vms).vm0.sprite)->heightPx);
        if (iVar5 != 0) {
          local_24->field19_0x5c0 = 0;
LAB_00415b6c:
          if (local_24->field21_0x5c3 == 0) {
            local_8 = Player::FUN_00426df0
                                (&g_Player,&(local_24->pos).x,&(local_24->vms).field5_0x550);
            if (local_8 == 1) {
              local_24->field21_0x5c3 = 1;
LAB_00415be8:
              local_8 = Player::CalcKillBoxCollision
                                  (&g_Player,&(local_24->pos).x,&(local_24->vms).field5_0x550);
              if ((local_8 != 0) && (local_24->state = 5, local_8 == 2)) {
                ItemManager::SpawnItem((ItemManager *)&g_ItemManager,&local_24->pos,6,1);
              }
            }
            else if (local_8 == 2) {
              local_24->state = 5;
              ItemManager::SpawnItem((ItemManager *)&g_ItemManager,&local_24->pos,6,1);
            }
          }
          else if (local_24->field21_0x5c3 == 1) goto LAB_00415be8;
          AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)local_24);
          goto switchD_00414a97_caseD_5;
        }
        if ((((((local_24->ex_flags & 0x40) == 0) && ((local_24->ex_flags & 0x100) == 0)) &&
             ((local_24->ex_flags & 0x80) == 0)) &&
            (((local_24->ex_flags & 0x400) == 0 && ((local_24->ex_flags & 0x800) == 0)))) &&
           (local_24->field19_0x5c0 == 0)) {
          pBVar6 = local_24;
          for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pBVar6->vms).vm0.rotation.x = 0.0;
            pBVar6 = (Bullet *)&(pBVar6->vms).vm0.rotation.y;
          }
        }
        else {
          local_24->field19_0x5c0 = local_24->field19_0x5c0 + 1;
          if (local_24->field19_0x5c0 < 0x100) goto LAB_00415b6c;
          pBVar6 = local_24;
          for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pBVar6->vms).vm0.rotation.x = 0.0;
            pBVar6 = (Bullet *)&(pBVar6->vms).vm0.rotation.y;
          }
        }
      }
LAB_00414a1a:
      local_24 = local_24 + 1;
    }
    local_2c = &arg->lasers[0].vm0;
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (local_2c[2].currentTimeInScript.current != 0) {
        local_2c[2].angleVel.z =
             g_Supervisor.effectiveFramerateMultiplier * local_2c[2].scaleInterpFinalY +
             local_2c[2].angleVel.z;
        if (local_2c[2].scaleY < local_2c[2].angleVel.z - local_2c[2].angleVel.y) {
          local_2c[2].angleVel.y = local_2c[2].angleVel.z - local_2c[2].scaleY;
        }
        fVar8 = local_2c[2].angleVel.y;
        if (fVar8 < 0.0 != NAN(fVar8)) {
          local_2c[2].angleVel.y = 0.0;
        }
        local_1c = local_2c[2].scaleX / 2.0;
        local_20 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_38 = (local_2c[2].angleVel.z - local_2c[2].angleVel.y) / 2.0 + local_2c[2].angleVel.y
                   + local_2c[2].rotation.x;
        local_34 = local_2c[2].rotation.y;
        local_2c->scaleX = local_2c[2].scaleX / local_2c->sprite->widthPx;
        local_14 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_2c->scaleY = local_14 / local_2c->sprite->heightPx;
        (((AnmVm *)&local_2c->rotation)->rotation).z = 1.570796 - local_2c[2].angleVel.x;
        cVar2 = *(char *)local_2c[2].matrix.m[1];
        if (cVar2 == '\0') {
          if ((*(ushort *)(local_2c[2].matrix.m[0] + 3) & 1) == 0) {
            if ((int)local_2c[2].scaleInterpFinalX < 0x1f) {
              local_260 = local_2c[2].scaleInterpFinalX;
            }
            else {
              local_260 = 4.203895e-44;
            }
            if ((int)local_2c[2].scaleInterpFinalX - (int)local_260 <
                (int)local_2c[2].matrix.m[0][2]) {
              local_14 = (((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]) *
                         local_2c[2].scaleX) / (float)(int)local_2c[2].scaleInterpFinalX;
            }
            else {
              local_14 = 1.2;
            }
            local_2c->scaleX = local_14 / 16.0;
            local_20 = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]
                                ) * 255.0) / (float)(int)local_2c[2].scaleInterpFinalX);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (local_2c->color).color = local_28 << 0x18;
          }
          if ((int)local_2c[2].uvScrollPos.x <= (int)local_2c[2].matrix.m[0][2]) {
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,(float *)(local_2c + 2),local_2c[2].angleVel.x,
                       (uint)((int)local_2c[2].matrix.m[0][2] % 0xc == 0));
          }
          if ((int)local_2c[2].scaleInterpFinalX <= (int)local_2c[2].matrix.m[0][2]) {
            local_2c[2].matrix.m[0][2] = 0.0;
            local_2c[2].matrix.m[0][1] = 0.0;
            local_2c[2].matrix.m[0][0] = -NAN;
            *(char *)local_2c[2].matrix.m[1] = *(char *)local_2c[2].matrix.m[1] + '\x01';
            goto LAB_004161bf;
          }
        }
        else {
          if (cVar2 == '\x01') {
LAB_004161bf:
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,(float *)(local_2c + 2),local_2c[2].angleVel.x,
                       (uint)((int)local_2c[2].matrix.m[0][2] % 0xc == 0));
            if ((int)local_2c[2].matrix.m[0][2] < (int)local_2c[2].uvScrollPos.y) goto LAB_00416422;
            local_2c[2].matrix.m[0][2] = 0.0;
            local_2c[2].matrix.m[0][1] = 0.0;
            local_2c[2].matrix.m[0][0] = -NAN;
            *(char *)local_2c[2].matrix.m[1] = *(char *)local_2c[2].matrix.m[1] + '\x01';
            if (local_2c[2].currentTimeInScript.previous == 0) {
              local_2c[2].currentTimeInScript.current = 0;
              goto LAB_00415e08;
            }
          }
          else if (cVar2 != '\x02') goto LAB_00416422;
          if ((*(ushort *)(local_2c[2].matrix.m[0] + 3) & 1) == 0) {
            if (0 < local_2c[2].currentTimeInScript.previous) {
              local_14 = local_2c[2].scaleX -
                         (((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]) *
                         local_2c[2].scaleX) / (float)local_2c[2].currentTimeInScript.previous;
              local_2c->scaleX = local_14 / 16.0;
              local_20 = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]
                                ) * 255.0) / (float)(int)local_2c[2].scaleInterpFinalX);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (local_2c->color).color = local_28 << 0x18;
          }
          if ((int)local_2c[2].matrix.m[0][2] < (int)local_2c[2].currentTimeInScript.subFrame) {
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,(float *)(local_2c + 2),local_2c[2].angleVel.x,
                       (uint)((int)local_2c[2].matrix.m[0][2] % 0xc == 0));
          }
          if (local_2c[2].currentTimeInScript.previous <= (int)local_2c[2].matrix.m[0][2]) {
            local_2c[2].currentTimeInScript.current = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= local_2c[2].angleVel.y) {
          local_2c[2].currentTimeInScript.current = 0;
        }
        local_2c[2].matrix.m[0][0] = local_2c[2].matrix.m[0][2];
        Supervisor::TickTimer
                  (&g_Supervisor,(int *)(local_2c[2].matrix.m[0] + 2),local_2c[2].matrix.m[0] + 1);
        AnmManager::ExecuteScript(g_AnmManager,local_2c);
      }
LAB_00415e08:
      local_2c = (AnmVm *)(local_2c[2].matrix.m[1] + 1);
    }
    (arg->time).previous = (arg->time).current;
    Supervisor::TickTimer(&g_Supervisor,&(arg->time).current,&(arg->time).subFrame);
  }
  return 1;
}


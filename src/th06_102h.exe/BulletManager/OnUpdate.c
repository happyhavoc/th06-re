
undefined4 BulletManager::OnUpdate(BulletManager *this)

{
  double dVar1;
  double dVar2;
  char cVar3;
  float10 fVar4;
  int iVar5;
  Bullet *pBVar6;
  float10 fVar7;
  float local_260;
  D3DXVECTOR3 local_38;
  AnmVm *local_2c;
  int local_28;
  Bullet *bulletsPtr;
  D3DXVECTOR3 local_20;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  float velY;
  float velZ;
  
  bulletsPtr = this->bullets;
  if ((char)g_GameManager.isTimeStopped == NULL) {
    ItemManager::FUN_0041f4a0(&g_ItemManager);
    this->bullet_count = 0;
    for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
      if (bulletsPtr->state == 0) goto LAB_00414a1a;
      this->bullet_count = this->bullet_count + 1;
      switch(bulletsPtr->state) {
      case 1:
        goto switchD_00414a97_caseD_1;
      case 2:
        velZ = (bulletsPtr->velocity).z * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.5 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(bulletsPtr->vms).spawn_effect_short);
        break;
      case 3:
        velZ = (bulletsPtr->velocity).z * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.4 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(bulletsPtr->vms).spawn_effect_medium);
        break;
      case 4:
        velZ = (bulletsPtr->velocity).z * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar5 = AnmManager::ExecuteScript(g_AnmManager,&(bulletsPtr->vms).spawn_effect_long);
        break;
      case 5:
        velZ = (bulletsPtr->velocity).z * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.5 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar5 = AnmManager::ExecuteScript
                          (g_AnmManager,&(bulletsPtr->vms).spawn_effect_short_with_memset);
        if (iVar5 != 0) {
          pBVar6 = bulletsPtr;
                    /* memset(bulletsPtr, 0, 369) */
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
        (bulletsPtr->timer).previous = (bulletsPtr->timer).current;
        Supervisor::TickTimer
                  (&g_Supervisor,&(bulletsPtr->timer).current,&(bulletsPtr->timer).subFrame);
      }
      else {
        bulletsPtr->state = 1;
        (bulletsPtr->timer).current = 0;
        (bulletsPtr->timer).subFrame = 0.0;
        (bulletsPtr->timer).previous = -999;
switchD_00414a97_caseD_1:
        if (bulletsPtr->ex_flags != 0) {
          if ((bulletsPtr->ex_flags & 1) == 0) {
            if ((bulletsPtr->ex_flags & 0x10) == 0) {
              if ((bulletsPtr->ex_flags & 0x20) != 0) {
                if ((bulletsPtr->timer).current < bulletsPtr->ex_5_int_0) {
                  velZ = AddNormalizeAngle(bulletsPtr->angle,
                                           g_Supervisor.effectiveFramerateMultiplier *
                                           bulletsPtr->ex_5_float_1);
                  bulletsPtr->angle = velZ;
                  bulletsPtr->speed =
                       g_Supervisor.effectiveFramerateMultiplier * bulletsPtr->ex_5_float_0 +
                       bulletsPtr->speed;
                  velZ = bulletsPtr->speed;
                  fVar4 = (float10)fcos((float10)bulletsPtr->angle);
                  fVar7 = (float10)fsin((float10)bulletsPtr->angle);
                  (bulletsPtr->velocity).x = (float)(fVar4 * (float10)velZ);
                  (bulletsPtr->velocity).y = (float)(fVar7 * (float10)velZ);
                }
                else {
                  bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xffdf;
                }
              }
            }
            else if ((bulletsPtr->timer).current < bulletsPtr->ex_5_int_0) {
              velZ = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->ex_4_acceleration).z;
              velY = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->ex_4_acceleration).y;
              (bulletsPtr->velocity).x =
                   g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->ex_4_acceleration).x +
                   (bulletsPtr->velocity).x;
              (bulletsPtr->velocity).y = velY + (bulletsPtr->velocity).y;
              (bulletsPtr->velocity).z = velZ + (bulletsPtr->velocity).z;
              dVar1 = (double)(bulletsPtr->velocity).x;
              dVar2 = (double)(bulletsPtr->velocity).y;
              velZ = FUN_0045be40(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                                  (int)((ulonglong)dVar1 >> 0x20));
              bulletsPtr->angle = velZ;
            }
            else {
              bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xffef;
            }
          }
          else if ((bulletsPtr->timer).current < 0x11) {
            local_10 = 5.0 - (((float)(bulletsPtr->timer).current + (bulletsPtr->timer).subFrame) *
                             5.0) / 16.0;
            velZ = local_10 + bulletsPtr->speed;
            fVar4 = (float10)fcos((float10)bulletsPtr->angle);
            fVar7 = (float10)fsin((float10)bulletsPtr->angle);
            (bulletsPtr->velocity).x = (float)(fVar4 * (float10)velZ);
            (bulletsPtr->velocity).y = (float)(fVar7 * (float10)velZ);
          }
          else {
            bulletsPtr->ex_flags = bulletsPtr->ex_flags ^ 1;
          }
          if ((bulletsPtr->ex_flags & 0x40) == 0) {
            if ((bulletsPtr->ex_flags & 0x100) == 0) {
              if ((bulletsPtr->ex_flags & 0x80) == 0) {
                if ((bulletsPtr->ex_flags & 0x400) == 0) {
                  if (((bulletsPtr->ex_flags & 0x800) != 0) &&
                     (iVar5 = GameManager::IsInbounds
                                        ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                                         ((bulletsPtr->vms).vm0.sprite)->widthPx,
                                         ((bulletsPtr->vms).vm0.sprite)->heightPx), iVar5 == 0)) {
                    velZ = (bulletsPtr->pos).x;
                    if ((velZ < 0.0 != NAN(velZ)) || (384.0 <= (bulletsPtr->pos).x)) {
                      bulletsPtr->angle = -bulletsPtr->angle - 3.141593;
                      velZ = AddNormalizeAngle(bulletsPtr->angle,0.0);
                      bulletsPtr->angle = velZ;
                    }
                    velZ = (bulletsPtr->pos).y;
                    if (velZ < 0.0 != NAN(velZ)) {
                      bulletsPtr->angle = -bulletsPtr->angle;
                    }
                    bulletsPtr->speed = bulletsPtr->dir_change__speed_arg;
                    local_10 = bulletsPtr->speed;
                    fVar4 = (float10)fcos((float10)bulletsPtr->angle);
                    fVar7 = (float10)fsin((float10)bulletsPtr->angle);
                    (bulletsPtr->velocity).x = (float)(fVar4 * (float10)local_10);
                    (bulletsPtr->velocity).y = (float)(fVar7 * (float10)local_10);
                    bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
                    if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                      bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar5 = GameManager::IsInbounds
                                    ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                                     ((bulletsPtr->vms).vm0.sprite)->widthPx,
                                     ((bulletsPtr->vms).vm0.sprite)->heightPx);
                  if (iVar5 == 0) {
                    velZ = (bulletsPtr->pos).x;
                    if ((velZ < 0.0 != NAN(velZ)) || (384.0 <= (bulletsPtr->pos).x)) {
                      bulletsPtr->angle = -bulletsPtr->angle - 3.141593;
                      velZ = AddNormalizeAngle(bulletsPtr->angle,0.0);
                      bulletsPtr->angle = velZ;
                    }
                    velZ = (bulletsPtr->pos).y;
                    if ((velZ < 0.0 != NAN(velZ)) || (448.0 <= (bulletsPtr->pos).y)) {
                      bulletsPtr->angle = -bulletsPtr->angle;
                    }
                    bulletsPtr->speed = bulletsPtr->dir_change__speed_arg;
                    local_10 = bulletsPtr->speed;
                    fVar4 = (float10)fcos((float10)bulletsPtr->angle);
                    fVar7 = (float10)fsin((float10)bulletsPtr->angle);
                    (bulletsPtr->velocity).x = (float)(fVar4 * (float10)local_10);
                    (bulletsPtr->velocity).y = (float)(fVar7 * (float10)local_10);
                    bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
                    if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                      bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((bulletsPtr->timer).current <
                    bulletsPtr->dir_change__interval * (bulletsPtr->dir_change__num_times + 1)) {
                  local_10 = bulletsPtr->speed -
                             ((((float)(bulletsPtr->timer).current + (bulletsPtr->timer).subFrame) -
                              (float)(bulletsPtr->dir_change__interval *
                                     bulletsPtr->dir_change__num_times)) * bulletsPtr->speed) /
                             (float)bulletsPtr->dir_change__interval;
                }
                else {
                  bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
                  if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                    bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xff7f;
                  }
                  velZ = Player::FUN_00428700(&g_Player,&bulletsPtr->pos);
                  bulletsPtr->angle = velZ + bulletsPtr->dir_change__rotation_arg;
                  bulletsPtr->speed = bulletsPtr->dir_change__speed_arg;
                  local_10 = bulletsPtr->speed;
                }
                fVar4 = (float10)fcos((float10)bulletsPtr->angle);
                fVar7 = (float10)fsin((float10)bulletsPtr->angle);
                (bulletsPtr->velocity).x = (float)(fVar4 * (float10)local_10);
                (bulletsPtr->velocity).y = (float)(fVar7 * (float10)local_10);
              }
            }
            else {
              if ((bulletsPtr->timer).current <
                  bulletsPtr->dir_change__interval * (bulletsPtr->dir_change__num_times + 1)) {
                local_10 = bulletsPtr->speed -
                           ((((float)(bulletsPtr->timer).current + (bulletsPtr->timer).subFrame) -
                            (float)(bulletsPtr->dir_change__interval *
                                   bulletsPtr->dir_change__num_times)) * bulletsPtr->speed) /
                           (float)bulletsPtr->dir_change__interval;
              }
              else {
                bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
                if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                  bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xfeff;
                }
                bulletsPtr->angle = bulletsPtr->dir_change__rotation_arg;
                bulletsPtr->speed = bulletsPtr->dir_change__speed_arg;
                local_10 = bulletsPtr->speed;
              }
              fVar4 = (float10)fcos((float10)bulletsPtr->angle);
              fVar7 = (float10)fsin((float10)bulletsPtr->angle);
              (bulletsPtr->velocity).x = (float)(fVar4 * (float10)local_10);
              (bulletsPtr->velocity).y = (float)(fVar7 * (float10)local_10);
            }
          }
          else {
            if ((bulletsPtr->timer).current <
                bulletsPtr->dir_change__interval * (bulletsPtr->dir_change__num_times + 1)) {
              local_10 = bulletsPtr->speed -
                         ((((float)(bulletsPtr->timer).current + (bulletsPtr->timer).subFrame) -
                          (float)(bulletsPtr->dir_change__interval *
                                 bulletsPtr->dir_change__num_times)) * bulletsPtr->speed) /
                         (float)bulletsPtr->dir_change__interval;
            }
            else {
              bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
              if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xffbf;
              }
              bulletsPtr->angle = bulletsPtr->angle + bulletsPtr->dir_change__rotation_arg;
              bulletsPtr->speed = bulletsPtr->dir_change__speed_arg;
              local_10 = bulletsPtr->speed;
            }
            fVar4 = (float10)fcos((float10)bulletsPtr->angle);
            fVar7 = (float10)fsin((float10)bulletsPtr->angle);
            (bulletsPtr->velocity).x = (float)(fVar4 * (float10)local_10);
            (bulletsPtr->velocity).y = (float)(fVar7 * (float10)local_10);
          }
        }
        velZ = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).z;
        velY = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).y;
        (bulletsPtr->pos).x =
             g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).x +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar5 = GameManager::IsInbounds
                          ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                           ((bulletsPtr->vms).vm0.sprite)->widthPx,
                           ((bulletsPtr->vms).vm0.sprite)->heightPx);
        if (iVar5 != 0) {
          bulletsPtr->field19_0x5c0 = 0;
LAB_00415b6c:
          if (bulletsPtr->field21_0x5c3 == 0) {
            local_8 = Player::FUN_00426df0
                                (&g_Player,&bulletsPtr->pos,
                                 (D3DXVECTOR3 *)&(bulletsPtr->vms).field5_0x550);
            if (local_8 == 1) {
              bulletsPtr->field21_0x5c3 = 1;
LAB_00415be8:
              local_8 = Player::CalcKillBoxCollision
                                  (&g_Player,&(bulletsPtr->pos).x,&(bulletsPtr->vms).field5_0x550);
              if ((local_8 != 0) && (bulletsPtr->state = 5, local_8 == 2)) {
                ItemManager::SpawnItem(&g_ItemManager,&bulletsPtr->pos,ITEM_POINT_BULLET,1);
              }
            }
            else if (local_8 == 2) {
              bulletsPtr->state = 5;
              ItemManager::SpawnItem(&g_ItemManager,&bulletsPtr->pos,ITEM_POINT_BULLET,1);
            }
          }
          else if (bulletsPtr->field21_0x5c3 == 1) goto LAB_00415be8;
          AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)bulletsPtr);
          goto switchD_00414a97_caseD_5;
        }
        if ((((((bulletsPtr->ex_flags & 0x40) == 0) && ((bulletsPtr->ex_flags & 0x100) == 0)) &&
             ((bulletsPtr->ex_flags & 0x80) == 0)) &&
            (((bulletsPtr->ex_flags & 0x400) == 0 && ((bulletsPtr->ex_flags & 0x800) == 0)))) &&
           (bulletsPtr->field19_0x5c0 == 0)) {
          pBVar6 = bulletsPtr;
          for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pBVar6->vms).vm0.rotation.x = 0.0;
            pBVar6 = (Bullet *)&(pBVar6->vms).vm0.rotation.y;
          }
        }
        else {
          bulletsPtr->field19_0x5c0 = bulletsPtr->field19_0x5c0 + 1;
          if (bulletsPtr->field19_0x5c0 < 0x100) goto LAB_00415b6c;
          pBVar6 = bulletsPtr;
          for (iVar5 = 0x171; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pBVar6->vms).vm0.rotation.x = 0.0;
            pBVar6 = (Bullet *)&(pBVar6->vms).vm0.rotation.y;
          }
        }
      }
LAB_00414a1a:
      bulletsPtr = bulletsPtr + 1;
    }
    local_2c = &this->lasers[0].vm0;
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (local_2c[2].currentTimeInScript.current != 0) {
        local_2c[2].angleVel.z =
             g_Supervisor.effectiveFramerateMultiplier * local_2c[2].scaleInterpFinalY +
             local_2c[2].angleVel.z;
        if (local_2c[2].scaleY < local_2c[2].angleVel.z - local_2c[2].angleVel.y) {
          local_2c[2].angleVel.y = local_2c[2].angleVel.z - local_2c[2].scaleY;
        }
        velZ = local_2c[2].angleVel.y;
        if (velZ < 0.0 != NAN(velZ)) {
          local_2c[2].angleVel.y = 0.0;
        }
        local_20.y = local_2c[2].scaleX / 2.0;
        local_20.x = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_38.x = (local_2c[2].angleVel.z - local_2c[2].angleVel.y) / 2.0 +
                     local_2c[2].angleVel.y + local_2c[2].rotation.x;
        local_38.y = local_2c[2].rotation.y;
        local_2c->scaleX = local_2c[2].scaleX / local_2c->sprite->widthPx;
        local_14 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_2c->scaleY = local_14 / local_2c->sprite->heightPx;
        (((AnmVm *)&local_2c->rotation)->rotation).z = 1.570796 - local_2c[2].angleVel.x;
        cVar3 = *(char *)local_2c[2].matrix.m[1];
        if (cVar3 == '\0') {
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
            local_20.x = local_14 / 2.0;
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
                      (&g_Player,&local_38,&local_20,&local_2c[2].rotation,local_2c[2].angleVel.x,
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
          if (cVar3 == '\x01') {
LAB_004161bf:
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,&local_2c[2].rotation,local_2c[2].angleVel.x,
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
          else if (cVar3 != '\x02') goto LAB_00416422;
          if ((*(ushort *)(local_2c[2].matrix.m[0] + 3) & 1) == 0) {
            if (0 < local_2c[2].currentTimeInScript.previous) {
              local_14 = local_2c[2].scaleX -
                         (((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]) *
                         local_2c[2].scaleX) / (float)local_2c[2].currentTimeInScript.previous;
              local_2c->scaleX = local_14 / 16.0;
              local_20.x = local_14 / 2.0;
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
                      (&g_Player,&local_38,&local_20,&local_2c[2].rotation,local_2c[2].angleVel.x,
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
    (this->time).previous = (this->time).current;
    Supervisor::TickTimer(&g_Supervisor,&(this->time).current,&(this->time).subFrame);
  }
  return 1;
}


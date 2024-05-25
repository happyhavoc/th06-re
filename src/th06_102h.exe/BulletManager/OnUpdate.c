
ChainCallbackResult BulletManager::OnUpdate(BulletManager *this)

{
  byte bVar1;
  float10 fVar2;
  int iVar3;
  Bullet *pBVar4;
  float10 fVar5;
  double dVar6;
  int local_260;
  D3DXVECTOR3 local_38;
  Laser *local_2c;
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
        iVar3 = AnmManager::ExecuteScript(g_AnmManager,&(bulletsPtr->sprites).spriteSpawnEffectFast)
        ;
        break;
      case 3:
        velZ = (bulletsPtr->velocity).z * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.4 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.4 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar3 = AnmManager::ExecuteScript
                          (g_AnmManager,&(bulletsPtr->sprites).spriteSpawnEffectNormal);
        break;
      case 4:
        velZ = (bulletsPtr->velocity).z * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.3333333 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar3 = AnmManager::ExecuteScript(g_AnmManager,&(bulletsPtr->sprites).spriteSpawnEffectSlow)
        ;
        break;
      case 5:
        velZ = (bulletsPtr->velocity).z * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        velY = (bulletsPtr->velocity).y * 0.5 * g_Supervisor.effectiveFramerateMultiplier;
        (bulletsPtr->pos).x =
             (bulletsPtr->velocity).x * 0.5 * g_Supervisor.effectiveFramerateMultiplier +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar3 = AnmManager::ExecuteScript
                          (g_AnmManager,&(bulletsPtr->sprites).spriteSpawnEffectDonut);
        if (iVar3 != 0) {
          pBVar4 = bulletsPtr;
                    /* memset(bulletsPtr, 0, 369) */
          for (iVar3 = 0x171; iVar3 != 0; iVar3 = iVar3 + -1) {
            (pBVar4->sprites).bulletSprite.rotation.x = 0.0;
            pBVar4 = (Bullet *)&(pBVar4->sprites).bulletSprite.rotation.y;
          }
          goto LAB_00414a1a;
        }
      default:
        goto switchD_00414a97_caseD_5;
      }
      if (iVar3 == 0) {
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
                  fVar2 = (float10)fcos((float10)bulletsPtr->angle);
                  fVar5 = (float10)fsin((float10)bulletsPtr->angle);
                  (bulletsPtr->velocity).x = (float)(fVar2 * (float10)velZ);
                  (bulletsPtr->velocity).y = (float)(fVar5 * (float10)velZ);
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
              dVar6 = atan2((double)(bulletsPtr->velocity).y,(double)(bulletsPtr->velocity).x);
              bulletsPtr->angle = (float)dVar6;
            }
            else {
              bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xffef;
            }
          }
          else if ((bulletsPtr->timer).current < 0x11) {
            local_10 = 5.0 - (((float)(bulletsPtr->timer).current + (bulletsPtr->timer).subFrame) *
                             5.0) / 16.0;
            velZ = local_10 + bulletsPtr->speed;
            fVar2 = (float10)fcos((float10)bulletsPtr->angle);
            fVar5 = (float10)fsin((float10)bulletsPtr->angle);
            (bulletsPtr->velocity).x = (float)(fVar2 * (float10)velZ);
            (bulletsPtr->velocity).y = (float)(fVar5 * (float10)velZ);
          }
          else {
            bulletsPtr->ex_flags = bulletsPtr->ex_flags ^ 1;
          }
          if ((bulletsPtr->ex_flags & 0x40) == 0) {
            if ((bulletsPtr->ex_flags & 0x100) == 0) {
              if ((bulletsPtr->ex_flags & 0x80) == 0) {
                if ((bulletsPtr->ex_flags & 0x400) == 0) {
                  if (((bulletsPtr->ex_flags & 0x800) != 0) &&
                     (iVar3 = GameManager::IsInBounds
                                        ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                                         ((bulletsPtr->sprites).bulletSprite.sprite)->widthPx,
                                         ((bulletsPtr->sprites).bulletSprite.sprite)->heightPx),
                     iVar3 == 0)) {
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
                    fVar2 = (float10)fcos((float10)bulletsPtr->angle);
                    fVar5 = (float10)fsin((float10)bulletsPtr->angle);
                    (bulletsPtr->velocity).x = (float)(fVar2 * (float10)local_10);
                    (bulletsPtr->velocity).y = (float)(fVar5 * (float10)local_10);
                    bulletsPtr->dir_change__num_times = bulletsPtr->dir_change__num_times + 1;
                    if (bulletsPtr->dir_change__max_times <= bulletsPtr->dir_change__num_times) {
                      bulletsPtr->ex_flags = bulletsPtr->ex_flags & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar3 = GameManager::IsInBounds
                                    ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                                     ((bulletsPtr->sprites).bulletSprite.sprite)->widthPx,
                                     ((bulletsPtr->sprites).bulletSprite.sprite)->heightPx);
                  if (iVar3 == 0) {
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
                    fVar2 = (float10)fcos((float10)bulletsPtr->angle);
                    fVar5 = (float10)fsin((float10)bulletsPtr->angle);
                    (bulletsPtr->velocity).x = (float)(fVar2 * (float10)local_10);
                    (bulletsPtr->velocity).y = (float)(fVar5 * (float10)local_10);
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
                fVar2 = (float10)fcos((float10)bulletsPtr->angle);
                fVar5 = (float10)fsin((float10)bulletsPtr->angle);
                (bulletsPtr->velocity).x = (float)(fVar2 * (float10)local_10);
                (bulletsPtr->velocity).y = (float)(fVar5 * (float10)local_10);
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
              fVar2 = (float10)fcos((float10)bulletsPtr->angle);
              fVar5 = (float10)fsin((float10)bulletsPtr->angle);
              (bulletsPtr->velocity).x = (float)(fVar2 * (float10)local_10);
              (bulletsPtr->velocity).y = (float)(fVar5 * (float10)local_10);
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
            fVar2 = (float10)fcos((float10)bulletsPtr->angle);
            fVar5 = (float10)fsin((float10)bulletsPtr->angle);
            (bulletsPtr->velocity).x = (float)(fVar2 * (float10)local_10);
            (bulletsPtr->velocity).y = (float)(fVar5 * (float10)local_10);
          }
        }
        velZ = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).z;
        velY = g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).y;
        (bulletsPtr->pos).x =
             g_Supervisor.effectiveFramerateMultiplier * (bulletsPtr->velocity).x +
             (bulletsPtr->pos).x;
        (bulletsPtr->pos).y = velY + (bulletsPtr->pos).y;
        (bulletsPtr->pos).z = velZ + (bulletsPtr->pos).z;
        iVar3 = GameManager::IsInBounds
                          ((bulletsPtr->pos).x,(bulletsPtr->pos).y,
                           ((bulletsPtr->sprites).bulletSprite.sprite)->widthPx,
                           ((bulletsPtr->sprites).bulletSprite.sprite)->heightPx);
        if (iVar3 != 0) {
          bulletsPtr->unk_5c0 = 0;
LAB_00415b6c:
          if (bulletsPtr->is_grazed == 0) {
            local_8 = Player::FUN_00426df0
                                (&g_Player,&bulletsPtr->pos,&(bulletsPtr->sprites).grazeSize);
            if (local_8 == 1) {
              bulletsPtr->is_grazed = 1;
LAB_00415be8:
              local_8 = Player::CalcKillBoxCollision
                                  (&g_Player,&bulletsPtr->pos,&(bulletsPtr->sprites).grazeSize);
              if ((local_8 != 0) && (bulletsPtr->state = 5, local_8 == 2)) {
                ItemManager::SpawnItem(&g_ItemManager,&bulletsPtr->pos,ITEM_POINT_BULLET,1);
              }
            }
            else if (local_8 == 2) {
              bulletsPtr->state = 5;
              ItemManager::SpawnItem(&g_ItemManager,&bulletsPtr->pos,ITEM_POINT_BULLET,1);
            }
          }
          else if (bulletsPtr->is_grazed == 1) goto LAB_00415be8;
          AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)bulletsPtr);
          goto switchD_00414a97_caseD_5;
        }
        if ((((((bulletsPtr->ex_flags & 0x40) == 0) && ((bulletsPtr->ex_flags & 0x100) == 0)) &&
             ((bulletsPtr->ex_flags & 0x80) == 0)) &&
            (((bulletsPtr->ex_flags & 0x400) == 0 && ((bulletsPtr->ex_flags & 0x800) == 0)))) &&
           (bulletsPtr->unk_5c0 == 0)) {
          pBVar4 = bulletsPtr;
          for (iVar3 = 0x171; iVar3 != 0; iVar3 = iVar3 + -1) {
            (pBVar4->sprites).bulletSprite.rotation.x = 0.0;
            pBVar4 = (Bullet *)&(pBVar4->sprites).bulletSprite.rotation.y;
          }
        }
        else {
          bulletsPtr->unk_5c0 = bulletsPtr->unk_5c0 + 1;
          if (bulletsPtr->unk_5c0 < 0x100) goto LAB_00415b6c;
          pBVar4 = bulletsPtr;
          for (iVar3 = 0x171; iVar3 != 0; iVar3 = iVar3 + -1) {
            (pBVar4->sprites).bulletSprite.rotation.x = 0.0;
            pBVar4 = (Bullet *)&(pBVar4->sprites).bulletSprite.rotation.y;
          }
        }
      }
LAB_00414a1a:
      bulletsPtr = bulletsPtr + 1;
    }
    local_2c = this->lasers;
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (local_2c->in_use != 0) {
        local_2c->end_offset =
             g_Supervisor.effectiveFramerateMultiplier * local_2c->speed + local_2c->end_offset;
        if (local_2c->start_length < local_2c->end_offset - local_2c->start_offset) {
          local_2c->start_offset = local_2c->end_offset - local_2c->start_length;
        }
        if (local_2c->start_offset < 0.0 != NAN(local_2c->start_offset)) {
          local_2c->start_offset = 0.0;
        }
        local_20.y = local_2c->width / 2.0;
        local_20.x = local_2c->end_offset - local_2c->start_offset;
        local_38.x = (local_2c->end_offset - local_2c->start_offset) / 2.0 + local_2c->start_offset
                     + (local_2c->pos).x;
        local_38.y = (local_2c->pos).y;
        (local_2c->vm0).scaleX = local_2c->width / ((local_2c->vm0).sprite)->widthPx;
        local_14 = local_2c->end_offset - local_2c->start_offset;
        (local_2c->vm0).scaleY = local_14 / ((local_2c->vm0).sprite)->heightPx;
        (local_2c->vm0).rotation.z = 1.570796 - local_2c->angle;
        bVar1 = local_2c->state;
        if (bVar1 == 0) {
          if ((local_2c->flags & 1U) == 0) {
            if (local_2c->start_time < 0x1f) {
              local_260 = local_2c->start_time;
            }
            else {
              local_260 = 0x1e;
            }
            if (local_2c->start_time - local_260 < (local_2c->timer).current) {
              local_14 = (((float)(local_2c->timer).current + (local_2c->timer).subFrame) *
                         local_2c->width) / (float)local_2c->start_time;
            }
            else {
              local_14 = 1.2;
            }
            (local_2c->vm0).scaleX = local_14 / 16.0;
            local_20.x = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((((float)(local_2c->timer).current + (local_2c->timer).subFrame) *
                               255.0) / (float)local_2c->start_time);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (local_2c->vm0).color.color = local_28 << 0x18;
          }
          if (local_2c->graze_delay <= (local_2c->timer).current) {
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,&local_2c->pos,local_2c->angle,
                       (uint)((local_2c->timer).current % 0xc == 0));
          }
          if (local_2c->start_time <= (local_2c->timer).current) {
            (local_2c->timer).current = 0;
            (local_2c->timer).subFrame = 0.0;
            (local_2c->timer).previous = -999;
            local_2c->state = local_2c->state + 1;
            goto LAB_004161bf;
          }
        }
        else {
          if (bVar1 == 1) {
LAB_004161bf:
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,&local_2c->pos,local_2c->angle,
                       (uint)((local_2c->timer).current % 0xc == 0));
            if ((local_2c->timer).current < local_2c->duration) goto LAB_00416422;
            (local_2c->timer).current = 0;
            (local_2c->timer).subFrame = 0.0;
            (local_2c->timer).previous = -999;
            local_2c->state = local_2c->state + 1;
            if (local_2c->end_time == 0) {
              local_2c->in_use = 0;
              goto LAB_00415e08;
            }
          }
          else if (bVar1 != 2) goto LAB_00416422;
          if ((local_2c->flags & 1U) == 0) {
            if (0 < local_2c->end_time) {
              local_14 = local_2c->width -
                         (((float)(local_2c->timer).current + (local_2c->timer).subFrame) *
                         local_2c->width) / (float)local_2c->end_time;
              (local_2c->vm0).scaleX = local_14 / 16.0;
              local_20.x = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((((float)(local_2c->timer).current + (local_2c->timer).subFrame) *
                               255.0) / (float)local_2c->start_time);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (local_2c->vm0).color.color = local_28 << 0x18;
          }
          if ((local_2c->timer).current < local_2c->graze_interval) {
            Player::FUN_00427190
                      (&g_Player,&local_38,&local_20,&local_2c->pos,local_2c->angle,
                       (uint)((local_2c->timer).current % 0xc == 0));
          }
          if (local_2c->end_time <= (local_2c->timer).current) {
            local_2c->in_use = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= local_2c->start_offset) {
          local_2c->in_use = 0;
        }
        (local_2c->timer).previous = (local_2c->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(local_2c->timer).current,&(local_2c->timer).subFrame);
        AnmManager::ExecuteScript(g_AnmManager,&local_2c->vm0);
      }
LAB_00415e08:
      local_2c = local_2c + 1;
    }
    (this->time).previous = (this->time).current;
    Supervisor::TickTimer(&g_Supervisor,&(this->time).current,&(this->time).subFrame);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


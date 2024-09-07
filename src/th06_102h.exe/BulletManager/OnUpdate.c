
ChainCallbackResult th06::BulletManager::OnUpdate(BulletManager *this)

{
  byte bVar1;
  float10 fVar2;
  int iVar3;
  Bullet *pBVar4;
  float10 fVar5;
  double dVar6;
  int local_260;
  D3DXVECTOR3 *velocity;
  D3DXVECTOR3 displacementTemp;
  f32 state2VelocityMul;
  D3DXVECTOR3 displacement;
  D3DXVECTOR3 local_38;
  Laser *curLaser;
  int local_28;
  Bullet *bulletsPtr;
  D3DXVECTOR3 local_20;
  float local_14;
  float local_10;
  int local_c;
  BOOL local_8;
  float velY;
  float velZ;
  
  bulletsPtr = this->bullets;
  if ((char)g_GameManager.isTimeStopped == NULL) {
    ItemManager::OnUpdate(&g_ItemManager);
    this->bullet_count = 0;
    for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
      if (bulletsPtr->state == 0) goto bulletLoopContinue;
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
          goto bulletLoopContinue;
        }
      default:
        goto break1_label;
      }
      if (iVar3 == 0) {
break1_label:
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
                                        (&g_GameManager,(bulletsPtr->pos).x,(bulletsPtr->pos).y,
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
                                    (&g_GameManager,(bulletsPtr->pos).x,(bulletsPtr->pos).y,
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
                  velZ = Player::AngleToPlayer(&g_Player,&bulletsPtr->pos);
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
                          (&g_GameManager,(bulletsPtr->pos).x,(bulletsPtr->pos).y,
                           ((bulletsPtr->sprites).bulletSprite.sprite)->widthPx,
                           ((bulletsPtr->sprites).bulletSprite.sprite)->heightPx);
        if (iVar3 != 0) {
          bulletsPtr->unk_5c0 = 0;
LAB_00415b6c:
          if (bulletsPtr->is_grazed == 0) {
            local_8 = Player::CheckGraze(&g_Player,&bulletsPtr->pos,&(bulletsPtr->sprites).grazeSize
                                        );
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
          goto break1_label;
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
bulletLoopContinue:
      bulletsPtr = bulletsPtr + 1;
    }
    curLaser = this->lasers;
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (curLaser->in_use != 0) {
        curLaser->end_offset =
             g_Supervisor.effectiveFramerateMultiplier * curLaser->speed + curLaser->end_offset;
        if (curLaser->start_length < curLaser->end_offset - curLaser->start_offset) {
          curLaser->start_offset = curLaser->end_offset - curLaser->start_length;
        }
        if (curLaser->start_offset < 0.0 != NAN(curLaser->start_offset)) {
          curLaser->start_offset = 0.0;
        }
        local_20.y = curLaser->width / 2.0;
        local_20.x = curLaser->end_offset - curLaser->start_offset;
        local_38.x = (curLaser->end_offset - curLaser->start_offset) / 2.0 + curLaser->start_offset
                     + (curLaser->pos).x;
        local_38.y = (curLaser->pos).y;
        (curLaser->vm0).scaleX = curLaser->width / ((curLaser->vm0).sprite)->widthPx;
        local_14 = curLaser->end_offset - curLaser->start_offset;
        (curLaser->vm0).scaleY = local_14 / ((curLaser->vm0).sprite)->heightPx;
        (curLaser->vm0).rotation.z = 1.570796 - curLaser->angle;
        bVar1 = curLaser->state;
        if (bVar1 == 0) {
          if ((curLaser->flags & 1U) == 0) {
            if (curLaser->start_time < 0x1f) {
              local_260 = curLaser->start_time;
            }
            else {
              local_260 = 0x1e;
            }
            if (curLaser->start_time - local_260 < (curLaser->timer).current) {
              local_14 = (((float)(curLaser->timer).current + (curLaser->timer).subFrame) *
                         curLaser->width) / (float)curLaser->start_time;
            }
            else {
              local_14 = 1.2;
            }
            (curLaser->vm0).scaleX = local_14 / 16.0;
            local_20.x = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((((float)(curLaser->timer).current + (curLaser->timer).subFrame) *
                               255.0) / (float)curLaser->start_time);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (curLaser->vm0).color.color = local_28 << 0x18;
          }
          if (curLaser->graze_delay <= (curLaser->timer).current) {
            Player::CalcLaserHitbox
                      (&g_Player,&local_38,&local_20,&curLaser->pos,curLaser->angle,
                       (uint)((curLaser->timer).current % 0xc == 0));
          }
          if (curLaser->start_time <= (curLaser->timer).current) {
            (curLaser->timer).current = 0;
            (curLaser->timer).subFrame = 0.0;
            (curLaser->timer).previous = -999;
            curLaser->state = curLaser->state + 1;
            goto LAB_004161bf;
          }
        }
        else {
          if (bVar1 == 1) {
LAB_004161bf:
            Player::CalcLaserHitbox
                      (&g_Player,&local_38,&local_20,&curLaser->pos,curLaser->angle,
                       (uint)((curLaser->timer).current % 0xc == 0));
            if ((curLaser->timer).current < curLaser->duration) goto LAB_00416422;
            (curLaser->timer).current = 0;
            (curLaser->timer).subFrame = 0.0;
            (curLaser->timer).previous = -999;
            curLaser->state = curLaser->state + 1;
            if (curLaser->end_time == 0) {
              curLaser->in_use = 0;
              goto LAB_00415e08;
            }
          }
          else if (bVar1 != 2) goto LAB_00416422;
          if ((curLaser->flags & 1U) == 0) {
            if (0 < curLaser->end_time) {
              local_14 = curLaser->width -
                         (((float)(curLaser->timer).current + (curLaser->timer).subFrame) *
                         curLaser->width) / (float)curLaser->end_time;
              (curLaser->vm0).scaleX = local_14 / 16.0;
              local_20.x = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((((float)(curLaser->timer).current + (curLaser->timer).subFrame) *
                               255.0) / (float)curLaser->start_time);
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            (curLaser->vm0).color.color = local_28 << 0x18;
          }
          if ((curLaser->timer).current < curLaser->graze_interval) {
            Player::CalcLaserHitbox
                      (&g_Player,&local_38,&local_20,&curLaser->pos,curLaser->angle,
                       (uint)((curLaser->timer).current % 0xc == 0));
          }
          if (curLaser->end_time <= (curLaser->timer).current) {
            curLaser->in_use = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= curLaser->start_offset) {
          curLaser->in_use = 0;
        }
        (curLaser->timer).previous = (curLaser->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(curLaser->timer).current,&(curLaser->timer).subFrame);
        AnmManager::ExecuteScript(g_AnmManager,&curLaser->vm0);
      }
LAB_00415e08:
      curLaser = curLaser + 1;
    }
    (this->time).previous = (this->time).current;
    Supervisor::TickTimer(&g_Supervisor,&(this->time).current,&(this->time).subFrame);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


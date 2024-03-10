
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 EclManager::run_ecl(Enemy *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined2 uVar6;
  AnmManager *pAVar7;
  uint uVar8;
  uint *puVar9;
  void *pvVar10;
  Effect *pEVar11;
  int *piVar12;
  float *pfVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  EnemyEclContext *pEVar17;
  EnemyEclContext *pEVar18;
  int *piVar19;
  float10 fVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  int local_2dc;
  byte *local_2cc;
  byte *local_2c0;
  int *local_2bc;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  uint local_2a0;
  float local_29c;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  uint local_184;
  short local_144;
  short local_13c;
  float local_bc;
  int local_b8;
  Enemy *local_b4;
  int local_b0;
  D3DXVECTOR3 local_ac;
  short local_a0;
  undefined2 local_9e;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  Catk *local_80;
  int local_7c;
  uint csum;
  uint local_74;
  Catk *local_70;
  int *local_6c;
  int local_68;
  int *local_64;
  EnemyLaserShooter *local_60;
  int *local_5c;
  EnemyBulletShooter *local_58;
  int *local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
LAB_004074b1:
  while (local_20 = (int *)(param_1->current_context).current_instr, -1 < param_1->run_interrupt) {
LAB_0040954d:
    (param_1->current_context).current_instr =
         (void *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
    if ((param_1->flags3 >> 2 & 1) == 0) {
      pEVar17 = &param_1->current_context;
      pEVar18 = param_1->saved_context_stack + param_1->stack_depth;
      for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
        pEVar18->current_instr = pEVar17->current_instr;
        pEVar17 = (EnemyEclContext *)&pEVar17->time;
        pEVar18 = (EnemyEclContext *)&pEVar18->time;
      }
    }
    FUN_00407440(&g_EclManager,&param_1->current_context,
                 param_1->interrupts[param_1->run_interrupt * 2 + 1]);
    if (param_1->stack_depth < 7) {
      param_1->stack_depth = param_1->stack_depth + 1;
    }
    param_1->run_interrupt = -1;
  }
LAB_004074ce:
  pAVar7 = g_AnmManager;
  if ((param_1->current_context).time.current != *local_20) {
    bVar14 = param_1->flags1 & 3;
    if (bVar14 == 1) {
      fVar23 = add_normalize_angle(param_1->angle,
                                   g_Supervisor.effectiveFramerateMultiplier *
                                   param_1->angular_velocity);
      param_1->angle = fVar23;
      param_1->speed =
           g_Supervisor.effectiveFramerateMultiplier * param_1->acceleration + param_1->speed;
      fVar23 = param_1->speed;
      fVar21 = (float10)fcos((float10)param_1->angle);
      fVar20 = (float10)fsin((float10)param_1->angle);
      (param_1->axis_speed).x = (float)(fVar21 * (float10)fVar23);
      (param_1->axis_speed).y = (float)(fVar20 * (float10)fVar23);
      (param_1->axis_speed).z = 0.0;
    }
    else if (bVar14 == 2) {
      ZunTimer::Decrement(&param_1->move_interp_timer,1);
      local_bc = ((float)(param_1->move_interp_timer).current +
                 (param_1->move_interp_timer).subFrame) / (float)param_1->move_interp_start_time;
      if (1.0 <= local_bc) {
        local_bc = 1.0;
      }
      switch(param_1->flags1 >> 2 & 7) {
      case 0:
        local_bc = 1.0 - local_bc;
        break;
      case 1:
        local_bc = 1.0 - local_bc * local_bc;
        break;
      case 2:
        local_bc = 1.0 - local_bc * local_bc * local_bc * local_bc;
        break;
      case 3:
        local_bc = (1.0 - local_bc) * (1.0 - local_bc);
        break;
      case 4:
        local_bc = 1.0 - local_bc;
        local_bc = local_bc * local_bc * local_bc * local_bc;
      }
      fVar23 = (param_1->move_interp).z;
      fVar22 = (param_1->move_interp).y;
      fVar3 = (param_1->move_interp_start_pos).z;
      fVar4 = (param_1->move_interp_start_pos).y;
      fVar1 = (param_1->position).z;
      fVar2 = (param_1->position).y;
      (param_1->axis_speed).x =
           (local_bc * (param_1->move_interp).x + (param_1->move_interp_start_pos).x) -
           (param_1->position).x;
      (param_1->axis_speed).y = (local_bc * fVar22 + fVar4) - fVar2;
      (param_1->axis_speed).z = (local_bc * fVar23 + fVar3) - fVar1;
      fVar21 = (float10)FUN_0045be40((double)(param_1->axis_speed).y,(double)(param_1->axis_speed).x
                                    );
      param_1->angle = (float)fVar21;
      if ((param_1->move_interp_timer).current < 1) {
        param_1->flags1 = param_1->flags1 & 0xfc;
        fVar23 = (param_1->move_interp_start_pos).z;
        fVar22 = (param_1->move_interp).z;
        fVar3 = (param_1->move_interp_start_pos).y;
        fVar4 = (param_1->move_interp).y;
        (param_1->position).x = (param_1->move_interp_start_pos).x + (param_1->move_interp).x;
        (param_1->position).y = fVar3 + fVar4;
        (param_1->position).z = fVar23 + fVar22;
        (param_1->axis_speed).x = 0.0;
        (param_1->axis_speed).y = 0.0;
        (param_1->axis_speed).z = 0.0;
      }
    }
    if (0 < param_1->life) {
      if (0 < param_1->shoot_interval) {
        (param_1->shoot_interval_timer).previous = (param_1->shoot_interval_timer).current;
        Supervisor::TickTimer
                  (&g_Supervisor,&(param_1->shoot_interval_timer).current,
                   &(param_1->shoot_interval_timer).subFrame);
        if (param_1->shoot_interval <= (param_1->shoot_interval_timer).current) {
          fVar23 = (param_1->position).z;
          fVar22 = (param_1->shoot_offset).z;
          fVar3 = (param_1->position).y;
          fVar4 = (param_1->shoot_offset).y;
          (param_1->bullet_props).position.x = (param_1->position).x + (param_1->shoot_offset).x;
          (param_1->bullet_props).position.y = fVar3 + fVar4;
          (param_1->bullet_props).position.z = fVar23 + fVar22;
          BulletManager::FUN_004145c0(&g_BulletManager,&param_1->bullet_props);
          (param_1->shoot_interval_timer).current = 0;
          (param_1->shoot_interval_timer).subFrame = 0.0;
          (param_1->shoot_interval_timer).previous = -999;
        }
      }
      pAVar7 = g_AnmManager;
      if (-1 < param_1->anm_ex_left) {
        bVar14 = 0;
        fVar23 = (param_1->axis_speed).x;
        if (fVar23 < 0.0 == NAN(fVar23)) {
          if (0.0 < (param_1->axis_speed).x) {
            bVar14 = 2;
          }
        }
        else {
          bVar14 = 1;
        }
        if (param_1->anm_ex_flags != bVar14) {
          if (bVar14 == 0) {
            if (param_1->anm_ex_flags == 0xff) {
              sVar5 = param_1->anm_ex_defaults;
              local_268 = sVar5 + 0x100;
              (param_1->primary_vm).anmFileIndex = local_268;
              AnmManager::SetAndExecuteScript
                        (pAVar7,&param_1->primary_vm,pAVar7->scripts[sVar5 + 0x100]);
            }
            else if (param_1->anm_ex_flags == 1) {
              sVar5 = param_1->anm_ex_far_left;
              local_270 = sVar5 + 0x100;
              (param_1->primary_vm).anmFileIndex = local_270;
              AnmManager::SetAndExecuteScript
                        (pAVar7,&param_1->primary_vm,pAVar7->scripts[sVar5 + 0x100]);
            }
            else {
              sVar5 = param_1->anm_ex_far_right;
              local_278 = sVar5 + 0x100;
              (param_1->primary_vm).anmFileIndex = local_278;
              AnmManager::SetAndExecuteScript
                        (pAVar7,&param_1->primary_vm,pAVar7->scripts[sVar5 + 0x100]);
            }
          }
          else if (bVar14 == 1) {
            sVar5 = param_1->anm_ex_left;
            local_280 = sVar5 + 0x100;
            (param_1->primary_vm).anmFileIndex = local_280;
            AnmManager::SetAndExecuteScript
                      (pAVar7,&param_1->primary_vm,pAVar7->scripts[sVar5 + 0x100]);
          }
          else if (bVar14 == 2) {
            sVar5 = param_1->anm_ex_right;
            local_288 = sVar5 + 0x100;
            (param_1->primary_vm).anmFileIndex = local_288;
            AnmManager::SetAndExecuteScript
                      (pAVar7,&param_1->primary_vm,pAVar7->scripts[sVar5 + 0x100]);
          }
          param_1->anm_ex_flags = bVar14;
        }
      }
      if ((param_1->current_context).func_set_func != (void *)0x0) {
        (*(code *)(param_1->current_context).func_set_func)(param_1);
      }
    }
    (param_1->current_context).current_instr = local_20;
    (param_1->current_context).time.previous = (param_1->current_context).time.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->current_context).time.current,
               &(param_1->current_context).time.subFrame);
    return 0;
  }
  if (((uint)*(byte *)((int)local_20 + 9) & 1 << ((byte)g_GameManager.difficulty & 0x1f)) == 0)
  goto switchD_00407544_caseD_7f;
  local_1c = (float *)(local_20 + 3);
  switch(*(undefined2 *)(local_20 + 1)) {
  case 1:
    return 0xffffffff;
  case 2:
    goto switchD_00407544_caseD_2;
  case 3:
    piVar12 = Enemy::get_var(param_1,local_20 + 5,(EclValueType *)0x0);
    local_14 = (float)(*piVar12 + -1);
    Enemy::set_var(param_1,local_1c[2],(int *)&local_14);
    fVar23 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    Enemy::set_var(param_1,local_20[3],local_20 + 4);
    break;
  case 6:
    puVar9 = (uint *)Enemy::get_var(param_1,local_20 + 4,(EclValueType *)0x0);
    local_24 = *puVar9;
    if (local_24 == 0) {
      local_29c = 0.0;
    }
    else {
      uVar8 = Rng::GetRandomU32(&g_Rng);
      local_29c = (float)(uVar8 % local_24);
    }
    local_14 = local_29c;
    Enemy::set_var(param_1,local_20[3],(int *)&local_14);
    break;
  case 7:
    puVar9 = (uint *)Enemy::get_var(param_1,local_20 + 4,(EclValueType *)0x0);
    local_28 = *puVar9;
    piVar12 = Enemy::get_var(param_1,(int *)(local_1c + 2),(EclValueType *)0x0);
    local_2c = *piVar12;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = Rng::GetRandomU32(&g_Rng);
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = (float)(local_2a0 + local_2c);
    Enemy::set_var(param_1,local_20[3],(int *)&local_14);
    break;
  case 8:
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_30 = *pfVar13;
    local_18 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    local_18 = local_18 * local_30;
    Enemy::set_var(param_1,local_20[3],(int *)&local_18);
    break;
  case 9:
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_34 = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 2,(undefined4 *)0x0);
    local_38 = *pfVar13;
    fVar23 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    local_18 = fVar23 * local_34 + local_38;
    Enemy::set_var(param_1,local_20[3],(int *)&local_18);
    break;
  case 10:
    Enemy::set_var(param_1,local_20[3],(int *)&param_1->position);
    break;
  case 0xb:
    Enemy::set_var(param_1,local_20[3],(int *)&(param_1->position).y);
    break;
  case 0xc:
    Enemy::set_var(param_1,local_20[3],(int *)&(param_1->position).z);
    break;
  case 0xd:
  case 0x14:
    Enemy::math_add(param_1,local_20[3],(float *)(local_20 + 4),(float *)(local_20 + 5));
    break;
  case 0xe:
  case 0x15:
    Enemy::math_sub(param_1);
    break;
  case 0xf:
  case 0x16:
    Enemy::math_mul(param_1);
    break;
  case 0x10:
  case 0x17:
    Enemy::math_div(param_1,local_20[3],(float *)(local_20 + 4),(float *)(local_20 + 5));
    break;
  case 0x11:
  case 0x18:
    Enemy::math_mod(param_1);
    break;
  case 0x12:
    local_3c = Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    Enemy::math_atan2(param_1,local_20[3],local_20 + 4);
    break;
  case 0x1a:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    local_18 = *pfVar13;
    local_18 = add_normalize_angle(local_18,0.0);
    Enemy::set_var(param_1,local_20[3],(int *)&local_18);
    break;
  case 0x1b:
    piVar12 = Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    local_48 = *piVar12;
    piVar12 = Enemy::get_var(param_1,local_20 + 4,(EclValueType *)0x0);
    local_44 = *piVar12;
    if (local_48 == local_44) {
      local_2a4 = 0;
    }
    else {
      local_2a4 = (uint)(local_44 <= local_48) * 2 + -1;
    }
    (param_1->current_context).compare_register = local_2a4;
    break;
  case 0x1c:
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 3),(undefined4 *)0x0);
    local_4c = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_50 = *pfVar13;
    if ((NAN(local_4c) || NAN(local_50)) == (local_4c == local_50)) {
      if (local_4c < local_50 == (NAN(local_4c) || NAN(local_50))) {
        local_2ac = 1;
      }
      else {
        local_2ac = -1;
      }
      local_2a8 = local_2ac;
    }
    else {
      local_2a8 = 0;
    }
    (param_1->current_context).compare_register = local_2a8;
    break;
  case 0x1d:
    if (-1 < (param_1->current_context).compare_register) break;
    goto switchD_00407544_caseD_2;
  case 0x1e:
    if (0 < (param_1->current_context).compare_register) break;
    goto switchD_00407544_caseD_2;
  case 0x1f:
    if ((param_1->current_context).compare_register != 0) break;
    goto switchD_00407544_caseD_2;
  case 0x20:
    fVar23 = (float)(param_1->current_context).compare_register;
joined_r0x00407ab4:
    if ((int)fVar23 < 1) break;
    goto switchD_00407544_caseD_2;
  case 0x21:
    if ((param_1->current_context).compare_register < 0) break;
    goto switchD_00407544_caseD_2;
  case 0x22:
    if ((param_1->current_context).compare_register == 0) break;
switchD_00407544_caseD_2:
    (param_1->current_context).time.current = local_20[3];
    local_20 = (int *)((int)local_20 + (int)local_1c[1]);
    goto LAB_004074ce;
  case 0x23:
    goto switchD_00407544_caseD_23;
  case 0x24:
    goto switchD_00407544_caseD_24;
  case 0x25:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if ((int)local_14 < (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x26:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if ((int)local_14 <= (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x27:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if (local_14 == local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x28:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if ((int)local_1c[4] < (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x29:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if ((int)local_1c[4] <= (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x2a:
    pfVar13 = (float *)Enemy::get_var(param_1,local_20 + 6,(EclValueType *)0x0);
    local_14 = *pfVar13;
    if (local_14 != local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x2b:
    (param_1->position).x = (float)local_20[3];
    (param_1->position).y = (float)local_20[4];
    (param_1->position).z = (float)local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->position).x,(undefined4 *)0x0);
    (param_1->position).x = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->position).y,(undefined4 *)0x0);
    (param_1->position).y = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->position).z,(undefined4 *)0x0);
    (param_1->position).z = *pfVar13;
    Enemy::FUN_00412240(param_1);
    break;
  case 0x2c:
    (param_1->axis_speed).x = (float)local_20[3];
    (param_1->axis_speed).y = (float)local_20[4];
    (param_1->axis_speed).z = (float)local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->axis_speed).x,(undefined4 *)0x0);
    (param_1->axis_speed).x = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->axis_speed).y,(undefined4 *)0x0);
    (param_1->axis_speed).y = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&(param_1->axis_speed).z,(undefined4 *)0x0);
    (param_1->axis_speed).z = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc;
    break;
  case 0x2d:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&local_10,(undefined4 *)0x0);
    param_1->angle = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&local_c,(undefined4 *)0x0);
    param_1->speed = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc | 1;
    break;
  case 0x2e:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&local_10,(undefined4 *)0x0);
    param_1->angular_velocity = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc | 1;
    break;
  case 0x2f:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&local_10,(undefined4 *)0x0);
    param_1->speed = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc | 1;
    break;
  case 0x30:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar13 = Enemy::get_var_float(param_1,&local_10,(undefined4 *)0x0);
    param_1->acceleration = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc | 1;
    break;
  case 0x31:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar23 = local_c - local_10;
    fVar22 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    param_1->angle = fVar22 * fVar23 + local_10;
    break;
  case 0x32:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar23 = local_c - local_10;
    fVar22 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    param_1->angle = fVar22 * fVar23 + local_10;
    if ((param_1->position).x < (param_1->lower_move_limit).x + 96.0) {
      if (param_1->angle <= 1.570796) {
        if (param_1->angle < -1.570796 != NAN(param_1->angle)) {
          param_1->angle = -3.141593 - param_1->angle;
        }
      }
      else {
        param_1->angle = 3.141593 - param_1->angle;
      }
    }
    fVar22 = (param_1->upper_move_limit).x - 96.0;
    fVar23 = (param_1->position).x;
    if (fVar22 < fVar23 != (NAN(fVar22) || NAN(fVar23))) {
      if ((param_1->angle < 1.570796 == NAN(param_1->angle)) || (param_1->angle < 0.0)) {
        if ((-1.570796 < param_1->angle) && (param_1->angle < 0.0 != (param_1->angle == 0.0))) {
          param_1->angle = -3.141593 - param_1->angle;
        }
      }
      else {
        param_1->angle = 3.141593 - param_1->angle;
      }
    }
    if (((param_1->position).y < (param_1->lower_move_limit).y + 48.0) &&
       (param_1->angle < 0.0 != NAN(param_1->angle))) {
      param_1->angle = -param_1->angle;
    }
    fVar22 = (param_1->upper_move_limit).y - 48.0;
    fVar23 = (param_1->position).y;
    if ((fVar22 < fVar23 != (NAN(fVar22) || NAN(fVar23))) && (0.0 < param_1->angle)) {
      param_1->angle = -param_1->angle;
    }
    break;
  case 0x33:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar23 = Player::FUN_00428700(&g_Player,&(param_1->position).x);
    param_1->angle = fVar23 + local_10;
    pfVar13 = Enemy::get_var_float(param_1,&local_c,(undefined4 *)0x0);
    param_1->speed = *pfVar13;
    param_1->flags1 = param_1->flags1 & 0xfc | 1;
    break;
  case 0x34:
    FUN_0040abe0();
    param_1->flags1 = param_1->flags1 & 0xe3 | 4;
    break;
  case 0x35:
    FUN_0040abe0();
    param_1->flags1 = param_1->flags1 & 0xe3 | 8;
    break;
  case 0x36:
    FUN_0040abe0();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0xc;
    break;
  case 0x37:
    FUN_0040abe0();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0x10;
    break;
  case 0x38:
    FUN_0040ad10();
    param_1->flags1 = param_1->flags1 & 0xe3;
    break;
  case 0x39:
    FUN_0040ad10();
    param_1->flags1 = param_1->flags1 & 0xe3 | 4;
    break;
  case 0x3a:
    FUN_0040ad10();
    param_1->flags1 = param_1->flags1 & 0xe3 | 8;
    break;
  case 0x3b:
    FUN_0040ad10();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0xc;
    break;
  case 0x3c:
    FUN_0040ad10();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0x10;
    break;
  case 0x3d:
    FUN_0040ae80();
    param_1->flags1 = param_1->flags1 & 0xe3 | 4;
    break;
  case 0x3e:
    FUN_0040ae80();
    param_1->flags1 = param_1->flags1 & 0xe3 | 8;
    break;
  case 0x3f:
    FUN_0040ae80();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0xc;
    break;
  case 0x40:
    FUN_0040ae80();
    param_1->flags1 = param_1->flags1 & 0xe3 | 0x10;
    break;
  case 0x41:
    (param_1->lower_move_limit).x = (FLOAT)local_20[3];
    (param_1->lower_move_limit).y = (FLOAT)local_20[4];
    (param_1->upper_move_limit).x = (FLOAT)local_20[5];
    (param_1->upper_move_limit).y = (FLOAT)local_20[6];
    param_1->flags3 = param_1->flags3 | 1;
    break;
  case 0x42:
    param_1->flags3 = param_1->flags3 & 0xfe;
    break;
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    local_54 = local_20 + 3;
    local_58 = &param_1->bullet_props;
    local_58->sprite = *(ushort *)local_54;
    (param_1->bullet_props).aim_mode = *(short *)(local_20 + 1) - 0x43;
    piVar12 = Enemy::get_var(param_1,local_20 + 4,(EclValueType *)0x0);
    local_58->count1 = *(ushort *)piVar12;
    iVar15 = ((int)(short)param_1->bullet_rank_amount1_high -
             (int)(short)param_1->bullet_rank_amount1_low) * g_GameManager.rank;
    local_58->count1 =
         (short)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count1 + param_1->bullet_rank_amount1_low;
    if ((short)local_58->count1 < 1) {
      local_58->count1 = 1;
    }
    piVar12 = Enemy::get_var(param_1,local_54 + 2,(EclValueType *)0x0);
    local_58->count2 = *(ushort *)piVar12;
    iVar15 = ((int)(short)param_1->bullet_rank_amount2_high -
             (int)(short)param_1->bullet_rank_amount2_low) * g_GameManager.rank;
    local_58->count2 =
         (short)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count2 + param_1->bullet_rank_amount2_low;
    if ((short)local_58->count2 < 1) {
      local_58->count2 = 1;
    }
    fVar23 = (param_1->position).z;
    fVar22 = (param_1->shoot_offset).z;
    fVar3 = (param_1->position).y;
    fVar4 = (param_1->shoot_offset).y;
    (local_58->position).x = (param_1->position).x + (param_1->shoot_offset).x;
    (local_58->position).y = fVar3 + fVar4;
    (local_58->position).z = fVar23 + fVar22;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_54 + 5),(undefined4 *)0x0);
    local_58->angle1 = *pfVar13;
    fVar23 = add_normalize_angle(local_58->angle1,0.0);
    local_58->angle1 = fVar23;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_54 + 3),(undefined4 *)0x0);
    local_58->speed1 = *pfVar13;
    if ((NAN(local_58->speed1) == (local_58->speed1 == 0.0)) &&
       (local_58->speed1 =
             ((param_1->bullet_rank_speed_high - param_1->bullet_rank_speed_low) *
             (float)g_GameManager.rank) / 32.0 + param_1->bullet_rank_speed_low + local_58->speed1,
       local_58->speed1 < 0.3 != NAN(local_58->speed1))) {
      local_58->speed1 = 0.3;
    }
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_54 + 6),(undefined4 *)0x0);
    local_58->angle2 = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_54 + 4),(undefined4 *)0x0);
    local_58->speed2 = *pfVar13;
    local_58->speed2 =
         (((param_1->bullet_rank_speed_high - param_1->bullet_rank_speed_low) *
          (float)g_GameManager.rank) / 32.0 + param_1->bullet_rank_speed_low) / 2.0 +
         local_58->speed2;
    if (local_58->speed2 < 0.3 != NAN(local_58->speed2)) {
      local_58->speed2 = 0.3;
    }
    *(undefined2 *)&local_58->field_0x4a = 0;
    local_58->flags = local_54[7];
    local_14 = (float)(int)*(short *)((int)local_54 + 2);
    piVar12 = Enemy::get_var(param_1,(int *)&local_14,(EclValueType *)0x0);
    local_58->color = *(ushort *)piVar12;
    if ((param_1->flags1 >> 5 & 1) == 0) {
      BulletManager::FUN_004145c0(&g_BulletManager,local_58);
    }
    break;
  case 0x4c:
    param_1->shoot_interval = local_20[3];
    iVar15 = param_1->shoot_interval / 5;
    iVar16 = (-param_1->shoot_interval / 5 - iVar15) * g_GameManager.rank;
    param_1->shoot_interval =
         ((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) + iVar15 + param_1->shoot_interval;
    (param_1->shoot_interval_timer).current = 0;
    (param_1->shoot_interval_timer).subFrame = 0.0;
    (param_1->shoot_interval_timer).previous = -999;
    break;
  case 0x4d:
    param_1->shoot_interval = local_20[3];
    iVar15 = param_1->shoot_interval / 5;
    iVar16 = (-param_1->shoot_interval / 5 - iVar15) * g_GameManager.rank;
    param_1->shoot_interval =
         ((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) + iVar15 + param_1->shoot_interval;
    if (param_1->shoot_interval != 0) {
      uVar8 = param_1->shoot_interval;
      if (uVar8 == 0) {
        local_184 = 0;
      }
      else {
        local_184 = Rng::GetRandomU32(&g_Rng);
        local_184 = local_184 % uVar8;
      }
      (param_1->shoot_interval_timer).current = local_184;
      (param_1->shoot_interval_timer).subFrame = 0.0;
      (param_1->shoot_interval_timer).previous = -999;
    }
    break;
  case 0x4e:
    param_1->flags1 = param_1->flags1 | 0x20;
    break;
  case 0x4f:
    param_1->flags1 = param_1->flags1 & 0xdf;
    break;
  case 0x50:
    fVar23 = (param_1->position).z;
    fVar22 = (param_1->shoot_offset).z;
    fVar3 = (param_1->position).y;
    fVar4 = (param_1->shoot_offset).y;
    (param_1->bullet_props).position.x = (param_1->position).x + (param_1->shoot_offset).x;
    (param_1->bullet_props).position.y = fVar3 + fVar4;
    (param_1->bullet_props).position.z = fVar23 + fVar22;
    BulletManager::FUN_004145c0(&g_BulletManager,&param_1->bullet_props);
    break;
  case 0x51:
    pfVar13 = Enemy::get_var_float(param_1,local_1c,(undefined4 *)0x0);
    (param_1->shoot_offset).x = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 1,(undefined4 *)0x0);
    (param_1->shoot_offset).y = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 2,(undefined4 *)0x0);
    (param_1->shoot_offset).z = *pfVar13;
    break;
  case 0x52:
    piVar12 = Enemy::get_var(param_1,(int *)local_1c,(EclValueType *)0x0);
    (param_1->bullet_props).ex_ints[0] = *piVar12;
    piVar12 = Enemy::get_var(param_1,(int *)(local_1c + 1),(EclValueType *)0x0);
    (param_1->bullet_props).ex_ints[1] = *piVar12;
    piVar12 = Enemy::get_var(param_1,(int *)(local_1c + 2),(EclValueType *)0x0);
    (param_1->bullet_props).ex_ints[2] = *piVar12;
    piVar12 = Enemy::get_var(param_1,(int *)(local_1c + 3),(EclValueType *)0x0);
    (param_1->bullet_props).ex_ints[3] = *piVar12;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 4,(undefined4 *)0x0);
    (param_1->bullet_props).ex_floats[0] = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 5,(undefined4 *)0x0);
    (param_1->bullet_props).ex_floats[1] = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 6,(undefined4 *)0x0);
    (param_1->bullet_props).ex_floats[2] = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,local_1c + 7,(undefined4 *)0x0);
    (param_1->bullet_props).ex_floats[3] = *pfVar13;
    break;
  case 0x53:
    BulletManager::FUN_00414340(&g_BulletManager);
    break;
  case 0x54:
    if (local_20[3] < 0) {
      (param_1->bullet_props).flags = (param_1->bullet_props).flags & 0xfffffdff;
    }
    else {
      (param_1->bullet_props).sfx = local_20[3];
      (param_1->bullet_props).flags = (param_1->bullet_props).flags | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = local_20 + 3;
    local_60 = &param_1->laser_props;
    fVar23 = (param_1->position).z;
    fVar22 = (param_1->shoot_offset).z;
    fVar3 = (param_1->position).y;
    fVar4 = (param_1->shoot_offset).y;
    (param_1->laser_props).position.x = (param_1->position).x + (param_1->shoot_offset).x;
    (param_1->laser_props).position.y = fVar3 + fVar4;
    (param_1->laser_props).position.z = fVar23 + fVar22;
    local_60->sprite = *(ushort *)local_64;
    (param_1->laser_props).color = *(ushort *)((int)local_20 + 0xe);
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_60->angle = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_64 + 2),(undefined4 *)0x0);
    local_60->speed = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_64 + 3),(undefined4 *)0x0);
    local_60->start_offset = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_64 + 4),(undefined4 *)0x0);
    local_60->end_offset = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,(float *)(local_64 + 5),(undefined4 *)0x0);
    local_60->start_length = *pfVar13;
    local_60->width = (float)local_64[6];
    local_60->start_time = local_64[7];
    local_60->duration = local_64[8];
    local_60->stop_time = local_64[9];
    local_60->graze_delay = local_64[10];
    local_60->graze_distance = local_64[0xb];
    local_60->field18_0x4c = local_64[0xc];
    if (*(short *)(local_20 + 1) == 0x56) {
      local_60->type = 0;
    }
    else {
      local_60->type = 1;
    }
    pvVar10 = (void *)FUN_00414670();
    param_1->lasers[param_1->laser_store] = pvVar10;
    break;
  case 0x57:
    piVar12 = Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    param_1->laser_store = *piVar12;
    break;
  case 0x58:
    if (param_1->lasers[local_20[3]] != (void *)0x0) {
      pvVar10 = param_1->lasers[local_20[3]];
      pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
      *(float *)((int)param_1->lasers[local_20[3]] + 0x22c) =
           *(float *)((int)pvVar10 + 0x22c) + *pfVar13;
    }
    break;
  case 0x59:
    if (param_1->lasers[local_20[3]] != (void *)0x0) {
      fVar23 = Player::FUN_00428700(&g_Player,(float *)((int)param_1->lasers[local_20[3]] + 0x220));
      pfVar13 = Enemy::get_var_float(param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
      *(float *)((int)param_1->lasers[local_20[3]] + 0x22c) = fVar23 + *pfVar13;
    }
    break;
  case 0x5a:
    if (param_1->lasers[local_20[3]] != (void *)0x0) {
      fVar23 = (param_1->position).z;
      fVar22 = (float)local_20[6];
      fVar3 = (param_1->position).y;
      fVar4 = (float)local_20[5];
      pvVar10 = param_1->lasers[local_20[3]];
      *(float *)((int)pvVar10 + 0x220) = (param_1->position).x + (float)local_20[4];
      *(float *)((int)pvVar10 + 0x224) = fVar3 + fVar4;
      *(float *)((int)pvVar10 + 0x228) = fVar23 + fVar22;
    }
    break;
  case 0x5b:
    if ((param_1->lasers[local_20[3]] == (void *)0x0) ||
       (*(int *)((int)param_1->lasers[local_20[3]] + 600) == 0)) {
      (param_1->current_context).compare_register = 1;
    }
    else {
      (param_1->current_context).compare_register = 0;
    }
    break;
  case 0x5c:
    if (((param_1->lasers[local_20[3]] != (void *)0x0) &&
        (*(int *)((int)param_1->lasers[local_20[3]] + 600) != 0)) &&
       (*(byte *)((int)param_1->lasers[local_20[3]] + 0x26c) < 2)) {
      *(undefined *)((int)param_1->lasers[local_20[3]] + 0x26c) = 2;
      pvVar10 = param_1->lasers[local_20[3]];
      *(undefined4 *)((int)pvVar10 + 0x264) = 0;
      *(undefined4 *)((int)pvVar10 + 0x260) = 0;
      *(undefined4 *)((int)pvVar10 + 0x25c) = 0xfffffc19;
    }
    break;
  case 0x5d:
    FUN_00417bfd((int)*(short *)(local_20 + 3),local_20 + 4);
    BOOL_005a5f8c = 1;
    DAT_005a5f90 = 1;
    DAT_005a5f98 = (int)*(short *)((int)local_20 + 0xe);
    DAT_005a5f94 = INT_ARRAY_00476120[DAT_005a5f98];
    BulletManager::FUN_00414340(&g_BulletManager);
    g_Stage.spellcardState = RUNNING;
    g_Stage.ticksSinceSpellcardStarted = 0;
    param_1->bullet_rank_speed_low = -0.5;
    param_1->bullet_rank_speed_high = 0.5;
    param_1->bullet_rank_amount1_low = 0;
    param_1->bullet_rank_amount1_high = 0;
    param_1->bullet_rank_amount2_low = 0;
    param_1->bullet_rank_amount2_high = 0;
    iVar15 = DAT_005a5f98;
    iVar16 = DAT_005a5f98 * 0x40;
    local_70 = g_GameManager.catk + DAT_005a5f98;
    csum = 0;
    if (g_GameManager.field7_0x1c == 0) {
      local_2bc = local_20 + 4;
      local_2c0 = g_GameManager.catk[DAT_005a5f98].name;
      do {
        bVar14 = *(byte *)local_2bc;
        *local_2c0 = bVar14;
        local_2bc = (int *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (bVar14 != 0);
      local_2cc = g_GameManager.catk[iVar15].name;
      do {
        bVar14 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (bVar14 != 0);
      for (local_74 = (int)local_2cc - (iVar16 + 0x69bce9); 0 < (int)local_74;
          local_74 = local_74 - 1) {
        csum = csum + (int)(char)local_70->name[local_74 - 1];
      }
      if ((uint)g_GameManager.catk[iVar15].name_csum != (csum & 0xff)) {
        g_GameManager.catk[iVar15].unk_3e = 0;
        g_GameManager.catk[iVar15].num_successes = 0;
        g_GameManager.catk[iVar15].name_csum = (byte)csum;
      }
      g_GameManager.catk[iVar15].unk_c = DAT_005a5f94;
      if ((ushort)g_GameManager.catk[iVar15].num_successes < 9999) {
        g_GameManager.catk[iVar15].num_successes = g_GameManager.catk[iVar15].num_successes + 1;
      }
    }
    break;
  case 0x5e:
    if (DAT_005a5f90 != 0) {
      FUN_0041732c();
      if ((DAT_005a5f90 == 1) &&
         (local_7c = BulletManager::FUN_00414360(&g_BulletManager,0x3200,1), BOOL_005a5f8c != 0)) {
        local_80 = g_GameManager.catk + DAT_005a5f98;
        if ((int)DAT_005a5f94 < 500000) {
          local_2dc = (int)DAT_005a5f94 / 10;
        }
        else {
          local_2dc = 50000;
        }
        local_88 = local_2dc;
        local_7c = DAT_005a5f94 + (int)(DAT_005a5f94 * g_Gui.ecl_spellcard_related) / 10;
        FUN_00417458(&g_Gui,local_7c);
        g_GameManager.score = g_GameManager.score + local_7c;
        if (g_GameManager.field7_0x1c == 0) {
          local_80->unk_3e = local_80->unk_3e + 1;
          for (local_84 = 4; 0 < local_84; local_84 = local_84 + -1) {
            local_80->name[local_84 + -5] = local_80->name[local_84 + -6];
          }
          local_80->unk_13 = g_GameManager.shottype + g_GameManager.character * '\x02';
        }
        g_GameManager.field10_0x28 = g_GameManager.field10_0x28 + 1;
      }
      DAT_005a5f90 = 0;
    }
    g_Stage.spellcardState = NOT_RUNNING;
    break;
  case 0x5f:
    piVar12 = local_20 + 3;
    piVar19 = &local_b0;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar19 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar19 = piVar19 + 1;
    }
    pfVar13 = Enemy::get_var_float(param_1,&local_ac.x,(undefined4 *)0x0);
    local_ac.x = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&local_ac.y,(undefined4 *)0x0);
    local_ac.y = *pfVar13;
    pfVar13 = Enemy::get_var_float(param_1,&local_ac.z,(undefined4 *)0x0);
    local_ac.z = *pfVar13;
    EnemyManager::SpawnEnemy
              ((EnemyManager *)&g_EnemyManager,(short)local_b0,&local_ac,local_a0,(char)local_9e,
               local_9c);
    break;
  case 0x60:
    local_b4 = Enemy_ARRAY_004b8898;
    for (local_b8 = 0; local_b8 < 0x100; local_b8 = local_b8 + 1) {
      if (((((char)local_b4->flags1 < '\0') && ((local_b4->flags2 >> 3 & 1) == 0)) &&
          (local_b4->life = 0, (local_b4->flags2 & 1) == 0)) &&
         (iVar15._0_2_ = local_b4->death_callback_sub, iVar15._2_2_ = local_b4->interrupts[0],
         -1 < iVar15)) {
        FUN_00407440(&g_EclManager,&local_b4->current_context,local_b4->death_callback_sub);
        local_b4->death_callback_sub = -1;
        local_b4->interrupts[0] = -1;
      }
      local_b4 = local_b4 + 1;
    }
    break;
  case 0x61:
    iVar15 = local_20[3];
    local_13c = (short)iVar15 + 0x100;
    (param_1->primary_vm).anmFileIndex = local_13c;
    AnmManager::SetAndExecuteScript(pAVar7,&param_1->primary_vm,pAVar7->scripts[iVar15 + 0x100]);
    break;
  case 0x62:
    param_1->anm_ex_defaults = *(short *)(local_20 + 3);
    param_1->anm_ex_far_left = *(short *)((int)local_20 + 0xe);
    param_1->anm_ex_far_right = *(short *)(local_20 + 4);
    param_1->anm_ex_left = *(short *)((int)local_20 + 0x12);
    param_1->anm_ex_right = *(short *)(local_20 + 5);
    param_1->anm_ex_flags = 0xff;
    break;
  case 99:
    if (7 < local_20[3]) {
      DebugPrint2("error : sub anim overflow\n");
    }
    pAVar7 = g_AnmManager;
    fVar23 = local_1c[1];
    local_144 = SUB42(fVar23,0) + 0x100;
    iVar15 = local_20[3];
    param_1->vms[iVar15].anmFileIndex = local_144;
    AnmManager::SetAndExecuteScript
              (pAVar7,param_1->vms + iVar15,pAVar7->scripts[(int)fVar23 + 0x100]);
    break;
  case 100:
    local_5c = local_20 + 3;
    param_1->death_anm1 = *(byte *)local_5c;
    param_1->death_anm2 = *(byte *)((int)local_20 + 0xd);
    param_1->death_anm3 = *(byte *)((int)local_20 + 0xe);
    break;
  case 0x65:
    if (local_20[3] < 0) {
      g_Gui.boss_present = false;
      *(undefined4 *)(&DAT_005a5f60 + (uint)param_1->boss_id * 4) = 0;
      param_1->flags2 = param_1->flags2 & 0xf7;
    }
    else {
      *(Enemy **)(&DAT_005a5f60 + local_20[3] * 4) = param_1;
      g_Gui.boss_present = true;
      g_Gui.boss_health_bar1 = 1.0;
      param_1->flags2 = param_1->flags2 | 8;
      param_1->boss_id = *(byte *)(local_20 + 3);
    }
    break;
  case 0x66:
    local_6c = local_20 + 3;
    pEVar11 = (Effect *)
              EffectManager::FUN_0040ef50
                        (&g_EffectManager,0xd,&param_1->position,1,
                         *(D3DCOLOR *)(PTR_DAT_00476438 + *local_6c * 4));
    param_1->effect_array[param_1->effect_idx] = pEVar11;
    pEVar11 = param_1->effect_array[param_1->effect_idx];
    (pEVar11->pos2).x = (float)local_6c[1];
    (pEVar11->pos2).y = (float)local_6c[2];
    (pEVar11->pos2).z = (float)local_6c[3];
    param_1->effect_distance = (float)local_6c[4];
    param_1->effect_idx = param_1->effect_idx + 1;
    break;
  case 0x67:
    (param_1->hitbox_dimensions).x = (float)local_20[3];
    (param_1->hitbox_dimensions).y = (float)local_20[4];
    (param_1->hitbox_dimensions).z = (float)local_20[5];
    break;
  case 0x68:
    param_1->flags2 = param_1->flags2 & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x69:
    param_1->flags2 = param_1->flags2 & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
    break;
  case 0x6a:
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,local_20[3]);
    break;
  case 0x6b:
    param_1->flags2 = param_1->flags2 & 0x1f | *(char *)(local_20 + 3) << 5;
    break;
  case 0x6c:
    uVar6 = *(undefined2 *)((int)(local_20 + 3) + 2);
    param_1->death_callback_sub = *(undefined2 *)(local_20 + 3);
    param_1->interrupts[0] = uVar6;
    break;
  case 0x6d:
    *(float *)(param_1->interrupts + local_20[4] * 2 + 1) = *local_1c;
    break;
  case 0x6e:
    param_1->run_interrupt = local_20[3];
    goto LAB_0040954d;
  case 0x6f:
    param_1->max_life = local_20[3];
    param_1->life = param_1->max_life;
    break;
  case 0x70:
    (param_1->boss_timer).current = local_20[3];
    (param_1->boss_timer).subFrame = 0.0;
    (param_1->boss_timer).previous = -999;
    break;
  case 0x71:
    param_1->life_callback_threshold = local_20[3];
    break;
  case 0x72:
    param_1->life_callback_sub = local_20[3];
    break;
  case 0x73:
    param_1->timer_callback_threshold = local_20[3];
    (param_1->boss_timer).current = 0;
    (param_1->boss_timer).subFrame = 0.0;
    (param_1->boss_timer).previous = -999;
    break;
  case 0x74:
    param_1->timer_callback_sub = local_20[3];
    break;
  case 0x75:
    param_1->flags2 = param_1->flags2 & 0xfe | *(byte *)(local_20 + 3) & 1;
    break;
  case 0x76:
    EffectManager::FUN_0040ef50
              (&g_EffectManager,local_20[3],&param_1->position,local_20[4],local_20[5]);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < local_20[3]; local_8c = local_8c + 1) {
      local_98 = (param_1->position).x;
      local_94 = (param_1->position).y;
      local_90 = (param_1->position).z;
      fVar23 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_98 = (fVar23 * 144.0 - 72.0) + local_98;
      fVar23 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_94 = (fVar23 * 144.0 - 72.0) + local_94;
      if (g_GameManager.current_power < 0x80) {
        FUN_0041f290();
      }
      else {
        FUN_0041f290();
      }
    }
    break;
  case 0x78:
    param_1->flags3 = param_1->flags3 & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x79:
    (*(code *)(&ECL_EX_INSN)[local_20[3]])(param_1,(int)local_20);
    break;
  case 0x7a:
    if (local_20[3] < 0) {
      (param_1->current_context).func_set_func = (void *)0x0;
    }
    else {
      (param_1->current_context).func_set_func = (&ECL_EX_INSN)[local_20[3]];
    }
    break;
  case 0x7b:
    piVar12 = Enemy::get_var(param_1,local_20 + 3,(EclValueType *)0x0);
    ZunTimer::Increment(&(param_1->current_context).time,*piVar12);
    break;
  case 0x7c:
    FUN_0041f290();
    break;
  case 0x7d:
    g_Stage.unpauseFlag = '\x01';
    break;
  case 0x7e:
    g_Gui.ecl_set_lives = local_20[3];
    g_GameManager.field58_0x1a6c = g_GameManager.field58_0x1a6c + 0x708;
    break;
  case 0x80:
    (param_1->primary_vm).pendingInterrupt = *(short *)(local_20 + 3);
    break;
  case 0x81:
    param_1->vms[(int)*local_1c].pendingInterrupt = *(short *)(local_20 + 4);
    break;
  case 0x82:
    param_1->flags3 = param_1->flags3 & 0xfb | (*(byte *)(local_20 + 3) & 1) << 2;
    break;
  case 0x83:
    param_1->bullet_rank_speed_low = *local_1c;
    param_1->bullet_rank_speed_high = (float)local_20[4];
    param_1->bullet_rank_amount1_low = *(ushort *)(local_20 + 5);
    param_1->bullet_rank_amount1_high = *(ushort *)(local_20 + 6);
    param_1->bullet_rank_amount2_low = *(ushort *)(local_20 + 7);
    param_1->bullet_rank_amount2_high = *(ushort *)(local_20 + 8);
    break;
  case 0x84:
    param_1->flags3 = param_1->flags3 & 0xf7 | (*(byte *)(local_20 + 3) & 1) << 3;
    break;
  case 0x85:
    param_1->timer_callback_sub = *(int *)&param_1->death_callback_sub;
    (param_1->boss_timer).current = 0;
    (param_1->boss_timer).subFrame = 0.0;
    (param_1->boss_timer).previous = -999;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      param_1->lasers[local_68] = (void *)0x0;
    }
    break;
  case 0x87:
    param_1->flags3 = param_1->flags3 & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
  }
switchD_00407544_caseD_7f:
  local_20 = (int *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  goto LAB_004074ce;
switchD_00407544_caseD_24:
  if ((param_1->flags3 >> 2 & 1) != 0) {
    DebugPrint2("error : no Stack Ret\n");
  }
  param_1->stack_depth = param_1->stack_depth + -1;
  pEVar17 = param_1->saved_context_stack + param_1->stack_depth;
  pEVar18 = &param_1->current_context;
  for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
    pEVar18->current_instr = pEVar17->current_instr;
    pEVar17 = (EnemyEclContext *)&pEVar17->time;
    pEVar18 = (EnemyEclContext *)&pEVar18->time;
  }
  goto LAB_004074b1;
switchD_00407544_caseD_23:
  local_14 = (float)local_20[3];
  (param_1->current_context).current_instr =
       (void *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  if ((param_1->flags3 >> 2 & 1) == 0) {
    pEVar17 = &param_1->current_context;
    pEVar18 = param_1->saved_context_stack + param_1->stack_depth;
    for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
      pEVar18->current_instr = pEVar17->current_instr;
      pEVar17 = (EnemyEclContext *)&pEVar17->time;
      pEVar18 = (EnemyEclContext *)&pEVar18->time;
    }
  }
  FUN_00407440(&g_EclManager,&param_1->current_context,local_14._0_2_);
  if (((param_1->flags3 >> 2 & 1) == 0) && (param_1->stack_depth < 7)) {
    param_1->stack_depth = param_1->stack_depth + 1;
  }
  (param_1->current_context).var0 = local_20[4];
  (param_1->current_context).float0 = (float)local_20[5];
  goto LAB_004074b1;
}


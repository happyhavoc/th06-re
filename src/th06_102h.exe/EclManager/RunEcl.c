
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ZunResult __thiscall EclManager::RunEcl(EclManager *this,Enemy *enemy)

{
  uint uVar10;
  uint *puVar11;
  int iVar1;
  Laser *pvVar12;
  Effect *pEVar13;
  float *pfVar15;
  byte bVar16;
  int iVar17;
  EclRawInstrArgs *pEVar2;
  EnemyEclContext *pEVar19;
  EnemyEclContext *pEVar20;
  int *pfVar20;
  float10 fVar21;
  float fVar5;
  float fVar6;
  double dVar7;
  int local_2dc;
  byte *local_2cc;
  byte *local_2c0;
  float *local_2bc;
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
  short local_9e;
  int local_9c;
  D3DXVECTOR3 local_98;
  int local_8c;
  int local_88;
  int local_84;
  Catk *local_80;
  int score_increese;
  uint csum;
  uint local_74;
  Catk *local_70;
  EclRawInstrArgs *local_6c;
  int local_68;
  EclRawInstrArgs *local_64;
  EnemyLaserShooter *local_60;
  EclRawInstrArgs *local_5c;
  EnemyBulletShooter *local_58;
  EclRawInstrArgs *local_54;
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
  EclRawInstr *instruction;
  EclRawInstrArgs *args;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  EnemyEclContext *current_context;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar8;
  AnmManager *main_anm_manager;
  short sVar7;
  
LAB_004074b1:
  while (instruction = (enemy->current_context).current_instr, -1 < enemy->run_interrupt) {
LAB_0040954d:
    (enemy->current_context).current_instr =
         (EclRawInstr *)((int)&instruction->time + (int)instruction->offset_to_next);
    if ((enemy->flags3 >> 2 & 1) == 0) {
      current_context = &enemy->current_context;
      pEVar19 = enemy->saved_context_stack + enemy->stack_depth;
      for (iVar17 = 0x13; iVar17 != 0; iVar17 = iVar17 + -1) {
        pEVar19->current_instr = current_context->current_instr;
        current_context = (EnemyEclContext *)&current_context->time;
        pEVar19 = (EnemyEclContext *)&pEVar19->time;
      }
    }
    CallEclSub(&g_EclManager,&enemy->current_context,
               *(short *)(enemy->interrupts + enemy->run_interrupt));
    if (enemy->stack_depth < 7) {
      enemy->stack_depth = enemy->stack_depth + 1;
    }
    enemy->run_interrupt = -1;
  }
LAB_004074ce:
  main_anm_manager = g_AnmManager;
  if ((enemy->current_context).time.current != instruction->time) {
    bVar16 = enemy->flags1 & 3;
    if (bVar16 == 1) {
      fVar6 = AddNormalizeAngle(enemy->angle,
                                g_Supervisor.effectiveFramerateMultiplier * enemy->angular_velocity)
      ;
      enemy->angle = fVar6;
      enemy->speed = g_Supervisor.effectiveFramerateMultiplier * enemy->acceleration + enemy->speed;
      fVar6 = enemy->speed;
      fVar8 = (float10)fcos((float10)enemy->angle);
      fVar21 = (float10)fsin((float10)enemy->angle);
      (enemy->axis_speed).x = (float)(fVar8 * (float10)fVar6);
      (enemy->axis_speed).y = (float)(fVar21 * (float10)fVar6);
      (enemy->axis_speed).z = 0.0;
    }
    else if (bVar16 == 2) {
      ZunTimer::Decrement(&enemy->move_interp_timer,1);
      local_bc = ((float)(enemy->move_interp_timer).current + (enemy->move_interp_timer).subFrame) /
                 (float)enemy->move_interp_start_time;
      if (1.0 <= local_bc) {
        local_bc = 1.0;
      }
      switch(enemy->flags1 >> 2 & 0b00000111) {
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
      fVar6 = (enemy->move_interp).z;
      fVar5 = (enemy->move_interp).y;
      fVar3 = (enemy->move_interp_start_pos).z;
      fVar4 = (enemy->move_interp_start_pos).y;
      fVar1 = (enemy->position).z;
      fVar2 = (enemy->position).y;
      (enemy->axis_speed).x =
           (local_bc * (enemy->move_interp).x + (enemy->move_interp_start_pos).x) -
           (enemy->position).x;
      (enemy->axis_speed).y = (local_bc * fVar5 + fVar4) - fVar2;
      (enemy->axis_speed).z = (local_bc * fVar6 + fVar3) - fVar1;
      dVar7 = atan2((double)(enemy->axis_speed).y,(double)(enemy->axis_speed).x);
      enemy->angle = (float)dVar7;
      if ((enemy->move_interp_timer).current < 1) {
        enemy->flags1 = enemy->flags1 & 0xfc;
        fVar6 = (enemy->move_interp_start_pos).z;
        fVar5 = (enemy->move_interp).z;
        fVar3 = (enemy->move_interp_start_pos).y;
        fVar4 = (enemy->move_interp).y;
        (enemy->position).x = (enemy->move_interp_start_pos).x + (enemy->move_interp).x;
        (enemy->position).y = fVar3 + fVar4;
        (enemy->position).z = fVar6 + fVar5;
        (enemy->axis_speed).x = 0.0;
        (enemy->axis_speed).y = 0.0;
        (enemy->axis_speed).z = 0.0;
      }
    }
    if (0 < enemy->life) {
      if (0 < enemy->shoot_interval) {
        (enemy->shoot_interval_timer).previous = (enemy->shoot_interval_timer).current;
        Supervisor::TickTimer
                  (&g_Supervisor,&(enemy->shoot_interval_timer).current,
                   &(enemy->shoot_interval_timer).subFrame);
        if (enemy->shoot_interval <= (enemy->shoot_interval_timer).current) {
          fVar6 = (enemy->position).z;
          fVar5 = (enemy->shoot_offset).z;
          fVar3 = (enemy->position).y;
          fVar4 = (enemy->shoot_offset).y;
          (enemy->bullet_props).position.x = (enemy->position).x + (enemy->shoot_offset).x;
          (enemy->bullet_props).position.y = fVar3 + fVar4;
          (enemy->bullet_props).position.z = fVar6 + fVar5;
          BulletManager::SpawnBulletPattern(&g_BulletManager,&enemy->bullet_props);
          (enemy->shoot_interval_timer).current = 0;
          (enemy->shoot_interval_timer).subFrame = 0.0;
          (enemy->shoot_interval_timer).previous = -999;
        }
      }
      main_anm_manager = g_AnmManager;
      if (-1 < enemy->anm_ex_left) {
        bVar16 = 0;
        fVar6 = (enemy->axis_speed).x;
        if (fVar6 < 0.0 == NAN(fVar6)) {
          if (0.0 < (enemy->axis_speed).x) {
            bVar16 = 2;
          }
        }
        else {
          bVar16 = 1;
        }
        if (enemy->anm_ex_flags != bVar16) {
          if (bVar16 == 0) {
            if (enemy->anm_ex_flags == 0xff) {
              sVar7 = enemy->anm_ex_defaults;
              local_268 = sVar7 + 0x100;
              (enemy->primary_vm).anmFileIndex = local_268;
              AnmManager::SetAndExecuteScript
                        (main_anm_manager,&enemy->primary_vm,
                         main_anm_manager->scripts[sVar7 + 0x100]);
            }
            else if (enemy->anm_ex_flags == 1) {
              sVar7 = enemy->anm_ex_far_left;
              local_270 = sVar7 + 0x100;
              (enemy->primary_vm).anmFileIndex = local_270;
              AnmManager::SetAndExecuteScript
                        (main_anm_manager,&enemy->primary_vm,
                         main_anm_manager->scripts[sVar7 + 0x100]);
            }
            else {
              sVar7 = enemy->anm_ex_far_right;
              local_278 = sVar7 + 0x100;
              (enemy->primary_vm).anmFileIndex = local_278;
              AnmManager::SetAndExecuteScript
                        (main_anm_manager,&enemy->primary_vm,
                         main_anm_manager->scripts[sVar7 + 0x100]);
            }
          }
          else if (bVar16 == 1) {
            sVar7 = enemy->anm_ex_left;
            local_280 = sVar7 + 0x100;
            (enemy->primary_vm).anmFileIndex = local_280;
            AnmManager::SetAndExecuteScript
                      (main_anm_manager,&enemy->primary_vm,main_anm_manager->scripts[sVar7 + 0x100])
            ;
          }
          else if (bVar16 == 2) {
            sVar7 = enemy->anm_ex_right;
            local_288 = sVar7 + 0x100;
            (enemy->primary_vm).anmFileIndex = local_288;
            AnmManager::SetAndExecuteScript
                      (main_anm_manager,&enemy->primary_vm,main_anm_manager->scripts[sVar7 + 0x100])
            ;
          }
          enemy->anm_ex_flags = bVar16;
        }
      }
      if ((enemy->current_context).func_set_func != (void *)0x0) {
        (*(code *)(enemy->current_context).func_set_func)(enemy);
      }
    }
    (enemy->current_context).current_instr = instruction;
    (enemy->current_context).time.previous = (enemy->current_context).time.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(enemy->current_context).time.current,
               &(enemy->current_context).time.subFrame);
    return ZUN_SUCCESS;
  }
  if (((uint)instruction->skip_insn_on_difficulty & 1 << ((byte)g_GameManager.difficulty & 0x1f)) ==
      0) goto end_of_loop;
  args = &instruction->args;
  switch(instruction->opcode) {
  case 1:
    return ZUN_ERROR;
  case 2:
    goto switchD_00407544_caseD_2;
  case 3:
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_2,(EclValueType *)0x0);
    local_14 = (float)(*pfVar20 - 1);
    Enemy::SetVar(enemy,(EclVarId)args->float_var_2,&local_14);
    fVar6 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&(instruction->args).float_var_1);
    break;
  case 6:
    puVar11 = (uint *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_1,
                                    (EclValueType *)0x0);
    local_24 = *puVar11;
    if (local_24 == 0) {
      local_29c = 0.0;
    }
    else {
      uVar10 = Rng::GetRandomU32(&g_Rng);
      local_29c = (float)(uVar10 % local_24);
    }
    local_14 = local_29c;
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&local_14);
    break;
  case 7:
    puVar11 = (uint *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_1,
                                    (EclValueType *)0x0);
    local_28 = *puVar11;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&args->float_var_2,(EclValueType *)0x0);
    local_2c = *pfVar20;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = Rng::GetRandomU32(&g_Rng);
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = (float)(local_2a0 + local_2c);
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&local_14);
    break;
  case 8:
    pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_30 = *pfVar15;
    fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    local_18 = (int)(fVar6 * local_30);
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&local_18);
    break;
  case 9:
    pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_34 = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_2,(EclValueType *)0x0);
    local_38 = *pfVar15;
    fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    local_18 = (int)(fVar6 * local_34 + local_38);
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&local_18);
    break;
  case 10:
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&enemy->position);
    break;
  case 0xb:
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&(enemy->position).y);
    break;
  case 0xc:
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&(enemy->position).z);
    break;
  case 0xd:
  case 0x14:
    Enemy::MathAdd(enemy,(instruction->args).ecl_var_id,(EclVarId *)&(instruction->args).float_var_1
                   ,(EclVarId *)&(instruction->args).float_var_2);
    break;
  case 0xe:
  case 0x15:
    Enemy::MathSub(enemy,(instruction->args).ecl_var_id,&(instruction->args).float_var_1,
                   &(instruction->args).float_var_2);
    break;
  case 0xf:
  case 0x16:
    Enemy::MathMul(enemy,(instruction->args).ecl_var_id,&(instruction->args).float_var_1,
                   &(instruction->args).float_var_2);
    break;
  case 0x10:
  case 0x17:
    Enemy::MathDiv(enemy,(instruction->args).ecl_var_id,(EclVarId *)&(instruction->args).float_var_1
                   ,(EclVarId *)&(instruction->args).float_var_2);
    break;
  case 0x11:
  case 0x18:
    Enemy::MathMod(enemy,(instruction->args).ecl_var_id,&(instruction->args).float_var_1,
                   &(instruction->args).float_var_2);
    break;
  case 0x12:
    local_3c = Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    Enemy::MathAtan2(enemy,(instruction->args).ecl_var_id,&(instruction->args).float_var_1,
                     &(instruction->args).float_var_2,&(instruction->args).float_var_3,
                     &(instruction->args).float_var_4);
    break;
  case 0x1a:
    pfVar15 = (float *)Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    local_18 = (int)*pfVar15;
    local_18 = (int)AddNormalizeAngle((float)local_18,0.0);
    Enemy::SetVar(enemy,(instruction->args).ecl_var_id,&local_18);
    break;
  case 0x1b:
    pfVar20 = Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    local_48 = *pfVar20;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_44 = *pfVar20;
    if (local_48 == local_44) {
      local_2a4 = 0;
    }
    else {
      local_2a4 = (uint)(local_44 <= local_48) * 2 + -1;
    }
    (enemy->current_context).compare_register = local_2a4;
    break;
  case 0x1c:
    pfVar15 = Enemy::GetVarFloat(enemy,(float *)&instruction->args,(EclValueType *)0x0);
    local_4c = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_50 = *pfVar15;
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
    (enemy->current_context).compare_register = local_2a8;
    break;
  case 0x1d:
    if (-1 < (enemy->current_context).compare_register) break;
    goto switchD_00407544_caseD_2;
  case 0x1e:
    if (0 < (enemy->current_context).compare_register) break;
    goto switchD_00407544_caseD_2;
  case 0x1f:
    if ((enemy->current_context).compare_register != 0) break;
    goto switchD_00407544_caseD_2;
  case 0x20:
    fVar6 = (float)(enemy->current_context).compare_register;
joined_r0x00407ab4:
    if ((int)fVar6 < 1) break;
    goto switchD_00407544_caseD_2;
  case 0x21:
    if ((enemy->current_context).compare_register < 0) break;
    goto switchD_00407544_caseD_2;
  case 0x22:
    if ((enemy->current_context).compare_register == 0) break;
switchD_00407544_caseD_2:
    (enemy->current_context).time.current = (instruction->args).ecl_var_id;
    instruction = (EclRawInstr *)((int)&instruction->time + (int)args->float_var_1);
    goto LAB_004074ce;
  case 0x23:
    goto switchD_00407544_caseD_23;
  case 0x24:
    goto switchD_00407544_caseD_24;
  case 0x25:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if ((int)local_14 < (int)args->float_var_4) goto switchD_00407544_caseD_23;
    break;
  case 0x26:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if ((int)local_14 <= (int)args->float_var_4) goto switchD_00407544_caseD_23;
    break;
  case 0x27:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if (local_14 == args->float_var_4) goto switchD_00407544_caseD_23;
    break;
  case 0x28:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if ((int)args->float_var_4 < (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x29:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if ((int)args->float_var_4 <= (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x2a:
    pfVar15 = (float *)Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_3,
                                     (EclValueType *)0x0);
    local_14 = *pfVar15;
    if (local_14 != args->float_var_4) goto switchD_00407544_caseD_23;
    break;
  case 0x2b:
    (enemy->position).x = (float)(instruction->args).ecl_var_id;
    (enemy->position).y = (instruction->args).float_var_1;
    (enemy->position).z = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->position).x,(EclValueType *)0x0);
    (enemy->position).x = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->position).y,(EclValueType *)0x0);
    (enemy->position).y = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->position).z,(EclValueType *)0x0);
    (enemy->position).z = *pfVar15;
    Enemy::ClampPos(enemy);
    break;
  case 0x2c:
    (enemy->axis_speed).x = (float)(instruction->args).ecl_var_id;
    (enemy->axis_speed).y = (instruction->args).float_var_1;
    (enemy->axis_speed).z = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->axis_speed).x,(EclValueType *)0x0);
    (enemy->axis_speed).x = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->axis_speed).y,(EclValueType *)0x0);
    (enemy->axis_speed).y = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&(enemy->axis_speed).z,(EclValueType *)0x0);
    (enemy->axis_speed).z = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc;
    break;
  case 0x2d:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_10,(EclValueType *)0x0);
    enemy->angle = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_c,(EclValueType *)0x0);
    enemy->speed = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc | 1;
    break;
  case 0x2e:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_10,(EclValueType *)0x0);
    enemy->angular_velocity = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc | 1;
    break;
  case 0x2f:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_10,(EclValueType *)0x0);
    enemy->speed = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc | 1;
    break;
  case 0x30:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_10,(EclValueType *)0x0);
    enemy->acceleration = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc | 1;
    break;
  case 0x31:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    fVar6 = local_c - local_10;
    fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    enemy->angle = fVar5 * fVar6 + local_10;
    break;
  case 0x32:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    fVar6 = local_c - local_10;
    fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    enemy->angle = fVar5 * fVar6 + local_10;
    if ((enemy->position).x < (enemy->lower_move_limit).x + 96.0) {
      if (enemy->angle <= 1.570796) {
        if (enemy->angle < -1.570796 != NAN(enemy->angle)) {
          enemy->angle = -3.141593 - enemy->angle;
        }
      }
      else {
        enemy->angle = 3.141593 - enemy->angle;
      }
    }
    fVar5 = (enemy->upper_move_limit).x - 96.0;
    fVar6 = (enemy->position).x;
    if (fVar5 < fVar6 != (NAN(fVar5) || NAN(fVar6))) {
      if ((enemy->angle < 1.570796 == NAN(enemy->angle)) || (enemy->angle < 0.0)) {
        if ((-1.570796 < enemy->angle) && (enemy->angle < 0.0 != (enemy->angle == 0.0))) {
          enemy->angle = -3.141593 - enemy->angle;
        }
      }
      else {
        enemy->angle = 3.141593 - enemy->angle;
      }
    }
    if (((enemy->position).y < (enemy->lower_move_limit).y + 48.0) &&
       (enemy->angle < 0.0 != NAN(enemy->angle))) {
      enemy->angle = -enemy->angle;
    }
    fVar5 = (enemy->upper_move_limit).y - 48.0;
    fVar6 = (enemy->position).y;
    if ((fVar5 < fVar6 != (NAN(fVar5) || NAN(fVar6))) && (0.0 < enemy->angle)) {
      enemy->angle = -enemy->angle;
    }
    break;
  case 0x33:
    local_10 = (float)(instruction->args).ecl_var_id;
    local_c = (instruction->args).float_var_1;
    local_8 = (instruction->args).float_var_2;
    fVar6 = Player::AngleToPlayer(&g_Player,&enemy->position);
    enemy->angle = fVar6 + local_10;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_c,(EclValueType *)0x0);
    enemy->speed = *pfVar15;
    enemy->flags1 = enemy->flags1 & 0xfc | 1;
    break;
  case 0x34:
    Enemy::MoveDirTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 4;
    break;
  case 0x35:
    Enemy::MoveDirTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 8;
    break;
  case 0x36:
    Enemy::MoveDirTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0xc;
    break;
  case 0x37:
    Enemy::MoveDirTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0x10;
    break;
  case 0x38:
    Enemy::MovePosTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3;
    break;
  case 0x39:
    Enemy::MovePosTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 4;
    break;
  case 0x3a:
    Enemy::MovePosTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 8;
    break;
  case 0x3b:
    Enemy::MovePosTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0xc;
    break;
  case 0x3c:
    Enemy::MovePosTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0x10;
    break;
  case 0x3d:
    Enemy::MoveTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 4;
    break;
  case 0x3e:
    Enemy::MoveTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 8;
    break;
  case 0x3f:
    Enemy::MoveTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0xc;
    break;
  case 0x40:
    Enemy::MoveTime(enemy,instruction);
    enemy->flags1 = enemy->flags1 & 0xe3 | 0x10;
    break;
  case 0x41:
    (enemy->lower_move_limit).x = (FLOAT)(instruction->args).ecl_var_id;
    (enemy->lower_move_limit).y = (instruction->args).float_var_1;
    (enemy->upper_move_limit).x = (instruction->args).float_var_2;
    (enemy->upper_move_limit).y = (instruction->args).float_var_3;
    enemy->flags3 = enemy->flags3 | 1;
    break;
  case 0x42:
    enemy->flags3 = enemy->flags3 & 0xfe;
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
    local_54 = &instruction->args;
    local_58 = &enemy->bullet_props;
    local_58->sprite = *(ushort *)&local_54->ecl_var_id;
    (enemy->bullet_props).aim_mode = instruction->opcode - 0x43;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_58->count1 = *(ushort *)pfVar20;
    iVar17 = ((int)(short)enemy->bullet_rank_amount1_high -
             (int)(short)enemy->bullet_rank_amount1_low) * g_GameManager.rank;
    local_58->count1 =
         (short)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count1 + enemy->bullet_rank_amount1_low;
    if ((short)local_58->count1 < 1) {
      local_58->count1 = 1;
    }
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&local_54->float_var_2,(EclValueType *)0x0);
    local_58->count2 = *(ushort *)pfVar20;
    iVar17 = ((int)(short)enemy->bullet_rank_amount2_high -
             (int)(short)enemy->bullet_rank_amount2_low) * g_GameManager.rank;
    local_58->count2 =
         (short)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) +
         local_58->count2 + enemy->bullet_rank_amount2_low;
    if ((short)local_58->count2 < 1) {
      local_58->count2 = 1;
    }
    fVar6 = (enemy->position).z;
    fVar5 = (enemy->shoot_offset).z;
    fVar3 = (enemy->position).y;
    fVar4 = (enemy->shoot_offset).y;
    (local_58->position).x = (enemy->position).x + (enemy->shoot_offset).x;
    (local_58->position).y = fVar3 + fVar4;
    (local_58->position).z = fVar6 + fVar5;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_54->float_var_5,(EclValueType *)0x0);
    local_58->angle1 = *pfVar15;
    fVar6 = AddNormalizeAngle(local_58->angle1,0.0);
    local_58->angle1 = fVar6;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_54->float_var_3,(EclValueType *)0x0);
    local_58->speed1 = *pfVar15;
    if ((NAN(local_58->speed1) == (local_58->speed1 == 0.0)) &&
       (local_58->speed1 =
             ((enemy->bullet_rank_speed_high - enemy->bullet_rank_speed_low) *
             (float)g_GameManager.rank) / 32.0 + enemy->bullet_rank_speed_low + local_58->speed1,
       local_58->speed1 < 0.3 != NAN(local_58->speed1))) {
      local_58->speed1 = 0.3;
    }
    pfVar15 = Enemy::GetVarFloat(enemy,&local_54->float_var_6,(EclValueType *)0x0);
    local_58->angle2 = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_54->float_var_4,(EclValueType *)0x0);
    local_58->speed2 = *pfVar15;
    local_58->speed2 =
         (((enemy->bullet_rank_speed_high - enemy->bullet_rank_speed_low) *
          (float)g_GameManager.rank) / 32.0 + enemy->bullet_rank_speed_low) / 2.0 + local_58->speed2
    ;
    if (local_58->speed2 < 0.3 != NAN(local_58->speed2)) {
      local_58->speed2 = 0.3;
    }
    local_58->unk_4a = 0;
    local_58->flags = (uint)local_54->float_var_7;
    local_14 = (float)(int)*(short *)((int)&local_54->ecl_var_id + 2);
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&local_14,(EclValueType *)0x0);
    local_58->color = *(ushort *)pfVar20;
    if ((enemy->flags1 >> 5 & 1) == 0) {
      BulletManager::SpawnBulletPattern(&g_BulletManager,local_58);
    }
    break;
  case 0x4c:
    enemy->shoot_interval = (instruction->args).ecl_var_id;
    iVar17 = enemy->shoot_interval / 5;
    iVar1 = (-enemy->shoot_interval / 5 - iVar17) * g_GameManager.rank;
    enemy->shoot_interval =
         ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + iVar17 + enemy->shoot_interval;
    (enemy->shoot_interval_timer).current = 0;
    (enemy->shoot_interval_timer).subFrame = 0.0;
    (enemy->shoot_interval_timer).previous = -999;
    break;
  case 0x4d:
    enemy->shoot_interval = (instruction->args).ecl_var_id;
    iVar17 = enemy->shoot_interval / 5;
    iVar1 = (-enemy->shoot_interval / 5 - iVar17) * g_GameManager.rank;
    enemy->shoot_interval =
         ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + iVar17 + enemy->shoot_interval;
    if (enemy->shoot_interval != 0) {
      uVar10 = enemy->shoot_interval;
      if (uVar10 == 0) {
        local_184 = 0;
      }
      else {
        local_184 = Rng::GetRandomU32(&g_Rng);
        local_184 = local_184 % uVar10;
      }
      (enemy->shoot_interval_timer).current = local_184;
      (enemy->shoot_interval_timer).subFrame = 0.0;
      (enemy->shoot_interval_timer).previous = -999;
    }
    break;
  case 0x4e:
    enemy->flags1 = enemy->flags1 | 0x20;
    break;
  case 0x4f:
    enemy->flags1 = enemy->flags1 & 0xdf;
    break;
  case 0x50:
    fVar6 = (enemy->position).z;
    fVar5 = (enemy->shoot_offset).z;
    fVar3 = (enemy->position).y;
    fVar4 = (enemy->shoot_offset).y;
    (enemy->bullet_props).position.x = (enemy->position).x + (enemy->shoot_offset).x;
    (enemy->bullet_props).position.y = fVar3 + fVar4;
    (enemy->bullet_props).position.z = fVar6 + fVar5;
    BulletManager::SpawnBulletPattern(&g_BulletManager,&enemy->bullet_props);
    break;
  case 0x51:
    pfVar15 = Enemy::GetVarFloat(enemy,(float *)args,(EclValueType *)0x0);
    (enemy->shoot_offset).x = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_1,(EclValueType *)0x0);
    (enemy->shoot_offset).y = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_2,(EclValueType *)0x0);
    (enemy->shoot_offset).z = *pfVar15;
    break;
  case 0x52:
    pfVar20 = Enemy::GetVar(enemy,&args->ecl_var_id,(EclValueType *)0x0);
    (enemy->bullet_props).ex_ints[0] = *pfVar20;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&args->float_var_1,(EclValueType *)0x0);
    (enemy->bullet_props).ex_ints[1] = *pfVar20;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&args->float_var_2,(EclValueType *)0x0);
    (enemy->bullet_props).ex_ints[2] = *pfVar20;
    pfVar20 = Enemy::GetVar(enemy,(EclVarId *)&args->float_var_3,(EclValueType *)0x0);
    (enemy->bullet_props).ex_ints[3] = *pfVar20;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_4,(EclValueType *)0x0);
    (enemy->bullet_props).ex_floats[0] = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_5,(EclValueType *)0x0);
    (enemy->bullet_props).ex_floats[1] = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_6,(EclValueType *)0x0);
    (enemy->bullet_props).ex_floats[2] = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&args->float_var_7,(EclValueType *)0x0);
    (enemy->bullet_props).ex_floats[3] = *pfVar15;
    break;
  case 0x53:
    BulletManager::TurnAllBulletsIntoPoints(&g_BulletManager);
    break;
  case 0x54:
    if ((instruction->args).ecl_var_id < 0) {
      (enemy->bullet_props).flags = (enemy->bullet_props).flags & 0xfffffdff;
    }
    else {
      (enemy->bullet_props).sfx = (instruction->args).ecl_var_id;
      (enemy->bullet_props).flags = (enemy->bullet_props).flags | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = &instruction->args;
    local_60 = &enemy->laser_props;
    fVar6 = (enemy->position).z;
    fVar5 = (enemy->shoot_offset).z;
    fVar3 = (enemy->position).y;
    fVar4 = (enemy->shoot_offset).y;
    (enemy->laser_props).position.x = (enemy->position).x + (enemy->shoot_offset).x;
    (enemy->laser_props).position.y = fVar3 + fVar4;
    (enemy->laser_props).position.z = fVar6 + fVar5;
    local_60->sprite = *(ushort *)&local_64->ecl_var_id;
    (enemy->laser_props).color = *(ushort *)((int)&(instruction->args).ecl_var_id + 2);
    pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
    local_60->angle = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_64->float_var_2,(EclValueType *)0x0);
    local_60->speed = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_64->float_var_3,(EclValueType *)0x0);
    local_60->start_offset = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_64->float_var_4,(EclValueType *)0x0);
    local_60->end_offset = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_64->float_var_5,(EclValueType *)0x0);
    local_60->start_length = *pfVar15;
    local_60->width = local_64->float_var_6;
    local_60->start_time = (int)local_64->float_var_7;
    local_60->duration = local_64[1].ecl_var_id;
    local_60->stop_time = *(int *)((int)(local_64 + 1) + 4);
    local_60->graze_delay = *(int *)((int)(local_64 + 1) + 8);
    local_60->graze_distance = *(int *)((int)(local_64 + 1) + 0xc);
    local_60->flags = *(i32 *)((int)(local_64 + 1) + 0x10);
    if (instruction->opcode == 0x56) {
      local_60->type = 0;
    }
    else {
      local_60->type = 1;
    }
    pvVar12 = BulletManager::SpawnLaserPattern(&g_BulletManager,local_60);
    enemy->lasers[enemy->laser_store] = pvVar12;
    break;
  case 0x57:
    pfVar20 = Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    enemy->laser_store = *pfVar20;
    break;
  case 0x58:
    if (enemy->lasers[(instruction->args).ecl_var_id] != (Laser *)0x0) {
      pvVar12 = enemy->lasers[(instruction->args).ecl_var_id];
      pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
      enemy->lasers[(instruction->args).ecl_var_id]->angle = pvVar12->angle + *pfVar15;
    }
    break;
  case 0x59:
    if (enemy->lasers[(instruction->args).ecl_var_id] != (Laser *)0x0) {
      fVar6 = Player::AngleToPlayer(&g_Player,&enemy->lasers[(instruction->args).ecl_var_id]->pos);
      pfVar15 = Enemy::GetVarFloat(enemy,&(instruction->args).float_var_1,(EclValueType *)0x0);
      enemy->lasers[(instruction->args).ecl_var_id]->angle = fVar6 + *pfVar15;
    }
    break;
  case 0x5a:
    if (enemy->lasers[(instruction->args).ecl_var_id] != (Laser *)0x0) {
      fVar6 = (enemy->position).z;
      fVar5 = (instruction->args).float_var_3;
      fVar3 = (enemy->position).y;
      fVar4 = (instruction->args).float_var_2;
      pvVar12 = enemy->lasers[(instruction->args).ecl_var_id];
      (pvVar12->pos).x = (enemy->position).x + (instruction->args).float_var_1;
      (pvVar12->pos).y = fVar3 + fVar4;
      (pvVar12->pos).z = fVar6 + fVar5;
    }
    break;
  case 0x5b:
    if ((enemy->lasers[(instruction->args).ecl_var_id] == (Laser *)0x0) ||
       (enemy->lasers[(instruction->args).ecl_var_id]->in_use == 0)) {
      (enemy->current_context).compare_register = 1;
    }
    else {
      (enemy->current_context).compare_register = 0;
    }
    break;
  case 0x5c:
    if (((enemy->lasers[(instruction->args).ecl_var_id] != (Laser *)0x0) &&
        (enemy->lasers[(instruction->args).ecl_var_id]->in_use != 0)) &&
       (enemy->lasers[(instruction->args).ecl_var_id]->state < 2)) {
      enemy->lasers[(instruction->args).ecl_var_id]->state = 2;
      pvVar12 = enemy->lasers[(instruction->args).ecl_var_id];
      (pvVar12->timer).current = 0;
      (pvVar12->timer).subFrame = 0.0;
      (pvVar12->timer).previous = -999;
    }
    break;
  case 0x5d:
    Gui::ShowSpellcard(&g_Gui,(int)*(short *)&(instruction->args).ecl_var_id,
                       (char *)&(instruction->args).float_var_1);
    g_RunningSpellcardInfo.capture_spellcard = 1;
    g_RunningSpellcardInfo.is_active = 1;
    g_RunningSpellcardInfo.spellcard_idx =
         (uint)*(short *)((int)&(instruction->args).ecl_var_id + 2);
    g_RunningSpellcardInfo.capture_score = INT_ARRAY_00476120[g_RunningSpellcardInfo.spellcard_idx];
    BulletManager::TurnAllBulletsIntoPoints(&g_BulletManager);
    g_Stage.spellcardState = RUNNING;
    g_Stage.ticksSinceSpellcardStarted = 0;
    enemy->bullet_rank_speed_low = -0.5;
    enemy->bullet_rank_speed_high = 0.5;
    enemy->bullet_rank_amount1_low = 0;
    enemy->bullet_rank_amount1_high = 0;
    enemy->bullet_rank_amount2_low = 0;
    enemy->bullet_rank_amount2_high = 0;
    uVar10 = g_RunningSpellcardInfo.spellcard_idx;
    iVar17 = g_RunningSpellcardInfo.spellcard_idx * uVar24;
    local_70 = g_GameManager.catk + g_RunningSpellcardInfo.spellcard_idx;
    csum = 0;
    if (g_GameManager.is_in_replay == 0) {
      local_2bc = &(instruction->args).float_var_1;
      local_2c0 = g_GameManager.catk[g_RunningSpellcardInfo.spellcard_idx].name;
      do {
        bVar16 = *(byte *)local_2bc;
        *local_2c0 = bVar16;
        local_2bc = (float *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (bVar16 != 0);
      local_2cc = g_GameManager.catk[uVar10].name;
      do {
        bVar16 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (bVar16 != 0);
      for (local_74 = (int)local_2cc - (iVar17 + 0x69bce9); 0 < (int)local_74;
          local_74 = local_74 - 1) {
        csum = csum + (int)(char)local_70->name[local_74 - 1];
      }
      if ((uint)g_GameManager.catk[uVar10].name_csum != (csum & 0xff)) {
        g_GameManager.catk[uVar10].unk_3e = 0;
        g_GameManager.catk[uVar10].num_successes = 0;
        g_GameManager.catk[uVar10].name_csum = (byte)csum;
      }
      g_GameManager.catk[uVar10].unk_c = g_RunningSpellcardInfo.capture_score;
      if ((ushort)g_GameManager.catk[uVar10].num_successes < 9999) {
        g_GameManager.catk[uVar10].num_successes = g_GameManager.catk[uVar10].num_successes + 1;
      }
    }
    break;
  case 0x5e:
    if (g_RunningSpellcardInfo.is_active != 0) {
      Gui::Vm6SetInterruptTo1(&g_Gui);
      if ((g_RunningSpellcardInfo.is_active == 1) &&
         (score_increese = BulletManager::DespawnBullets(&g_BulletManager,0x3200,1),
         g_RunningSpellcardInfo.capture_spellcard != 0)) {
        local_80 = g_GameManager.catk + g_RunningSpellcardInfo.spellcard_idx;
        if ((int)g_RunningSpellcardInfo.capture_score < 500000) {
          local_2dc = (int)g_RunningSpellcardInfo.capture_score / 10;
        }
        else {
          local_2dc = 50000;
        }
        local_88 = local_2dc;
        score_increese =
             g_RunningSpellcardInfo.capture_score +
             (int)(g_RunningSpellcardInfo.capture_score * g_Gui.spellcard_seconds_remaining) / 10;
        Gui::FUN_00417458(&g_Gui,score_increese);
        g_GameManager.score = g_GameManager.score + score_increese;
        if (g_GameManager.is_in_replay == 0) {
          local_80->unk_3e = local_80->unk_3e + 1;
          for (local_84 = 4; 0 < local_84; local_84 = local_84 + -1) {
            local_80->name[local_84 + -5] = local_80->name[local_84 + -6];
          }
          local_80->unk_13 = g_GameManager.shottype + g_GameManager.character * '\x02';
        }
        g_GameManager.unk_0x28 = g_GameManager.unk_0x28 + 1;
      }
      g_RunningSpellcardInfo.is_active = 0;
    }
    g_Stage.spellcardState = NOT_RUNNING;
    break;
  case 0x5f:
    pEVar2 = &instruction->args;
    pfVar20 = &local_b0;
    for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
      *pfVar20 = pEVar2->ecl_var_id;
      pEVar2 = (EclRawInstrArgs *)&pEVar2->float_var_1;
      pfVar20 = pfVar20 + 1;
    }
    pfVar15 = Enemy::GetVarFloat(enemy,&local_ac.x,(EclValueType *)0x0);
    local_ac.x = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_ac.y,(EclValueType *)0x0);
    local_ac.y = *pfVar15;
    pfVar15 = Enemy::GetVarFloat(enemy,&local_ac.z,(EclValueType *)0x0);
    local_ac.z = *pfVar15;
    EnemyManager::SpawnEnemy
              ((EnemyManager *)&g_EnemyManager,local_b0,&local_ac,local_a0,local_9e,local_9c);
    break;
  case 0x60:
    local_b4 = g_Enemies;
    for (local_b8 = 0; local_b8 < 0x100; local_b8 = local_b8 + 1) {
      if (((((char)local_b4->flags1 < '\0') && ((local_b4->flags2 >> 3 & 1) == 0)) &&
          (local_b4->life = 0, (local_b4->flags2 & 1) == 0)) && (-1 < local_b4->death_callback_sub))
      {
        CallEclSub(&g_EclManager,&local_b4->current_context,*(short *)&local_b4->death_callback_sub)
        ;
        local_b4->death_callback_sub = -1;
      }
      local_b4 = local_b4 + 1;
    }
    break;
  case 0x61:
    iVar17 = (instruction->args).ecl_var_id;
    local_13c = (short)iVar17 + 0x100;
    (enemy->primary_vm).anmFileIndex = local_13c;
    AnmManager::SetAndExecuteScript
              (main_anm_manager,&enemy->primary_vm,main_anm_manager->scripts[iVar17 + 0x100]);
    break;
  case 0x62:
    enemy->anm_ex_defaults = *(short *)&(instruction->args).ecl_var_id;
    enemy->anm_ex_far_left = *(short *)((int)&(instruction->args).ecl_var_id + 2);
    enemy->anm_ex_far_right = *(short *)&(instruction->args).float_var_1;
    enemy->anm_ex_left = *(short *)((int)&(instruction->args).float_var_1 + 2);
    enemy->anm_ex_right = *(short *)&(instruction->args).float_var_2;
    enemy->anm_ex_flags = 0xff;
    break;
  case 99:
    if (7 < (instruction->args).ecl_var_id) {
      DebugPrint2("error : sub anim overflow\n");
    }
    main_anm_manager = g_AnmManager;
    fVar6 = args->float_var_1;
    local_144 = SUB42(fVar6,0) + 0x100;
    iVar17 = (instruction->args).ecl_var_id;
    enemy->vms[iVar17].anmFileIndex = local_144;
    AnmManager::SetAndExecuteScript
              (main_anm_manager,enemy->vms + iVar17,main_anm_manager->scripts[(int)fVar6 + 0x100]);
    break;
  case 100:
    local_5c = &instruction->args;
    enemy->death_anm1 = *(byte *)&local_5c->ecl_var_id;
    enemy->death_anm2 = *(byte *)((int)&(instruction->args).ecl_var_id + 1);
    enemy->death_anm3 = *(byte *)((int)&(instruction->args).ecl_var_id + 2);
    break;
  case 0x65:
    if ((instruction->args).ecl_var_id < 0) {
      g_Gui.boss_present = 0;
      g_Bosses[enemy->boss_id] = (Enemy *)0x0;
      enemy->flags2 = enemy->flags2 & 0xf7;
    }
    else {
      g_Bosses[(instruction->args).ecl_var_id] = enemy;
      g_Gui.boss_present = 1;
      g_Gui.boss_health_bar = 1.0;
      enemy->flags2 = enemy->flags2 | 8;
      enemy->boss_id = *(byte *)&(instruction->args).ecl_var_id;
    }
    break;
  case 0x66:
    local_6c = &instruction->args;
    pEVar13 = EffectManager::SpawnEffect
                        (&g_EffectManager,0xd,&enemy->position,1,
                         (ZunColor)g_BulletColor[local_6c->ecl_var_id]);
    enemy->effect_array[enemy->effectsNum] = pEVar13;
    pEVar13 = enemy->effect_array[enemy->effectsNum];
    (pEVar13->pos2).x = local_6c->float_var_1;
    (pEVar13->pos2).y = local_6c->float_var_2;
    (pEVar13->pos2).z = local_6c->float_var_3;
    enemy->effect_distance = local_6c->float_var_4;
    enemy->effectsNum = enemy->effectsNum + 1;
    break;
  case 0x67:
    (enemy->hitbox_dimensions).x = (float)(instruction->args).ecl_var_id;
    (enemy->hitbox_dimensions).y = (instruction->args).float_var_1;
    (enemy->hitbox_dimensions).z = (instruction->args).float_var_2;
    break;
  case 0x68:
    enemy->flags2 = enemy->flags2 & 0xfd | (*(byte *)&(instruction->args).ecl_var_id & 1) << 1;
    break;
  case 0x69:
    enemy->flags2 = enemy->flags2 & 0xef | (*(byte *)&(instruction->args).ecl_var_id & 1) << 4;
    break;
  case 0x6a:
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,(instruction->args).ecl_var_id,0);
    break;
  case 0x6b:
    enemy->flags2 = enemy->flags2 & 0x1f | *(char *)&(instruction->args).ecl_var_id << 5;
    break;
  case 0x6c:
    enemy->death_callback_sub = (instruction->args).ecl_var_id;
    break;
  case 0x6d:
    enemy->interrupts[(int)(instruction->args).float_var_1] = args->ecl_var_id;
    break;
  case 0x6e:
    enemy->run_interrupt = (instruction->args).ecl_var_id;
    goto LAB_0040954d;
  case 0x6f:
    enemy->max_life = (instruction->args).ecl_var_id;
    enemy->life = enemy->max_life;
    break;
  case 0x70:
    (enemy->boss_timer).current = (instruction->args).ecl_var_id;
    (enemy->boss_timer).subFrame = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x71:
    enemy->life_callback_threshold = (instruction->args).ecl_var_id;
    break;
  case 0x72:
    enemy->life_callback_sub = (instruction->args).ecl_var_id;
    break;
  case 0x73:
    enemy->timer_callback_threshold = (instruction->args).ecl_var_id;
    (enemy->boss_timer).current = 0;
    (enemy->boss_timer).subFrame = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x74:
    enemy->timer_callback_sub = (instruction->args).ecl_var_id;
    break;
  case 0x75:
    enemy->flags2 = enemy->flags2 & 0xfe | *(byte *)&(instruction->args).ecl_var_id & 1;
    break;
  case 0x76:
    EffectManager::SpawnEffect
              (&g_EffectManager,(instruction->args).ecl_var_id,&enemy->position,
               (int)(instruction->args).float_var_1,(ZunColor)(instruction->args).float_var_2);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < (instruction->args).ecl_var_id; local_8c = local_8c + 1) {
      local_98.x = (enemy->position).x;
      local_98.y = (enemy->position).y;
      local_98.z = (enemy->position).z;
      fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_98.x = (fVar6 * 144.0 - 72.0) + local_98.x;
      fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_98.y = (fVar6 * 144.0 - 72.0) + local_98.y;
      if (g_GameManager.current_power < 0x80) {
        ItemManager::SpawnItem
                  (&g_ItemManager,&local_98,(-(local_8c != 0) & 0xfeU) + ITEM_POWER_BIG,0);
      }
      else {
        ItemManager::SpawnItem(&g_ItemManager,&local_98,ITEM_POINT,0);
      }
    }
    break;
  case 0x78:
    enemy->flags3 = enemy->flags3 & 0xfd | (*(byte *)&(instruction->args).ecl_var_id & 1) << 1;
    break;
  case 0x79:
    (*(code *)(&ECL_EX_INSN)[(instruction->args).ecl_var_id])(enemy,(int)instruction);
    break;
  case 0x7a:
    if ((instruction->args).ecl_var_id < 0) {
      (enemy->current_context).func_set_func = (void *)0x0;
    }
    else {
      (enemy->current_context).func_set_func = (&ECL_EX_INSN)[(instruction->args).ecl_var_id];
    }
    break;
  case 0x7b:
    pfVar20 = Enemy::GetVar(enemy,&(instruction->args).ecl_var_id,(EclValueType *)0x0);
    ZunTimer::Increment(&(enemy->current_context).time,*pfVar20);
    break;
  case 0x7c:
    ItemManager::SpawnItem
              (&g_ItemManager,&enemy->position,(ItemType)(instruction->args).ecl_var_id,0);
    break;
  case 0x7d:
    g_Stage.unpauseFlag = '\x01';
    break;
  case 0x7e:
    g_Gui.ecl_set_lives = (instruction->args).ecl_var_id;
    g_GameManager.counat = g_GameManager.counat + 0x708;
    break;
  case 0x80:
    (enemy->primary_vm).pendingInterrupt = *(short *)&(instruction->args).ecl_var_id;
    break;
  case 0x81:
    enemy->vms[args->ecl_var_id].pendingInterrupt = *(short *)&(instruction->args).float_var_1;
    break;
  case 0x82:
    enemy->flags3 = enemy->flags3 & 0xfb | (*(byte *)&(instruction->args).ecl_var_id & 1) << 2;
    break;
  case 0x83:
    enemy->bullet_rank_speed_low = (float)args->ecl_var_id;
    enemy->bullet_rank_speed_high = (instruction->args).float_var_1;
    enemy->bullet_rank_amount1_low = *(ushort *)&(instruction->args).float_var_2;
    enemy->bullet_rank_amount1_high = *(ushort *)&(instruction->args).float_var_3;
    enemy->bullet_rank_amount2_low = *(ushort *)&(instruction->args).float_var_4;
    enemy->bullet_rank_amount2_high = *(ushort *)&(instruction->args).float_var_5;
    break;
  case 0x84:
    enemy->flags3 = enemy->flags3 & 0xf7 | (*(byte *)&(instruction->args).ecl_var_id & 1) << 3;
    break;
  case 0x85:
    enemy->timer_callback_sub = enemy->death_callback_sub;
    (enemy->boss_timer).current = 0;
    (enemy->boss_timer).subFrame = 0.0;
    (enemy->boss_timer).previous = -999;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      enemy->lasers[local_68] = (Laser *)0x0;
    }
    break;
  case 0x87:
    enemy->flags3 = enemy->flags3 & 0xef | (*(byte *)&(instruction->args).ecl_var_id & 1) << 4;
  }
end_of_loop:
  instruction = (EclRawInstr *)((int)&instruction->time + (int)instruction->offset_to_next);
  goto LAB_004074ce;
switchD_00407544_caseD_24:
  if ((enemy->flags3 >> 2 & 1) != 0) {
    DebugPrint2("error : no Stack Ret\n");
  }
  enemy->stack_depth = enemy->stack_depth + -1;
  current_context = enemy->saved_context_stack + enemy->stack_depth;
  pEVar20 = &enemy->current_context;
  for (iVar17 = 0x13; iVar17 != 0; iVar17 = iVar17 + -1) {
    pEVar20->current_instr = current_context->current_instr;
    current_context = (EnemyEclContext *)&current_context->time;
    pEVar20 = (EnemyEclContext *)&pEVar20->time;
  }
  goto LAB_004074b1;
switchD_00407544_caseD_23:
  local_14 = (float)(instruction->args).ecl_var_id;
  (enemy->current_context).current_instr =
       (EclRawInstr *)((int)&instruction->time + (int)instruction->offset_to_next);
  if ((enemy->flags3 >> 2 & 1) == 0) {
    current_context = &enemy->current_context;
    pEVar19 = enemy->saved_context_stack + enemy->stack_depth;
    for (iVar17 = 0x13; iVar17 != 0; iVar17 = iVar17 + -1) {
      pEVar19->current_instr = current_context->current_instr;
      current_context = (EnemyEclContext *)&current_context->time;
      pEVar19 = (EnemyEclContext *)&pEVar19->time;
    }
  }
  CallEclSub(&g_EclManager,&enemy->current_context,local_14._0_2_);
  if (((enemy->flags3 >> 2 & 1) == 0) && (enemy->stack_depth < 7)) {
    enemy->stack_depth = enemy->stack_depth + 1;
  }
  (enemy->current_context).var0 = (int)(instruction->args).float_var_1;
  (enemy->current_context).float0 = (instruction->args).float_var_2;
  goto LAB_004074b1;
}


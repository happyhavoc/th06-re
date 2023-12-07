
undefined4 MainMenu::OnUpdate(MainMenu *param_1)

{
  float fVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint local_b8;
  uint local_b4;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  undefined4 local_28;
  AnmVm *local_c;
  uint local_8;
  
  if ((int)param_1->unk_10ee0 < 0x10) {
    timeBeginPeriod(1);
    if (param_1->unk_10f30 == 0) {
      DVar2 = timeGetTime();
      param_1->unk_10f30 = DVar2;
    }
    DVar2 = timeGetTime();
    timeEndPeriod(1);
    param_1->unk_10f2c = param_1->unk_10f2c + 1;
    iVar4 = DVar2 - param_1->unk_10f30;
    if (iVar4 < 700) {
      if (499 < iVar4) {
        fVar1 = ((float)param_1->unk_10f2c * 1000.0) / (float)iVar4;
        if (57.0 <= fVar1) {
          *(float *)(&param_1->field_0x10ee4 + param_1->unk_10ee0 * 4) = fVar1;
          param_1->unk_10ee0 = param_1->unk_10ee0 + 1;
        }
        param_1->unk_10f30 = DVar2;
        param_1->unk_10f2c = 0;
      }
    }
    else {
      param_1->unk_10f30 = DVar2;
      param_1->unk_10f2c = 0;
    }
  }
  uVar3 = param_1->unk_81f0;
  switch(uVar3) {
  case 0:
    iVar4 = FUN_004378a2();
    if (iVar4 == -1) {
      return 0;
    }
  case 1:
    param_1->numFramesWithoutInput = param_1->numFramesWithoutInput + 1;
    if (g_CurFrameInput != 0) {
      param_1->numFramesWithoutInput = 0;
    }
    if (0x2cf < (int)param_1->numFramesWithoutInput) {
LAB_004359b3:
      g_GameManager.field10_0x1c = 1;
      g_GameManager.demo_mode = 1;
      g_GameManager._6184_4_ = 0;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,"data/demo/demo00.rpy");
      g_GameManager.difficulty = 3;
      g_GameManager.current_stage = 3;
      g_Supervisor.curState = 2;
      return 0;
    }
    iVar4 = FUN_004379e4(param_1);
    if (iVar4 == 0) {
      param_1->numFramesWithoutInput = 0;
switchD_004358f7_caseD_2:
      FUN_00437b41(param_1);
      if (g_CurFrameInput != 0) {
        param_1->numFramesWithoutInput = 0;
      }
      param_1->numFramesWithoutInput = param_1->numFramesWithoutInput + 1;
      if (0x2cf < (int)param_1->numFramesWithoutInput) goto LAB_004359b3;
    }
    break;
  case 2:
    goto switchD_004358f7_caseD_2;
  case 3:
    iVar4 = FUN_00439137(param_1);
    if (iVar4 != 0) {
      return 0;
    }
    break;
  case 4:
    if (0x3b < (int)param_1->unk_81f4) {
      g_Supervisor.curState = 4;
      return 0;
    }
    break;
  case 5:
    FUN_0043753c(param_1,0xb);
    local_c = param_1->field0_0x0 + 0x22;
    for (local_8 = 0; (int)local_8 < 0xb; local_8 = local_8 + 1) {
      FUN_004377a3(local_c,local_8,param_1->cursor,param_1->unk_8204);
      local_c = local_c + 1;
    }
    for (local_8 = 0; (int)local_8 < 9; local_8 = local_8 + 1) {
      if ((short)param_1->field92_0x821c[local_8] < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        FUN_004377a3(local_c,local_8,param_1->cursor,param_1->unk_8204);
      }
      local_c = local_c + 1;
    }
    for (local_8 = 0; (int)local_8 < 0x12; local_8 = local_8 + 1) {
      if ((short)param_1->field92_0x821c[(int)local_8 / 2] < 0) {
        local_c->flags = local_c->flags & 0xfffffffd;
      }
      else {
        local_c->flags = local_c->flags | 2;
        if ((int)local_8 % 2 == 0) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_c,
                     (int)(short)param_1->field92_0x821c[(int)local_8 / 2] / 10 + 0x100);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_c,
                     (int)(short)param_1->field92_0x821c[(int)local_8 / 2] % 10 + 0x100);
        }
        local_c->anotherSpriteNumber = local_c->spriteNumber;
        FUN_004377a3(local_c,(int)local_8 / 2,param_1->cursor,param_1->unk_8204);
      }
      local_c = local_c + 1;
    }
    if (0x1f < (int)param_1->unk_81f4) {
      iVar4 = FUN_0041d680();
      local_28 = local_28 & 0xffff0000;
      while( true ) {
        if ((0x1f < (short)(ushort)local_28) ||
           ((*(byte *)(iVar4 + (short)(ushort)local_28) & 0x80) != 0)) break;
        local_28 = CONCAT22(local_28._2_2_,(ushort)local_28 + 1);
      }
      if (((short)(ushort)local_28 < 0x20) && (DAT_00478690 != (ushort)local_28)) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        switch(param_1->cursor) {
        case 0:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[0]);
          param_1->field92_0x821c[0] = (ushort)local_28;
          break;
        case 1:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[1]);
          param_1->field92_0x821c[1] = (ushort)local_28;
          break;
        case 2:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[2]);
          param_1->field92_0x821c[2] = (ushort)local_28;
          break;
        case 3:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[3]);
          param_1->field92_0x821c[3] = (ushort)local_28;
          break;
        case 4:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[4]);
          param_1->field92_0x821c[4] = (ushort)local_28;
          break;
        case 5:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[5]);
          param_1->field92_0x821c[5] = (ushort)local_28;
          break;
        case 6:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[6]);
          param_1->field92_0x821c[6] = (ushort)local_28;
          break;
        case 7:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[7]);
          param_1->field92_0x821c[7] = (ushort)local_28;
          break;
        case 8:
          FUN_00437672(param_1,local_28,param_1->field92_0x821c[8]);
          param_1->field92_0x821c[8] = (ushort)local_28;
        }
      }
      DAT_00478690 = (ushort)local_28;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        if (param_1->cursor == 9) {
          *(undefined4 *)param_1->field92_0x821c = 0x10000;
          *(undefined4 *)(param_1->field92_0x821c + 2) = 0xffff0000;
          *(undefined4 *)(param_1->field92_0x821c + 4) = 0xffffffff;
          *(undefined4 *)(param_1->field92_0x821c + 6) = 0xffffffff;
          param_1->field92_0x821c[8] = 0xffff;
        }
        else if (param_1->cursor == 10) {
          param_1->unk_81f0 = 3;
          param_1->unk_81f4 = 0;
          for (local_28._0_2_ = 0; (short)(ushort)local_28 < 0x7a;
              local_28._0_2_ = (ushort)local_28 + 1) {
            param_1->field0_0x0[(short)(ushort)local_28].pendingInterrupt = 3;
          }
          param_1->cursor = 7;
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
          g_ControllerMapping._0_4_ = *(undefined4 *)param_1->field92_0x821c;
          g_ControllerMapping._4_4_ = *(undefined4 *)(param_1->field92_0x821c + 2);
          g_ControllerMapping._8_4_ = *(undefined4 *)(param_1->field92_0x821c + 4);
          g_ControllerMapping._12_4_ = *(undefined4 *)(param_1->field92_0x821c + 6);
          g_ControllerMapping.skipButton = param_1->field92_0x821c[8];
          g_Supervisor.cfg.controllerMapping._0_4_ = *(undefined4 *)param_1->field92_0x821c;
          g_Supervisor.cfg.controllerMapping._4_4_ = *(undefined4 *)(param_1->field92_0x821c + 2);
          g_Supervisor.cfg.controllerMapping._8_4_ = *(undefined4 *)(param_1->field92_0x821c + 4);
          g_Supervisor.cfg.controllerMapping._12_4_ = *(undefined4 *)(param_1->field92_0x821c + 6);
          g_Supervisor.cfg.controllerMapping.skipButton = param_1->field92_0x821c[8];
        }
      }
    }
    break;
  case 6:
    if (param_1->unk_81f4 != 0x3c) break;
    iVar4 = FUN_00439f88();
    if (iVar4 != 0) {
      GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
      g_Supervisor.curState = 4;
      return 0;
    }
    param_1->unk_81f0 = 7;
    param_1->unk_81fc = 0;
    *(uint *)&param_1->field_0x8214 = param_1->unk_8210;
    param_1->unk_8210 = 0;
    if ((int)g_GameManager.difficulty < 4) {
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        param_1->field0_0x0[local_8].pendingInterrupt = 6;
      }
      param_1->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
    }
    else {
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        param_1->field0_0x0[local_8].pendingInterrupt = 0x12;
      }
      param_1->cursor = 0;
    }
  case 8:
    if (param_1->unk_81f4 == 0x24) {
      param_1->unk_81f0 = 0;
      param_1->unk_81f4 = 0;
    }
    break;
  case 7:
    local_c = param_1->field0_0x0 + 0x51;
    if ((int)g_GameManager.difficulty < 4) {
      FUN_0043753c(param_1,4);
      for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 == param_1->cursor) {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            local_c->color = 0xff000000;
          }
          else {
            local_c->color = 0xffffffff;
          }
          (local_c->pos2).x = -6.0;
          (local_c->pos2).y = -6.0;
          (local_c->pos2).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            local_c->color = 0x60000000;
          }
          else {
            local_c->color = 0x60ffffff;
          }
          (local_c->pos2).x = 0.0;
          (local_c->pos2).y = 0.0;
          (local_c->pos2).z = 0.0;
          local_c->alphaInterpEndTime = 0;
        }
        local_c = local_c + 1;
      }
      local_c->flags = local_c->flags & 0xfffffffd;
    }
    else {
      for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
        local_c->flags = local_c->flags & 0xfffffffd;
        local_c = local_c + 1;
      }
      for (local_8 = 4; (int)local_8 < 5; local_8 = local_8 + 1) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          local_c->color = 0xff000000;
        }
        else {
          local_c->color = 0xffffffff;
        }
        (local_c->pos2).x = -6.0;
        (local_c->pos2).y = -6.0;
        (local_c->pos2).z = 0.0;
        local_c = local_c + 1;
      }
    }
    if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        param_1->unk_81f0 = 9;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 7;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        if ((int)g_GameManager.difficulty < 4) {
          param_1->field0_0x0[param_1->cursor + 0x51].pendingInterrupt = 8;
          g_GameManager.difficulty = param_1->cursor;
          param_1->cursor = (uint)g_GameManager.character;
        }
        else {
          param_1->field0_0x0[0x55].pendingInterrupt = 8;
          g_GameManager.difficulty = 4;
          iVar4 = FUN_0043a736(g_GameManager.character,0);
          if ((iVar4 == 0) && (iVar4 = FUN_0043a736(g_GameManager.character,1), iVar4 == 0)) {
            param_1->cursor = 1 - g_GameManager.character;
          }
          else {
            param_1->cursor = (uint)g_GameManager.character;
          }
        }
        g_Supervisor.cfg.defaultDifficulty = (byte)g_GameManager.difficulty;
        local_c = param_1->field0_0x0 + 0x56;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != param_1->cursor) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
      }
    }
    else {
      param_1->unk_81f0 = 8;
      param_1->unk_81f4 = 0;
      for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
        param_1->field0_0x0[local_8].pendingInterrupt = 4;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
      if ((int)g_GameManager.difficulty < 4) {
        g_Supervisor.cfg.defaultDifficulty = *(byte *)&param_1->cursor;
        if (g_GameManager.field45_0x1823 == 0) {
          param_1->cursor = 0;
        }
        else {
          param_1->cursor = 2;
        }
      }
      else {
        param_1->cursor = 1;
      }
    }
    break;
  case 9:
    if ((int)param_1->unk_81f4 < 0x1e) break;
    if ((((g_CurFrameInput & 0x40) == 0) || ((g_CurFrameInput & 0x40) == (g_LastFrameInput & 0x40)))
       && (((g_CurFrameInput & 0x40) == 0 || (DAT_0069d90c == 0)))) {
LAB_0043666d:
      if ((((g_CurFrameInput & 0x80) != 0) &&
          ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80))) ||
         (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
        param_1->cursor = param_1->cursor - 1;
        if ((int)param_1->cursor < 0) {
          param_1->cursor = param_1->cursor + 2;
        }
        if (((g_GameManager.difficulty == 4) &&
            (iVar4 = FUN_0043a736(param_1->cursor,0), iVar4 == 0)) &&
           (iVar4 = FUN_0043a736(param_1->cursor,1), iVar4 == 0)) {
          param_1->cursor = param_1->cursor + 1;
          if (1 < (int)param_1->cursor) {
            param_1->cursor = param_1->cursor - 2;
          }
        }
        else {
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
          local_c = param_1->field0_0x0 + 0x56;
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 == param_1->cursor) {
              local_c->pendingInterrupt = 10;
              local_c[1].pendingInterrupt = 10;
            }
            else {
              local_c->pendingInterrupt = 0xb;
              local_c[1].pendingInterrupt = 0xb;
            }
            local_c = local_c + 2;
          }
        }
      }
    }
    else {
      param_1->cursor = param_1->cursor + 1;
      if (1 < (int)param_1->cursor) {
        param_1->cursor = param_1->cursor - 2;
      }
      if (((g_GameManager.difficulty != 4) || (iVar4 = FUN_0043a736(param_1->cursor,0), iVar4 != 0))
         || (iVar4 = FUN_0043a736(param_1->cursor,1), iVar4 != 0)) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        local_c = param_1->field0_0x0 + 0x56;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 == param_1->cursor) {
            local_c->pendingInterrupt = 9;
            local_c[1].pendingInterrupt = 9;
          }
          else {
            local_c->pendingInterrupt = 0xc;
            local_c[1].pendingInterrupt = 0xc;
          }
          local_c = local_c + 2;
        }
        goto LAB_0043666d;
      }
      param_1->cursor = param_1->cursor - 1;
      if ((int)param_1->cursor < 0) {
        param_1->cursor = param_1->cursor + 2;
      }
    }
    if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        param_1->unk_81f0 = 0xb;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 0xd;
        }
        param_1->field0_0x0[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
        local_c = param_1->field0_0x0 + 0x56;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != param_1->cursor) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
        local_c = param_1->field0_0x0 + 0x5c;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != param_1->cursor) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
        g_GameManager.character = *(byte *)&param_1->cursor;
        if ((int)g_GameManager.difficulty < 4) {
          param_1->cursor = (uint)g_GameManager.shottype;
        }
        else {
          iVar4 = FUN_0043a736(g_GameManager.character,g_GameManager.shottype);
          if (iVar4 == 0) {
            param_1->cursor = 1 - g_GameManager.shottype;
          }
          else {
            param_1->cursor = (uint)g_GameManager.shottype;
          }
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
      }
    }
    else {
      param_1->unk_81f0 = 7;
      param_1->unk_81f4 = 0;
      if ((int)g_GameManager.difficulty < 4) {
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 6;
        }
        param_1->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
      }
      else {
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 0x12;
        }
        param_1->cursor = 0;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
    }
    break;
  case 10:
    if (0x3b < (int)param_1->unk_81f4) {
      g_Supervisor.curState = 6;
      return 0;
    }
    break;
  case 0xb:
    FUN_0043753c(param_1,2);
    if ((g_GameManager.difficulty == 4) &&
       (iVar4 = FUN_0043a736(g_GameManager.character,param_1->cursor), iVar4 == 0)) {
      param_1->cursor = 1 - param_1->cursor;
    }
    local_c = param_1->field0_0x0 + 0x5c;
    for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
      local_c[1].flags = local_c[1].flags | 8;
      local_c = local_c + 2;
    }
    local_c = param_1->field0_0x0 + (uint)g_GameManager.character * 2 + 0x5c;
    for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
      local_c->flags = local_c->flags | 8;
      local_c->flags = local_c->flags | 1;
      if (local_8 == param_1->cursor) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          local_c->color = 0xff202020;
        }
        else {
          local_c->color = 0xffffffff;
        }
        (local_c->pos2).x = -6.0;
        (local_c->pos2).y = -6.0;
        (local_c->pos2).z = 0.0;
      }
      else {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          local_c->color = 0xa0000000;
        }
        else {
          local_c->color = 0xa0d0d0d0;
        }
        (local_c->pos2).x = 0.0;
        (local_c->pos2).y = 0.0;
        (local_c->pos2).z = 0.0;
      }
      local_c = local_c + 1;
    }
    if (0x1d < (int)param_1->unk_81f4) {
      if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          g_GameManager.shottype = *(byte *)&param_1->cursor;
          if (g_GameManager.field45_0x1823 == 0) {
            if ((int)g_GameManager.difficulty < 4) {
              g_GameManager.current_stage = 0;
            }
            else {
              g_GameManager.current_stage = 6;
            }
            goto LAB_00436de7;
          }
          param_1->unk_81f0 = 0x11;
          param_1->unk_81f4 = 0;
          for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
            param_1->field0_0x0[local_8].pendingInterrupt = 0x13;
          }
          param_1->field0_0x0[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
          local_c = param_1->field0_0x0 + 0x56;
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 != g_GameManager.character) {
              local_c->pendingInterrupt = 0;
              local_c[1].pendingInterrupt = 0;
            }
            local_c = local_c + 2;
          }
          local_c = param_1->field0_0x0 + 0x5c;
          for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
            if (local_8 != g_GameManager.character) {
              local_c->pendingInterrupt = 0;
              local_c[1].pendingInterrupt = 0;
            }
            local_c = local_c + 2;
          }
          param_1->cursor = g_GameManager.field61_0x1a38;
          if (*(byte *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18 +
                        0x69cce1 + g_GameManager.difficulty) < 7) {
            local_b4 = (uint)*(byte *)(((uint)g_GameManager.shottype +
                                       (uint)g_GameManager.character * 2) * 0x18 + 0x69cce1 +
                                      g_GameManager.difficulty);
          }
          else {
            local_b4 = 6;
          }
          local_4c = local_b4;
          if ((g_GameManager.difficulty == 0) && (local_b4 == 6)) {
            local_4c = 5;
          }
          if ((int)local_4c <= (int)param_1->cursor) {
            param_1->cursor = 0;
          }
        }
      }
      else {
        param_1->unk_81f0 = 9;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 7;
        }
        local_c = param_1->field0_0x0 + 0x5c;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != g_GameManager.character) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
        param_1->field0_0x0[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        g_GameManager.shottype = *(byte *)&param_1->cursor;
        param_1->cursor = (uint)g_GameManager.character;
        local_c = param_1->field0_0x0 + 0x56;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != param_1->cursor) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
      }
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_004381ec((int)param_1);
    if (uVar3 != 0) {
      return 0;
    }
    break;
  case 0x10:
    if (0x3b < (int)param_1->unk_81f4) {
      g_Supervisor.curState = 9;
      return 0;
    }
    break;
  case 0x11:
    if (*(byte *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18 +
                  0x69cce1 + g_GameManager.difficulty) < 7) {
      local_b8 = (uint)*(byte *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2)
                                 * 0x18 + 0x69cce1 + g_GameManager.difficulty);
    }
    else {
      local_b8 = 6;
    }
    local_50 = local_b8;
    if ((g_GameManager.difficulty == 0) && (local_b8 == 6)) {
      local_50 = 5;
    }
    FUN_0043753c(param_1,local_50);
    if (0x1d < (int)param_1->unk_81f4) {
      if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          g_GameManager.current_stage = param_1->cursor;
          g_GameManager.field61_0x1a38 = param_1->cursor;
LAB_00436de7:
          g_GameManager.lives_remaining = g_Supervisor.cfg.lifeCount;
          g_GameManager.bombs_remaining = g_Supervisor.cfg.bombCount;
          if ((g_GameManager.difficulty == 4) || (g_GameManager.field45_0x1823 != 0)) {
            g_GameManager.lives_remaining = 2;
            g_GameManager.bombs_remaining = 3;
          }
          g_Supervisor.curState = 2;
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
          g_GameManager.field10_0x1c = 0;
          local_48 = 0.0;
          if ((int)param_1->unk_10ee0 < 2) {
            local_48 = 60.0;
          }
          else {
            for (local_8 = 0; (int)local_8 < (int)param_1->unk_10ee0; local_8 = local_8 + 1) {
              local_48 = local_48 + *(float *)(&param_1->field_0x10ee4 + local_8 * 4);
            }
            local_48 = local_48 / (float)local_8;
          }
          if (local_48 < 155.0) {
            if (local_48 < 135.0) {
              if (local_48 < 110.0) {
                if (local_48 < 95.0) {
                  if (local_48 < 87.5) {
                    if (local_48 < 82.5) {
                      if (local_48 < 77.5) {
                        if (local_48 < 73.5) {
                          if (local_48 < 68.0) {
                            local_44 = 1.0;
                          }
                          else {
                            local_44 = 0.8571429;
                          }
                        }
                        else {
                          local_44 = 0.8;
                        }
                      }
                      else {
                        local_44 = 0.75;
                      }
                    }
                    else {
                      local_44 = 0.7058824;
                    }
                  }
                  else {
                    local_44 = 0.6666667;
                  }
                }
                else {
                  local_44 = 0.6;
                }
              }
              else {
                local_44 = 0.5;
              }
            }
            else {
              local_44 = 0.4;
            }
          }
          else {
            local_44 = 0.375;
          }
          DebugPrint("Reflesh Rate = %f\n",(double)(60.0 / local_44));
          g_Supervisor.framerateMultiplier = local_44;
          Supervisor::FUN_00424d38(&g_Supervisor);
          return 0;
        }
      }
      else {
        param_1->unk_81f0 = 0xb;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 0xd;
        }
        param_1->field0_0x0[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
        local_c = param_1->field0_0x0 + 0x56;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != g_GameManager.character) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
        local_c = param_1->field0_0x0 + 0x5c;
        for (local_8 = 0; (int)local_8 < 2; local_8 = local_8 + 1) {
          if (local_8 != g_GameManager.character) {
            local_c->pendingInterrupt = 0;
            local_c[1].pendingInterrupt = 0;
          }
          local_c = local_c + 2;
        }
        param_1->cursor = (uint)g_GameManager.shottype;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
      }
    }
  }
  param_1->unk_81f4 = param_1->unk_81f4 + 1;
  for (local_8 = 0; (int)local_8 < 0x7a; local_8 = local_8 + 1) {
    if (param_1->field0_0x0[local_8].sprite == (AnmLoadedSprite *)0x0) {
      bVar5 = false;
    }
    else if ((int)(param_1->field0_0x0[local_8].sprite)->sourceFileIndex < 0) {
      bVar5 = false;
    }
    else {
      bVar5 = g_AnmManager->textures[(param_1->field0_0x0[local_8].sprite)->sourceFileIndex] !=
              (IDirect3DTexture8 *)0x0;
    }
    if (bVar5) {
      AnmManager::ExecuteScript(g_AnmManager,param_1->field0_0x0 + local_8);
    }
  }
  return 1;
}


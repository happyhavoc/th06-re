
undefined4 __fastcall MainMenu::FUN_00437b41(MainMenu *param_1)

{
  int iVar1;
  int iVar2;
  MainMenu *local_c;
  int local_8;
  
  iVar1 = FUN_0043753c(param_1,8);
  if ((((param_1->cursor == 1) && (iVar2 = FUN_0043a736(0,0), iVar2 == 0)) &&
      (iVar2 = FUN_0043a736(0,1), iVar2 == 0)) &&
     ((iVar2 = FUN_0043a736(1,0), iVar2 == 0 && (iVar2 = FUN_0043a736(1,1), iVar2 == 0)))) {
    param_1->cursor = param_1->cursor + iVar1;
  }
  local_c = param_1;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    FUN_004377a3(local_c,local_8,param_1->cursor,0xffff0000,0x80300000,0x7a);
    local_c = (MainMenu *)(local_c->field0_0x0 + 1);
  }
  if (0x13 < (int)param_1->unk_81f4) {
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      switch(param_1->cursor) {
      case 0:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        param_1->unk_81f0 = 6;
        g_GameManager.field42_0x1823 = 0;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        param_1->unk_81f4 = 0;
        param_1->unk_81fc = 0x40000000;
        param_1->unk_8200 = 0xff000000;
        param_1->unk_820c = 0;
        param_1->unk_8210 = 0x3c;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 1:
        iVar1 = FUN_0043a736(0,0);
        if ((((iVar1 == 0) && (iVar1 = FUN_0043a736(0,1), iVar1 == 0)) &&
            (iVar1 = FUN_0043a736(1,0), iVar1 == 0)) && (iVar1 = FUN_0043a736(1,1), iVar1 == 0)) {
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        }
        else {
          for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
            param_1->field0_0x0[local_8].pendingInterrupt = 4;
          }
          param_1->unk_81f0 = 6;
          g_GameManager.field42_0x1823 = 0;
          g_GameManager.difficulty = 4;
          param_1->unk_81f4 = 0;
          param_1->unk_81fc = 0x40000000;
          param_1->unk_8200 = 0xff000000;
          param_1->unk_820c = 0;
          param_1->unk_8210 = 0x3c;
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        }
        break;
      case 2:
        g_GameManager.field42_0x1823 = 1;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        param_1->unk_81f0 = 6;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        param_1->unk_81f4 = 0;
        param_1->unk_81fc = 0x40000000;
        param_1->unk_8200 = 0xff000000;
        param_1->unk_820c = 0;
        param_1->unk_8210 = 0x3c;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 3:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        param_1->unk_81f0 = 0xc;
        g_GameManager.field42_0x1823 = 0;
        param_1->unk_81f4 = 0;
        param_1->unk_81fc = 0x40000000;
        param_1->unk_8200 = 0xff000000;
        param_1->unk_820c = 0;
        param_1->unk_8210 = 0x3c;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 4:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        param_1->unk_81f0 = 10;
        param_1->unk_81f4 = 0;
        param_1->unk_81fc = 0x40000000;
        param_1->unk_8200 = 0xff000000;
        param_1->unk_820c = 0;
        param_1->unk_8210 = 0x3c;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 5:
        param_1->unk_81f0 = 0x10;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 6:
        param_1->unk_81f0 = 3;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 3;
        }
        param_1->cursor = 0;
        param_1->field_0x8230 = g_Supervisor.cfg.colorMode16bit;
        param_1->field_0x8231 = g_Supervisor.cfg.windowed;
        param_1->field_0x8232 = g_Supervisor.cfg.frameskipConfig;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        break;
      case 7:
        param_1->unk_81f0 = 4;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
      }
    }
    if (((g_CurFrameInput & 0x200) != 0) &&
       ((g_CurFrameInput & 0x200) != (g_LastFrameInput & 0x200))) {
      param_1->unk_81f0 = 4;
      param_1->unk_81f4 = 0;
      for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
        param_1->field0_0x0[local_8].pendingInterrupt = 4;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      param_1->cursor = 7;
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
    }
  }
  return 0;
}


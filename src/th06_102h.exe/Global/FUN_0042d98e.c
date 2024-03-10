
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 FUN_0042d98e(ResultScreen *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  iVar1 = param_1->unk_8;
  if (iVar1 < 9) {
    if (iVar1 == 8) {
      if ((*(int *)&param_1->field_0x28 != param_1->unk_10) && (*(int *)&param_1->field_0x4 == 0x14)
         ) {
        *(int *)&param_1->field_0x28 = param_1->unk_10;
        for (local_8 = *(int *)&param_1->field_0x28 * 10;
            (local_8 < *(int *)&param_1->field_0x28 * 10 + 10 && (local_8 < 0x40));
            local_8 = local_8 + 1) {
          if (g_GameManager.catk[local_8].num_successes == 0) {
            AnmManager::FUN_00434b60
                      (g_AnmManager,(int)(param_1->unk_28a0 + local_8 % 10),0xffffff,0,&DAT_0046bcdc
                      );
          }
          else {
            AnmManager::FUN_00434b60
                      (g_AnmManager,(int)(param_1->unk_28a0 + local_8 % 10),0xffffff,0,
                       (char *)g_GameManager.catk[local_8].name);
          }
        }
      }
      if (0x1d < *(int *)&param_1->field_0x4) {
        iVar1 = FUN_0042d18f(param_1,7);
        if (iVar1 != 0) {
          *(undefined4 *)&param_1->field_0x4 = 0;
          local_c = param_1->unk_40;
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            local_c->pendingInterrupt = (short)*(undefined4 *)&param_1->field_0x2c + 3;
            local_c = local_c + 1;
          }
        }
        if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
          param_1->unk_8 = 0;
          *(undefined4 *)&param_1->field_0x4 = 1;
          local_c = param_1->unk_40;
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            local_c->pendingInterrupt = 1;
            local_c = local_c + 1;
          }
          *(int *)&param_1->field_0x18 = param_1->unk_10;
          param_1->unk_10 = *(int *)&param_1->field_0x2c;
        }
      }
    }
    else {
      if (iVar1 == 0) {
        if (*(int *)&param_1->field_0x4 == 0) {
          local_c = param_1->unk_40;
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            local_c->pendingInterrupt = 1;
            local_c->flags = local_c->flags | 8;
            if ((g_Supervisor.cfg.opts & 1) == 0) {
              (local_c->color).color = (local_c->color).color & 0xff000000;
            }
            else {
              local_c->color = local_c->color;
            }
            local_c = local_c + 1;
          }
          local_c = param_1->unk_40;
          for (local_8 = 0; local_c = local_c + 1, local_8 < 7; local_8 = local_8 + 1) {
            if (local_8 == param_1->unk_10) {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (local_c->color).color = 0xff505050;
              }
              else {
                (local_c->color).color = 0xffffffff;
              }
              (local_c->pos2).x = -4.0;
              (local_c->pos2).y = -4.0;
              (local_c->pos2).z = 0.0;
            }
            else {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (local_c->color).color = 0xb0000000;
              }
              else {
                (local_c->color).color = 0xb0ffffff;
              }
              (local_c->pos2).x = 0.0;
              (local_c->pos2).y = 0.0;
              (local_c->pos2).z = 0.0;
            }
          }
        }
        if (*(int *)&param_1->field_0x4 < 0x14) goto LAB_0042e3fb;
        param_1->unk_8 = param_1->unk_8 + 1;
        *(undefined4 *)&param_1->field_0x4 = 0;
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (0x3b < *(int *)&param_1->field_0x4) {
            g_Supervisor.curState = 1;
            return 0;
          }
        }
        else if (2 < iVar1) {
          if (6 < iVar1) {
            if (iVar1 != 7) goto LAB_0042e3fb;
            if (((g_CurFrameInput & 4) == 0) && ((g_CurFrameInput & 0x100) == 0)) {
              *(undefined4 *)&param_1->field_0x30 = 0;
            }
            else if (*(int *)&param_1->field_0x30 < 5) {
              if (((g_CurFrameInput & 0x800) == 0) ||
                 ((g_CurFrameInput & 0x800) == (g_LastFrameInput & 0x800))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&param_1->field_0x30 = 0;
                }
              }
              else {
                *(int *)&param_1->field_0x30 = *(int *)&param_1->field_0x30 + 1;
              }
            }
            else if (*(int *)&param_1->field_0x30 < 7) {
              if (((g_CurFrameInput & 0x200) == 0) ||
                 ((g_CurFrameInput & 0x200) == (g_LastFrameInput & 0x200))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&param_1->field_0x30 = 0;
                }
              }
              else {
                *(int *)&param_1->field_0x30 = *(int *)&param_1->field_0x30 + 1;
              }
            }
            else if (*(int *)&param_1->field_0x30 < 10) {
              if (((g_CurFrameInput & 0x400) == 0) ||
                 ((g_CurFrameInput & 0x400) == (g_LastFrameInput & 0x400))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&param_1->field_0x30 = 0;
                }
              }
              else {
                *(int *)&param_1->field_0x30 = *(int *)&param_1->field_0x30 + 1;
              }
            }
            else {
              for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  *(undefined *)(local_10 * 0x18 + 0x69ccdc + local_14) = 99;
                  *(undefined *)(local_10 * 0x18 + 0x69cce1 + local_14) = 99;
                }
              }
              *(undefined4 *)&param_1->field_0x30 = 0;
              SoundPlayer::FUN_004311e0(&g_SoundPlayer,0x1c);
            }
          }
          if ((*(int *)&param_1->field_0x24 != param_1->unk_10) &&
             (*(int *)&param_1->field_0x4 == 0x14)) {
            *(int *)&param_1->field_0x24 = param_1->unk_10;
            FUN_00434e20(g_AnmManager,param_1->unk_28a0,0xffffff,0,
                         (&PTR_s______004784d8)[*(int *)&param_1->field_0x24 * 2]);
            FUN_00434e20(g_AnmManager,param_1->unk_28a0 + 1,0xffffff,0,
                         (&PTR_s______004784dc)[*(int *)&param_1->field_0x24 * 2]);
          }
          if (0x1d < *(int *)&param_1->field_0x4) {
            iVar1 = FUN_0042d18f(param_1,2);
            if (iVar1 != 0) {
              *(undefined4 *)&param_1->field_0x4 = 0;
              local_c = param_1->unk_40;
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                local_c->pendingInterrupt = (short)*(undefined4 *)&param_1->field_0x2c + 3;
                local_c = local_c + 1;
              }
            }
            if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))
               ) {
              SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
              param_1->unk_8 = 0;
              *(undefined4 *)&param_1->field_0x4 = 1;
              local_c = param_1->unk_40;
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                local_c->pendingInterrupt = 1;
                local_c = local_c + 1;
              }
              *(int *)&param_1->field_0x14 = param_1->unk_10;
              param_1->unk_10 = *(int *)&param_1->field_0x2c;
            }
          }
        }
        goto LAB_0042e3fb;
      }
      FUN_0042d0a4(param_1,7);
      local_c = param_1->unk_40;
      for (local_8 = 0; local_c = local_c + 1, local_8 < 7; local_8 = local_8 + 1) {
        if (local_8 == param_1->unk_10) {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (local_c->color).color = 0xff505050;
          }
          else {
            (local_c->color).color = 0xffffffff;
          }
          (local_c->pos2).x = -4.0;
          (local_c->pos2).y = -4.0;
          (local_c->pos2).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (local_c->color).color = 0xb0000000;
          }
          else {
            (local_c->color).color = 0xb0ffffff;
          }
          (local_c->pos2).x = 0.0;
          (local_c->pos2).y = 0.0;
          (local_c->pos2).z = 0.0;
        }
      }
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        local_c = param_1->unk_40;
        iVar1 = param_1->unk_10;
        if (-1 < iVar1) {
          if (iVar1 < 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              local_c->pendingInterrupt = (short)param_1->unk_10 + 3;
              local_c = local_c + 1;
            }
            *(int *)&param_1->field_0x2c = param_1->unk_10;
            param_1->unk_8 = param_1->unk_10 + 3;
            *(int *)&param_1->field_0xc = param_1->unk_8;
            *(undefined4 *)&param_1->field_0x4 = 0;
            param_1->unk_10 = *(int *)&param_1->field_0x14;
            *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
            *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
          }
          else if (iVar1 == 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              local_c->pendingInterrupt = (short)param_1->unk_10 + 3;
              local_c = local_c + 1;
            }
            *(int *)&param_1->field_0x2c = param_1->unk_10;
            param_1->unk_8 = 8;
            *(int *)&param_1->field_0xc = param_1->unk_8;
            *(undefined4 *)&param_1->field_0x4 = 0;
            *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
            param_1->unk_10 = *(int *)&param_1->field_0x18;
            *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
          }
          else if (iVar1 == 6) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              local_c->pendingInterrupt = 2;
              local_c = local_c + 1;
            }
            param_1->unk_8 = 2;
            SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
          }
        }
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        param_1->unk_10 = 6;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
      }
    }
  }
  else if (iVar1 == 9) {
    FUN_0042bc85((int)param_1);
  }
  else if (9 < iVar1) {
    if (iVar1 < 0xf) {
      FUN_0042c2d4((int)param_1);
    }
    else if (0xe < iVar1) {
      if (iVar1 < 0x11) {
        FUN_0042d292();
      }
      else if (iVar1 == 0x11) {
        g_Supervisor.curState = 1;
        return 0;
      }
    }
  }
LAB_0042e3fb:
  local_c = param_1->unk_40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    AnmManager::ExecuteScript(g_AnmManager,local_c);
    local_c = local_c + 1;
  }
  *(int *)&param_1->field_0x4 = *(int *)&param_1->field_0x4 + 1;
  return 1;
}


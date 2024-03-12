
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 ResultScreen::unk_resultscreen(ResultScreen *result_screen)

{
  int iVar1;
  int unaff_EDI;
  int local_14;
  int local_10;
  AnmVm *vm;
  int i;
  
  iVar1 = result_screen->unk_8;
  if (iVar1 < 9) {
    if (iVar1 == 8) {
      if ((result_screen->field16_0x28 != result_screen->unk_10) &&
         (result_screen->field1_0x4 == 0x14)) {
        result_screen->field16_0x28 = result_screen->unk_10;
        for (i = result_screen->field16_0x28 * 10;
            (i < result_screen->field16_0x28 * 10 + 10 && (i < 0x40)); i = i + 1) {
          if (g_GameManager.catk[i].num_successes == 0) {
            AnmManager::FUN_00434b60
                      (g_AnmManager,&result_screen->unk_28a0 + i % 10,0xffffff,0,0x46bcdc,unaff_EDI)
            ;
          }
          else {
            AnmManager::FUN_00434b60
                      (g_AnmManager,&result_screen->unk_28a0 + i % 10,0xffffff,0,i * 0x40 + 0x69bce8
                       ,unaff_EDI);
          }
        }
      }
      if (0x1d < result_screen->field1_0x4) {
        iVar1 = FUN_0042d18f(result_screen,7);
        if (iVar1 != 0) {
          result_screen->field1_0x4 = 0;
          vm = &result_screen->unk_40;
          for (i = 0; i < 38; i = i + 1) {
            vm->pendingInterrupt = (short)*(undefined4 *)&result_screen->field17_0x2c + 3;
            vm = vm + 1;
          }
        }
        if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
          result_screen->unk_8 = 0;
          result_screen->field1_0x4 = 1;
          vm = &result_screen->unk_40;
          for (i = 0; i < 0x26; i = i + 1) {
            vm->pendingInterrupt = 1;
            vm = vm + 1;
          }
          result_screen->field9_0x18 = result_screen->unk_10;
          result_screen->unk_10 = *(int *)&result_screen->field17_0x2c;
        }
      }
    }
    else {
      if (iVar1 == 0) {
        if (result_screen->field1_0x4 == 0) {
          vm = &result_screen->unk_40;
          for (i = 0; i < 0x26; i = i + 1) {
            vm->pendingInterrupt = 1;
            *(uint *)&vm->flags = *(uint *)&vm->flags | 8;
            if ((g_Supervisor.cfg.opts & 1) == 0) {
              (vm->color).color = (vm->color).color & 0xff000000;
            }
            else {
              vm->color = vm->color;
            }
            vm = vm + 1;
          }
          vm = &result_screen->field38_0x150;
          for (i = 0; i < 7; i = i + 1) {
            if (i == result_screen->unk_10) {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (vm->color).color = 0xff505050;
              }
              else {
                (vm->color).color = 0xffffffff;
              }
              (vm->pos2).x = -4.0;
              (vm->pos2).y = -4.0;
              (vm->pos2).z = 0.0;
            }
            else {
              if ((g_Supervisor.cfg.opts & 1) == 0) {
                (vm->color).color = 0xb0000000;
              }
              else {
                (vm->color).color = 0xb0ffffff;
              }
              (vm->pos2).x = 0.0;
              (vm->pos2).y = 0.0;
              (vm->pos2).z = 0.0;
            }
            vm = vm + 1;
          }
        }
        if (result_screen->field1_0x4 < 0x14) goto LAB_0042e3fb;
        result_screen->unk_8 = result_screen->unk_8 + 1;
        result_screen->field1_0x4 = 0;
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (0x3b < result_screen->field1_0x4) {
            g_Supervisor.curState = 1;
            return 0;
          }
        }
        else if (2 < iVar1) {
          if (6 < iVar1) {
            if (iVar1 != 7) goto LAB_0042e3fb;
            if (((g_CurFrameInput & 4) == 0) && ((g_CurFrameInput & 0x100) == 0)) {
              *(undefined4 *)&result_screen->field_0x30 = 0;
            }
            else if (*(int *)&result_screen->field_0x30 < 5) {
              if (((g_CurFrameInput & 0x800) == 0) ||
                 ((g_CurFrameInput & 0x800) == (g_LastFrameInput & 0x800))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&result_screen->field_0x30 = 0;
                }
              }
              else {
                *(int *)&result_screen->field_0x30 = *(int *)&result_screen->field_0x30 + 1;
              }
            }
            else if (*(int *)&result_screen->field_0x30 < 7) {
              if (((g_CurFrameInput & 0x200) == 0) ||
                 ((g_CurFrameInput & 0x200) == (g_LastFrameInput & 0x200))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&result_screen->field_0x30 = 0;
                }
              }
              else {
                *(int *)&result_screen->field_0x30 = *(int *)&result_screen->field_0x30 + 1;
              }
            }
            else if (*(int *)&result_screen->field_0x30 < 10) {
              if (((g_CurFrameInput & 0x400) == 0) ||
                 ((g_CurFrameInput & 0x400) == (g_LastFrameInput & 0x400))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)&result_screen->field_0x30 = 0;
                }
              }
              else {
                *(int *)&result_screen->field_0x30 = *(int *)&result_screen->field_0x30 + 1;
              }
            }
            else {
              for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  *(undefined *)(local_10 * 0x18 + 0x69ccdc + local_14) = 99;
                  *(undefined *)(local_10 * 0x18 + 0x69cce1 + local_14) = 99;
                }
              }
              *(undefined4 *)&result_screen->field_0x30 = 0;
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1c);
            }
          }
          if ((result_screen->field15_0x24 != result_screen->unk_10) &&
             (result_screen->field1_0x4 == 0x14)) {
            result_screen->field15_0x24 = result_screen->unk_10;
            FUN_00434e20(g_AnmManager,&result_screen->unk_28a0,0xffffff,0,
                         (&g_CharacterList)[result_screen->field15_0x24 * 2],unaff_EDI);
            FUN_00434e20(g_AnmManager,&result_screen->field76_0x29b0,0xffffff,0,
                         (&PTR_Hakurei_Reimu__Dream__004784dc)[result_screen->field15_0x24 * 2],
                         unaff_EDI);
          }
          if (0x1d < result_screen->field1_0x4) {
            iVar1 = FUN_0042d18f(result_screen,2);
            if (iVar1 != 0) {
              result_screen->field1_0x4 = 0;
              vm = &result_screen->unk_40;
              for (i = 0; i < 0x26; i = i + 1) {
                vm->pendingInterrupt = (short)*(undefined4 *)&result_screen->field17_0x2c + 3;
                vm = vm + 1;
              }
            }
            if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))
               ) {
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
              result_screen->unk_8 = 0;
              result_screen->field1_0x4 = 1;
              vm = &result_screen->unk_40;
              for (i = 0; i < 38; i = i + 1) {
                vm->pendingInterrupt = 1;
                vm = vm + 1;
              }
              *(int *)&result_screen->field_0x14 = result_screen->unk_10;
              result_screen->unk_10 = *(int *)&result_screen->field17_0x2c;
            }
          }
        }
        goto LAB_0042e3fb;
      }
      FUN_0042d0a4(result_screen,7);
      vm = &result_screen->field38_0x150;
      for (i = 0; i < 7; i = i + 1) {
        if (i == result_screen->unk_10) {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm->color).color = 0xff505050;
          }
          else {
            (vm->color).color = 0xffffffff;
          }
          (vm->pos2).x = -4.0;
          (vm->pos2).y = -4.0;
          (vm->pos2).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm->color).color = 0xb0000000;
          }
          else {
            (vm->color).color = 0xb0ffffff;
          }
          (vm->pos2).x = 0.0;
          (vm->pos2).y = 0.0;
          (vm->pos2).z = 0.0;
        }
        vm = vm + 1;
      }
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        vm = &result_screen->unk_40;
        iVar1 = result_screen->unk_10;
        if (-1 < iVar1) {
          if (iVar1 < 5) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = (short)result_screen->unk_10 + 3;
              vm = vm + 1;
            }
            *(int *)&result_screen->field17_0x2c = result_screen->unk_10;
            result_screen->unk_8 = result_screen->unk_10 + 3;
            result_screen->field3_0xc = result_screen->unk_8;
            result_screen->field1_0x4 = 0;
            result_screen->unk_10 = *(int *)&result_screen->field_0x14;
            result_screen->field15_0x24 = -1;
            result_screen->field16_0x28 = -1;
          }
          else if (iVar1 == 5) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = (short)result_screen->unk_10 + 3;
              vm = vm + 1;
            }
            *(int *)&result_screen->field17_0x2c = result_screen->unk_10;
            result_screen->unk_8 = 8;
            result_screen->field3_0xc = result_screen->unk_8;
            result_screen->field1_0x4 = 0;
            result_screen->field15_0x24 = -1;
            result_screen->unk_10 = result_screen->field9_0x18;
            result_screen->field16_0x28 = -1;
          }
          else if (iVar1 == 6) {
            for (i = 0; i < 0x26; i = i + 1) {
              vm->pendingInterrupt = 2;
              vm = vm + 1;
            }
            result_screen->unk_8 = 2;
            SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
          }
        }
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        result_screen->unk_10 = 6;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
      }
    }
  }
  else if (iVar1 == 9) {
    FUN_0042bc85(result_screen);
  }
  else if (9 < iVar1) {
    if (iVar1 < 0xf) {
      FUN_0042c2d4(result_screen);
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
  vm = &result_screen->unk_40;
  for (i = 0; i < 38; i = i + 1) {
    AnmManager::ExecuteScript(g_AnmManager,vm);
    vm = vm + 1;
  }
  result_screen->field1_0x4 = result_screen->field1_0x4 + 1;
  return 1;
}


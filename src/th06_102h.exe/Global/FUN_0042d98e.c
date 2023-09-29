
undefined4 FUN_0042d98e(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 9) {
    if (iVar1 == 8) {
      if ((*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 4) == 0x14))
      {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
        for (local_8 = *(int *)(param_1 + 0x28) * 10;
            (local_8 < *(int *)(param_1 + 0x28) * 10 + 10 && (local_8 < 0x40));
            local_8 = local_8 + 1) {
          if (*(short *)(&DAT_0069bd0c + local_8 * 0x40) == 0) {
            FUN_00434b60(g_AnmManager,param_1 + 0x28a0 + (local_8 % 10) * 0x110,0xffffff,0,
                         &DAT_0046bcdc);
          }
          else {
            FUN_00434b60(g_AnmManager,param_1 + 0x28a0 + (local_8 % 10) * 0x110,0xffffff,0,
                         &DAT_0069bce8 + local_8 * 0x40);
          }
        }
      }
      if (0x1d < *(int *)(param_1 + 4)) {
        iVar1 = FUN_0042d18f(param_1,7);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 4) = 0;
          local_c = (AnmVm *)(param_1 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(short *)((int)local_c + 0x8a) = (short)*(undefined4 *)(param_1 + 0x2c) + 3;
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
        }
        if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
          FUN_004311e0(0xb);
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 4) = 1;
          local_c = (AnmVm *)(param_1 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(undefined2 *)((int)local_c + 0x8a) = 1;
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x2c);
        }
      }
    }
    else {
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = (AnmVm *)(param_1 + 0x40);
          for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
            *(undefined2 *)((int)local_c + 0x8a) = 1;
            *(uint *)((int)local_c + 0x80) = *(uint *)((int)local_c + 0x80) | 8;
            if ((g_GameContext.cfg.opts & 1) == 0) {
              *(uint *)((int)local_c + 0x7c) = *(uint *)((int)local_c + 0x7c) & 0xff000000;
            }
            else {
              *(undefined4 *)((int)local_c + 0x7c) = *(undefined4 *)((int)local_c + 0x7c);
            }
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
          local_c = (AnmVm *)(param_1 + 0x150);
          for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
            if (local_8 == *(int *)(param_1 + 0x10)) {
              if ((g_GameContext.cfg.opts & 1) == 0) {
                *(undefined4 *)((int)local_c + 0x7c) = 0xff505050;
              }
              else {
                *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
              }
              *(undefined4 *)((int)local_c + 0xe4) = 0xc0800000;
              *(undefined4 *)((int)local_c + 0xe8) = 0xc0800000;
              *(undefined4 *)((int)local_c + 0xec) = 0;
            }
            else {
              if ((g_GameContext.cfg.opts & 1) == 0) {
                *(undefined4 *)((int)local_c + 0x7c) = 0xb0000000;
              }
              else {
                *(undefined4 *)((int)local_c + 0x7c) = 0xb0ffffff;
              }
              *(undefined4 *)((int)local_c + 0xe4) = 0;
              *(undefined4 *)((int)local_c + 0xe8) = 0;
              *(undefined4 *)((int)local_c + 0xec) = 0;
            }
            local_c = (AnmVm *)((int)local_c + 0x110);
          }
        }
        if (*(int *)(param_1 + 4) < 0x14) goto LAB_0042e3fb;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (0x3b < *(int *)(param_1 + 4)) {
            g_GameContext.unkInput2 = 1;
            return 0;
          }
        }
        else if (2 < iVar1) {
          if (6 < iVar1) {
            if (iVar1 != 7) goto LAB_0042e3fb;
            if (((g_CurFrameInput & 4) == 0) && ((g_CurFrameInput & 0x100) == 0)) {
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            else if (*(int *)(param_1 + 0x30) < 5) {
              if (((g_CurFrameInput & 0x800) == 0) ||
                 ((g_CurFrameInput & 0x800) == (g_LastFrameInput & 0x800))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)(param_1 + 0x30) = 0;
                }
              }
              else {
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
            }
            else if (*(int *)(param_1 + 0x30) < 7) {
              if (((g_CurFrameInput & 0x200) == 0) ||
                 ((g_CurFrameInput & 0x200) == (g_LastFrameInput & 0x200))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)(param_1 + 0x30) = 0;
                }
              }
              else {
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
            }
            else if (*(int *)(param_1 + 0x30) < 10) {
              if (((g_CurFrameInput & 0x400) == 0) ||
                 ((g_CurFrameInput & 0x400) == (g_LastFrameInput & 0x400))) {
                if (((g_CurFrameInput & 0x160b) != 0) &&
                   ((g_CurFrameInput & 0x160b) != (g_LastFrameInput & 0x160b))) {
                  *(undefined4 *)(param_1 + 0x30) = 0;
                }
              }
              else {
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              }
            }
            else {
              for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
                for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                  (&DAT_0069ccdc)[local_14 + local_10 * 0x18] = 99;
                  (&DAT_0069cce1)[local_14 + local_10 * 0x18] = 99;
                }
              }
              *(undefined4 *)(param_1 + 0x30) = 0;
              FUN_004311e0(0x1c);
            }
          }
          if ((*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x10)) &&
             (*(int *)(param_1 + 4) == 0x14)) {
            *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
            FUN_00434e20(g_AnmManager,param_1 + 0x28a0,0xffffff,0,
                         (&PTR_DAT_004784d8)[*(int *)(param_1 + 0x24) * 2]);
            FUN_00434e20(g_AnmManager,param_1 + 0x29b0,0xffffff,0,
                         (&PTR_DAT_004784dc)[*(int *)(param_1 + 0x24) * 2]);
          }
          if (0x1d < *(int *)(param_1 + 4)) {
            iVar1 = FUN_0042d18f(param_1,2);
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 4) = 0;
              local_c = (AnmVm *)(param_1 + 0x40);
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                *(short *)((int)local_c + 0x8a) = (short)*(undefined4 *)(param_1 + 0x2c) + 3;
                local_c = (AnmVm *)((int)local_c + 0x110);
              }
            }
            if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))
               ) {
              FUN_004311e0(0xb);
              *(undefined4 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 4) = 1;
              local_c = (AnmVm *)(param_1 + 0x40);
              for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
                *(undefined2 *)((int)local_c + 0x8a) = 1;
                local_c = (AnmVm *)((int)local_c + 0x110);
              }
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
              *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x2c);
            }
          }
        }
        goto LAB_0042e3fb;
      }
      FUN_0042d0a4(param_1,7);
      local_c = (AnmVm *)(param_1 + 0x150);
      for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
        if (local_8 == *(int *)(param_1 + 0x10)) {
          if ((g_GameContext.cfg.opts & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xff505050;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xffffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0xc0800000;
          *(undefined4 *)((int)local_c + 0xe8) = 0xc0800000;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        else {
          if ((g_GameContext.cfg.opts & 1) == 0) {
            *(undefined4 *)((int)local_c + 0x7c) = 0xb0000000;
          }
          else {
            *(undefined4 *)((int)local_c + 0x7c) = 0xb0ffffff;
          }
          *(undefined4 *)((int)local_c + 0xe4) = 0;
          *(undefined4 *)((int)local_c + 0xe8) = 0;
          *(undefined4 *)((int)local_c + 0xec) = 0;
        }
        local_c = (AnmVm *)((int)local_c + 0x110);
      }
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        local_c = (AnmVm *)(param_1 + 0x40);
        iVar1 = *(int *)(param_1 + 0x10);
        if (-1 < iVar1) {
          if (iVar1 < 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(short *)((int)local_c + 0x8a) = (short)*(undefined4 *)(param_1 + 0x10) + 3;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10) + 3;
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
          }
          else if (iVar1 == 5) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(short *)((int)local_c + 0x8a) = (short)*(undefined4 *)(param_1 + 0x10) + 3;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
            *(undefined4 *)(param_1 + 8) = 8;
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
          }
          else if (iVar1 == 6) {
            for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
              *(undefined2 *)((int)local_c + 0x8a) = 2;
              local_c = (AnmVm *)((int)local_c + 0x110);
            }
            *(undefined4 *)(param_1 + 8) = 2;
            FUN_004311e0(0xb);
          }
        }
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        *(undefined4 *)(param_1 + 0x10) = 6;
        FUN_004311e0(0xb);
      }
    }
  }
  else if (iVar1 == 9) {
    FUN_0042bc85(param_1);
  }
  else if (9 < iVar1) {
    if (iVar1 < 0xf) {
      FUN_0042c2d4(param_1);
    }
    else if (0xe < iVar1) {
      if (iVar1 < 0x11) {
        FUN_0042d292();
      }
      else if (iVar1 == 0x11) {
        g_GameContext.unkInput2 = 1;
        return 0;
      }
    }
  }
LAB_0042e3fb:
  local_c = (AnmVm *)(param_1 + 0x40);
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    AnmManager::FUN_00433960(g_AnmManager,local_c);
    local_c = local_c + 1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 1;
}


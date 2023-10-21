
void __fastcall FUN_0042c2d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint unaff_retaddr;
  int local_b8;
  int local_b4;
  char local_a4 [68];
  int local_60;
  char local_5c [68];
  uint local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 10) {
    if (*(int *)(param_1 + 4) == 0x3c) {
      if (DAT_0069d4b8 == '\0') {
        if (g_GameContext.framerateMultiplier < 0.99 == NAN(g_GameContext.framerateMultiplier)) {
          local_c = 9;
        }
        else {
          local_c = 0xd;
        }
      }
      else {
        local_c = 0xc;
      }
      local_8 = param_1 + 0x150;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        *(undefined2 *)(local_8 + 0x8a) = (undefined2)local_c;
        local_8 = local_8 + 0x110;
      }
      if (local_c != 9) {
        *(undefined4 *)(param_1 + 8) = 0xb;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    local_8 = param_1 + 0x1140;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(uint *)(param_1 + 0x11bc) = *(uint *)(param_1 + 0x11bc) & 0xff000000 | 0xff6060;
      *(uint *)(param_1 + 0x12cc) = *(uint *)(param_1 + 0x12cc) & 0xff000000 | 0x606060;
    }
    else {
      *(uint *)(param_1 + 0x11bc) = *(uint *)(param_1 + 0x11bc) & 0xff000000 | 0x606060;
      *(uint *)(param_1 + 0x12cc) = *(uint *)(param_1 + 0x12cc) & 0xff000000 | 0xff6060;
    }
    if (*(int *)(param_1 + 4) < 0x50) goto LAB_0042d095;
    FUN_0042d18f(param_1,2);
    if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) &&
       (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
      if (((g_CurFrameInput & 0x1001) == 0) ||
         ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
      if (*(int *)(param_1 + 0x10) == 0) goto LAB_0042c515;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_004311e0(0xb);
    *(undefined4 *)(param_1 + 8) = 2;
    local_8 = param_1 + 0x40;
    for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
      *(undefined2 *)(local_8 + 0x8a) = 2;
      local_8 = local_8 + 0x110;
    }
  }
  else {
    if (iVar1 == 0xb) {
      if ((0x13 < *(int *)(param_1 + 4)) &&
         ((((g_CurFrameInput & 0x1001) != 0 &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
          (((g_CurFrameInput & 10) != 0 && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))))))
      {
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_004311e0(0xb);
        *(undefined4 *)(param_1 + 8) = 2;
        local_8 = param_1 + 0x40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 2;
          local_8 = local_8 + 0x110;
        }
      }
      goto LAB_0042d095;
    }
    if (iVar1 != 0xc) {
      if (iVar1 == 0xd) {
        if (*(int *)(param_1 + 4) < 0x1e) goto LAB_0042d095;
        if ((((g_CurFrameInput & 0x10) != 0) &&
            ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
           (((g_CurFrameInput & 0x10) != 0 && (DAT_0069d90c != 0)))) {
          do {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x10;
            if (*(int *)(param_1 + 0x20) < 0) {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x60;
            }
          } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
          FUN_004311e0(0xc);
        }
        if ((((g_CurFrameInput & 0x20) != 0) &&
            ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20))) ||
           (((g_CurFrameInput & 0x20) != 0 && (DAT_0069d90c != 0)))) {
          do {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
            if (0x5f < *(int *)(param_1 + 0x20)) {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x60;
            }
          } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
          FUN_004311e0(0xc);
        }
        if ((((g_CurFrameInput & 0x40) != 0) &&
            ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40))) ||
           (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
          do {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
            if (*(int *)(param_1 + 0x20) % 0x10 == 0xf) {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
            }
            if (*(int *)(param_1 + 0x20) < 0) {
              *(undefined4 *)(param_1 + 0x20) = 0xf;
            }
          } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
          FUN_004311e0(0xc);
        }
        if ((((g_CurFrameInput & 0x80) != 0) &&
            ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80))) ||
           (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
          do {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            if (*(int *)(param_1 + 0x20) % 0x10 == 0) {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x10;
            }
          } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
          FUN_004311e0(0xc);
        }
        if ((((g_CurFrameInput & 0x1001) != 0) &&
            ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
           (((g_CurFrameInput & 0x1001) != 0 && (DAT_0069d90c != 0)))) {
          if (*(int *)(param_1 + 0x10) < 8) {
            local_b4 = *(int *)(param_1 + 0x10);
          }
          else {
            local_b4 = 7;
          }
          local_60 = local_b4;
          if (*(int *)(param_1 + 0x20) < 0x5e) {
            *(undefined *)(param_1 + local_b4 + 0x34) = PTR_DAT_004784d4[*(int *)(param_1 + 0x20)];
          }
          else if (*(int *)(param_1 + 0x20) == 0x5e) {
            *(undefined *)(param_1 + local_b4 + 0x34) = 0x20;
          }
          else {
            sprintf(local_a4,"./replay/th6_%.2d.rpy",*(int *)(param_1 + 0x1c) + 1);
            FUN_0042ab30(local_a4,param_1 + 0x34);
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined4 *)(param_1 + 8) = 2;
            local_8 = param_1 + 0x40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              *(undefined2 *)(local_8 + 0x8a) = 2;
              local_8 = local_8 + 0x110;
            }
          }
          if ((*(int *)(param_1 + 0x10) < 8) &&
             (*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1, *(int *)(param_1 + 0x10) == 8
             )) {
            *(undefined4 *)(param_1 + 0x20) = 0x5f;
          }
          FUN_004311e0(10);
        }
        if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))
           || (((g_CurFrameInput & 10) != 0 && (DAT_0069d90c != 0)))) {
          if (*(int *)(param_1 + 0x10) < 8) {
            local_b8 = *(int *)(param_1 + 0x10);
          }
          else {
            local_b8 = 7;
          }
          if (0 < *(int *)(param_1 + 0x10)) {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
            *(undefined *)(param_1 + local_b8 + 0x34) = 0x20;
          }
          FUN_004311e0(0xb);
        }
        if (((g_CurFrameInput & 8) == 0) || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)))
        goto LAB_0042d095;
      }
      else {
        if (iVar1 != 0xe) goto LAB_0042d095;
        local_8 = param_1 + 0x1140;
        if (*(int *)(param_1 + 0x10) == 0) {
          *(uint *)(param_1 + 0x11bc) = *(uint *)(param_1 + 0x11bc) & 0xff000000 | 0xff6060;
          *(uint *)(param_1 + 0x12cc) = *(uint *)(param_1 + 0x12cc) & 0xff000000 | 0x606060;
        }
        else {
          *(uint *)(param_1 + 0x11bc) = *(uint *)(param_1 + 0x11bc) & 0xff000000 | 0x606060;
          *(uint *)(param_1 + 0x12cc) = *(uint *)(param_1 + 0x12cc) & 0xff000000 | 0xff6060;
        }
        if (*(int *)(param_1 + 4) < 0x14) goto LAB_0042d095;
        FUN_0042d18f(param_1,2);
        if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10)))
           && (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
          if (((g_CurFrameInput & 0x1001) == 0) ||
             ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
          *(undefined4 *)(param_1 + 4) = 0;
          if (*(int *)(param_1 + 0x10) == 0) {
            local_8 = param_1 + 0x40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              *(undefined2 *)(local_8 + 0x8a) = 0xf;
              local_8 = local_8 + 0x110;
            }
            local_8 = param_1 + 0x40 + (*(int *)(param_1 + 0x1c) + 0x16) * 0x110;
            *(undefined2 *)(local_8 + 0x8a) = 0xe;
            *(undefined4 *)(param_1 + 8) = 0xd;
            goto LAB_0042d095;
          }
        }
      }
LAB_0042c515:
      FUN_004311e0(10);
      *(undefined4 *)(param_1 + 8) = 0xc;
      local_8 = param_1 + 0x40;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        *(undefined2 *)(local_8 + 0x8a) = 10;
        local_8 = local_8 + 0x110;
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0045d588("replay");
      for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
        sprintf(local_5c,"./replay/th6_%.2d.rpy",local_10 + 1);
        local_14 = (undefined4 *)FileSystem::OpenPath(local_5c,1);
        if (local_14 != (undefined4 *)0x0) {
          iVar1 = FUN_0042a140(local_14,g_LastFileSize);
          if (iVar1 == 0) {
            puVar2 = local_14;
            puVar3 = (undefined4 *)(param_1 + 0x51b0 + local_10 * 0x50);
            for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
          }
          _free(local_14);
        }
      }
    }
    if (0x13 < *(int *)(param_1 + 4)) {
      FUN_0042d0a4(param_1,0xf);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        FUN_004311e0(10);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 4) = 0;
        FUN_0045d414(param_1 + 0x5670);
        *(undefined4 *)(param_1 + 0x5684) = DAT_0069bca4;
        if ((*(char (*) [4])(param_1 + 0x51b0 + *(int *)(param_1 + 0x10) * 0x50) ==
             (char  [4])0x50523654) &&
           (*(short *)(param_1 + 0x51b4 + *(int *)(param_1 + 0x10) * 0x50) == 0x102)) {
          local_8 = param_1 + 0x40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0xb;
            local_8 = local_8 + 0x110;
          }
          local_8 = param_1 + 0x40 + (*(int *)(param_1 + 0x1c) + 0x16) * 0x110;
          *(undefined2 *)(local_8 + 0x8a) = 0xe;
          *(undefined4 *)(param_1 + 8) = 0xe;
        }
        else {
          local_8 = param_1 + 0x40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0xf;
            local_8 = local_8 + 0x110;
          }
          local_8 = param_1 + 0x40 + (*(int *)(param_1 + 0x1c) + 0x16) * 0x110;
          *(undefined2 *)(local_8 + 0x8a) = 0xe;
          *(undefined4 *)(param_1 + 8) = 0xd;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        FUN_004311e0(0xb);
        *(undefined4 *)(param_1 + 8) = 10;
        local_8 = param_1 + 0x40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 2;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
LAB_0042d095:
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return;
}


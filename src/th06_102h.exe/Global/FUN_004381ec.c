
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004381ec(int param_1)

{
  int iVar1;
  BOOL BVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  _WIN32_FIND_DATAA local_19c;
  char local_5c [64];
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  HANDLE local_10;
  int local_c;
  int local_8;
  
  local_1c = __security_cookie ^ unaff_retaddr;
  iVar1 = *(int *)(param_1 + 0x81f0);
  if (iVar1 == 0xc) {
    if (*(int *)(param_1 + 0x81f4) == 0x3c) {
      iVar1 = FUN_0043a1ec(param_1);
      if (iVar1 == 0) {
        local_14 = 0;
        for (local_c = 0; local_c < 0xf; local_c = local_c + 1) {
          sprintf(local_5c,"./replay/th6_%.2d.rpy",local_c + 1);
          local_18 = (undefined4 *)OpenPath(local_5c,1);
          if (local_18 != (undefined4 *)0x0) {
            iVar1 = FUN_0042a140(local_18,g_FileSize);
            if (iVar1 == 0) {
              puVar4 = local_18;
              puVar5 = (undefined4 *)(param_1 + 0xfc1c + local_14 * 0x50);
              for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              _strcpy((char *)(param_1 + 0x823c + local_14 * 0x200),local_5c);
              sprintf((char *)(param_1 + 0xfa3c + local_14 * 8),"No.%.2d",local_c + 1);
              local_14 = local_14 + 1;
            }
            _free(local_18);
          }
        }
        FUN_0045d588("./replay");
        FUN_0045d5f9("./replay");
        local_10 = FindFirstFileA("th6_ud????.rpy",&local_19c);
        if (local_10 != (HANDLE)0xffffffff) {
          for (local_c = 0; local_c < 0x2d; local_c = local_c + 1) {
            local_18 = (undefined4 *)OpenPath(local_19c.cFileName,1);
            if (local_18 != (undefined4 *)0x0) {
              iVar1 = FUN_0042a140(local_18,g_FileSize);
              if (iVar1 == 0) {
                puVar4 = local_18;
                puVar5 = (undefined4 *)(param_1 + 0xfc1c + local_14 * 0x50);
                for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar5 = puVar5 + 1;
                }
                sprintf((char *)(param_1 + 0x823c + local_14 * 0x200),"./replay/%s",
                        local_19c.cFileName);
                sprintf((char *)(param_1 + 0xfa3c + local_14 * 8),"User ");
                local_14 = local_14 + 1;
              }
              _free(local_18);
              BVar2 = FindNextFileA(local_10,&local_19c);
              if (BVar2 == 0) break;
            }
          }
        }
        FindClose(local_10);
        FUN_0045d5f9(&DAT_0046c3b4);
        *(int *)(param_1 + 0x81ec) = local_14;
        *(undefined4 *)(param_1 + 0x81fc) = 0;
        *(undefined4 *)(param_1 + 0x8214) = *(undefined4 *)(param_1 + 0x8210);
        *(undefined4 *)(param_1 + 0x8210) = 0;
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        local_8 = param_1;
        for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 0xf;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_GameContext.unkInput2 = 4;
      }
    }
  }
  else if (iVar1 == 0xd) {
    if (0x27 < *(int *)(param_1 + 0x81f4)) {
      if (*(int *)(param_1 + 0x81ec) != 0) {
        FUN_0043753c(param_1,*(undefined4 *)(param_1 + 0x81ec));
        *(undefined4 *)(param_1 + 0x81e8) = *(undefined4 *)(param_1 + 0x81a0);
        if (((BUTTONS_PRESSED_CURFRAME & 0x1001) != 0) &&
           ((BUTTONS_PRESSED_CURFRAME & 0x1001) != (BUTTONS_PRESSED_PREVFRAME & 0x1001))) {
          *(undefined4 *)(param_1 + 0x81f0) = 0xf;
          local_8 = param_1 + 0x6710;
          for (local_c = 0; local_c < 0x19; local_c = local_c + 1) {
            *(undefined2 *)(local_8 + 0x8a) = 0x11;
            local_8 = local_8 + 0x110;
          }
          local_8 = param_1 + (*(int *)(param_1 + 0x81e8) + 99) * 0x110;
          *(undefined2 *)(local_8 + 0x8a) = 0x10;
          *(undefined4 *)(param_1 + 0x81f4) = 0;
          *(undefined4 *)(param_1 + 0x81a0) = 0;
          FUN_004311e0(10);
          pbVar3 = OpenPath(param_1 + 0x823c + *(int *)(param_1 + 0x81e8) * 0x200,1);
          *(byte **)(param_1 + 0x10edc) = pbVar3;
          FUN_0042a140(*(undefined4 *)(param_1 + 0x10edc),g_FileSize);
          for (local_c = 0; local_c < 7; local_c = local_c + 1) {
            if (*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) != 0) {
              *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) =
                   *(int *)(param_1 + 0x10edc) +
                   *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4);
            }
          }
          do {
            if (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                        *(int *)(param_1 + 0x81a0) * 4) != 0) goto LAB_0043877b;
            *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
          } while (*(int *)(param_1 + 0x81a0) < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((BUTTONS_PRESSED_CURFRAME & 10) != 0) &&
         ((BUTTONS_PRESSED_CURFRAME & 10) != (BUTTONS_PRESSED_PREVFRAME & 10))) {
        *(undefined4 *)(param_1 + 0x81f0) = 0xe;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_c * 0x110) = 4;
        }
        FUN_004311e0(0xb);
        *(undefined4 *)(param_1 + 0x81a0) = 0;
      }
    }
  }
  else if (iVar1 == 0xe) {
    if (*(int *)(param_1 + 0x81f4) == 0x24) {
      *(undefined4 *)(param_1 + 0x81f0) = 0;
      *(undefined4 *)(param_1 + 0x81f4) = 0;
    }
  }
  else if ((iVar1 == 0xf) && (0x27 < *(int *)(param_1 + 0x81f4))) {
    local_c = FUN_0043753c(param_1,7);
    if (local_c < 0) {
      while (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                     *(int *)(param_1 + 0x81a0) * 4) == 0) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + -1;
        if (*(int *)(param_1 + 0x81a0) < 0) {
          *(undefined4 *)(param_1 + 0x81a0) = 6;
        }
      }
    }
    else if (0 < local_c) {
      while (*(int *)(param_1 + *(int *)(param_1 + 0x81e8) * 0x50 + 0xfc50 +
                     *(int *)(param_1 + 0x81a0) * 4) == 0) {
        *(int *)(param_1 + 0x81a0) = *(int *)(param_1 + 0x81a0) + 1;
        if (6 < *(int *)(param_1 + 0x81a0)) {
          *(undefined4 *)(param_1 + 0x81a0) = 0;
        }
      }
    }
    if ((((BUTTONS_PRESSED_CURFRAME & 0x1001) == 0) ||
        ((BUTTONS_PRESSED_CURFRAME & 0x1001) == (BUTTONS_PRESSED_PREVFRAME & 0x1001))) ||
       (*(int *)(param_1 + 0x10edc) + 0x34 + *(int *)(param_1 + 0x81a0) * 0x50 == 0)) {
      if (((BUTTONS_PRESSED_CURFRAME & 10) != 0) &&
         ((BUTTONS_PRESSED_CURFRAME & 10) != (BUTTONS_PRESSED_PREVFRAME & 10))) {
        _free(*(void **)(param_1 + 0x10edc));
        *(undefined4 *)(param_1 + 0x10edc) = 0;
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_c * 0x110) = 4;
        }
        FUN_004311e0(0xb);
        *(undefined4 *)(param_1 + 0x81f0) = 0xd;
        local_8 = param_1;
        for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
          *(undefined2 *)(local_8 + 0x8a) = 0xf;
          local_8 = local_8 + 0x110;
        }
        *(undefined4 *)(param_1 + 0x81a0) = *(undefined4 *)(param_1 + 0x81e8);
      }
    }
    else {
      _DAT_0069bcbc = 1;
      g_GameContext.framerateMultiplier = 1.0;
      _strcpy(&DAT_0069d4cc,(char *)(param_1 + 0x823c + *(int *)(param_1 + 0x81e8) * 0x200));
      CUR_RANK = (int)*(byte *)(*(int *)(param_1 + 0x10edc) + 7);
      DAT_0069d4bd = *(byte *)(*(int *)(param_1 + 0x10edc) + 6) / 2;
      DAT_0069d4be = *(byte *)(*(int *)(param_1 + 0x10edc) + 6) % 2;
      for (local_c = 0; *(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) == 0;
          local_c = local_c + 1) {
      }
      LIFE_COUNT = *(undefined *)(*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) + 9);
      BOMB_COUNT = *(undefined *)(*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) + 10);
      _free(*(void **)(param_1 + 0x10edc));
      *(undefined4 *)(param_1 + 0x10edc) = 0;
      CUR_STAGE = *(undefined4 *)(param_1 + 0x81a0);
      g_GameContext.unkInput2 = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return;
}


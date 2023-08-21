
void FUN_0042564c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  char *local_98;
  undefined4 *local_8c;
  undefined4 *local_78;
  int local_70;
  undefined4 local_5c [16];
  uint local_1c;
  char *local_18;
  int local_14;
  char *local_10;
  int local_c;
  int local_8;
  
  local_1c = __security_cookie ^ unaff_retaddr;
  iVar2 = FUN_00435010(0,"data/result/music.jpg");
  if ((((iVar2 == 0) && (iVar2 = FUN_00431dc0(0x29,"data/music00.anm",0x100), iVar2 == 0)) &&
      (iVar2 = FUN_00431dc0(0x2a,"data/music01.anm",0x101), iVar2 == 0)) &&
     (iVar3 = FUN_00431dc0(0x2b,"data/music02.anm",0x111), iVar2 = DAT_006d4588, iVar3 == 0)) {
    *(undefined2 *)(param_1 + 0xd8) = 0x100;
    FUN_00432430(param_1 + 0x24,*(undefined4 *)(iVar2 + 0x1cd34));
    *(undefined4 *)(param_1 + 8) = 0;
    local_18 = (char *)OpenPath("data/musiccmt.txt",0);
    local_10 = local_18;
    if (local_18 != (char *)0x0) {
      local_8c = (undefined4 *)operator_new(0x4e40);
      if (local_8c == (undefined4 *)0x0) {
        local_8c = (undefined4 *)0x0;
      }
      else {
        local_70 = 0x20;
        local_78 = local_8c;
        while (local_70 = local_70 + -1, -1 < local_70) {
          puVar5 = local_78;
          for (iVar2 = 0x9c; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = 0;
          local_78 = (undefined4 *)((int)local_78 + 0x272);
        }
      }
      *(undefined4 **)(param_1 + 0x20) = local_8c;
      local_8 = -1;
      while ((int)local_10 - (int)local_18 < g_FileSize) {
        if (*local_10 == '@') {
          local_10 = local_10 + 1;
          local_8 = local_8 + 1;
          local_14 = 0;
          while ((*local_10 != '\n' && (*local_10 != '\r'))) {
            *(char *)(local_8 * 0x272 + *(int *)(param_1 + 0x20) + local_14) = *local_10;
            local_10 = local_10 + 1;
            local_14 = local_14 + 1;
            if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
          }
          while ((*local_10 == '\n' || (*local_10 == '\r'))) {
            local_10 = local_10 + 1;
            if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
          }
          local_14 = 0;
          while ((*local_10 != '\n' && (*local_10 != '\r'))) {
            *(char *)(local_8 * 0x272 + *(int *)(param_1 + 0x20) + 0x40 + local_14) = *local_10;
            local_10 = local_10 + 1;
            local_14 = local_14 + 1;
            if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
          }
          while ((*local_10 == '\n' && (*local_10 == '\r'))) {
            local_10 = local_10 + 1;
            if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
          }
          local_c = 0;
          while ((local_c < 8 && (*local_10 != '@'))) {
            puVar5 = (undefined4 *)
                     (*(int *)(param_1 + 0x20) + local_8 * 0x272 + 0x62 + local_c * 0x42);
            for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = 0;
            local_14 = 0;
            while ((*local_10 != '\n' && (*local_10 != '\r'))) {
              *(char *)(local_c * 0x42 + 0x62 +
                       local_14 + *(int *)(param_1 + 0x20) + local_8 * 0x272) = *local_10;
              local_10 = local_10 + 1;
              local_14 = local_14 + 1;
              if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
            }
            while ((*local_10 == '\n' || (*local_10 == '\r'))) {
              local_10 = local_10 + 1;
              if (g_FileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
            }
            local_c = local_c + 1;
          }
        }
        else {
          local_10 = local_10 + 1;
        }
      }
LAB_004259f3:
      *(int *)(param_1 + 0x1c) = local_8 + 1;
      for (local_8 = 0; local_8 < *(int *)(param_1 + 0x1c); local_8 = local_8 + 1) {
        iVar2 = local_8 * 0x110;
        FUN_00403580();
        FUN_004323a0(param_1 + 0x134 + iVar2,local_8 + 0x101);
        FUN_00434b60(DAT_006d4588,param_1 + 0x134 + local_8 * 0x110,0xc0e0ff,0x302080,
                     *(int *)(param_1 + 0x20) + 0x40 + local_8 * 0x272);
        *(undefined4 *)(param_1 + 0x1c4 + local_8 * 0x110) = 0x42ba0000;
        *(float *)(param_1 + 0x1c8 + local_8 * 0x110) =
             ((float)((local_8 + 1) * 0x12) + 104.0) - 20.0;
        *(undefined4 *)(param_1 + 0x1cc + local_8 * 0x110) = 0;
        *(uint *)(param_1 + 0x1b4 + local_8 * 0x110) =
             *(uint *)(param_1 + 0x1b4 + local_8 * 0x110) | 0x300;
      }
      for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
        iVar2 = local_8 * 0x110;
        FUN_00403580();
        FUN_004323a0(param_1 + 0x2334 + iVar2,local_8 + 0x708);
        puVar5 = local_5c;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        if (local_8 % 2 == 0) {
LAB_00425c09:
          puVar5 = (undefined4 *)
                   (*(int *)(param_1 + 0x20) + 0x62 + (local_8 / 2) * 0x42 + (local_8 % 2) * 0x20);
          puVar6 = local_5c;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          local_98 = (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14) * 0x272 + 0x62 +
                             (local_8 / 2) * 0x42);
          pcVar4 = local_98 + 1;
          do {
            cVar1 = *local_98;
            local_98 = local_98 + 1;
          } while (cVar1 != '\0');
          if (0x20 < (uint)((int)local_98 - (int)pcVar4)) goto LAB_00425c09;
        }
        if ((char)local_5c[0] == '\0') {
          *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
               *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) & 0xfffffffd;
        }
        else {
          *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
               *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) | 2;
          FUN_00434b60(DAT_006d4588,param_1 + 0x2334 + local_8 * 0x110,0xffe0c0,0x300000,local_5c);
        }
        *(float *)(param_1 + 0x23c4 + local_8 * 0x110) = (float)(local_8 % 2) * 248.0 + 96.0;
        *(float *)(param_1 + 0x23c8 + local_8 * 0x110) = (float)(local_8 / 2 << 4) + 320.0;
        *(undefined4 *)(param_1 + 0x23cc + local_8 * 0x110) = 0;
        *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
             *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) | 0x300;
      }
      _free(local_18);
    }
  }
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return;
}


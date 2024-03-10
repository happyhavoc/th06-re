
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042e446(int param_1)

{
  float *pfVar1;
  uint unaff_retaddr;
  int local_d0;
  int local_8c;
  int local_84;
  char local_5c;
  undefined local_5b;
  float local_4c;
  float local_48;
  int local_44;
  D3DXVECTOR3 local_40;
  int local_34;
  int local_30;
  int local_2c;
  AnmVm *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c;
  uint local_18;
  int local_14;
  D3DXVECTOR3 local_10;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  local_28 = (AnmVm *)(param_1 + 0x40);
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
  for (local_14 = 0; local_14 < 0x26; local_14 = local_14 + 1) {
    local_40.x = (local_28->pos).x;
    local_40.y = (local_28->pos).y;
    local_40.z = (local_28->pos).z;
    (local_28->pos).x = (local_28->pos).x + (local_28->pos2).x;
    (local_28->pos).y = (local_28->pos).y + (local_28->pos2).y;
    (local_28->pos).z = (local_28->pos).z + (local_28->pos2).z;
    AnmManager::FUN_00432ad0(g_AnmManager,local_28);
    (local_28->pos).x = local_40.x;
    (local_28->pos).y = local_40.y;
    (local_28->pos).z = local_40.z;
    local_28 = local_28 + 1;
  }
  local_28 = (AnmVm *)(param_1 + 0xf20);
  if (*(float *)(param_1 + 0xfb0) < 640.0 != NAN(*(float *)(param_1 + 0xfb0))) {
    if (*(int *)(param_1 + 0xc) == 8) {
      local_40.x = *(float *)(param_1 + 0xfb0);
      local_40.z = *(float *)(param_1 + 0xfb8);
      local_40.y = *(float *)(param_1 + 0xfb4) + 16.0;
      for (local_14 = 0;
          (local_14 < 10 && (local_44 = *(int *)(param_1 + 0x28) * 10 + local_14, local_44 < 0x40));
          local_14 = local_14 + 1) {
        pfVar1 = (float *)(param_1 + 0x2930 + local_14 * 0x110);
        *pfVar1 = local_40.x;
        pfVar1[1] = local_40.y;
        pfVar1[2] = local_40.z;
        if (g_GameManager.catk[local_44].num_successes == 0) {
          g_AsciiManager.color = 0x80c0c0ff;
        }
        else if (g_GameManager.catk[local_44].unk_3e == 0) {
          g_AsciiManager.color = 0xffc0a0a0;
        }
        else {
          g_AsciiManager.color = local_14 * -0x80800 - 0xf0f01;
        }
        AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"No.%.2d",local_44 + 1);
        pfVar1 = (float *)(param_1 + 0x2930 + local_14 * 0x110);
        *pfVar1 = *pfVar1 + 96.0;
        AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x28a0 + local_14 * 0x110));
        local_40.x = local_40.x + 368.0;
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"%3d/%3d",
                   (uint)(ushort)g_GameManager.catk[local_44].unk_3e,
                   (uint)(ushort)g_GameManager.catk[local_44].num_successes);
        local_40.x = local_40.x - 368.0;
        local_40.y = local_40.y + 30.0;
      }
    }
    else {
      local_40.x = *(float *)(param_1 + 0xfb0);
      local_40.y = *(float *)(param_1 + 0xfb4);
      local_40.z = *(float *)(param_1 + 0xfb8);
      *(float *)(param_1 + 0x2930) = local_40.x;
      *(float *)(param_1 + 0x2934) = local_40.y;
      *(float *)(param_1 + 0x2938) = local_40.z;
      AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x28a0));
      local_40.x = local_40.x + 320.0;
      *(float *)(param_1 + 0x2a40) = local_40.x;
      *(float *)(param_1 + 0x2a44) = local_40.y;
      *(float *)(param_1 + 0x2a48) = local_40.z;
      AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x29b0));
      local_40.x = local_40.x - 320.0;
      local_40.y = local_40.y + 18.0;
      local_2c = *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 0x30 + 0x3ab4 +
                         *(int *)(param_1 + 0x24) * 0x18);
      local_34 = *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 0x30 + 0x3ab4 +
                         (*(int *)(param_1 + 0x24) * 2 + 1) * 0xc);
      for (local_14 = 0; local_40.y = local_40.y + 18.0, local_14 < 10; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 8) == 9) {
          if (g_GameManager.shottype == 0) {
            if (*(char *)(*(int *)(local_2c + 8) + 9) == '\0') {
              g_AsciiManager.color = 0x80ffffc0;
            }
            else {
              g_AsciiManager.color = 0xfff0f0ff;
              local_24 = 0x20202020;
              local_20 = 0x20202020;
              local_1c = 0;
              if (*(int *)(param_1 + 0x10) < 8) {
                local_84 = *(int *)(param_1 + 0x10);
              }
              else {
                local_84 = 7;
              }
              *(undefined *)((int)&local_24 + local_84) = 0x5f;
              AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"   %8s",&local_24);
            }
          }
          else {
            g_AsciiManager.color = 0x80ffc0c0;
          }
        }
        else {
          g_AsciiManager.color = 0xffffc0c0;
        }
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,
                   (char *)&PTR_g_BulletManager_bullets_421__vms_vm0_posInterpFinal_x_1_0046bdd0,
                   local_14 + 1);
        local_40.x = local_40.x + 36.0;
        if (*(byte *)(*(int *)(local_2c + 8) + 0x12) < 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(%d)",*(int *)(local_2c + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_2c + 8) + 0xc),
                     (uint)*(byte *)(*(int *)(local_2c + 8) + 0x12));
        }
        else if (*(char *)(*(int *)(local_2c + 8) + 0x12) == '\a') {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(1)",*(int *)(local_2c + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_2c + 8) + 0xc));
        }
        else {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(C)",*(int *)(local_2c + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_2c + 8) + 0xc));
        }
        local_40.x = local_40.x + 300.0;
        if (*(int *)(param_1 + 8) == 9) {
          if (g_GameManager.shottype == 1) {
            if (*(char *)(*(int *)(local_34 + 8) + 9) == '\0') {
              g_AsciiManager.color = 0xc0c0c0ff;
            }
            else {
              g_AsciiManager.color = 0xfffff0f0;
              local_24 = 0x20202020;
              local_20 = 0x20202020;
              local_1c = 0;
              if (*(int *)(param_1 + 0x10) < 8) {
                local_8c = *(int *)(param_1 + 0x10);
              }
              else {
                local_8c = 7;
              }
              *(undefined *)((int)&local_24 + local_8c) = 0x5f;
              AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"%8s",&local_24);
            }
          }
          else {
            g_AsciiManager.color = 0x80c0c0ff;
          }
        }
        else {
          g_AsciiManager.color = 0xffc0c0ff;
        }
        if (*(byte *)(*(int *)(local_34 + 8) + 0x12) < 7) {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(%d)",*(int *)(local_34 + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_34 + 8) + 0xc),
                     (uint)*(byte *)(*(int *)(local_34 + 8) + 0x12));
        }
        else if (*(char *)(*(int *)(local_34 + 8) + 0x12) == '\a') {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(1)",*(int *)(local_34 + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_34 + 8) + 0xc));
        }
        else {
          AsciiManager::AddFormatText
                    (&g_AsciiManager,&local_40,"%8s %9d(C)",*(int *)(local_34 + 8) + 0x13,
                     *(undefined4 *)(*(int *)(local_34 + 8) + 0xc));
        }
        local_40.x = local_40.x - 336.0;
        local_2c = *(int *)(local_2c + 4);
        local_34 = *(int *)(local_34 + 4);
      }
    }
  }
  if ((*(int *)(param_1 + 8) == 9) || (*(int *)(param_1 + 8) == 0xd)) {
    local_40.x = 160.0;
    local_40.y = 356.0;
    local_40.z = 0.0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
        local_48 = 0.0;
        if (*(int *)(param_1 + 0x20) == local_14 * 0x10 + local_30) {
          g_AsciiManager.color = 0xffffffc0;
          if (*(int *)(param_1 + 4) % 0x40 < 0x20) {
            local_48 = ((float)(*(int *)(param_1 + 4) % 0x20) * 0.8) / 32.0 + 1.2;
          }
          else {
            local_48 = 2.0 - ((float)(*(int *)(param_1 + 4) % 0x20) * 0.8) / 32.0;
          }
          g_AsciiManager.scale.y = local_48;
          local_48 = -(local_48 - 1.0) * 8.0;
        }
        else {
          g_AsciiManager.color = 0x60c0c0c0;
          g_AsciiManager.scale.y = 1.0;
        }
        local_10.z = local_40.z;
        local_10.x = local_40.x + local_48;
        local_10.y = local_40.y + local_48;
        local_5c = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZ_______004784d4[local_14 * 0x10 + local_30];
        local_5b = 0;
        if (local_14 == 5) {
          if (local_30 == 0xe) {
            local_5c = -0x80;
          }
          else if (local_30 == 0xf) {
            local_5c = -0x7f;
          }
        }
        g_AsciiManager.scale.x = g_AsciiManager.scale.y;
        local_4c = local_48;
        AsciiManager::AddString(&g_AsciiManager,&local_10,&local_5c);
        local_40.x = local_40.x + 20.0;
      }
      local_40.x = local_40.x - (float)(local_30 * 0x14);
      local_40.y = local_40.y + 18.0;
    }
  }
  g_AsciiManager.scale.x = 1.0;
  g_AsciiManager.scale.y = 1.0;
  if ((9 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0xf)) {
    local_28 = (AnmVm *)(param_1 + 0x1030);
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      AnmManager::FUN_00432ad0(g_AnmManager,local_28);
      local_28 = local_28 + 1;
    }
    local_40.x = *(float *)(param_1 + 0x1720);
    local_40.y = *(float *)(param_1 + 0x1724);
    local_40.z = *(float *)(param_1 + 0x1728);
    local_28 = (AnmVm *)(param_1 + 0x17a0);
    AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"No.   Name     Date     Player Score");
    for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
      local_40.x = *(float *)((int)local_28 + 0x90);
      local_40.y = *(float *)((int)local_28 + 0x94);
      local_40.z = *(float *)((int)local_28 + 0x98);
      local_28 = (AnmVm *)((int)local_28 + 0x110);
      if (local_14 == *(int *)(param_1 + 0x1c)) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
      if (*(int *)(param_1 + 8) == 0xd) {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,param_1 + 0x34,
                   param_1 + 0x5670,
                   (&PTR_s_ReimuA_00478518)
                   [(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2],
                   *(undefined4 *)(param_1 + 0x5684));
        g_AsciiManager.color = 0xfff0f0ff;
        local_24 = 0x20202020;
        local_20 = 0x20202020;
        local_1c = 0;
        if (*(int *)(param_1 + 0x10) < 8) {
          local_d0 = *(int *)(param_1 + 0x10);
        }
        else {
          local_d0 = 7;
        }
        *(undefined *)((int)&local_24 + local_d0) = 0x5f;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_40,"      %8s",&local_24);
      }
      else if ((*(char (*) [4])(param_1 + 0x51b0 + local_14 * 0x50) == (char  [4])0x50523654) &&
              (*(short *)(param_1 + 0x51b4 + local_14 * 0x50) == 0x102)) {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,
                   param_1 + 0x51c9 + local_14 * 0x50,param_1 + 0x51c0 + local_14 * 0x50,
                   (&PTR_s_ReimuA_00478518)[*(byte *)(param_1 + 0x51b6 + local_14 * 0x50)],
                   *(undefined4 *)(param_1 + 0x51d4 + local_14 * 0x50));
      }
      else {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_40,"No.%.2d -------- --/--/-- -------         0",
                   local_14 + 1);
      }
    }
  }
  g_AsciiManager.color = 0xffffffff;
  FUN_0042d35a(param_1);
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return;
}


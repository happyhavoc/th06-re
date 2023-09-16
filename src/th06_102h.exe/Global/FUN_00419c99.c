
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00419c99(uint *param_1)

{
  uint uVar1;
  uint local_1e8;
  int local_1c0;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  AnmVm *local_14;
  int local_10;
  float local_c;
  float local_8;
  
  if ((*(int *)(param_1[1] + 0x253c) < 0) &&
     ((uint)*(byte *)(param_1 + 8) + (uint)*(byte *)(param_1[1] + 0x1ba0) != 0)) {
    local_14 = (AnmVm *)(param_1[1] + 0x1430);
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    uVar1 = param_1[1];
    local_14 = (AnmVm *)(uVar1 + 0x1650);
    *(uint *)(uVar1 + 0x16d0) = *(uint *)(uVar1 + 0x16d0) | 0x300;
    *(float *)(uVar1 + 0x166c) = ((float)param_1[10] * 288.0) / 14.0;
    *(undefined4 *)(uVar1 + 0x16e0) = 0x42c00000;
    *(undefined4 *)(uVar1 + 0x16e4) = 0x41c00000;
    *(undefined4 *)(uVar1 + 0x16e8) = 0;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    local_28 = 0x42a00000;
    local_24 = 0x41800000;
    local_20 = 0;
    g_AsciiManager.color = param_1[4] << 0x18 | 0xffff80;
    FUN_00401650(0x47b900,&local_28,"%d",param_1[5]);
    local_94 = 0x43c00000;
    local_90 = 0x41800000;
    local_8c = 0;
    local_28 = 0x43c00000;
    local_24 = 0x41800000;
    local_20 = 0;
    if ((int)param_1[6] < 0x14) {
      if ((int)param_1[6] < 10) {
        if ((int)param_1[6] < 5) {
          local_1c = DAT_004764ac;
        }
        else {
          local_1c = DAT_004764a8;
        }
      }
      else {
        local_1c = DAT_004764a4;
      }
    }
    else {
      local_1c = DAT_004764a0;
    }
    g_AsciiManager.color = param_1[4] << 0x18 | local_1c;
    if ((int)param_1[6] < 100) {
      local_1e8 = param_1[6];
    }
    else {
      local_1e8 = 99;
    }
    local_18 = local_1e8;
    if (((int)local_1e8 < 10) && (param_1[7] != param_1[6])) {
      FUN_004311e0(0x1d);
    }
    FUN_00401650(0x47b900,&local_28,"%.2d",local_18);
    g_AsciiManager.color = 0xffffffff;
    param_1[7] = param_1[6];
  }
  g_GameContext.viewport.X = 0;
  g_GameContext.viewport.Y = 0;
  g_GameContext.viewport.Width = 0x280;
  g_GameContext.viewport.Height = 0x1e0;
  (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)(g_GameContext.d3dDevice,&g_GameContext.viewport)
  ;
  local_14 = (AnmVm *)(param_1[1] + 0x660);
  if (((g_GameContext.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) == 0) &&
     (((*(int *)(param_1[1] + 0x71c) != 0 || (g_GameContext.field77_0x198 != 0)) ||
      ((g_GameContext.cfg.opts >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
       g_GameContext.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0)))) {
    for (local_8 = 0.0; local_8 < 464.0 != NAN(local_8); local_8 = local_8 + 32.0) {
      local_a0 = 0;
      local_9c = local_8;
      local_98 = 0x3efae148;
      (local_14->pos).x = 0.0;
      (local_14->pos).y = local_8;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    for (local_c = 416.0; local_c < 624.0 != NAN(local_c); local_c = local_c + 32.0) {
      for (local_8 = 0.0; local_8 < 464.0 != NAN(local_8); local_8 = local_8 + 32.0) {
        local_ac = local_c;
        local_a8 = local_8;
        local_a4 = 0x3efae148;
        (local_14->pos).x = local_c;
        (local_14->pos).y = local_8;
        (local_14->pos).z = 0.49;
        AnmManager::FUN_00432ad0(g_AnmManager,local_14);
      }
    }
    local_14 = (AnmVm *)(param_1[1] + 0x770);
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_b8 = local_c;
      local_b4 = 0;
      local_b0 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 0.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    local_14 = (AnmVm *)(param_1[1] + 0x880);
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_c4 = local_c;
      local_c0 = 0x43e80000;
      local_bc = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 464.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)(param_1[1] + 0x550));
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)param_1[1]);
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)(param_1[1] + 0x110));
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)(param_1[1] + 0x330));
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)(param_1[1] + 0x440));
    AnmManager::FUN_00432cc0(g_AnmManager,(AnmVm *)(param_1[1] + 0x220));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0x990));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xaa0));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xbb0));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xcc0));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xdd0));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xee0));
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1[1] + 0xff0));
    *param_1 = *param_1 & 0xfffffffc | 2;
    *param_1 = *param_1 & 0xfffffff3 | 8;
    *param_1 = *param_1 & 0xffffff3f | 0x80;
    *param_1 = *param_1 & 0xfffffcff | 0x200;
    *param_1 = *param_1 & 0xffffffcf | 0x20;
  }
  if ((g_GameContext.cfg.opts >> 4 & 1) == 0) {
    uVar1 = param_1[1];
    local_14 = (AnmVm *)(uVar1 + 0x1760);
    local_c = 496.0;
    local_d0 = 0x43f80000;
    local_cc = 0x42680000;
    local_c8 = 0x3efae148;
    *(undefined4 *)(uVar1 + 0x17f0) = 0x43f80000;
    *(undefined4 *)(uVar1 + 0x17f4) = 0x42680000;
    *(undefined4 *)(uVar1 + 0x17f8) = 0x3efae148;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    local_dc = local_c;
    local_d8 = 0x42a40000;
    local_d4 = 0x3efae148;
    (local_14->pos).x = local_c;
    (local_14->pos).y = 82.0;
    (local_14->pos).z = 0.49;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    if ((*param_1 & 3) != 0) {
      local_e8 = local_c;
      local_e4 = 0x42f40000;
      local_e0 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 122.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((*param_1 >> 2 & 3) != 0) {
      local_f4 = local_c;
      local_f0 = 0x43120000;
      local_ec = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 146.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((*param_1 >> 4 & 3) != 0) {
      local_100 = local_c;
      local_fc = 0x433a0000;
      local_f8 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 186.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((*param_1 >> 6 & 3) != 0) {
      local_10c = local_c;
      local_108 = 0x434e0000;
      local_104 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 206.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((*param_1 >> 8 & 3) != 0) {
      local_118 = local_c;
      local_114 = 0x43620000;
      local_110 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 226.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    local_124 = 0x43f40000;
    local_120 = 0x43e80000;
    local_11c = 0x3efae148;
    (local_14->pos).x = 488.0;
    (local_14->pos).y = 464.0;
    (local_14->pos).z = 0.49;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    local_130 = 0;
    local_12c = 0x43e80000;
    local_128 = 0x3efae148;
    (local_14->pos).x = 0.0;
    (local_14->pos).y = 464.0;
    (local_14->pos).z = 0.49;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
  }
  if (((*param_1 & 3) != 0) || ((g_GameContext.cfg.opts >> 4 & 1) != 0)) {
    local_14 = (AnmVm *)(param_1[1] + 0x1100);
    local_c = 496.0;
    for (local_10 = 0; local_10 < DAT_0069d4ba; local_10 = local_10 + 1) {
      local_13c = local_c;
      local_138 = 0x42f40000;
      local_134 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 122.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
      local_c = local_c + 16.0;
    }
  }
  if (((*param_1 >> 2 & 3) != 0) || ((g_GameContext.cfg.opts >> 4 & 1) != 0)) {
    local_14 = (AnmVm *)(param_1[1] + 0x1210);
    local_c = 496.0;
    for (local_10 = 0; local_10 < DAT_0069d4bb; local_10 = local_10 + 1) {
      local_148 = local_c;
      local_144 = 0x43120000;
      local_140 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 146.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
      local_c = local_c + 16.0;
    }
  }
  if (((*param_1 >> 4 & 3) != 0) || ((g_GameContext.cfg.opts >> 4 & 1) != 0)) {
    local_1c0 = 4;
    do {
      local_1c0 = local_1c0 + -1;
    } while (-1 < local_1c0);
    if (_DAT_0069d4b0 != 0) {
      local_154 = 0x43f80000;
      local_150 = 0x433a0000;
      local_14c = 0x3dcccccd;
      local_7c = 0x43f80000;
      uStack_78 = 0x433a0000;
      uStack_74 = 0x3dcccccd;
      local_160 = (float)(_DAT_0069d4b0 + 0x1f0) + 0.0;
      local_15c = 0x433a0000;
      local_158 = 0x3dcccccd;
      uStack_64 = 0x433a0000;
      uStack_60 = 0x3dcccccd;
      local_16c = 0x43f80000;
      local_168 = 0x434a0000;
      local_164 = 0x3dcccccd;
      local_54 = 0x43f80000;
      uStack_50 = 0x434a0000;
      uStack_4c = 0x3dcccccd;
      local_178 = (float)(_DAT_0069d4b0 + 0x1f0) + 0.0;
      local_174 = 0x434a0000;
      local_170 = 0x3dcccccd;
      uStack_3c = 0x434a0000;
      uStack_38 = 0x3dcccccd;
      local_44 = 0xe0e0e0ff;
      local_6c = 0xe0e0e0ff;
      local_30 = 0x80e0e0ff;
      local_58 = 0x80e0e0ff;
      local_34 = 0x3f800000;
      local_48 = 0x3f800000;
      local_5c = 0x3f800000;
      local_70 = 0x3f800000;
      local_68 = local_160;
      local_40 = local_178;
      if ((g_GameContext.cfg.opts >> 8 & 1) == 0) {
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_GameContext.d3dDevice,0,D3DTSS_ALPHAOP,2);
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,2);
      }
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_ALPHAARG1,0);
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLORARG1,0);
      if ((g_GameContext.cfg.opts >> 6 & 1) == 0) {
        (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)(g_GameContext.d3dDevice,D3DRS_ZFUNC,8);
        (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                  (g_GameContext.d3dDevice,D3DRS_ZWRITEENABLE,0);
      }
      (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x44);
      (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
                (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,&local_7c,0x14);
      g_AnmManager->field16_0x210be = 0xff;
      g_AnmManager->currentColorOp = 0xff;
      g_AnmManager->currentBlendMode = 0xff;
      g_AnmManager->currentZWriteDisable = 0xff;
      if ((g_GameContext.cfg.opts >> 8 & 1) == 0) {
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_GameContext.d3dDevice,0,D3DTSS_ALPHAOP,4);
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,4);
      }
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_ALPHAARG1,2);
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLORARG1,2);
      if (0x7f < _DAT_0069d4b0) {
        uVar1 = param_1[1];
        local_14 = (AnmVm *)(uVar1 + 0x1320);
        local_184 = 0x43f80000;
        local_180 = 0x433a0000;
        local_17c = 0;
        *(undefined4 *)(uVar1 + 0x13b0) = 0x43f80000;
        *(undefined4 *)(uVar1 + 0x13b4) = 0x433a0000;
        *(undefined4 *)(uVar1 + 0x13b8) = 0;
        AnmManager::FUN_00432ad0(g_AnmManager,local_14);
      }
    }
    if (_DAT_0069d4b0 < 0x80) {
      local_190 = 0x43f80000;
      local_18c = 0x433a0000;
      local_188 = 0;
      FUN_00401650(0x47b900,&local_190,"%d",(uint)_DAT_0069d4b0);
    }
  }
  local_88 = 0x43f80000;
  local_84 = 0x42a40000;
  local_80 = 0;
  FUN_00401650(0x47b900,&local_88,"%.9d",DAT_0069bca0);
  local_88 = 0x43f80000;
  local_84 = 0x42680000;
  local_80 = 0;
  FUN_00401650(0x47b900,&local_88,"%.9d",DAT_0069bcac);
  if (((*param_1 >> 6 & 3) != 0) || ((g_GameContext.cfg.opts >> 4 & 1) != 0)) {
    local_88 = 0x43f80000;
    local_84 = 0x434e0000;
    local_80 = 0;
    FUN_00401650(0x47b900,&local_88,"%d",DAT_0069bcb4);
  }
  if (((*param_1 >> 8 & 3) != 0) || ((g_GameContext.cfg.opts >> 4 & 1) != 0)) {
    local_88 = 0x43f80000;
    local_84 = 0x43620000;
    local_80 = 0;
    FUN_00401650(0x47b900,&local_88,"%d",(uint)DAT_0069d4b4);
  }
  if ((*param_1 & 3) != 0) {
    *param_1 = *param_1 & 0xfffffffc | (*param_1 & 3) - 1 & 3;
  }
  if ((*param_1 >> 4 & 3) != 0) {
    *param_1 = *param_1 & 0xffffffcf | ((*param_1 >> 4 & 3) - 1 & 3) << 4;
  }
  if ((*param_1 >> 2 & 3) != 0) {
    *param_1 = *param_1 & 0xfffffff3 | ((*param_1 >> 2 & 3) - 1 & 3) << 2;
  }
  if ((*param_1 >> 6 & 3) != 0) {
    *param_1 = *param_1 & 0xffffff3f | ((*param_1 >> 6 & 3) - 1 & 3) << 6;
  }
  if ((*param_1 >> 8 & 3) != 0) {
    *param_1 = *param_1 & 0xfffffcff | ((*param_1 >> 8 & 3) - 1 & 3) << 8;
  }
  return;
}


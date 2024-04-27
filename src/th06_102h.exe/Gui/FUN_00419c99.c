
void __thiscall Gui::FUN_00419c99(Gui *this)

{
  GuiImpl *pGVar1;
  int local_1e8;
  int local_1c0;
  D3DXVECTOR3 local_190;
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
  D3DXVECTOR3 local_88;
  Vertex_DIFFUSE_XYZRWH local_7c [4];
  D3DXVECTOR3 local_28;
  uint local_1c;
  int local_18;
  AnmVm *local_14;
  int local_10;
  float local_c;
  float local_8;
  
  if (((int)(this->impl->msg).current_msg_idx < 0) &&
     ((uint)this->boss_present + (uint)this->impl->field1_0x1ba0 != 0)) {
    local_14 = this->impl->vms + 0x13;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    pGVar1 = this->impl;
    local_14 = pGVar1->vms + 0x15;
    *(uint *)&pGVar1->vms[0x15].flags = *(uint *)&pGVar1->vms[0x15].flags | 0x300;
    pGVar1->vms[0x15].scaleX = (this->boss_health_bar2 * 288.0) / 14.0;
    pGVar1->vms[0x15].pos.x = 96.0;
    pGVar1->vms[0x15].pos.y = 24.0;
    pGVar1->vms[0x15].pos.z = 0.0;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    local_28.x = 80.0;
    local_28.y = 16.0;
    local_28.z = 0.0;
    g_AsciiManager.color = this->field4_0x10 << 0x18 | 0xffff80;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_28,"%d",this->ecl_set_lives);
    local_94 = 0x43c00000;
    local_90 = 0x41800000;
    local_8c = 0;
    local_28.x = 384.0;
    local_28.y = 16.0;
    local_28.z = 0.0;
    if (this->ecl_spellcard_related < 0x14) {
      if (this->ecl_spellcard_related < 10) {
        if (this->ecl_spellcard_related < 5) {
          local_1c = D3DCOLOR_004764ac;
        }
        else {
          local_1c = D3DCOLOR_004764a8;
        }
      }
      else {
        local_1c = D3DCOLOR_004764a4;
      }
    }
    else {
      local_1c = D3DCOLOR_004764a0;
    }
    g_AsciiManager.color = this->field4_0x10 << 0x18 | local_1c;
    if (this->ecl_spellcard_related < 100) {
      local_1e8 = this->ecl_spellcard_related;
    }
    else {
      local_1e8 = 99;
    }
    local_18 = local_1e8;
    if ((local_1e8 < 10) && (this->field7_0x1c != this->ecl_spellcard_related)) {
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_1D,0);
    }
    AsciiManager::AddFormatText(&g_AsciiManager,&local_28,"%.2d",local_18);
    g_AsciiManager.color = 0xffffffff;
    this->field7_0x1c = this->ecl_spellcard_related;
  }
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  local_14 = this->impl->vms + 6;
  if (((g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) == 0) &&
     (((this->impl->vms[6].currentInstruction != (AnmRawInstr *)0x0 || (g_Supervisor.unk198 != 0))
      || ((g_Supervisor.cfg.opts >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
          g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0)))) {
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
    local_14 = this->impl->vms + 7;
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_b8 = local_c;
      local_b4 = 0;
      local_b0 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 0.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    local_14 = this->impl->vms + 8;
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_c4 = local_c;
      local_c0 = 0x43e80000;
      local_bc = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 464.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    AnmManager::Draw(g_AnmManager,this->impl->vms + 5);
    AnmManager::Draw(g_AnmManager,this->impl->vms);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 1);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 3);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 4);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 2);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 9);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 10);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 0xb);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 0xc);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 0xd);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 0xe);
    AnmManager::FUN_00432ad0(g_AnmManager,this->impl->vms + 0xf);
    this->flags = this->flags & 0xfffffffc | 2;
    this->flags = this->flags & 0xfffffff3 | 8;
    this->flags = this->flags & 0xffffff3f | 0x80;
    this->flags = this->flags & 0xfffffcff | 0x200;
    this->flags = this->flags & 0xffffffcf | 0x20;
  }
  if ((g_Supervisor.cfg.opts >> 4 & 1) == 0) {
    pGVar1 = this->impl;
    local_14 = pGVar1->vms + 0x16;
    local_c = 496.0;
    local_d0 = 0x43f80000;
    local_cc = 0x42680000;
    local_c8 = 0x3efae148;
    pGVar1->vms[0x16].pos.x = 496.0;
    pGVar1->vms[0x16].pos.y = 58.0;
    pGVar1->vms[0x16].pos.z = 0.49;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    local_dc = local_c;
    local_d8 = 0x42a40000;
    local_d4 = 0x3efae148;
    (local_14->pos).x = local_c;
    (local_14->pos).y = 82.0;
    (local_14->pos).z = 0.49;
    AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    if ((this->flags & 3) != 0) {
      local_e8 = local_c;
      local_e4 = 0x42f40000;
      local_e0 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 122.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((this->flags >> 2 & 3) != 0) {
      local_f4 = local_c;
      local_f0 = 0x43120000;
      local_ec = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 146.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((this->flags >> 4 & 3) != 0) {
      local_100 = local_c;
      local_fc = 0x433a0000;
      local_f8 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 186.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((this->flags >> 6 & 3) != 0) {
      local_10c = local_c;
      local_108 = 0x434e0000;
      local_104 = 0x3efae148;
      (local_14->pos).x = local_c;
      (local_14->pos).y = 206.0;
      (local_14->pos).z = 0.49;
      AnmManager::FUN_00432ad0(g_AnmManager,local_14);
    }
    if ((this->flags >> 8 & 3) != 0) {
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
  if (((this->flags & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_14 = this->impl->vms + 0x10;
    local_c = 496.0;
    for (local_10 = 0; local_10 < (char)g_GameManager.lives_remaining; local_10 = local_10 + 1) {
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
  if (((this->flags >> 2 & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_14 = this->impl->vms + 0x11;
    local_c = 496.0;
    for (local_10 = 0; local_10 < (char)g_GameManager.bombs_remaining; local_10 = local_10 + 1) {
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
  if (((this->flags >> 4 & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_1c0 = 4;
    do {
      local_1c0 = local_1c0 + -1;
    } while (-1 < local_1c0);
    if (g_GameManager.current_power != 0) {
      local_154 = 0x43f80000;
      local_150 = 0x433a0000;
      local_14c = 0x3dcccccd;
      local_7c[0].pos.x = 496.0;
      local_7c[0].pos.y = 186.0;
      local_7c[0].pos.z = 0.1;
      local_160 = (float)(g_GameManager.current_power + 0x1f0) + 0.0;
      local_15c = 0x433a0000;
      local_158 = 0x3dcccccd;
      local_7c[1].pos.y = 186.0;
      local_7c[1].pos.z = 0.1;
      local_16c = 0x43f80000;
      local_168 = 0x434a0000;
      local_164 = 0x3dcccccd;
      local_7c[2].pos.x = 496.0;
      local_7c[2].pos.y = 202.0;
      local_7c[2].pos.z = 0.1;
      local_178 = (float)(g_GameManager.current_power + 0x1f0) + 0.0;
      local_174 = 0x434a0000;
      local_170 = 0x3dcccccd;
      local_7c[3].pos.y = 202.0;
      local_7c[3].pos.z = 0.1;
      local_7c[2].diffuse = 0xe0e0e0ff;
      local_7c[0].diffuse = 0xe0e0e0ff;
      local_7c[3].diffuse = 0x80e0e0ff;
      local_7c[1].diffuse = 0x80e0e0ff;
      local_7c[3].pos.w = 1.0;
      local_7c[2].pos.w = 1.0;
      local_7c[1].pos.w = 1.0;
      local_7c[0].pos.w = 1.0;
      local_7c[1].pos.x = local_160;
      local_7c[3].pos.x = local_178;
      if ((g_Supervisor.cfg.opts >> 8 & 1) == 0) {
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,2);
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,2);
      }
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,0);
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,0);
      if ((g_Supervisor.cfg.opts >> 6 & 1) == 0) {
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                  (g_Supervisor.d3dDevice,D3DRS_ZWRITEENABLE,0);
      }
                    /* 0x44 = D3DFVF_DIFFUSE | D3DFVF_XYZRHW */
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
                (g_Supervisor.d3dDevice,D3DFVF_DIFFUSE | D3DFVF_XYZRHW);
      (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
                (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,local_7c,0x14);
      g_AnmManager->currentVertexShader = 0xff;
      g_AnmManager->currentColorOp = 0xff;
      g_AnmManager->currentBlendMode = 0xff;
      g_AnmManager->currentZWriteDisable = 0xff;
      if ((g_Supervisor.cfg.opts >> 8 & 1) == 0) {
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,4);
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                  (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,4);
      }
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,2);
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,2);
      if (0x7f < g_GameManager.current_power) {
        pGVar1 = this->impl;
        local_14 = pGVar1->vms + 0x12;
        local_184 = 0x43f80000;
        local_180 = 0x433a0000;
        local_17c = 0;
        pGVar1->vms[0x12].pos.x = 496.0;
        pGVar1->vms[0x12].pos.y = 186.0;
        pGVar1->vms[0x12].pos.z = 0.0;
        AnmManager::FUN_00432ad0(g_AnmManager,local_14);
      }
    }
    if (g_GameManager.current_power < 0x80) {
      local_190.x = 496.0;
      local_190.y = 186.0;
      local_190.z = 0.0;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_190,"%d",(uint)g_GameManager.current_power)
      ;
    }
  }
  local_88.x = 496.0;
  local_88.y = 82.0;
  local_88.z = 0.0;
  AsciiManager::AddFormatText(&g_AsciiManager,&local_88,"%.9d",g_GameManager.gui_score);
  local_88.x = 496.0;
  local_88.y = 58.0;
  local_88.z = 0.0;
  AsciiManager::AddFormatText(&g_AsciiManager,&local_88,"%.9d",g_GameManager.high_score);
  if (((this->flags >> 6 & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_88.x = 496.0;
    local_88.y = 206.0;
    local_88.z = 0.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_88,"%d",g_GameManager.graze_in_stage);
  }
  if (((this->flags >> 8 & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_88.x = 496.0;
    local_88.y = 226.0;
    local_88.z = 0.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_88,"%d",(uint)g_GameManager.point_items_collected_in_stage);
  }
  if ((this->flags & 3) != 0) {
    this->flags = this->flags & 0xfffffffc | (this->flags & 3) - 1 & 3;
  }
  if ((this->flags >> 4 & 3) != 0) {
    this->flags = this->flags & 0xffffffcf | ((this->flags >> 4 & 3) - 1 & 3) << 4;
  }
  if ((this->flags >> 2 & 3) != 0) {
    this->flags = this->flags & 0xfffffff3 | ((this->flags >> 2 & 3) - 1 & 3) << 2;
  }
  if ((this->flags >> 6 & 3) != 0) {
    this->flags = this->flags & 0xffffff3f | ((this->flags >> 6 & 3) - 1 & 3) << 6;
  }
  if ((this->flags >> 8 & 3) != 0) {
    this->flags = this->flags & 0xfffffcff | ((this->flags >> 8 & 3) - 1 & 3) << 8;
  }
  return;
}


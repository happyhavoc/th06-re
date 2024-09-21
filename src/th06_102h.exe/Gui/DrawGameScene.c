
void __thiscall th06::Gui::DrawGameScene(Gui *this)

{
  AnmVm *vm_00;
  int local_1e8;
  int local_1c0;
  D3DXVECTOR3 local_190;
  D3DXVECTOR3 local_184;
  D3DXVECTOR3 local_178;
  D3DXVECTOR3 local_16c;
  D3DXVECTOR3 local_160;
  D3DXVECTOR3 local_154;
  D3DXVECTOR3 local_148;
  D3DXVECTOR3 local_13c;
  D3DXVECTOR3 local_130;
  D3DXVECTOR3 local_124;
  D3DXVECTOR3 local_118;
  D3DXVECTOR3 local_10c;
  D3DXVECTOR3 local_100;
  D3DXVECTOR3 local_f4;
  D3DXVECTOR3 local_e8;
  D3DXVECTOR3 local_dc;
  D3DXVECTOR3 local_d0;
  D3DXVECTOR3 local_c4;
  D3DXVECTOR3 local_ac;
  D3DXVECTOR3 local_a0;
  D3DXVECTOR3 local_94;
  D3DXVECTOR3 local_88;
  Vertex_DIFFUSE_XYZRWH local_7c [4];
  D3DXVECTOR3 local_28;
  D3DCOLOR local_1c;
  i32 local_18;
  AnmVm *vm;
  i32 idx;
  f32 xPos;
  f32 yPos;
  GuiImpl *pGVar1;
  
  if (((int)(this->impl->msg).current_msg_idx < 0) &&
     ((uint)this->boss_present + (uint)this->impl->bossHealthBarState != 0)) {
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0x13);
    pGVar1 = this->impl;
    pGVar1->vms[0x15].flags = pGVar1->vms[0x15].flags | (AnmVmFlags_8|AnmVmFlags_9);
    pGVar1->vms[0x15].scaleX = (this->boss_health_bar2 * 288.0) / 14.0;
    pGVar1->vms[0x15].pos.x = 96.0;
    pGVar1->vms[0x15].pos.y = 24.0;
    pGVar1->vms[0x15].pos.z = 0.0;
    AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 0x15);
    local_28.x = 80.0;
    local_28.y = 16.0;
    local_28.z = 0.0;
    g_AsciiManager.color = this->bossUIOpacity << 0x18 | 0xffff80;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_28,"%d",this->ecl_set_lives);
    local_28.x = 384.0;
    local_28.y = 16.0;
    local_28.z = 0.0;
    if (this->spellcard_seconds_remaining < 0x14) {
      if (this->spellcard_seconds_remaining < 10) {
        if (this->spellcard_seconds_remaining < 5) {
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
    g_AsciiManager.color = this->bossUIOpacity << 0x18 | local_1c;
    if (this->spellcard_seconds_remaining < 100) {
      local_1e8 = this->spellcard_seconds_remaining;
    }
    else {
      local_1e8 = 99;
    }
    if ((local_1e8 < 10) &&
       (this->last_spellcard_seconds_remaining != this->spellcard_seconds_remaining)) {
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_1D,0);
    }
    AsciiManager::AddFormatText(&g_AsciiManager,&local_28,"%.2d",local_1e8);
    g_AsciiManager.color = 0xffffffff;
    this->last_spellcard_seconds_remaining = this->spellcard_seconds_remaining;
  }
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  pGVar1 = this->impl;
  if (((g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) == 0) &&
     (((pGVar1->vms[6].currentInstruction != (AnmRawInstr *)0x0 || (g_Supervisor.unk198 != 0)) ||
      ((g_Supervisor.cfg.opts >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
       g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0)))) {
    for (yPos = 0.0; yPos < 464.0 != NAN(yPos); yPos = yPos + 32.0) {
      pGVar1->vms[6].pos.x = 0.0;
      pGVar1->vms[6].pos.y = yPos;
      pGVar1->vms[6].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 6);
    }
    for (xPos = 416.0; xPos < 624.0 != NAN(xPos); xPos = xPos + 32.0) {
      for (yPos = 0.0; yPos < 464.0 != NAN(yPos); yPos = yPos + 32.0) {
        pGVar1->vms[6].pos.x = xPos;
        pGVar1->vms[6].pos.y = yPos;
        pGVar1->vms[6].pos.z = 0.49;
        AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 6);
      }
    }
    pGVar1 = this->impl;
    for (xPos = 32.0; xPos < 416.0 != NAN(xPos); xPos = xPos + 32.0) {
      pGVar1->vms[7].pos.x = xPos;
      pGVar1->vms[7].pos.y = 0.0;
      pGVar1->vms[7].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 7);
    }
    pGVar1 = this->impl;
    for (xPos = 32.0; xPos < 416.0 != NAN(xPos); xPos = xPos + 32.0) {
      pGVar1->vms[8].pos.x = xPos;
      pGVar1->vms[8].pos.y = 464.0;
      pGVar1->vms[8].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 8);
    }
    AnmManager::Draw(g_AnmManager,this->impl->vms + 5);
    AnmManager::Draw(g_AnmManager,this->impl->vms);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 1);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 3);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 4);
    AnmManager::Draw(g_AnmManager,this->impl->vms + 2);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 9);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 10);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0xb);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0xc);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0xd);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0xe);
    AnmManager::DrawNoRotation(g_AnmManager,this->impl->vms + 0xf);
    this->flags = this->flags & 0xfffffffc | 2;
    this->flags = this->flags & 0xfffffff3 | 8;
    this->flags = this->flags & 0xffffff3f | 0x80;
    this->flags = this->flags & 0xfffffcff | 0x200;
    this->flags = this->flags & 0xffffffcf | 0x20;
  }
  if ((g_Supervisor.cfg.opts >> 4 & 1) == 0) {
    pGVar1 = this->impl;
    vm_00 = pGVar1->vms + 0x16;
    pGVar1->vms[0x16].pos.x = 496.0;
    pGVar1->vms[0x16].pos.y = 58.0;
    pGVar1->vms[0x16].pos.z = 0.49;
    AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    pGVar1->vms[0x16].pos.x = 496.0;
    pGVar1->vms[0x16].pos.y = 82.0;
    pGVar1->vms[0x16].pos.z = 0.49;
    AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    if ((this->flags & 3) != 0) {
      pGVar1->vms[0x16].pos.x = 496.0;
      pGVar1->vms[0x16].pos.y = 122.0;
      pGVar1->vms[0x16].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    }
    if ((this->flags >> 2 & 3) != 0) {
      pGVar1->vms[0x16].pos.x = 496.0;
      pGVar1->vms[0x16].pos.y = 146.0;
      pGVar1->vms[0x16].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    }
    if ((this->flags >> 4 & 3) != 0) {
      pGVar1->vms[0x16].pos.x = 496.0;
      pGVar1->vms[0x16].pos.y = 186.0;
      pGVar1->vms[0x16].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    }
    if ((this->flags >> 6 & 3) != 0) {
      pGVar1->vms[0x16].pos.x = 496.0;
      pGVar1->vms[0x16].pos.y = 206.0;
      pGVar1->vms[0x16].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    }
    if ((this->flags >> 8 & 3) != 0) {
      pGVar1->vms[0x16].pos.x = 496.0;
      pGVar1->vms[0x16].pos.y = 226.0;
      pGVar1->vms[0x16].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    }
    pGVar1->vms[0x16].pos.x = 488.0;
    pGVar1->vms[0x16].pos.y = 464.0;
    pGVar1->vms[0x16].pos.z = 0.49;
    AnmManager::DrawNoRotation(g_AnmManager,vm_00);
    pGVar1->vms[0x16].pos.x = 0.0;
    pGVar1->vms[0x16].pos.y = 464.0;
    pGVar1->vms[0x16].pos.z = 0.49;
    AnmManager::DrawNoRotation(g_AnmManager,vm_00);
  }
  if (((this->flags & 3) != 0) || ((g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0)) {
    pGVar1 = this->impl;
    xPos = 496.0;
    for (idx = 0; idx < (char)g_GameManager.lives_remaining; idx = idx + 1) {
      pGVar1->vms[0x10].pos.x = xPos;
      pGVar1->vms[0x10].pos.y = 122.0;
      pGVar1->vms[0x10].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 0x10);
      xPos = xPos + 16.0;
    }
  }
  if (((this->flags >> 2 & 3) != 0) ||
     ((g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0)) {
    pGVar1 = this->impl;
    xPos = 496.0;
    for (idx = 0; idx < (char)g_GameManager.bombs_remaining; idx = idx + 1) {
      pGVar1->vms[0x11].pos.x = xPos;
      pGVar1->vms[0x11].pos.y = 146.0;
      pGVar1->vms[0x11].pos.z = 0.49;
      AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 0x11);
      xPos = xPos + 16.0;
    }
  }
  if (((this->flags >> 4 & 3) != 0) || ((g_Supervisor.cfg.opts >> 4 & 1) != 0)) {
    local_1c0 = 4;
    do {
      local_1c0 = local_1c0 + -1;
    } while (-1 < local_1c0);
    if (g_GameManager.current_power != 0) {
      local_7c[0].pos.x = 496.0;
      local_7c[0].pos.y = 186.0;
      local_7c[0].pos.z = 0.1;
      local_7c[1].pos.x = (float)(g_GameManager.current_power + 0x1f0) + 0.0;
      local_7c[1].pos.y = 186.0;
      local_7c[1].pos.z = 0.1;
      local_7c[2].pos.x = 496.0;
      local_7c[2].pos.y = 202.0;
      local_7c[2].pos.z = 0.1;
      local_7c[3].pos.x = (float)(g_GameManager.current_power + 0x1f0) + 0.0;
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
        local_184.x = 496.0;
        local_184.y = 186.0;
        local_184.z = 0.0;
        pGVar1->vms[0x12].pos.x = 496.0;
        pGVar1->vms[0x12].pos.y = 186.0;
        pGVar1->vms[0x12].pos.z = 0.0;
        AnmManager::DrawNoRotation(g_AnmManager,pGVar1->vms + 0x12);
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


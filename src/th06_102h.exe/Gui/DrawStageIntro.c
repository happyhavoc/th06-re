
void __thiscall Gui::DrawStageIntro(Gui *this)

{
  GuiImpl *pGVar1;
  GuiImpl *pGVar2;
  D3DXVECTOR3 local_10;
  
  if ((*(uint *)&(this->impl->vm1).flags & 1) != 0) {
    local_10.x = 168.0;
    local_10.y = 198.0;
    local_10.z = 0.0;
    if (g_GameManager.demo_mode == 0) {
      AnmManager::FUN_00433590(g_AnmManager,&this->impl->vm1);
      g_AsciiManager.color = (this->impl->vm1).color.color & 0xff000000 | 0xffff40;
      if (g_GameManager.current_stage < 6) {
        local_10.x = 168.0;
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_10,"STAGE %d",g_GameManager.current_stage);
      }
      else if (g_GameManager.current_stage == 6) {
        local_10.x = 136.0;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"FINAL STAGE");
      }
      else {
        local_10.x = 136.0;
        AsciiManager::AddFormatText(&g_AsciiManager,&local_10,"EXTRA STAGE");
      }
    }
    else {
      g_AsciiManager.color = (this->impl->vm1).color.color & 0xff000000 | 0xffff40;
      local_10.x = 136.0;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10," DEMO PLAY");
    }
    g_AsciiManager.color = 0xffffffff;
  }
  if (((*(uint *)&(this->impl->vm2).flags & 1) != 0) && (g_GameManager.demo_mode == 0)) {
    AnmManager::FUN_00433590(g_AnmManager,&this->impl->vm2);
  }
  if ((*(uint *)&(this->impl->vm3).flags & 1) != 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm3);
  }
  if ((*(uint *)&(this->impl->vm4).flags & 1) != 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm4);
  }
  if ((*(uint *)&(this->impl->vm5).flags & 1) != 0) {
    pGVar1 = this->impl;
    pGVar2 = this->impl;
    (pGVar2->vm7).pos.x = (pGVar1->vm5).pos.x;
    (pGVar2->vm7).pos.y = (pGVar1->vm5).pos.y;
    (pGVar2->vm7).pos.z = (pGVar1->vm5).pos.z;
    (this->impl->vm7).pos.x =
         ((((this->field2_0x8 * 16.0) / 15.0) / 2.0 + -128.0) - 16.0) + (this->impl->vm7).pos.x;
    (this->impl->vm7).scaleX = this->field2_0x8 / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm7);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm5);
  }
  if ((*(uint *)&(this->impl->vm6).flags & 1) != 0) {
    pGVar1 = this->impl;
    pGVar2 = this->impl;
    (pGVar2->vm8).pos.x = (pGVar1->vm6).pos.x;
    (pGVar2->vm8).pos.y = (pGVar1->vm6).pos.y;
    (pGVar2->vm8).pos.z = (pGVar1->vm6).pos.z;
    (this->impl->vm8).pos.x =
         (128.0 - ((this->blue_spellcard_bar_length * 16.0) / 15.0) / 2.0) + (this->impl->vm8).pos.x
    ;
    (this->impl->vm8).scaleX = this->blue_spellcard_bar_length / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm8);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm6);
  }
  if (-1 < (this->impl->vm9).spriteNumber) {
    g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
              (g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->vm9);
  }
  return;
}


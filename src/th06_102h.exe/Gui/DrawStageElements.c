
void __thiscall Gui::DrawStageElements(Gui *this)

{
  GuiImpl *pGVar1;
  GuiImpl *pGVar2;
  D3DXVECTOR3 local_10;
  
  if (((this->impl->stageNameSprite).flags & AnmVmFlags_1) != AnmVmFlags_None) {
    local_10.x = 168.0;
    local_10.y = 198.0;
    local_10.z = 0.0;
    if (g_GameManager.demo_mode == 0) {
      AnmManager::FUN_00433590(g_AnmManager,&this->impl->stageNameSprite);
      g_AsciiManager.color = (this->impl->stageNameSprite).color.color & 0xff000000 | 0xffff40;
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
      g_AsciiManager.color = (this->impl->stageNameSprite).color.color & 0xff000000 | 0xffff40;
      local_10.x = 136.0;
      AsciiManager::AddFormatText(&g_AsciiManager,&local_10," DEMO PLAY");
    }
    g_AsciiManager.color = 0xffffffff;
  }
  if ((((this->impl->songNameSprite).flags & AnmVmFlags_1) != AnmVmFlags_None) &&
     (g_GameManager.demo_mode == 0)) {
    AnmManager::FUN_00433590(g_AnmManager,&this->impl->songNameSprite);
  }
  if (((this->impl->playerSpellcardPortrait).flags & AnmVmFlags_1) != AnmVmFlags_None) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->playerSpellcardPortrait);
  }
  if (((this->impl->enemySpellcardPortrait).flags & AnmVmFlags_1) != AnmVmFlags_None) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardPortrait);
  }
  if (((this->impl->bombSpellcardName).flags & AnmVmFlags_1) != AnmVmFlags_None) {
    pGVar1 = this->impl;
    pGVar2 = this->impl;
    (pGVar2->bombSpellcardBackground).pos.x = (pGVar1->bombSpellcardName).pos.x;
    (pGVar2->bombSpellcardBackground).pos.y = (pGVar1->bombSpellcardName).pos.y;
    (pGVar2->bombSpellcardBackground).pos.z = (pGVar1->bombSpellcardName).pos.z;
    (this->impl->bombSpellcardBackground).pos.x =
         ((((this->field2_0x8 * 16.0) / 15.0) / 2.0 + -128.0) - 16.0) +
         (this->impl->bombSpellcardBackground).pos.x;
    (this->impl->bombSpellcardBackground).scaleX = this->field2_0x8 / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->bombSpellcardBackground);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->bombSpellcardName);
  }
  if (((this->impl->enemySpellcardName).flags & AnmVmFlags_1) != AnmVmFlags_None) {
    pGVar1 = this->impl;
    pGVar2 = this->impl;
    (pGVar2->enemySpellcardBackground).pos.x = (pGVar1->enemySpellcardName).pos.x;
    (pGVar2->enemySpellcardBackground).pos.y = (pGVar1->enemySpellcardName).pos.y;
    (pGVar2->enemySpellcardBackground).pos.z = (pGVar1->enemySpellcardName).pos.z;
    (this->impl->enemySpellcardBackground).pos.x =
         (128.0 - ((this->blue_spellcard_bar_length * 16.0) / 15.0) / 2.0) +
         (this->impl->enemySpellcardBackground).pos.x;
    (this->impl->enemySpellcardBackground).scaleX = this->blue_spellcard_bar_length / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardBackground);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardName);
  }
  if (-1 < (this->impl->stageFinishedScoreSprite).activeSpriteIndex) {
    g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
              (g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->stageFinishedScoreSprite);
  }
  return;
}



void __thiscall Gui::DrawStageElements(Gui *this)

{
  GuiImpl *pGVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  GuiImpl *pGVar7;
  uint uVar8;
  D3DXVECTOR3 local_10;
  
  pGVar1 = this->impl;
  uVar2._0_2_ = (pGVar1->stageNameSprite).flags;
  uVar2._2_1_ = (pGVar1->stageNameSprite).unk_82[0];
  uVar2._3_1_ = (pGVar1->stageNameSprite).unk_82[1];
  if ((uVar2 & 1) != 0) {
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
  pGVar1 = this->impl;
  uVar3._0_2_ = (pGVar1->songNameSprite).flags;
  uVar3._2_1_ = (pGVar1->songNameSprite).unk_82[0];
  uVar3._3_1_ = (pGVar1->songNameSprite).unk_82[1];
  if (((uVar3 & 1) != 0) && (g_GameManager.demo_mode == 0)) {
    AnmManager::FUN_00433590(g_AnmManager,&this->impl->songNameSprite);
  }
  pGVar1 = this->impl;
  uVar4._0_2_ = (pGVar1->playerSpellcardPortrait).flags;
  uVar4._2_1_ = (pGVar1->playerSpellcardPortrait).unk_82[0];
  uVar4._3_1_ = (pGVar1->playerSpellcardPortrait).unk_82[1];
  if ((uVar4 & 1) != 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->playerSpellcardPortrait);
  }
  pGVar1 = this->impl;
  uVar5._0_2_ = (pGVar1->enemySpellcardPortrait).flags;
  uVar5._2_1_ = (pGVar1->enemySpellcardPortrait).unk_82[0];
  uVar5._3_1_ = (pGVar1->enemySpellcardPortrait).unk_82[1];
  if ((uVar5 & 1) != 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardPortrait);
  }
  pGVar1 = this->impl;
  uVar6._0_2_ = (pGVar1->bombSpellcardName).flags;
  uVar6._2_1_ = (pGVar1->bombSpellcardName).unk_82[0];
  uVar6._3_1_ = (pGVar1->bombSpellcardName).unk_82[1];
  if ((uVar6 & 1) != 0) {
    pGVar1 = this->impl;
    pGVar7 = this->impl;
    (pGVar7->bombSpellcardBackground).pos.x = (pGVar1->bombSpellcardName).pos.x;
    (pGVar7->bombSpellcardBackground).pos.y = (pGVar1->bombSpellcardName).pos.y;
    (pGVar7->bombSpellcardBackground).pos.z = (pGVar1->bombSpellcardName).pos.z;
    (this->impl->bombSpellcardBackground).pos.x =
         ((((this->field2_0x8 * 16.0) / 15.0) / 2.0 + -128.0) - 16.0) +
         (this->impl->bombSpellcardBackground).pos.x;
    (this->impl->bombSpellcardBackground).scaleX = this->field2_0x8 / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->bombSpellcardBackground);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->bombSpellcardName);
  }
  pGVar1 = this->impl;
  uVar8._0_2_ = (pGVar1->enemySpellcardName).flags;
  uVar8._2_1_ = (pGVar1->enemySpellcardName).unk_82[0];
  uVar8._3_1_ = (pGVar1->enemySpellcardName).unk_82[1];
  if ((uVar8 & 1) != 0) {
    pGVar1 = this->impl;
    pGVar7 = this->impl;
    (pGVar7->enemySpellcardBackground).pos.x = (pGVar1->enemySpellcardName).pos.x;
    (pGVar7->enemySpellcardBackground).pos.y = (pGVar1->enemySpellcardName).pos.y;
    (pGVar7->enemySpellcardBackground).pos.z = (pGVar1->enemySpellcardName).pos.z;
    (this->impl->enemySpellcardBackground).pos.x =
         (128.0 - ((this->blue_spellcard_bar_length * 16.0) / 15.0) / 2.0) +
         (this->impl->enemySpellcardBackground).pos.x;
    (this->impl->enemySpellcardBackground).scaleX = this->blue_spellcard_bar_length / 14.0;
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardBackground);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->enemySpellcardName);
  }
  if (-1 < (this->impl->loadingScreenSprite).activeSpriteIndex) {
    g_Supervisor.viewport.X = __ftol2(g_GameManager.arcade_region_top_left_pos.x);
    g_Supervisor.viewport.Y = __ftol2(g_GameManager.arcade_region_top_left_pos.y);
    g_Supervisor.viewport.Width = __ftol2(g_GameManager.arcade_region_size.x);
    g_Supervisor.viewport.Height = __ftol2(g_GameManager.arcade_region_size.y);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
              (g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
    AnmManager::DrawNoRotation(g_AnmManager,&this->impl->loadingScreenSprite);
  }
  return;
}


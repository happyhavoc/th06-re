
ChainCallbackResult th06::MainMenu::OnDraw(MainMenu *menu)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  D3DXVECTOR3 *pos;
  D3DXVECTOR3 *offset;
  BOOL shouldDraw;
  AnmManager *mgr;
  D3DXVECTOR3 posBackup;
  AnmVm *curVm;
  int vmIdx;
  ZunRect window;
  
  curVm = menu->vmList;
  window.left = 0.0;
  window.top = 0.0;
  window.right = 640.0;
  window.bottom = 480.0;
  if (menu->gameState != STATE_STARTUP) {
    g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
    AnmManager::CopySurfaceToBackBuffer((AnmManager *)g_AnmManager,0,0,0,0,0);
    if (menu->isActive == 0) {
      if (menu->numFramesSinceActive != 0) {
        menu->numFramesSinceActive = menu->numFramesSinceActive + -1;
        ScreenEffect::DrawSquare
                  (&window,((((menu->menuTextColor >> 0x18) - (menu->minimumOpacity >> 0x18)) *
                            menu->numFramesSinceActive) / menu->wasActive +
                           (menu->minimumOpacity >> 0x18)) * 0x1000000 |
                           menu->menuTextColor & 0xffffff);
      }
    }
    else {
      if (menu->numFramesSinceActive < menu->isActive) {
        menu->numFramesSinceActive = menu->numFramesSinceActive + 1;
      }
      ScreenEffect::DrawSquare
                (&window,((((menu->menuTextColor >> 0x18) - (menu->minimumOpacity >> 0x18)) *
                          menu->numFramesSinceActive) / (uint)menu->isActive +
                         (menu->minimumOpacity >> 0x18)) * 0x1000000 |
                         menu->menuTextColor & 0xffffff);
    }
    for (vmIdx = 0; vmIdx < 0x62; vmIdx = vmIdx + 1) {
      if (curVm->sprite == (AnmLoadedSprite *)0x0) {
        bVar4 = false;
      }
      else if (curVm->sprite->sourceFileIndex < 0) {
        bVar4 = false;
      }
      else {
        bVar4 = g_AnmManager->textures[curVm->sprite->sourceFileIndex] != (IDirect3DTexture8 *)0x0;
      }
      if (bVar4) {
        fVar1 = (curVm->pos).x;
        fVar2 = (curVm->pos).y;
        fVar3 = (curVm->pos).z;
        (curVm->pos).x = (curVm->pos).x + (curVm->offset).x;
        (curVm->pos).y = (curVm->pos).y + (curVm->offset).y;
        (curVm->pos).z = (curVm->pos).z + (curVm->offset).z;
        AnmManager::Draw((AnmManager *)g_AnmManager,curVm);
        (curVm->pos).x = fVar1;
        (curVm->pos).y = fVar2;
        (curVm->pos).z = fVar3;
      }
      curVm = curVm + 1;
    }
    if ((0xc < (int)menu->gameState) && ((int)menu->gameState < 0x10)) {
      DrawReplayMenu(menu);
    }
    ChoosePracticeLevel(menu);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}



undefined4 MainMenu::OnDraw(MainMenu *menu)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  AnmVm *curVm;
  int vmIdx;
  zRect window;
  int local_8;
  
  curVm = menu->vmList;
  window.left = 0.0;
  window.top = 0.0;
  window.right = 640.0;
  window.bottom = 480.0;
  if (menu->gameState != STATE_STARTUP) {
    g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
    AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
    if (menu->isActive == 0) {
      if (menu->unk_820c != 0) {
        menu->unk_820c = menu->unk_820c - 1;
        local_8 = (menu->maybe_menu_text_color >> 0x18) - (menu->unk_81fc >> 0x18);
        DrawSquare(&window,((local_8 * menu->unk_820c) / menu->wasActive + (menu->unk_81fc >> 0x18))
                           * 0x1000000 | menu->maybe_menu_text_color & 0xffffff);
      }
    }
    else {
      if ((int)menu->unk_820c < (int)menu->isActive) {
        menu->unk_820c = menu->unk_820c + 1;
      }
      local_8 = (menu->maybe_menu_text_color >> 0x18) - (menu->unk_81fc >> 0x18);
      DrawSquare(&window,((local_8 * menu->unk_820c) / menu->isActive + (menu->unk_81fc >> 0x18)) *
                         0x1000000 | menu->maybe_menu_text_color & 0xffffff);
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
        (curVm->pos).x = (curVm->pos).x + (curVm->pos2).x;
        (curVm->pos).y = (curVm->pos).y + (curVm->pos2).y;
        (curVm->pos).z = (curVm->pos).z + (curVm->pos2).z;
        AnmManager::FUN_00432cc0(g_AnmManager,curVm);
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
  return 1;
}


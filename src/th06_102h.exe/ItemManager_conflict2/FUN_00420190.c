
void __thiscall ItemManager_conflict2::FUN_00420190(void *this)

{
  float fVar1;
  long lVar2;
  AnmVm *pAStack_10;
  int local_c;
  int local_8;
  
  pAStack_10 = (AnmVm *)this;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)((int)&pAStack_10[1].currentTimeInScript.previous + 1) != '\0') {
      (pAStack_10->pos).x = g_GameManager.arcade_region_top_left_pos.x + pAStack_10[1].rotation.x;
      (pAStack_10->pos).y = g_GameManager.arcade_region_top_left_pos.y + pAStack_10[1].rotation.y;
      (pAStack_10->pos).z = 0.01;
      fVar1 = pAStack_10[1].rotation.y;
      if (fVar1 < -8.0 == NAN(fVar1)) {
        if (*(char *)((int)&pAStack_10[1].currentTimeInScript.previous + 2) == '\0') {
          AnmManager::SetActiveSprite
                    (g_AnmManager,pAStack_10,
                     (int)*(char *)&pAStack_10[1].currentTimeInScript.previous + 0x200);
          *(undefined *)((int)&pAStack_10[1].currentTimeInScript.previous + 2) = 1;
          (pAStack_10->color).color = 0xffffffff;
        }
      }
      else {
        (pAStack_10->pos).y = g_GameManager.arcade_region_top_left_pos.y + 8.0;
        if (*(char *)((int)&pAStack_10[1].currentTimeInScript.previous + 2) != '\0') {
          AnmManager::SetActiveSprite
                    (g_AnmManager,pAStack_10,
                     (int)*(char *)&pAStack_10[1].currentTimeInScript.previous + 0x207);
          *(undefined *)((int)&pAStack_10[1].currentTimeInScript.previous + 2) = 0;
        }
        lVar2 = __ftol2(((8.0 - pAStack_10[1].rotation.y) * 255.0) / 128.0);
        local_8 = 0xff - lVar2;
        if (local_8 < 0x40) {
          local_8 = 0x40;
        }
        (pAStack_10->color).color = (pAStack_10->color).color & 0xffffff | local_8 << 0x18;
      }
      AnmManager::DrawNoRotation(g_AnmManager,pAStack_10);
    }
    pAStack_10 = (AnmVm *)&pAStack_10[1].currentTimeInScript.subFrame;
  }
  return;
}


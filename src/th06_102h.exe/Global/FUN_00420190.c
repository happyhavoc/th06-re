
void FUN_00420190(void)

{
  float fVar1;
  long lVar2;
  AnmVm *in_ECX;
  AnmVm *local_10;
  int local_c;
  int local_8;
  
  local_10 = in_ECX;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)((int)&local_10[1].currentTimeInScript.previous + 1) != '\0') {
      (local_10->pos).x = VIEWPORT_X + local_10[1].rotation.x;
      (local_10->pos).y = VIEWPORT_Y + local_10[1].rotation.y;
      (local_10->pos).z = 0.01;
      fVar1 = local_10[1].rotation.y;
      if (fVar1 < -8.0 == NAN(fVar1)) {
        if (*(char *)((int)&local_10[1].currentTimeInScript.previous + 2) == '\0') {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_10,
                     *(char *)&local_10[1].currentTimeInScript.previous + 0x200);
          *(undefined *)((int)&local_10[1].currentTimeInScript.previous + 2) = 1;
          local_10->color = 0xffffffff;
        }
      }
      else {
        (local_10->pos).y = VIEWPORT_Y + 8.0;
        if (*(char *)((int)&local_10[1].currentTimeInScript.previous + 2) != '\0') {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_10,
                     *(char *)&local_10[1].currentTimeInScript.previous + 0x207);
          *(undefined *)((int)&local_10[1].currentTimeInScript.previous + 2) = 0;
        }
        lVar2 = __ftol2((double)(((8.0 - local_10[1].rotation.y) * 255.0) / 128.0));
        local_8 = 0xff - lVar2;
        if (local_8 < 0x40) {
          local_8 = 0x40;
        }
        local_10->color = local_10->color & 0xffffff | local_8 << 0x18;
      }
      AnmManager::FUN_00432ad0(g_AnmManager,local_10);
    }
    local_10 = (AnmVm *)&local_10[1].currentTimeInScript.subFrame;
  }
  return;
}


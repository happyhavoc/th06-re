
undefined4 FUN_00439965(void)

{
  int in_ECX;
  uint local_2c;
  uint local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x81f0) == 0x11) {
    local_20 = 0x43a00000;
    local_1c = 200.0;
    local_18 = 0;
    if (*(int *)(in_ECX + 0x81f4) < 0x1e) {
      local_28 = (*(int *)(in_ECX + 0x81f4) * 0xff) / 0x1e;
    }
    else {
      local_28 = 0xff;
    }
    local_c = local_28;
    local_10 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (*(byte *)(local_10 * 0x18 + 0x69cce1 + g_GameManager.difficulty) < 7) {
      local_2c = (uint)*(byte *)(local_10 * 0x18 + 0x69cce1 + g_GameManager.difficulty);
    }
    else {
      local_2c = 6;
    }
    local_14 = local_2c;
    if ((g_GameManager.difficulty == 0) && (local_2c == 6)) {
      local_14 = 5;
    }
    for (local_8 = 0; local_8 < (int)local_14; local_8 = local_8 + 1) {
      if (local_8 == *(int *)(in_ECX + 0x81a0)) {
        g_AsciiManager.color = local_c << 0x18 | 0xc0f0f0;
      }
      else {
        g_AsciiManager.color = (local_c >> 1) << 0x18 | 0x80c0c0;
      }
      AsciiManager::DrawFormatText
                (&g_AsciiManager,&local_20,"STAGE %d  %.9d",local_8 + 1,
                 *(undefined4 *)
                  (local_10 * 0x1e0 + local_8 * 0x50 + 0x69cd3c + g_GameManager.difficulty * 0x14));
      local_1c = local_1c + 24.0;
    }
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}


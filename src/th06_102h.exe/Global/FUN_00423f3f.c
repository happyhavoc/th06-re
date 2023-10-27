
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423f3f(void)

{
  D3DXVECTOR3 local_20;
  float local_14;
  float local_10;
  float local_c;
  DWORD local_8;
  
  if ((DAT_006c6d10 & 1) == 0) {
    DAT_006c6d10 = DAT_006c6d10 | 1;
    _DAT_006c6d0c = timeGetTime();
  }
  local_8 = timeGetTime();
  DAT_006c6d08 = DAT_006c6d08 + 1 + (uint)g_GameContext.cfg.frameskipConfig;
  if (499 < local_8 - _DAT_006c6d0c) {
    local_14 = (float)(ulonglong)(local_8 - _DAT_006c6d0c) / 1000.0;
    local_10 = (float)(ulonglong)DAT_006c6d08 / local_14;
    DAT_006c6d08 = 0;
    _DAT_006c6d0c = local_8;
    sprintf(s__006c6c08,"%.02ffps",(double)local_10);
    if (g_GameManager.field22_0x1820._1_1_ != '\0') {
      local_c = 60.0 / g_GameContext.framerateMultiplier;
      g_GameContext._440_4_ = (float)g_GameContext._440_4_ + local_c;
      if (local_c * 0.9 < local_10 == (NAN(local_c * 0.9) || NAN(local_10))) {
        if (local_c * 0.7 < local_10 == (NAN(local_c * 0.7) || NAN(local_10))) {
          if (local_c * 0.5 < local_10 == (NAN(local_c * 0.5) || NAN(local_10))) {
            g_GameContext._436_4_ = local_c * 0.5 + (float)g_GameContext._436_4_;
          }
          else {
            g_GameContext._436_4_ = local_c * 0.6 + (float)g_GameContext._436_4_;
          }
        }
        else {
          g_GameContext._436_4_ = local_c * 0.8 + (float)g_GameContext._436_4_;
        }
      }
      else {
        g_GameContext._436_4_ = (float)g_GameContext._436_4_ + local_c;
      }
    }
  }
  if (g_GameContext.field78_0x19c == 0) {
    local_20.x = 512.0;
    local_20.y = 464.0;
    local_20.z = 0.0;
    AsciiManager::DrawText(&g_AsciiManager,&local_20,s__006c6c08);
  }
  return;
}


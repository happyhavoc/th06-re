
int AsciiManager::OnUpdate(AsciiManager *arg)

{
  AsciiManagerPopup *local_c;
  int local_8;
  
  if ((g_GameManager._6175_1_ == '\0') && ((char)g_GameManager.field22_0x1820 == '\0')) {
    local_c = arg->popups0;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (local_c->inUse != '\0') {
        (local_c->position).y = (local_c->position).y - g_GameContext.field81_0x1a8 * 0.5;
        (local_c->timer).previous = (local_c->timer).current;
        GameContext::FUN_00424285
                  (&g_GameContext,&(local_c->timer).current,&(local_c->timer).subFrame);
        if (0x3c < (local_c->timer).current) {
          local_c->inUse = '\0';
        }
      }
      local_c = local_c + 1;
    }
  }
  else if (g_GameManager._6175_1_ != '\0') {
    AsciiManagerProbablyStageRelated::FUN_00401b80(&arg->field17_0x6244);
  }
  if ((char)g_GameManager.field22_0x1820 != '\0') {
    AsciiManagerProbablyStageRelated::FUN_00402870(&arg->field18_0x69bc);
  }
  return 1;
}


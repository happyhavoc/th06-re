
int AsciiManager::FUN_00401140(AsciiManager *arg)

{
  AsciiManagerPopup *local_c;
  int local_8;
  
  if ((DAT_0069d4bf == '\0') && (DAT_0069d4c0 == '\0')) {
    local_c = arg->popups0;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (local_c->inUse != '\0') {
        (local_c->position).y = (local_c->position).y - (float)g_GameContext._424_4_ * 0.5;
        (local_c->timer).previous = (local_c->timer).current;
        FUN_00424285(&g_GameContext,&(local_c->timer).current,&(local_c->timer).subFrame);
        if (0x3c < (local_c->timer).current) {
          local_c->inUse = '\0';
        }
      }
      local_c = local_c + 1;
    }
  }
  else if (DAT_0069d4bf != '\0') {
    FUN_00401b80(&(arg->field17_0x6244).field0_0x0);
  }
  if (DAT_0069d4c0 != '\0') {
    FUN_00402870(&(arg->field18_0x69bc).field0_0x0);
  }
  return 1;
}


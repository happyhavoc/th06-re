
undefined4 FUN_00424d38(void)

{
  if (g_GameContext.cfg._27_1_ == '\x02') {
    if (DAT_006c6ec8 != 0) {
      FUN_004224e0();
    }
  }
  else {
    if (g_GameContext.cfg._27_1_ != '\x01') {
      return 0xffffffff;
    }
    FUN_00430f80();
  }
  return 0;
}


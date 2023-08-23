
void FUN_00420b50(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x3c))(g_GameContext._8_4_,0,0,0,0);
  if (iVar1 < 0) {
    FUN_004219d0();
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x38))(g_GameContext._8_4_,0x6c6df8);
    FUN_00421420();
    g_GameContext._408_4_ = 2;
  }
  FUN_00421a40();
  if (g_GameContext._408_4_ != 0) {
    g_GameContext._408_4_ = g_GameContext._408_4_ + -1;
  }
  return;
}


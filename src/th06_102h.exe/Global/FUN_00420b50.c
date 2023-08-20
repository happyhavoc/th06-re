
void FUN_00420b50(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x3c))(g_GameContext._8_4_,0,0,0,0);
  if (iVar1 < 0) {
    FUN_004219d0();
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x38))(g_GameContext._8_4_,0x6c6df8);
    FUN_00421420();
    DAT_006c6eb0 = 2;
  }
  FUN_00421a40();
  if (DAT_006c6eb0 != 0) {
    DAT_006c6eb0 = DAT_006c6eb0 + -1;
  }
  return;
}



undefined4 FUN_0043a659(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)g_GameContext._8_4_ + 0x14))(g_GameContext._8_4_,0);
  FUN_0043a70a();
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    FUN_00432030(local_8);
  }
  FUN_00435270(0);
  iVar1 = DAT_006d4588;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    *(undefined4 *)(iVar1 + 0x1cd34 + local_c * 4) = 0;
  }
  FUN_0041cde0(*(undefined4 *)(param_1 + 0x8238));
  *(undefined4 *)(param_1 + 0x8238) = 0;
  _free(*(void **)(param_1 + 0x10edc));
  return 0;
}


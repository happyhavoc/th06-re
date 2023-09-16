
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043a464(int param_1)

{
  AnmManager *pAVar1;
  undefined4 uVar2;
  int local_c;
  
  if (DAT_0069d4c4 == '\0') {
    FUN_00424b2f();
  }
  pAVar1 = g_AnmManager;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  *(undefined4 *)(param_1 + 0x81e4) = 0;
  if (g_GameContext.unkInput4 < 2) {
LAB_0043a516:
    *(undefined4 *)(param_1 + 0x81a0) = 0;
  }
  else {
    if (3 < g_GameContext.unkInput4) {
      if (g_GameContext.unkInput4 == 6) {
        *(undefined4 *)(param_1 + 0x81a0) = 4;
        goto LAB_0043a520;
      }
      if (g_GameContext.unkInput4 != 7) {
        if (g_GameContext.unkInput4 == 9) {
          *(undefined4 *)(param_1 + 0x81a0) = 5;
          goto LAB_0043a520;
        }
        goto LAB_0043a516;
      }
    }
    *(uint *)(param_1 + 0x81a0) = (uint)(CUR_RANK == 4);
  }
LAB_0043a520:
  if (DAT_0069d4c3 != '\0') {
    *(undefined4 *)(param_1 + 0x81a0) = 2;
  }
  DAT_0069d4c3 = 0;
  if ((g_GameContext.cfg.opts & 1) == 0) {
    *(undefined4 *)(param_1 + 0x8208) = 0x80004000;
    *(undefined4 *)(param_1 + 0x8204) = 0xff008000;
  }
  else {
    *(undefined4 *)(param_1 + 0x8208) = 0x80ffffff;
    *(undefined4 *)(param_1 + 0x8204) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x81fc) = 0;
  *(undefined4 *)(param_1 + 0x8200) = 0x40000000;
  *(undefined4 *)(param_1 + 0x820c) = 0;
  *(undefined4 *)(param_1 + 0x8210) = 0;
  *(undefined4 *)(param_1 + 0x10f28) = 0x10;
  *(undefined4 *)(param_1 + 0x10edc) = 0;
  uVar2 = FUN_0042b0d9("score.dat");
  FUN_0042b502(uVar2,&DAT_0069ccd0);
  FUN_0042b65e(uVar2,&DAT_0069cd30);
  FUN_0042b7dc(uVar2);
  if (DAT_0069d4c4 == '\0') {
    if (g_GameContext._1024_4_ == 0) {
      FUN_00424b5d("bgm/th06_01.mid");
      FUN_0042fd30(0,0x78,0xffffff,0,0);
    }
    else {
      FUN_0042fd30(0,200,0xffffff,0,0);
    }
  }
  DAT_0069d4c4 = 0;
  _DAT_0069d4c8 = 0;
  return 0;
}



undefined4 FUN_00410b10(int param_1)

{
  int iVar1;
  
  DAT_0069d4c2 = 1;
  g_GameContext._412_4_ = 1;
  GameContext::LoadPBG3(&g_GameContext,5,(byte *)"紅魔郷ED.dat");
  VeryBigStruct::LoadAnim(g_VeryBigStruct,0x2c,"data/staff01.anm",0x600);
  VeryBigStruct::LoadAnim(g_VeryBigStruct,0x2d,"data/staff02.anm",0x607);
  VeryBigStruct::LoadAnim(g_VeryBigStruct,0x2e,"data/staff03.anm",0x60e);
  g_VeryBigStruct->curTexture = 0;
  *(undefined4 *)&g_VeryBigStruct->field_0x210c0 = 0;
  g_VeryBigStruct->field_0x210bc = 0xff;
  g_VeryBigStruct->field_0x210be = 0xff;
  iVar1 = (uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2;
  *(undefined4 *)(param_1 + 0x1118) = 0;
  if (DAT_0069d4b8 == '\0') {
    if ((&DAT_0069ccdc)[CUR_RANK + iVar1 * 0x18] == 'c') {
      *(undefined4 *)(param_1 + 0x1118) = 1;
    }
    (&DAT_0069ccdc)[CUR_RANK + iVar1 * 0x18] = 99;
  }
  else if ((&DAT_0069cce1)[CUR_RANK + iVar1 * 0x18] == 'c') {
    *(undefined4 *)(param_1 + 0x1118) = 1;
  }
  (&DAT_0069cce1)[CUR_RANK + iVar1 * 0x18] = 99;
  if ((CUR_RANK == 0) || (DAT_0069d4b8 != '\0')) {
    if (DAT_0069d4bd == 0) {
      iVar1 = FUN_004106d0("data/end00b.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else if ((DAT_0069d4bd == 1) && (iVar1 = FUN_004106d0("data/end10b.end"), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  else if (DAT_0069d4bd == 0) {
    if (DAT_0069d4be == 0) {
      iVar1 = FUN_004106d0("data/end00.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar1 = FUN_004106d0("data/end01.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  else if (DAT_0069d4bd == 1) {
    if (DAT_0069d4be == 0) {
      iVar1 = FUN_004106d0("data/end10.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar1 = FUN_004106d0("data/end11.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



undefined4 __thiscall FUN_004106d0(int param_1_00,char *param_2)

{
  void *_Memory;
  byte *pbVar1;
  undefined4 uVar2;
  
  _Memory = *(void **)(param_1_00 + 0x1114);
  pbVar1 = FileSystem::OpenPath(param_2,0);
  *(byte **)(param_1_00 + 0x1114) = pbVar1;
  if (*(int *)(param_1_00 + 0x1114) == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : エンディングファイルが読み込めない、ファイルが破壊されています\n"
                       );
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1_00 + 0x116c) = *(undefined4 *)(param_1_00 + 0x1114);
    *(undefined4 *)(param_1_00 + 0x1148) = 8;
    *(undefined4 *)(param_1_00 + 0x1130) = 0;
    *(undefined4 *)(param_1_00 + 0x112c) = 0;
    *(undefined4 *)(param_1_00 + 0x1128) = 0xfffffc19;
    *(undefined4 *)(param_1_00 + 0x1124) = 0;
    *(undefined4 *)(param_1_00 + 0x1120) = 0;
    *(undefined4 *)(param_1_00 + 0x111c) = 0xfffffc19;
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    uVar2 = 0;
  }
  return uVar2;
}


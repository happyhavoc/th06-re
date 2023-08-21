
undefined4 FUN_004106d0(undefined4 param_1)

{
  void *_Memory;
  undefined4 uVar1;
  int in_ECX;
  
  _Memory = *(void **)(in_ECX + 0x1114);
  uVar1 = OpenPath(param_1,0);
  *(undefined4 *)(in_ECX + 0x1114) = uVar1;
  if (*(int *)(in_ECX + 0x1114) == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : エンディングファイルが読み込めない、ファイルが破壊されています\n"
                       );
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(in_ECX + 0x116c) = *(undefined4 *)(in_ECX + 0x1114);
    *(undefined4 *)(in_ECX + 0x1148) = 8;
    *(undefined4 *)(in_ECX + 0x1130) = 0;
    *(undefined4 *)(in_ECX + 0x112c) = 0;
    *(undefined4 *)(in_ECX + 0x1128) = 0xfffffc19;
    *(undefined4 *)(in_ECX + 0x1124) = 0;
    *(undefined4 *)(in_ECX + 0x1120) = 0;
    *(undefined4 *)(in_ECX + 0x111c) = 0xfffffc19;
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    uVar1 = 0;
  }
  return uVar1;
}


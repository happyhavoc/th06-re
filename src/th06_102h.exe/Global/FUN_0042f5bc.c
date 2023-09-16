
undefined4 FUN_0042f5bc(void **param_1)

{
  int local_c;
  int local_8;
  
  if (*param_1 != (void *)0x0) {
    FUN_0042b809(param_1);
    FUN_0042b7dc(*param_1);
  }
  *param_1 = (void *)0x0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      FUN_0042bc5b(local_8,local_c);
    }
  }
  FUN_00432030(g_AnmManager,0x25);
  FUN_00432030(g_AnmManager,0x26);
  FUN_00432030(g_AnmManager,0x27);
  FUN_00432030(g_AnmManager,0x28);
  FUN_00435270(g_AnmManager,0);
  Chain::Cut(&g_Chain,(ChainElem *)param_1[0x146b]);
  param_1[0x146b] = (void *)0x0;
  if (param_1 != (void **)0x0) {
    _free(*param_1);
    _free(param_1);
  }
  return 0;
}


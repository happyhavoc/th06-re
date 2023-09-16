
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00410d80(void *param_1)

{
  FUN_00432030(DAT_006d4588,0x2c);
  FUN_00432030(DAT_006d4588,0x2d);
  FUN_00432030(DAT_006d4588,0x2e);
  DAT_006c6ea4 = 7;
  AnmManager::FUN_00435270(DAT_006d4588,0);
  _free(*(void **)((int)param_1 + 0x1114));
  Chain::Cut((Chain *)&DAT_0069d918,*(ChainElem **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  _DAT_006c6eb4 = 0;
  GameContext::RemovePbg3File((GameContext *)&DAT_006c6d18,5);
  return 0;
}


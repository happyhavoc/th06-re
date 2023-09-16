
undefined4 FUN_0043a659(int param_1)

{
  AnmManager *pAVar1;
  int local_c;
  int local_8;
  
  (**(code **)(*DAT_006c6d20 + 0x14))(DAT_006c6d20,0);
  FUN_0043a70a();
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    FUN_00432030(DAT_006d4588,local_8);
  }
  AnmManager::FUN_00435270(DAT_006d4588,0);
  pAVar1 = DAT_006d4588;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  Chain::Cut((Chain *)&DAT_0069d918,*(ChainElem **)(param_1 + 0x8238));
  *(undefined4 *)(param_1 + 0x8238) = 0;
  _free(*(void **)(param_1 + 0x10edc));
  return 0;
}


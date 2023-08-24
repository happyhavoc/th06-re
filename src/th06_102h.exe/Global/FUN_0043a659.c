
undefined4 FUN_0043a659(int param_1)

{
  VeryBigStruct *pVVar1;
  int local_c;
  int local_8;
  
  (*(g_GameContext.d3d_device)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3d_device,0);
  FUN_0043a70a();
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    FUN_00432030(local_8);
  }
  FUN_00435270(VERY_BIG_STRUCT,0);
  pVVar1 = VERY_BIG_STRUCT;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    *(undefined4 *)(&pVVar1->field_0x1cd34 + local_c * 4) = 0;
  }
  FUN_0041cde0((short *)&DAT_0069d918,*(short **)(param_1 + 0x8238));
  *(undefined4 *)(param_1 + 0x8238) = 0;
  _free(*(void **)(param_1 + 0x10edc));
  return 0;
}


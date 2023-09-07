
undefined4 FUN_0041c1f7(int param_1)

{
  (*(g_GameContext.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_GameContext.d3dDevice,0);
  if (DAT_0069d4c4 == '\0') {
    FUN_00424d38(&g_GameContext);
  }
  FUN_00404650();
  FUN_004172b0();
  FUN_0042a0e0();
  FUN_00413350();
  COleDispParams::~COleDispParams((COleDispParams *)&DAT_00487e50);
  FUN_0040f4a0();
  FUN_0041b58c();
  FUN_0042aab0();
  *(undefined *)(param_1 + 0x1821) = 0;
  FUN_00401410((InputChainArg *)&DAT_0047b900);
  return 0;
}


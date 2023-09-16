
undefined4 FUN_0043a338(int param_1)

{
  UINT UVar1;
  int iVar2;
  undefined4 uVar3;
  
  _memset(&DAT_006d46c0,0,0x10f34);
  DAT_0069d4bf = 0;
  UVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->GetAvailableTextureMem)(g_GameContext.d3dDevice);
  DebugPrint("Debug : title 開始 VRAM = %d\n",UVar1);
  DAT_006dc8b0 = -(uint)(param_1 != 0) & 0xc;
  g_GameContext.framerateMultiplier = 0.0;
  DAT_006dc8f4 = ChainElem::Allocate(FUN_0043579f);
  DAT_006dc8f4->arg = &DAT_006d46c0;
  DAT_006dc8f4->addedCallback = FUN_0043a464;
  DAT_006dc8f4->deletedCallback = FUN_0043a659;
  DAT_006dc8b4 = 0;
  iVar2 = Chain::AddToCalcChain(&g_Chain,DAT_006dc8f4,2);
  if (iVar2 == 0) {
    DAT_006dc8f8 = ChainElem::Allocate(FUN_00439ad6);
    DAT_006dc8f8->arg = &DAT_006d46c0;
    Chain::AddToDrawChain(&g_Chain,DAT_006dc8f8,0);
    DAT_006e55f0 = 0;
    DAT_006dc8b4 = 0x3c;
    DAT_006e55ec = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


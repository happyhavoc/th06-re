
undefined4 FUN_0043a338(int param_1)

{
  UINT UVar1;
  int iVar2;
  undefined4 uVar3;
  
  _memset(BYTE_ARRAY_006d46c0,0,0x10f34);
  DAT_0069d4bf = 0;
  UVar1 = (*(g_GameContext.d3d_device)->lpVtbl->GetAvailableTextureMem)(g_GameContext.d3d_device);
  DebugPrint("Debug : title 開始 VRAM = %d\n",UVar1);
  BYTE_ARRAY_006d46c0._33264_4_ = -(uint)(param_1 != 0) & 0xc;
  DAT_006c6ec4 = 0;
  BYTE_ARRAY_006d46c0._33332_4_ = CreateChainElem(&DAT_0069d918,FUN_0043579f);
  *(byte **)(BYTE_ARRAY_006d46c0._33332_4_ + 0x1c) = BYTE_ARRAY_006d46c0;
  *(code **)(BYTE_ARRAY_006d46c0._33332_4_ + 8) = FUN_0043a464;
  *(code **)(BYTE_ARRAY_006d46c0._33332_4_ + 0xc) = FUN_0043a659;
  BYTE_ARRAY_006d46c0[33268] = 0;
  BYTE_ARRAY_006d46c0[33269] = 0;
  BYTE_ARRAY_006d46c0[33270] = 0;
  BYTE_ARRAY_006d46c0[33271] = 0;
  iVar2 = AddToCalcChain((short *)&DAT_0069d918,(ChainElem *)BYTE_ARRAY_006d46c0._33332_4_,2);
  if (iVar2 == 0) {
    BYTE_ARRAY_006d46c0._33336_4_ = CreateChainElem(&DAT_0069d918,FUN_00439ad6);
    *(byte **)(BYTE_ARRAY_006d46c0._33336_4_ + 0x1c) = BYTE_ARRAY_006d46c0;
    AddToDrawChain(0x69d918,(ChainElem *)BYTE_ARRAY_006d46c0._33336_4_,0);
    BYTE_ARRAY_006d46c0[69424] = 0;
    BYTE_ARRAY_006d46c0[69425] = 0;
    BYTE_ARRAY_006d46c0[69426] = 0;
    BYTE_ARRAY_006d46c0[69427] = 0;
    BYTE_ARRAY_006d46c0[33268] = 0x3c;
    BYTE_ARRAY_006d46c0[33269] = 0;
    BYTE_ARRAY_006d46c0[33270] = 0;
    BYTE_ARRAY_006d46c0[33271] = 0;
    BYTE_ARRAY_006d46c0[69420] = 0;
    BYTE_ARRAY_006d46c0[69421] = 0;
    BYTE_ARRAY_006d46c0[69422] = 0;
    BYTE_ARRAY_006d46c0[69423] = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


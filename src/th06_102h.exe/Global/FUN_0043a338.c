
undefined4 FUN_0043a338(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  _memset(&DAT_006d46c0,0,0x10f34);
  DAT_0069d4bf = 0;
  uVar1 = (**(code **)(*DAT_006c6d20 + 0x10))(DAT_006c6d20);
  DebugPrint("Debug : title 開始 VRAM = %d\n",uVar1);
  DAT_006dc8b0 = -(uint)(param_1 != 0) & 0xc;
  DAT_006c6ec4 = 0;
  DAT_006dc8f4 = ChainElem::Allocate(FUN_0043579f);
  DAT_006dc8f4->arg = &DAT_006d46c0;
  DAT_006dc8f4->addedCallback = FUN_0043a464;
  DAT_006dc8f4->deletedCallback = FUN_0043a659;
  DAT_006dc8b4 = 0;
  iVar2 = Chain::AddToCalcChain((Chain *)&DAT_0069d918,DAT_006dc8f4,2);
  if (iVar2 == 0) {
    DAT_006dc8f8 = ChainElem::Allocate(FUN_00439ad6);
    DAT_006dc8f8->arg = &DAT_006d46c0;
    Chain::AddToDrawChain((Chain *)&DAT_0069d918,DAT_006dc8f8,0);
    DAT_006e55f0 = 0;
    DAT_006dc8b4 = 0x3c;
    DAT_006e55ec = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 FUN_0043a338(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  _memset(&DAT_006d46c0,0,0x10f34);
  DAT_0069d4bf = 0;
  uVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x10))(g_GameContext._8_4_);
  DebugPrint("Debug : title 開始 VRAM = %d\n",uVar1);
  DAT_006dc8b0 = -(uint)(param_1 != 0) & 0xc;
  DAT_006c6ec4 = 0;
  DAT_006dc8f4 = FUN_0041cd40(FUN_0043579f);
  *(undefined **)(DAT_006dc8f4 + 0x1c) = &DAT_006d46c0;
  *(code **)(DAT_006dc8f4 + 8) = FUN_0043a464;
  *(code **)(DAT_006dc8f4 + 0xc) = FUN_0043a659;
  DAT_006dc8b4 = 0;
  iVar2 = FUN_0041c860(DAT_006dc8f4,2);
  if (iVar2 == 0) {
    DAT_006dc8f8 = FUN_0041cd40(FUN_00439ad6);
    *(undefined **)(DAT_006dc8f8 + 0x1c) = &DAT_006d46c0;
    FUN_0041c940(DAT_006dc8f8,0);
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


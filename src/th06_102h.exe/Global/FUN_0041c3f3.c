
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c3f3(float param_1)

{
  float10 fVar1;
  double dVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)(uint)g_GameContext._208_4_ / 2.0;
  local_c = (float)(ulonglong)(uint)g_GameContext._212_4_ / 2.0;
  local_14 = (float)(ulonglong)(uint)g_GameContext._208_4_ /
             (float)(ulonglong)(uint)g_GameContext._212_4_;
  local_18 = 0x3f060a92;
  fVar1 = (float10)FUN_0045c4c4(0x3fd0c15240000000);
  local_8 = local_c / (float)fVar1;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_2c = -local_c + _DAT_0069d704;
  local_30 = local_10 + _DAT_0069d700;
  local_28 = 0;
  local_34 = -local_8 * _DAT_0069d708;
  local_3c = local_10;
  local_38 = -local_c;
  FUN_0043f561(0x6c6d60,&local_3c,&local_30,&local_24);
  dVar2 = _fabs((double)local_8);
  _DAT_0069d6fc = (float)dVar2;
  FUN_0043efee(0x6c6da0,local_18,local_14,0x42c80000,param_1 + 10000.0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,2,0x6c6d60);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,3,0x6c6da0);
  return;
}


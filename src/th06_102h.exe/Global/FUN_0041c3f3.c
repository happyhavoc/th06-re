
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c3f3(float param_1)

{
  double dVar1;
  vec3f local_3c;
  vec3f local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)(uint)g_GameContext._208_4_ / 2.0;
  local_c = (float)(ulonglong)(uint)g_GameContext._212_4_ / 2.0;
  local_14 = (float)(ulonglong)(uint)g_GameContext._208_4_ /
             (float)(ulonglong)(uint)g_GameContext._212_4_;
  local_18 = 0.5235988;
  local_8 = fload_withFB(0);
  local_8 = local_c / local_8;
  local_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_30.y = -local_c + _DAT_0069d704;
  local_30.x = local_10 + _DAT_0069d700;
  local_30.z = 0.0;
  local_3c.z = -local_8 * _DAT_0069d708;
  local_3c.x = local_10;
  local_3c.y = -local_c;
  FUN_0043f561((float *)&g_GameContext.field_0x48,&local_3c,&local_30,&local_24);
  dVar1 = _fabs((double)local_8);
  _DAT_0069d6fc = (float)dVar1;
  FUN_0043efee((float *)&g_GameContext.field_0x88,local_18,local_14,100.0,param_1 + 10000.0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,2,0x6c6d60);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,3,0x6c6da0);
  return;
}


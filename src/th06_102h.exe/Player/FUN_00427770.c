
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Player::FUN_00427770(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int local_8;
  
  _DAT_005a5f8c = 0;
  EffectManager::FUN_0040ef50((int *)&g_EffectManager,0xc,(float *)(in_ECX + 0x440),1,0xff4040ff);
  EffectManager::FUN_0040ef50((int *)&g_EffectManager,6,(float *)(in_ECX + 0x440),0x10,0xffffffff);
  *(undefined *)(in_ECX + 0x9e0) = 2;
  *(undefined4 *)(in_ECX + 0x75bc) = 0;
  *(undefined4 *)(in_ECX + 0x75b8) = 0;
  *(undefined4 *)(in_ECX + 0x75b4) = 0xfffffc19;
  FUN_004311e0(4);
  g_GameManager.field6_0x18._8_4_ = g_GameManager.field6_0x18._8_4_ + 1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    puVar1 = (undefined4 *)(in_ECX + 0x9b8 + local_8 * 0xc);
    puVar1[2] = 2;
    puVar1[1] = 0;
    *puVar1 = 0xfffffc19;
  }
  return;
}


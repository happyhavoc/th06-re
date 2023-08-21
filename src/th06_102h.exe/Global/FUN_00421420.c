
void FUN_00421420(void)

{
  if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,7,1);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,7,0);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x89,0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x16,1);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x1b,1);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 5 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,9,2);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,9,1);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x13,5);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x14,6);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x17,4);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x17,8);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0xf,1);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x18,4);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x19,7);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 10 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x1c,1);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x1c,0);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x26,0x3f800000);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x23,3);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x22,0xffa0a0a0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x24,0x447a0000);
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x25,0x459c4000);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,4,4);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,4,2);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,5,2);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,6,3);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,6,0);
  }
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,1,4);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,1,2);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,2,2);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,3,3);
  }
  else {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,3,0);
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0x12,0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0x10,2);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0x11,2);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0x18,2);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0x19,3);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0xd,1);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,0xe,1);
  if (DAT_006d4588 != 0) {
    *(undefined *)(DAT_006d4588 + 0x210bc) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210bd) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210be) = 0xff;
    *(undefined4 *)(DAT_006d4588 + 0x210b8) = 0;
  }
  DAT_00487b8c = 1;
  return;
}


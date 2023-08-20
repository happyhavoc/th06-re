
void FUN_004031e0(void)

{
  int in_ECX;
  byte *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = in_ECX + 0x7134;
  g_GameContext._200_4_ = __ftol2();
  g_GameContext._204_4_ = __ftol2();
  g_GameContext._208_4_ = __ftol2();
  g_GameContext._212_4_ = __ftol2();
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
  for (local_10 = 0; local_10 < 0x203; local_10 = local_10 + 1) {
    if (*(char *)(local_8 + 0x24) != '\0') {
      *(float *)(in_ECX + 0x1a0) =
           *(float *)(local_8 + 8) - (float)((uint)*(byte *)(local_8 + 0x25) << 2);
      *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(local_8 + 0xc);
      *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(local_8 + 0x14);
      local_14 = (byte *)(local_8 + -1 + (uint)*(byte *)(local_8 + 0x25));
      for (local_c = (uint)*(byte *)(local_8 + 0x25); 0 < (int)local_c; local_c = local_c - 1) {
        *(uint *)(in_ECX + 0x1d0) = DAT_006d4588 + (uint)*local_14 * 0x38;
        if (*local_14 < 10) {
          FUN_00433590(in_ECX + 0x110);
        }
        else {
          *(undefined4 *)(in_ECX + 0x14c) = 0x3e400000;
          *(undefined4 *)(in_ECX + 0x160) = 0x3d000000;
          FUN_00433590(in_ECX + 0x110);
          *(undefined4 *)(in_ECX + 0x14c) = 0x3d000000;
          *(undefined4 *)(in_ECX + 0x160) = 0x3d000000;
        }
        *(float *)(in_ECX + 0x1a0) = *(float *)(in_ECX + 0x1a0) + 8.0;
        local_14 = local_14 + -1;
      }
    }
    local_8 = local_8 + 0x28;
  }
  return;
}


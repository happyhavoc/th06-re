
void FUN_004016b0(void)

{
  float fVar1;
  int in_ECX;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  
  local_18 = 1;
  local_10 = (byte *)(in_ECX + 0x220);
  *(uint *)(in_ECX + 0x80) = *(uint *)(in_ECX + 0x80) | 1;
  *(uint *)(in_ECX + 0x80) = *(uint *)(in_ECX + 0x80) | 0x300;
  for (local_c = 0; local_c < *(int *)(in_ECX + 0x6220); local_c = local_c + 1) {
    *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(local_10 + 0x40);
    *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(local_10 + 0x44);
    *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(local_10 + 0x48);
    local_14 = local_10;
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(local_10 + 0x50);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(local_10 + 0x54);
    fVar1 = *(float *)(local_10 + 0x50);
    if (local_18 != *(int *)(local_10 + 0x5c)) {
      local_18 = *(int *)(local_10 + 0x5c);
      if (local_18 == 0) {
        g_GameContext._200_4_ = 0;
        g_GameContext._204_4_ = 0;
        g_GameContext._208_4_ = 0x280;
        g_GameContext._212_4_ = 0x1e0;
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
      }
      else {
        g_GameContext._200_4_ = __ftol2();
        g_GameContext._204_4_ = __ftol2();
        g_GameContext._208_4_ = __ftol2();
        g_GameContext._212_4_ = __ftol2();
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
      }
    }
    for (; *local_14 != 0; local_14 = local_14 + 1) {
      if (*local_14 == 10) {
        *(float *)(in_ECX + 0x94) = *(float *)(local_10 + 0x54) * 16.0 + *(float *)(in_ECX + 0x94);
        *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(local_10 + 0x40);
      }
      else if (*local_14 == 0x20) {
        *(float *)(in_ECX + 0x90) = fVar1 * 14.0 + *(float *)(in_ECX + 0x90);
      }
      else {
        if (*(int *)(local_10 + 0x58) == 0) {
          *(uint *)(in_ECX + 0xc0) = DAT_006d4588 + (*local_14 - 0x15) * 0x38;
          *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(local_10 + 0x4c);
        }
        else {
          *(uint *)(in_ECX + 0xc0) = DAT_006d4588 + (*local_14 + 0x61) * 0x38;
          *(undefined4 *)(in_ECX + 0x7c) = 0xffffffff;
        }
        FUN_00432ad0(in_ECX);
        *(float *)(in_ECX + 0x90) = fVar1 * 14.0 + *(float *)(in_ECX + 0x90);
      }
    }
    local_10 = local_10 + 0x60;
  }
  return;
}


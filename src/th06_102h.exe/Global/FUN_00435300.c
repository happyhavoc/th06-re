
void FUN_00435300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int in_ECX;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x20db4 + param_1 * 4) == 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x40))(g_GameContext._8_4_,0,0,&local_20);
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x20d34 + param_1 * 4) == 0) {
      iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 100))
                        (g_GameContext._8_4_,*(undefined4 *)(in_ECX + 0x20e34 + param_1 * 0x14),
                         *(undefined4 *)(in_ECX + 0x20e38 + param_1 * 0x14),g_GameContext._232_4_,0,
                         1,in_ECX + 0x20d34 + param_1 * 4);
      if ((iVar1 != 0) &&
         (iVar1 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x6c))
                            (g_GameContext._8_4_,*(undefined4 *)(in_ECX + 0x20e34 + param_1 * 0x14),
                             *(undefined4 *)(in_ECX + 0x20e38 + param_1 * 0x14),
                             g_GameContext._232_4_,in_ECX + 0x20d34 + param_1 * 4), iVar1 != 0)) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
      iVar1 = FUN_0043ff78(*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4),0,0,
                           *(undefined4 *)(in_ECX + 0x20db4 + param_1 * 4),0,0,1,0);
      if (iVar1 != 0) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
    }
    local_1c = param_2;
    local_18 = param_3;
    local_14 = *(undefined4 *)(in_ECX + 0x20e34 + param_1 * 0x14);
    local_10 = *(undefined4 *)(in_ECX + 0x20e38 + param_1 * 0x14);
    local_c = param_4;
    local_8 = param_5;
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x70))
              (g_GameContext._8_4_,*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4),&local_1c,1,
               local_20,&local_c);
    (**(code **)(*local_20 + 8))(local_20);
    return;
  }
  return;
}


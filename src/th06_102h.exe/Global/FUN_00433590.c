
undefined4 FUN_00433590(float *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_c4 [5];
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_44 [8];
  float local_24;
  float local_20;
  
  if (((uint)param_1[0x20] & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((uint)param_1[0x20] >> 1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((NAN(*param_1) == (*param_1 == 0.0)) || (NAN(param_1[1]) == (param_1[1] == 0.0))) ||
          (NAN(param_1[2]) == (param_1[2] == 0.0))) {
    uVar1 = FUN_00433150(param_1);
  }
  else if (param_1[0x1f] == 0.0) {
    uVar1 = 0xffffffff;
  }
  else {
    pfVar3 = param_1 + 0xf;
    pfVar4 = local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    local_94 = ROUND(param_1[0x24]) - 0.5;
    local_90 = -ROUND(param_1[0x25]) + 0.5;
    if (((uint)param_1[0x20] >> 8 & 1) != 0) {
      local_94 = (*(float *)((int)param_1[0x30] + 0x30) * param_1[7]) / 2.0 + local_94;
    }
    if (((uint)param_1[0x20] >> 8 & 2) != 0) {
      local_90 = local_90 - (*(float *)((int)param_1[0x30] + 0x2c) * param_1[6]) / 2.0;
    }
    local_8c = param_1[0x26];
    local_c4[0] = local_c4[0] * param_1[7];
    local_b0 = -param_1[6] * local_b0;
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,0x100,local_c4);
    if (*(float *)(in_ECX + 0x210c0) != param_1[0x30]) {
      *(float *)(in_ECX + 0x210c0) = param_1[0x30];
      pfVar3 = param_1 + 0xf;
      pfVar4 = local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      local_24 = *(float *)((int)param_1[0x30] + 0x1c) + param_1[10];
      local_20 = *(float *)((int)param_1[0x30] + 0x20) + param_1[0xb];
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x94))(g_GameContext._8_4_,0x10,local_44);
      if (*(int *)(in_ECX + 0x210b8) != *(int *)(in_ECX + 0x1c110 + *(int *)param_1[0x30] * 4)) {
        *(undefined4 *)(in_ECX + 0x210b8) =
             *(undefined4 *)(in_ECX + 0x1c110 + *(int *)param_1[0x30] * 4);
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xf4))
                  (g_GameContext._8_4_,0,*(undefined4 *)(in_ECX + 0x210b8));
      }
      if (*(char *)(in_ECX + 0x210be) != '\x03') {
        if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
          (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x102);
          (**(code **)(*(int *)g_GameContext._8_4_ + 0x14c))
                    (g_GameContext._8_4_,0,*(undefined4 *)(in_ECX + 0x210c4),0x14);
        }
        else {
          (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x142);
        }
        *(undefined *)(in_ECX + 0x210be) = 3;
      }
    }
    FUN_004324d0(param_1);
    if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x118))(g_GameContext._8_4_,5,0,2);
    }
    else {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x120))(g_GameContext._8_4_,5,2,&DAT_006d4660,0x18)
      ;
    }
    uVar1 = 0;
  }
  return uVar1;
}


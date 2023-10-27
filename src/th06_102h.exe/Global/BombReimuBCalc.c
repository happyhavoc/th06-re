
void BombReimuBCalc(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  AnmVm *local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x75d8) < *(int *)(param_1 + 0x75cc)) {
    if ((*(int *)(param_1 + 0x75d8) == *(int *)(param_1 + 0x75d0)) ||
       (*(int *)(param_1 + 0x75d8) != 0)) {
      if (*(int *)(param_1 + 0x75d8) == 0x3c) {
        FUN_0042fd30(1,0x50,0x14,0,0);
      }
      *(undefined4 *)(param_1 + 0x8c0) = 0x42780000;
      *(undefined4 *)(param_1 + 0x8c4) = 0x43e00000;
      *(undefined4 *)(param_1 + 0x8d0) = 0x43c00000;
      *(undefined4 *)(param_1 + 0x8d4) = 0x42780000;
      *(undefined4 *)(param_1 + 0x8e0) = 0x42780000;
      *(undefined4 *)(param_1 + 0x8e4) = 0x43e00000;
      *(undefined4 *)(param_1 + 0x8f0) = 0x43c00000;
      *(undefined4 *)(param_1 + 0x8f4) = 0x42780000;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + local_8 * 0x110));
        if (*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0)) {
          uVar8 = *(uint *)(param_1 + 0x75d8) & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 != 0) {
            *(float *)(param_1 + 0x8b8 + local_8 * 0x10) =
                 *(float *)(param_1 + 0x7624 + local_8 * 0xc) +
                 *(float *)(param_1 + 0x77c8 + local_8 * 0x110);
            *(float *)(param_1 + 0x8bc + local_8 * 0x10) =
                 *(float *)(param_1 + 0x7628 + local_8 * 0xc) +
                 *(float *)(param_1 + 0x77cc + local_8 * 0x110);
            *(undefined4 *)(param_1 + 0x638 + local_8 * 0xc) =
                 *(undefined4 *)(param_1 + 0x8c0 + local_8 * 0x10);
            *(undefined4 *)(param_1 + 0x63c + local_8 * 0xc) =
                 *(undefined4 *)(param_1 + 0x8c4 + local_8 * 0x10);
            pfVar1 = (float *)(param_1 + 0x77c8 + local_8 * 0x110);
            pfVar2 = (float *)(param_1 + 0x7624 + local_8 * 0xc);
            fVar4 = pfVar2[2];
            fVar5 = pfVar1[2];
            fVar6 = pfVar2[1];
            fVar7 = pfVar1[1];
            pfVar3 = (float *)(param_1 + 0x4b8 + local_8 * 0xc);
            *pfVar3 = *pfVar2 + *pfVar1;
            pfVar3[1] = fVar6 + fVar7;
            pfVar3[2] = fVar4 + fVar5;
            *(undefined4 *)(param_1 + 0x7b8 + local_8 * 4) = 8;
          }
        }
      }
    }
    else {
      FUN_00420130(0x69e268);
      FUN_00417acd(0x69bc30,0x4a3,&DAT_0046a410);
      *(undefined4 *)(param_1 + 0x75cc) = 0x8c;
      *(undefined4 *)(param_1 + 0x75bc) = 200;
      *(undefined4 *)(param_1 + 0x75b8) = 0;
      *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
      local_c = (AnmVm *)(param_1 + 0x76e4);
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::FUN_004051b0(g_AnmManager,local_c,local_8 + 0x489);
        local_c = local_c + 1;
      }
      FUN_004311e0(6);
      *(undefined4 *)(param_1 + 0x7624) = *(undefined4 *)(param_1 + 0x440);
      *(undefined4 *)(param_1 + 0x7628) = 1130364928;
      *(undefined4 *)(param_1 + 0x762c) = 0x3ed70a3d;
      *(undefined4 *)(param_1 + 0x7630) = 0x43400000;
      *(undefined4 *)(param_1 + 0x7634) = *(undefined4 *)(param_1 + 0x444);
      *(undefined4 *)(param_1 + 0x7638) = 0x3ed47ae1;
      *(undefined4 *)(param_1 + 0x763c) = *(undefined4 *)(param_1 + 0x440);
      *(undefined4 *)(param_1 + 0x7640) = 0x43600000;
      *(undefined4 *)(param_1 + 0x7644) = 0x3ed1eb85;
      *(undefined4 *)(param_1 + 0x7648) = 0x43400000;
      *(undefined4 *)(param_1 + 0x764c) = *(undefined4 *)(param_1 + 0x444);
      *(undefined4 *)(param_1 + 0x7650) = 0x3ecf5c29;
      FUN_0042fd30(1,0x3c,2,6,0);
    }
    *(undefined *)(param_1 + 0x9e0) = 3;
    *(undefined4 *)(param_1 + 0x75d0) = *(undefined4 *)(param_1 + 0x75d8);
    GameContext::FUN_00424285(&g_GameContext,(int *)(param_1 + 0x75d8),(float *)(param_1 + 0x75d4));
  }
  else {
    FUN_00417314();
    *(undefined4 *)(param_1 + 0x75c8) = 0;
  }
  return;
}


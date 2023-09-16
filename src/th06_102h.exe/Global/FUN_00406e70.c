
void FUN_00406e70(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x75d8) < *(int *)(param_1 + 0x75cc)) {
    if ((*(int *)(param_1 + 0x75d8) == *(int *)(param_1 + 0x75d0)) ||
       (*(int *)(param_1 + 0x75d8) != 0)) {
      if (*(int *)(param_1 + 0x75d8) == 0x3c) {
        FUN_0042fd30(1,0x3c,1,7,0);
      }
      else if (*(int *)(param_1 + 0x75d8) == 0x78) {
        FUN_0042fd30(1,200,0x18,0,0);
      }
      if (*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0)) {
        uVar2 = *(uint *)(param_1 + 0x75d8) & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          *(undefined4 *)(param_1 + 0x8b8) = 0x43400000;
          *(float *)(param_1 + 0x8bc) = *(float *)(param_1 + 0x444) / 2.0;
          *(undefined4 *)(param_1 + 0x8c0) = 0x43c00000;
          *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_1 + 0x444);
          *(undefined4 *)(param_1 + 0x638) = 0x43c00000;
          *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x444);
          *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x8b8);
          *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x8bc);
          *(undefined4 *)(param_1 + 0x7b8) = 0xc;
        }
      }
      AnmManager::FUN_00433960(param_1 + 0x76e4);
      AnmManager::FUN_00433960(param_1 + 0x77f4);
      AnmManager::FUN_00433960(param_1 + 0x7904);
      AnmManager::FUN_00433960(param_1 + 0x7a14);
    }
    else {
      FUN_00420130();
      FUN_00417acd(0x69bc30,0x4a1,&DAT_0046a450);
      *(undefined4 *)(param_1 + 0x75cc) = 300;
      *(undefined4 *)(param_1 + 0x75bc) = 0x168;
      *(undefined4 *)(param_1 + 0x75b8) = 0;
      *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
      local_c = param_1 + 0x76e4;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        FUN_004051b0(local_c,local_8 + 0x408);
        puVar1 = (undefined4 *)(param_1 + 0x7624 + local_8 * 0xc);
        *puVar1 = *(undefined4 *)(param_1 + 0x440);
        puVar1[1] = *(undefined4 *)(param_1 + 0x444);
        puVar1[2] = *(undefined4 *)(param_1 + 0x448);
        local_c = local_c + 0x110;
      }
      FUN_004311e0(0x13);
      *(undefined4 *)(param_1 + 0x9d4) = 0x3e99999a;
      *(undefined4 *)(param_1 + 0x9d0) = 0x3e99999a;
    }
    *(undefined *)(param_1 + 0x9e0) = 3;
    *(undefined4 *)(param_1 + 0x75d0) = *(undefined4 *)(param_1 + 0x75d8);
    FUN_00424285(&g_GameContext,(int *)(param_1 + 0x75d8),(float *)(param_1 + 0x75d4));
  }
  else {
    FUN_00417314();
    *(undefined4 *)(param_1 + 0x75c8) = 0;
    *(undefined4 *)(param_1 + 0x9d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x9d0) = 0x3f800000;
  }
  return;
}


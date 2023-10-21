
void FUN_004066f0(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  AnmVm *local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x75d8) < *(int *)(param_1 + 0x75cc)) {
    if ((*(int *)(param_1 + 0x75d8) == *(int *)(param_1 + 0x75d0)) ||
       (*(int *)(param_1 + 0x75d8) != 0)) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        pfVar2 = (float *)(param_1 + 0x7684 + local_8 * 0xc);
        fVar5 = g_GameContext.field81_0x1a8 * pfVar2[2];
        fVar6 = g_GameContext.field81_0x1a8 * pfVar2[1];
        pfVar3 = (float *)(param_1 + 0x7624 + local_8 * 0xc);
        *pfVar3 = g_GameContext.field81_0x1a8 * *pfVar2 + *pfVar3;
        pfVar3[1] = fVar6 + pfVar3[1];
        pfVar3[2] = fVar5 + pfVar3[2];
        if ((*(int *)(param_1 + 0x75d8) != *(int *)(param_1 + 0x75d0)) &&
           (*(int *)(param_1 + 0x75d8) % 3 != 0)) {
          *(undefined4 *)(param_1 + 0x8b8 + local_8 * 0x10) =
               *(undefined4 *)(param_1 + 0x7624 + local_8 * 0xc);
          *(undefined4 *)(param_1 + 0x8bc + local_8 * 0x10) =
               *(undefined4 *)(param_1 + 0x7628 + local_8 * 0xc);
          *(undefined4 *)(param_1 + 0x8c0 + local_8 * 0x10) = 0x43000000;
          *(undefined4 *)(param_1 + 0x8c4 + local_8 * 0x10) = 0x43000000;
          *(undefined4 *)(param_1 + 0x638 + local_8 * 0xc) = 0x43000000;
          *(undefined4 *)(param_1 + 0x63c + local_8 * 0xc) = 0x43000000;
          puVar1 = (undefined4 *)(param_1 + 0x7624 + local_8 * 0xc);
          puVar4 = (undefined4 *)(param_1 + 0x4b8 + local_8 * 0xc);
          *puVar4 = *puVar1;
          puVar4[1] = puVar1[1];
          puVar4[2] = puVar1[2];
          *(undefined4 *)(param_1 + 0x7b8 + local_8 * 4) = 8;
        }
        AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(param_1 + 0x76e4 + local_8 * 0x110));
      }
    }
    else {
      FUN_00420130(0x69e268);
      FUN_00417acd(0x69bc30,0x4a3,&DAT_0046a420);
      *(undefined4 *)(param_1 + 0x75cc) = 0xfa;
      *(undefined4 *)(param_1 + 0x75bc) = 300;
      *(undefined4 *)(param_1 + 0x75b8) = 0;
      *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
      local_c = (AnmVm *)(param_1 + 0x76e4);
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        AnmManager::FUN_004051b0(g_AnmManager,local_c,local_8 % 3 + 0x405);
        puVar1 = (undefined4 *)(param_1 + 0x7624 + local_8 * 0xc);
        *puVar1 = *(undefined4 *)(param_1 + 0x440);
        puVar1[1] = *(undefined4 *)(param_1 + 0x444);
        puVar1[2] = *(undefined4 *)(param_1 + 0x448);
        fVar5 = ((float)local_8 * 6.283185) / 8.0;
        fVar7 = (float10)FUN_0045bda4((double)fVar5);
        *(float *)(param_1 + 0x7684 + local_8 * 0xc) = (float)fVar7 + (float)fVar7;
        fVar7 = (float10)FUN_0045bcf4((double)fVar5);
        *(float *)(param_1 + 0x7688 + local_8 * 0xc) = (float)fVar7 + (float)fVar7;
        *(undefined4 *)(param_1 + 0x768c + local_8 * 0xc) = 0;
        local_c = local_c + 1;
      }
      FUN_004311e0(6);
      FUN_0042fd30(1,0x78,4,1);
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


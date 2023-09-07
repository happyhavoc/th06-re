
undefined4 FUN_00416d60(int param_1)

{
  float fVar1;
  VeryBigStruct *pVVar2;
  int iVar3;
  long lVar4;
  Unknown *pUVar5;
  undefined4 *puVar6;
  undefined2 local_3c;
  undefined2 local_30;
  undefined2 local_24;
  undefined2 local_18;
  undefined2 local_c;
  uint local_8;
  
  if (g_GameContext.unkInput2 != 3) {
    iVar3 = VeryBigStruct::LoadAnim(g_VeryBigStruct,6,"data/etama3.anm",0x200);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar3 = VeryBigStruct::LoadAnim(g_VeryBigStruct,7,"data/etama4.anm",0x29a);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  for (local_8 = 0; pVVar2 = g_VeryBigStruct, local_8 < 10; local_8 = local_8 + 1) {
    iVar3 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
    pUVar5 = (Unknown *)(param_1 + local_8 * 0x560);
    local_c = (undefined2)iVar3;
    *(undefined2 *)&pUVar5->field_0xb4 = local_c;
    FUN_00432430(pUVar5,*(int *)(&pVVar2->field_0x1c934 + iVar3 * 4));
    pVVar2 = g_VeryBigStruct;
    iVar3 = *(int *)(&DAT_0046a6ec + local_8 * 0x14);
    pUVar5 = (Unknown *)(param_1 + 0x110 + local_8 * 0x560);
    local_18 = (undefined2)iVar3;
    *(undefined2 *)&pUVar5->field_0xb4 = local_18;
    FUN_00432430(pUVar5,*(int *)(&pVVar2->field_0x1c934 + iVar3 * 4));
    pVVar2 = g_VeryBigStruct;
    iVar3 = *(int *)(&DAT_0046a6f0 + local_8 * 0x14);
    pUVar5 = (Unknown *)(param_1 + 0x220 + local_8 * 0x560);
    local_24 = (undefined2)iVar3;
    *(undefined2 *)&pUVar5->field_0xb4 = local_24;
    FUN_00432430(pUVar5,*(int *)(&pVVar2->field_0x1c934 + iVar3 * 4));
    pVVar2 = g_VeryBigStruct;
    iVar3 = *(int *)(&DAT_0046a6f4 + local_8 * 0x14);
    pUVar5 = (Unknown *)(param_1 + 0x330 + local_8 * 0x560);
    local_30 = (undefined2)iVar3;
    *(undefined2 *)&pUVar5->field_0xb4 = local_30;
    FUN_00432430(pUVar5,*(int *)(&pVVar2->field_0x1c934 + iVar3 * 4));
    pVVar2 = g_VeryBigStruct;
    iVar3 = *(int *)(&DAT_0046a6f8 + local_8 * 0x14);
    pUVar5 = (Unknown *)(param_1 + 0x440 + local_8 * 0x560);
    local_3c = (undefined2)iVar3;
    *(undefined2 *)&pUVar5->field_0xb4 = local_3c;
    FUN_00432430(pUVar5,*(int *)(&pVVar2->field_0x1c934 + iVar3 * 4));
    *(undefined2 *)(param_1 + 0xb2 + local_8 * 0x560) =
         *(undefined2 *)(param_1 + 0xb0 + local_8 * 0x560);
    lVar4 = __ftol2((double)*(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c));
    *(char *)(param_1 + 0x55d + local_8 * 0x560) = (char)lVar4;
    fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
    if (fVar1 < 8.0 == (fVar1 == 8.0)) {
      fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
      if (fVar1 < 16.0 == (fVar1 == 16.0)) {
        fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
        if (fVar1 < 32.0 == (fVar1 == 32.0)) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x42000000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x42000000;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x207) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41300000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41300000;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x208) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41100000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41100000;
        }
        else {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41800000;
        }
      }
      else {
        iVar3 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
        if (iVar3 == 0x202) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
        }
        else if (iVar3 == 0x204) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40a00000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40a00000;
        }
        else if (iVar3 == 0x205) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
        }
        else {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40c00000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40c00000;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
      *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
    }
  }
  puVar6 = &DAT_0069e268;
  for (iVar3 = 0xa253; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  return 0;
}


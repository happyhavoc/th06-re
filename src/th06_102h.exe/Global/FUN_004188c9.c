
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004188c9(void)

{
  short sVar1;
  int iVar2;
  VeryBigStruct *pVVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int in_ECX;
  short local_34;
  short local_20;
  short local_14;
  
  if (*(int *)(in_ECX + 0x253c) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(in_ECX + 0x2bd4) != 0) {
      *(int *)(in_ECX + 0x2bd4) = *(int *)(in_ECX + 0x2bd4) + -1;
    }
    if ((*(char *)(in_ECX + 0x2bd8) != '\0') && ((DAT_0069d904 & 0x100) != 0)) {
      *(uint *)(in_ECX + 0x2548) = (uint)**(ushort **)(in_ECX + 0x2538);
      *(undefined4 *)(in_ECX + 0x2544) = 0;
      *(undefined4 *)(in_ECX + 0x2540) = 0xfffffc19;
    }
    while (pVVar3 = VERY_BIG_STRUCT,
          (int)(uint)**(ushort **)(in_ECX + 0x2538) <= *(int *)(in_ECX + 0x2548)) {
      switch(*(undefined *)(*(int *)(in_ECX + 0x2538) + 2)) {
      case 0:
        *(undefined4 *)(in_ECX + 0x253c) = 0xffffffff;
        return 0xffffffff;
      case 1:
        psVar6 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        uVar5 = -(uint)(*psVar6 != 0) & 2;
        sVar1 = *(short *)(*(int *)(in_ECX + 0x2538) + 6);
        local_14 = sVar1 + (short)uVar5 + 0x4a0;
        iVar7 = in_ECX + 0x2550 + *psVar6 * 0x110;
        *(short *)(iVar7 + 0xb4) = local_14;
        FUN_00432430(iVar7,*(undefined4 *)(&pVVar3->field_0x1dbb4 + sVar1 * 4 + uVar5 * 4));
        break;
      case 2:
        psVar6 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        FUN_004323a0(in_ECX + 0x2550 + *psVar6 * 0x110,
                     (int)*(short *)(*(int *)(in_ECX + 0x2538) + 6) +
                     (-(uint)(*psVar6 != 0) & 8) + 0x4a0);
        break;
      case 3:
        iVar7 = *(int *)(in_ECX + 0x2538);
        psVar6 = (short *)(iVar7 + 4);
        if ((*(short *)(iVar7 + 6) == 0) && (-1 < *(short *)(in_ECX + 0x2934))) {
          FUN_00434b60(VERY_BIG_STRUCT,in_ECX + 0x2880,
                       *(undefined4 *)(in_ECX + 0x2bb0 + *psVar6 * 4),
                       *(undefined4 *)(in_ECX + 0x2bc0 + *psVar6 * 4),&DAT_0046ac10);
        }
        pVVar3 = VERY_BIG_STRUCT;
        sVar1 = *(short *)(iVar7 + 6);
        local_20 = sVar1 + 0x702;
        iVar2 = in_ECX + 0x2770 + *(short *)(iVar7 + 6) * 0x110;
        *(short *)(iVar2 + 0xb4) = local_20;
        FUN_00432430(iVar2,*(undefined4 *)(&pVVar3->field_0x1e53c + sVar1 * 4));
        *(undefined *)(in_ECX + 0x287d + *(short *)(iVar7 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x2bd0);
        *(undefined *)(in_ECX + 0x287c + *(short *)(iVar7 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x287d + *(short *)(iVar7 + 6) * 0x110);
        FUN_00434b60(VERY_BIG_STRUCT,in_ECX + 0x2770 + *(short *)(iVar7 + 6) * 0x110,
                     *(undefined4 *)(in_ECX + 0x2bb0 + *psVar6 * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *psVar6 * 4),iVar7 + 8);
        *(undefined4 *)(in_ECX + 0x254c) = 0;
        break;
      case 4:
        if ((((*(char *)(in_ECX + 0x2bd8) == '\0') || ((DAT_0069d904 & 0x100) == 0)) &&
            (((DAT_0069d904 & 1) == 0 ||
             (((DAT_0069d904 & 1) == (DAT_0069d908 & 1) || (*(int *)(in_ECX + 0x254c) < 8)))))) &&
           (*(int *)(in_ECX + 0x254c) < *(int *)(*(int *)(in_ECX + 0x2538) + 4))) {
          *(int *)(in_ECX + 0x254c) = *(int *)(in_ECX + 0x254c) + 1;
          goto LAB_00418fe0;
        }
        break;
      case 5:
        iVar7 = *(int *)(in_ECX + 0x2538);
        psVar6 = (short *)(iVar7 + 4);
        if (*psVar6 < 2) {
          *(ushort *)(in_ECX + 0x25da + *psVar6 * 0x110) = (ushort)*(byte *)(iVar7 + 6);
        }
        else {
          *(ushort *)(in_ECX + 0x27fa + (*psVar6 + -2) * 0x110) = (ushort)*(byte *)(iVar7 + 6);
        }
        break;
      case 6:
        *(int *)(in_ECX + 0x2bd4) = *(int *)(in_ECX + 0x2bd4) + 1;
        break;
      case 7:
        *(undefined2 *)(in_ECX + 0x1d68) = 0x701;
        FUN_00432430(in_ECX + 0x1cb4,*(undefined4 *)&pVVar3->field_0x1e538);
        *(undefined *)(in_ECX + 0x1dc0) = 0x10;
        *(undefined *)(in_ECX + 0x1dc1) = 0x10;
        FUN_00434c40(VERY_BIG_STRUCT,in_ECX + 0x1cb4,0xe0ffff,0,&DAT_0046a98c,
                     DAT_00487b14 + 0x90 + *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80);
        iVar7 = FUN_00424ae4(*(undefined4 *)(*(int *)(in_ECX + 0x2538) + 4));
        if (iVar7 != 0) {
          FUN_00424b5d(DAT_00487b14 + 0x290 + *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80);
        }
        break;
      case 8:
        iVar2 = *(int *)(in_ECX + 0x2538);
        sVar1 = *(short *)(iVar2 + 6);
        local_34 = sVar1 + 0x704;
        iVar7 = in_ECX + 0x2990 + *(short *)(iVar2 + 6) * 0x110;
        *(short *)(iVar7 + 0xb4) = local_34;
        FUN_00432430(iVar7,*(undefined4 *)(&pVVar3->field_0x1e544 + sVar1 * 4));
        FUN_00434c40(VERY_BIG_STRUCT,in_ECX + 0x2990 + *(short *)(iVar2 + 6) * 0x110,
                     *(undefined4 *)(in_ECX + 0x2bb0 + *(short *)(iVar2 + 4) * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *(short *)(iVar2 + 4) * 4),iVar2 + 8);
        *(undefined4 *)(in_ECX + 0x254c) = 0;
        break;
      case 9:
        *(undefined4 *)(in_ECX + 0x2bdc) = 1;
        pVVar3 = VERY_BIG_STRUCT;
        if (CUR_STAGE < 6) {
          *(undefined2 *)(in_ECX + 0x24d8) = 0x619;
          FUN_00432430(in_ECX + 0x2424,*(undefined4 *)&pVVar3->field_0x1e198);
        }
        else {
          DAT_0069d4bc = 0xff;
        }
        break;
      case 10:
        goto LAB_00418fe0;
      case 0xb:
        DAT_0069bca0 = DAT_0069bca4;
        if (DAT_0069d4c3 == '\0') {
          if ((CUR_STAGE < 5) || ((CUR_RANK != 0 && (CUR_STAGE == 5)))) {
            g_GameContext._396_4_ = 3;
          }
          else if (_DAT_0069bcbc == 0) {
            if (CUR_RANK == 4) {
              DAT_0069d4c2 = 1;
              g_GameContext._396_4_ = 7;
            }
            else {
              g_GameContext._396_4_ = 10;
            }
          }
          else {
            g_GameContext._396_4_ = 8;
          }
        }
        else {
          g_GameContext._396_4_ = 7;
        }
        goto LAB_00418fe0;
      case 0xc:
        FUN_00424d82(0x40800000);
        break;
      case 0xd:
        *(undefined *)(in_ECX + 0x2bd8) = *(undefined *)(*(int *)(in_ECX + 0x2538) + 4);
      }
      *(uint *)(in_ECX + 0x2538) =
           *(int *)(in_ECX + 0x2538) + 4 + (uint)*(byte *)(*(int *)(in_ECX + 0x2538) + 3);
    }
    FUN_0041b5af();
LAB_00418fe0:
    FUN_00433960(in_ECX + 0x2550);
    FUN_00433960(in_ECX + 0x2660);
    FUN_00433960(in_ECX + 0x2770);
    FUN_00433960(in_ECX + 0x2880);
    FUN_00433960(in_ECX + 0x2990);
    FUN_00433960(in_ECX + 0x2aa0);
    if (((*(int *)(in_ECX + 0x2548) < 0x3c) && (*(char *)(in_ECX + 0x2bd8) != '\0')) &&
       ((DAT_0069d904 & 0x100) != 0)) {
      *(undefined4 *)(in_ECX + 0x2548) = 0x3c;
      *(undefined4 *)(in_ECX + 0x2544) = 0;
      *(undefined4 *)(in_ECX + 0x2540) = 0xfffffc19;
    }
    uVar4 = 0;
  }
  return uVar4;
}

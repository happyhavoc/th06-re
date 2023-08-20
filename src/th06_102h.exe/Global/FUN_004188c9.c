
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004188c9(void)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined2 local_34;
  undefined2 local_20;
  undefined2 local_14;
  
  if (*(int *)(in_ECX + 0x253c) < 0) {
    uVar2 = 0xffffffff;
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
    while (iVar4 = DAT_006d4588,
          (int)(uint)**(ushort **)(in_ECX + 0x2538) <= *(int *)(in_ECX + 0x2548)) {
      switch(*(undefined *)(*(int *)(in_ECX + 0x2538) + 2)) {
      case 0:
        *(undefined4 *)(in_ECX + 0x253c) = 0xffffffff;
        return 0xffffffff;
      case 1:
        psVar3 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        iVar6 = (int)*(short *)(*(int *)(in_ECX + 0x2538) + 6) + (-(uint)(*psVar3 != 0) & 2) + 0x4a0
        ;
        iVar1 = in_ECX + 0x2550 + *psVar3 * 0x110;
        local_14 = (undefined2)iVar6;
        *(undefined2 *)(iVar1 + 0xb4) = local_14;
        FUN_00432430(iVar1,*(undefined4 *)(iVar4 + 0x1c934 + iVar6 * 4));
        break;
      case 2:
        psVar3 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        FUN_004323a0(in_ECX + 0x2550 + *psVar3 * 0x110,
                     (int)*(short *)(*(int *)(in_ECX + 0x2538) + 6) +
                     (-(uint)(*psVar3 != 0) & 8) + 0x4a0);
        break;
      case 3:
        iVar4 = *(int *)(in_ECX + 0x2538);
        psVar3 = (short *)(iVar4 + 4);
        if ((*(short *)(iVar4 + 6) == 0) && (-1 < *(short *)(in_ECX + 0x2934))) {
          FUN_00434b60(DAT_006d4588,in_ECX + 0x2880,*(undefined4 *)(in_ECX + 0x2bb0 + *psVar3 * 4),
                       *(undefined4 *)(in_ECX + 0x2bc0 + *psVar3 * 4),&DAT_0046ac10);
        }
        iVar6 = DAT_006d4588;
        iVar5 = *(short *)(iVar4 + 6) + 0x702;
        iVar1 = in_ECX + 0x2770 + *(short *)(iVar4 + 6) * 0x110;
        local_20 = (undefined2)iVar5;
        *(undefined2 *)(iVar1 + 0xb4) = local_20;
        FUN_00432430(iVar1,*(undefined4 *)(iVar6 + 0x1c934 + iVar5 * 4));
        *(undefined *)(in_ECX + 0x287d + *(short *)(iVar4 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x2bd0);
        *(undefined *)(in_ECX + 0x287c + *(short *)(iVar4 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x287d + *(short *)(iVar4 + 6) * 0x110);
        FUN_00434b60(DAT_006d4588,in_ECX + 0x2770 + *(short *)(iVar4 + 6) * 0x110,
                     *(undefined4 *)(in_ECX + 0x2bb0 + *psVar3 * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *psVar3 * 4),iVar4 + 8);
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
        iVar4 = *(int *)(in_ECX + 0x2538);
        psVar3 = (short *)(iVar4 + 4);
        if (*psVar3 < 2) {
          *(ushort *)(in_ECX + 0x25da + *psVar3 * 0x110) = (ushort)*(byte *)(iVar4 + 6);
        }
        else {
          *(ushort *)(in_ECX + 0x27fa + (*psVar3 + -2) * 0x110) = (ushort)*(byte *)(iVar4 + 6);
        }
        break;
      case 6:
        *(int *)(in_ECX + 0x2bd4) = *(int *)(in_ECX + 0x2bd4) + 1;
        break;
      case 7:
        *(undefined2 *)(in_ECX + 0x1d68) = 0x701;
        FUN_00432430(in_ECX + 0x1cb4,*(undefined4 *)(iVar4 + 0x1e538));
        *(undefined *)(in_ECX + 0x1dc0) = 0x10;
        *(undefined *)(in_ECX + 0x1dc1) = 0x10;
        FUN_00434c40(DAT_006d4588,in_ECX + 0x1cb4,0xe0ffff,0,&DAT_0046a98c,
                     DAT_00487b14 + 0x90 + *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80);
        iVar4 = FUN_00424ae4(*(undefined4 *)(*(int *)(in_ECX + 0x2538) + 4));
        if (iVar4 != 0) {
          FUN_00424b5d(DAT_00487b14 + 0x290 + *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80);
        }
        break;
      case 8:
        iVar6 = *(int *)(in_ECX + 0x2538);
        iVar5 = *(short *)(iVar6 + 6) + 0x704;
        iVar1 = in_ECX + 0x2990 + *(short *)(iVar6 + 6) * 0x110;
        local_34 = (undefined2)iVar5;
        *(undefined2 *)(iVar1 + 0xb4) = local_34;
        FUN_00432430(iVar1,*(undefined4 *)(iVar4 + 0x1c934 + iVar5 * 4));
        FUN_00434c40(DAT_006d4588,in_ECX + 0x2990 + *(short *)(iVar6 + 6) * 0x110,
                     *(undefined4 *)(in_ECX + 0x2bb0 + *(short *)(iVar6 + 4) * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *(short *)(iVar6 + 4) * 4),iVar6 + 8);
        *(undefined4 *)(in_ECX + 0x254c) = 0;
        break;
      case 9:
        *(undefined4 *)(in_ECX + 0x2bdc) = 1;
        iVar4 = DAT_006d4588;
        if (DAT_0069d6d4 < 6) {
          *(undefined2 *)(in_ECX + 0x24d8) = 0x619;
          FUN_00432430(in_ECX + 0x2424,*(undefined4 *)(iVar4 + 0x1e198));
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
          if ((DAT_0069d6d4 < 5) || ((_DAT_0069bcb0 != 0 && (DAT_0069d6d4 == 5)))) {
            DAT_006c6ea4 = 3;
          }
          else if (_DAT_0069bcbc == 0) {
            if (_DAT_0069bcb0 == 4) {
              DAT_0069d4c2 = 1;
              DAT_006c6ea4 = 7;
            }
            else {
              DAT_006c6ea4 = 10;
            }
          }
          else {
            DAT_006c6ea4 = 8;
          }
        }
        else {
          DAT_006c6ea4 = 7;
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
    uVar2 = 0;
  }
  return uVar2;
}


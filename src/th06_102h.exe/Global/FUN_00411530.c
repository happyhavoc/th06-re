
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411530(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined2 uVar3;
  float10 fVar4;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0xee5dc) == 0) {
    *(undefined4 *)(in_ECX + 0xee5dc) = DAT_00487e58;
  }
  iVar2 = FUN_004195a2();
  if (((iVar2 == 0) &&
      (local_c = DAT_0069d4ba * -0xf0 + 0x960,
      *(int *)(in_ECX + 0xee5e8) != *(int *)(in_ECX + 0xee5e0))) &&
     (*(int *)(in_ECX + 0xee5e8) % local_c == 0)) {
    FUN_0041c57e(100);
  }
  while (fVar1 = DAT_0069d6f4, -1 < **(short **)(in_ECX + 0xee5dc)) {
    if (*(int *)(in_ECX + 0xee5e8) == (int)**(short **)(in_ECX + 0xee5dc)) {
      switch(*(undefined2 *)(*(int *)(in_ECX + 0xee5dc) + 4)) {
      case 0:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_10 = iVar2 + 8;
          uVar3 = (undefined2)((uint)local_10 >> 0x10);
          FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),local_10,
                       CONCAT22(uVar3,*(undefined2 *)(iVar2 + 0x14)),
                       CONCAT22(uVar3,*(undefined2 *)(iVar2 + 0x16)),*(undefined4 *)(iVar2 + 0x18));
        }
        break;
      case 1:
        if (DAT_0069bc50 == '\0') {
          FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),
                       *(int *)(in_ECX + 0xee5dc) + 8,0xffffffff,0xffffffff,0xffffffff);
        }
        break;
      case 2:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_14 = iVar2 + 8;
          uVar3 = (undefined2)((uint)local_14 >> 0x10);
          local_8 = FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),local_14,
                                 CONCAT22(uVar3,*(undefined2 *)(iVar2 + 0x14)),
                                 CONCAT22(uVar3,*(undefined2 *)(iVar2 + 0x16)),
                                 *(undefined4 *)(iVar2 + 0x18));
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 3:
        if (DAT_0069bc50 == '\0') {
          local_8 = FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),
                                 *(int *)(in_ECX + 0xee5dc) + 8,0xffffffff,0xffffffff,0xffffffff);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 4:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_18 = (float *)(iVar2 + 8);
          local_24 = *local_18;
          local_20 = *(float *)(iVar2 + 0xc);
          local_1c = *(float *)(iVar2 + 0x10);
          if (*local_18 < -990.0 != (*local_18 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_24 = (float)(fVar4 * (float10)fVar1);
          }
          fVar1 = DAT_0069d6f8;
          if (local_18[1] < -990.0 != (local_18[1] == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_20 = (float)(fVar4 * (float10)fVar1);
          }
          if (local_18[2] < -990.0 != (local_18[2] == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_1c = (float)(fVar4 * (float10)800.0);
          }
          FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),&local_24,
                       *(undefined2 *)(local_18 + 3),*(undefined2 *)((int)local_18 + 0xe),
                       local_18[4]);
        }
        break;
      case 5:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_30 = *(float *)(iVar2 + 8);
          local_2c = *(float *)(iVar2 + 0xc);
          local_28 = *(float *)(iVar2 + 0x10);
          if (local_30 < -990.0 != (local_30 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_30 = (float)(fVar4 * (float10)fVar1);
          }
          fVar1 = DAT_0069d6f8;
          if (local_2c < -990.0 != (local_2c == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_2c = (float)(fVar4 * (float10)fVar1);
          }
          if (local_28 < -990.0 != (local_28 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_28 = (float)(fVar4 * (float10)800.0);
          }
          FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),&local_30,0xffffffff,
                       0xffffffff,0xffffffff);
        }
        break;
      case 6:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_34 = (float *)(iVar2 + 8);
          local_40 = *local_34;
          local_3c = *(float *)(iVar2 + 0xc);
          local_38 = *(float *)(iVar2 + 0x10);
          if (*local_34 < -990.0 != (*local_34 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_40 = (float)(fVar4 * (float10)fVar1);
          }
          fVar1 = DAT_0069d6f8;
          if (local_34[1] < -990.0 != (local_34[1] == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_3c = (float)(fVar4 * (float10)fVar1);
          }
          if (local_34[2] < -990.0 != (local_34[2] == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_38 = (float)(fVar4 * (float10)800.0);
          }
          local_8 = FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),&local_40,
                                 *(undefined2 *)(local_34 + 3),*(undefined2 *)((int)local_34 + 0xe),
                                 local_34[4]);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 7:
        if (DAT_0069bc50 == '\0') {
          iVar2 = *(int *)(in_ECX + 0xee5dc);
          local_4c = *(float *)(iVar2 + 8);
          local_48 = *(float *)(iVar2 + 0xc);
          local_44 = *(float *)(iVar2 + 0x10);
          if (local_4c < -990.0 != (local_4c == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_4c = (float)(fVar4 * (float10)fVar1);
          }
          fVar1 = DAT_0069d6f8;
          if (local_48 < -990.0 != (local_48 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_48 = (float)(fVar4 * (float10)fVar1);
          }
          if (local_44 < -990.0 != (local_44 == -990.0)) {
            fVar4 = (float10)FUN_0041e820();
            local_44 = (float)(fVar4 * (float10)800.0);
          }
          local_8 = FUN_00411390((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2),&local_4c,
                                 0xffffffff,0xffffffff,0xffffffff);
          *(byte *)(local_8 + 0xe50) = *(byte *)(local_8 + 0xe50) | 0x40;
        }
        break;
      case 8:
        if (((_DAT_0069bcb0 == 0) && (DAT_0069d6d4 == 5)) &&
           (*(short *)(*(int *)(in_ECX + 0xee5dc) + 2) == 1)) {
          FUN_00418768((uint)DAT_0069d4bd * 10 + 3);
        }
        else {
          FUN_00418768((int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 2) + (uint)DAT_0069d4bd * 10);
        }
        break;
      case 9:
        iVar2 = FUN_00419572();
        if (iVar2 != 0) {
          FUN_004241e5(1);
          return;
        }
        break;
      case 10:
        *(undefined4 *)
         (*(int *)(in_ECX + 0xee598 + *(int *)(*(int *)(in_ECX + 0xee5dc) + 8) * 4) + 0xc68) =
             *(undefined4 *)(*(int *)(in_ECX + 0xee5dc) + 0xc);
        break;
      case 0xb:
        _DAT_0069d4b0 = *(undefined2 *)(*(int *)(in_ECX + 0xee5dc) + 2);
        break;
      case 0xc:
        if ((*(int *)(in_ECX + 0xee598 + *(short *)(*(int *)(in_ECX + 0xee5dc) + 2) * 4) != 0) &&
           (*(char *)(*(int *)(in_ECX + 0xee598 + *(short *)(*(int *)(in_ECX + 0xee5dc) + 2) * 4) +
                     0xe50) < '\0')) {
          FUN_004241e5(1);
          return;
        }
      }
    }
    else if (*(int *)(in_ECX + 0xee5e8) < (int)**(short **)(in_ECX + 0xee5dc)) break;
    *(int *)(in_ECX + 0xee5dc) =
         (int)*(short *)(*(int *)(in_ECX + 0xee5dc) + 6) + *(int *)(in_ECX + 0xee5dc);
  }
  iVar2 = FUN_004195a2();
  if (iVar2 == 0) {
    DAT_0069d70c = DAT_0069d70c + 1;
  }
  return;
}


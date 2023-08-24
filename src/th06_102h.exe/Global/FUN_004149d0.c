
undefined4 FUN_004149d0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  int local_260;
  float local_38;
  undefined4 local_34;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  local_24 = (undefined4 *)(param_1 + 0x5600);
  if (DAT_0069bccc == '\0') {
    FUN_0041f4a0();
    *(undefined4 *)(param_1 + 0xf5c04) = 0;
    for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
      if (*(short *)((int)local_24 + 0x5be) == 0) goto LAB_00414a1a;
      *(int *)(param_1 + 0xf5c04) = *(int *)(param_1 + 0xf5c04) + 1;
      switch(*(undefined2 *)((int)local_24 + 0x5be)) {
      case 1:
        goto switchD_00414a97_caseD_1;
      case 2:
        fVar2 = (float)local_24[0x15d] * 0.5 * DAT_006c6ec0;
        fVar3 = (float)local_24[0x15c] * 0.5 * DAT_006c6ec0;
        local_24[0x158] = (float)local_24[0x15b] * 0.5 * DAT_006c6ec0 + (float)local_24[0x158];
        local_24[0x159] = fVar3 + (float)local_24[0x159];
        local_24[0x15a] = fVar2 + (float)local_24[0x15a];
        iVar4 = FUN_00433960();
        break;
      case 3:
        fVar2 = (float)local_24[0x15d] * 0.4 * DAT_006c6ec0;
        fVar3 = (float)local_24[0x15c] * 0.4 * DAT_006c6ec0;
        local_24[0x158] = (float)local_24[0x15b] * 0.4 * DAT_006c6ec0 + (float)local_24[0x158];
        local_24[0x159] = fVar3 + (float)local_24[0x159];
        local_24[0x15a] = fVar2 + (float)local_24[0x15a];
        iVar4 = FUN_00433960();
        break;
      case 4:
        fVar2 = (float)local_24[0x15d] * 0.3333333 * DAT_006c6ec0;
        fVar3 = (float)local_24[0x15c] * 0.3333333 * DAT_006c6ec0;
        local_24[0x158] = (float)local_24[0x15b] * 0.3333333 * DAT_006c6ec0 + (float)local_24[0x158]
        ;
        local_24[0x159] = fVar3 + (float)local_24[0x159];
        local_24[0x15a] = fVar2 + (float)local_24[0x15a];
        iVar4 = FUN_00433960();
        break;
      case 5:
        fVar2 = (float)local_24[0x15d] * 0.5 * DAT_006c6ec0;
        fVar3 = (float)local_24[0x15c] * 0.5 * DAT_006c6ec0;
        local_24[0x158] = (float)local_24[0x15b] * 0.5 * DAT_006c6ec0 + (float)local_24[0x158];
        local_24[0x159] = fVar3 + (float)local_24[0x159];
        local_24[0x15a] = fVar2 + (float)local_24[0x15a];
        iVar4 = FUN_00433960();
        if (iVar4 != 0) {
          puVar5 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          goto LAB_00414a1a;
        }
      default:
        goto switchD_00414a97_caseD_5;
      }
      if (iVar4 == 0) {
switchD_00414a97_caseD_5:
        local_24[0x167] = local_24[0x169];
        FUN_00424285(local_24 + 0x169,local_24 + 0x168);
      }
      else {
        *(undefined2 *)((int)local_24 + 0x5be) = 1;
        local_24[0x169] = 0;
        local_24[0x168] = 0;
        local_24[0x167] = 0xfffffc19;
switchD_00414a97_caseD_1:
        if (*(short *)(local_24 + 0x16e) != 0) {
          if ((*(ushort *)(local_24 + 0x16e) & 1) == 0) {
            if ((*(ushort *)(local_24 + 0x16e) & 0x10) == 0) {
              if ((*(ushort *)(local_24 + 0x16e) & 0x20) != 0) {
                if ((int)local_24[0x169] < (int)local_24[0x16a]) {
                  fVar7 = (float10)FUN_0041e850(local_24[0x164]);
                  local_24[0x164] = (float)fVar7;
                  local_24[0x161] = DAT_006c6ec0 * (float)local_24[0x162] + (float)local_24[0x161];
                  fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
                  fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
                  local_24[0x15b] = (float)(fVar7 * (float10)(float)local_24[0x161]);
                  local_24[0x15c] = (float)(fVar6 * (float10)(float)local_24[0x161]);
                }
                else {
                  *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xffdf;
                }
              }
            }
            else if ((int)local_24[0x169] < (int)local_24[0x16a]) {
              fVar2 = DAT_006c6ec0 * (float)local_24[0x160];
              fVar3 = DAT_006c6ec0 * (float)local_24[0x15f];
              local_24[0x15b] = DAT_006c6ec0 * (float)local_24[0x15e] + (float)local_24[0x15b];
              local_24[0x15c] = fVar3 + (float)local_24[0x15c];
              local_24[0x15d] = fVar2 + (float)local_24[0x15d];
              fVar7 = (float10)FUN_0045be40((double)(float)local_24[0x15c],
                                            (double)(float)local_24[0x15b]);
              local_24[0x164] = (float)fVar7;
            }
            else {
              *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xffef;
            }
          }
          else if ((int)local_24[0x169] < 0x11) {
            local_10 = 5.0 - (((float)local_24[0x169] + (float)local_24[0x168]) * 5.0) / 16.0;
            fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
            fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
            local_24[0x15b] = (float)(fVar7 * (float10)(local_10 + (float)local_24[0x161]));
            local_24[0x15c] = (float)(fVar6 * (float10)(local_10 + (float)local_24[0x161]));
          }
          else {
            *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) ^ 1;
          }
          if ((*(ushort *)(local_24 + 0x16e) & 0x40) == 0) {
            if ((*(ushort *)(local_24 + 0x16e) & 0x100) == 0) {
              if ((*(ushort *)(local_24 + 0x16e) & 0x80) == 0) {
                if ((*(ushort *)(local_24 + 0x16e) & 0x400) == 0) {
                  if (((*(ushort *)(local_24 + 0x16e) & 0x800) != 0) &&
                     (iVar4 = FUN_0041b5e1(local_24[0x158],local_24[0x159],
                                           *(undefined4 *)(local_24[0x30] + 0x30),
                                           *(undefined4 *)(local_24[0x30] + 0x2c)), iVar4 == 0)) {
                    if (((float)local_24[0x158] < 0.0 != NAN((float)local_24[0x158])) ||
                       (384.0 <= (float)local_24[0x158])) {
                      local_24[0x164] = -(float)local_24[0x164] - 3.141593;
                      fVar7 = (float10)FUN_0041e850(local_24[0x164]);
                      local_24[0x164] = (float)fVar7;
                    }
                    if ((float)local_24[0x159] < 0.0 != NAN((float)local_24[0x159])) {
                      local_24[0x164] = -(float)local_24[0x164];
                    }
                    local_24[0x161] = local_24[0x163];
                    local_10 = (float)local_24[0x161];
                    fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
                    fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
                    local_24[0x15b] = (float)(fVar7 * (float10)local_10);
                    local_24[0x15c] = (float)(fVar6 * (float10)local_10);
                    local_24[0x16c] = local_24[0x16c] + 1;
                    if ((int)local_24[0x16d] <= (int)local_24[0x16c]) {
                      *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar4 = FUN_0041b5e1(local_24[0x158],local_24[0x159],
                                       *(undefined4 *)(local_24[0x30] + 0x30),
                                       *(undefined4 *)(local_24[0x30] + 0x2c));
                  if (iVar4 == 0) {
                    if (((float)local_24[0x158] < 0.0 != NAN((float)local_24[0x158])) ||
                       (384.0 <= (float)local_24[0x158])) {
                      local_24[0x164] = -(float)local_24[0x164] - 3.141593;
                      fVar7 = (float10)FUN_0041e850(local_24[0x164]);
                      local_24[0x164] = (float)fVar7;
                    }
                    if (((float)local_24[0x159] < 0.0 != NAN((float)local_24[0x159])) ||
                       (448.0 <= (float)local_24[0x159])) {
                      local_24[0x164] = -(float)local_24[0x164];
                    }
                    local_24[0x161] = local_24[0x163];
                    local_10 = (float)local_24[0x161];
                    fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
                    fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
                    local_24[0x15b] = (float)(fVar7 * (float10)local_10);
                    local_24[0x15c] = (float)(fVar6 * (float10)local_10);
                    local_24[0x16c] = local_24[0x16c] + 1;
                    if ((int)local_24[0x16d] <= (int)local_24[0x16c]) {
                      *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((int)local_24[0x169] < local_24[0x16b] * (local_24[0x16c] + 1)) {
                  local_10 = (float)local_24[0x161] -
                             ((((float)local_24[0x169] + (float)local_24[0x168]) -
                              (float)(local_24[0x16b] * local_24[0x16c])) * (float)local_24[0x161])
                             / (float)local_24[0x16b];
                }
                else {
                  local_24[0x16c] = local_24[0x16c] + 1;
                  if ((int)local_24[0x16d] <= (int)local_24[0x16c]) {
                    *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xff7f;
                  }
                  fVar7 = (float10)FUN_00428700();
                  local_24[0x164] = (float)(fVar7 + (float10)(float)local_24[0x166]);
                  local_24[0x161] = local_24[0x163];
                  local_10 = (float)local_24[0x161];
                }
                fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
                fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
                local_24[0x15b] = (float)(fVar7 * (float10)local_10);
                local_24[0x15c] = (float)(fVar6 * (float10)local_10);
              }
            }
            else {
              if ((int)local_24[0x169] < local_24[0x16b] * (local_24[0x16c] + 1)) {
                local_10 = (float)local_24[0x161] -
                           ((((float)local_24[0x169] + (float)local_24[0x168]) -
                            (float)(local_24[0x16b] * local_24[0x16c])) * (float)local_24[0x161]) /
                           (float)local_24[0x16b];
              }
              else {
                local_24[0x16c] = local_24[0x16c] + 1;
                if ((int)local_24[0x16d] <= (int)local_24[0x16c]) {
                  *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xfeff;
                }
                local_24[0x164] = local_24[0x166];
                local_24[0x161] = local_24[0x163];
                local_10 = (float)local_24[0x161];
              }
              fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
              fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
              local_24[0x15b] = (float)(fVar7 * (float10)local_10);
              local_24[0x15c] = (float)(fVar6 * (float10)local_10);
            }
          }
          else {
            if ((int)local_24[0x169] < local_24[0x16b] * (local_24[0x16c] + 1)) {
              local_10 = (float)local_24[0x161] -
                         ((((float)local_24[0x169] + (float)local_24[0x168]) -
                          (float)(local_24[0x16b] * local_24[0x16c])) * (float)local_24[0x161]) /
                         (float)local_24[0x16b];
            }
            else {
              local_24[0x16c] = local_24[0x16c] + 1;
              if ((int)local_24[0x16d] <= (int)local_24[0x16c]) {
                *(ushort *)(local_24 + 0x16e) = *(ushort *)(local_24 + 0x16e) & 0xffbf;
              }
              local_24[0x164] = (float)local_24[0x164] + (float)local_24[0x166];
              local_24[0x161] = local_24[0x163];
              local_10 = (float)local_24[0x161];
            }
            fVar7 = (float10)fcos((float10)(float)local_24[0x164]);
            fVar6 = (float10)fsin((float10)(float)local_24[0x164]);
            local_24[0x15b] = (float)(fVar7 * (float10)local_10);
            local_24[0x15c] = (float)(fVar6 * (float10)local_10);
          }
        }
        fVar2 = DAT_006c6ec0 * (float)local_24[0x15d];
        fVar3 = DAT_006c6ec0 * (float)local_24[0x15c];
        local_24[0x158] = DAT_006c6ec0 * (float)local_24[0x15b] + (float)local_24[0x158];
        local_24[0x159] = fVar3 + (float)local_24[0x159];
        local_24[0x15a] = fVar2 + (float)local_24[0x15a];
        iVar4 = FUN_0041b5e1(local_24[0x158],local_24[0x159],*(undefined4 *)(local_24[0x30] + 0x30),
                             *(undefined4 *)(local_24[0x30] + 0x2c));
        if (iVar4 != 0) {
          *(undefined2 *)(local_24 + 0x170) = 0;
LAB_00415b6c:
          if (*(char *)((int)local_24 + 0x5c3) == '\0') {
            local_8 = FUN_00426df0(local_24 + 0x158,local_24 + 0x154);
            if (local_8 == 1) {
              *(undefined *)((int)local_24 + 0x5c3) = 1;
LAB_00415be8:
              local_8 = FUN_00426c40(local_24 + 0x158,local_24 + 0x154);
              if ((local_8 != 0) && (*(undefined2 *)((int)local_24 + 0x5be) = 5, local_8 == 2)) {
                FUN_0041f290();
              }
            }
            else if (local_8 == 2) {
              *(undefined2 *)((int)local_24 + 0x5be) = 5;
              FUN_0041f290();
            }
          }
          else if (*(char *)((int)local_24 + 0x5c3) == '\x01') goto LAB_00415be8;
          FUN_00433960();
          goto switchD_00414a97_caseD_5;
        }
        if ((((((*(ushort *)(local_24 + 0x16e) & 0x40) == 0) &&
              ((*(ushort *)(local_24 + 0x16e) & 0x100) == 0)) &&
             ((*(ushort *)(local_24 + 0x16e) & 0x80) == 0)) &&
            (((*(ushort *)(local_24 + 0x16e) & 0x400) == 0 &&
             ((*(ushort *)(local_24 + 0x16e) & 0x800) == 0)))) &&
           (*(short *)(local_24 + 0x170) == 0)) {
          puVar5 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
        }
        else {
          *(short *)(local_24 + 0x170) = *(short *)(local_24 + 0x170) + 1;
          if (*(ushort *)(local_24 + 0x170) < 0x100) goto LAB_00415b6c;
          puVar5 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
        }
      }
LAB_00414a1a:
      local_24 = local_24 + 0x171;
    }
    local_2c = param_1 + 0xec000;
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (*(int *)(local_2c + 600) != 0) {
        *(float *)(local_2c + 0x234) =
             DAT_006c6ec0 * *(float *)(local_2c + 0x240) + *(float *)(local_2c + 0x234);
        if (*(float *)(local_2c + 0x238) <
            *(float *)(local_2c + 0x234) - *(float *)(local_2c + 0x230)) {
          *(float *)(local_2c + 0x230) = *(float *)(local_2c + 0x234) - *(float *)(local_2c + 0x238)
          ;
        }
        if (*(float *)(local_2c + 0x230) < 0.0 != NAN(*(float *)(local_2c + 0x230))) {
          *(undefined4 *)(local_2c + 0x230) = 0;
        }
        local_1c = *(float *)(local_2c + 0x23c) / 2.0;
        local_20 = *(float *)(local_2c + 0x234) - *(float *)(local_2c + 0x230);
        local_38 = (*(float *)(local_2c + 0x234) - *(float *)(local_2c + 0x230)) / 2.0 +
                   *(float *)(local_2c + 0x230) + *(float *)(local_2c + 0x220);
        local_34 = *(undefined4 *)(local_2c + 0x224);
        *(float *)(local_2c + 0x1c) =
             *(float *)(local_2c + 0x23c) / *(float *)(*(int *)(local_2c + 0xc0) + 0x30);
        local_14 = *(float *)(local_2c + 0x234) - *(float *)(local_2c + 0x230);
        *(float *)(local_2c + 0x18) = local_14 / *(float *)(*(int *)(local_2c + 0xc0) + 0x2c);
        *(float *)(local_2c + 8) = 1.570796 - *(float *)(local_2c + 0x22c);
        cVar1 = *(char *)(local_2c + 0x26c);
        if (cVar1 == '\0') {
          if ((*(ushort *)(local_2c + 0x268) & 1) == 0) {
            if (*(int *)(local_2c + 0x244) < 0x1f) {
              local_260 = *(int *)(local_2c + 0x244);
            }
            else {
              local_260 = 0x1e;
            }
            if (*(int *)(local_2c + 0x244) - local_260 < *(int *)(local_2c + 0x264)) {
              local_14 = (((float)*(int *)(local_2c + 0x264) + *(float *)(local_2c + 0x260)) *
                         *(float *)(local_2c + 0x23c)) / (float)*(int *)(local_2c + 0x244);
            }
            else {
              local_14 = 1.2;
            }
            *(float *)(local_2c + 0x1c) = local_14 / 16.0;
            local_20 = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((double)((((float)*(int *)(local_2c + 0x264) +
                                         *(float *)(local_2c + 0x260)) * 255.0) /
                                       (float)*(int *)(local_2c + 0x244)));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            *(int *)(local_2c + 0x7c) = local_28 << 0x18;
          }
          if (*(int *)(local_2c + 0x248) <= *(int *)(local_2c + 0x264)) {
            FUN_00427190(&local_38,&local_20,local_2c + 0x220,*(undefined4 *)(local_2c + 0x22c),
                         *(int *)(local_2c + 0x264) % 0xc == 0);
          }
          if (*(int *)(local_2c + 0x244) <= *(int *)(local_2c + 0x264)) {
            *(undefined4 *)(local_2c + 0x264) = 0;
            *(undefined4 *)(local_2c + 0x260) = 0;
            *(undefined4 *)(local_2c + 0x25c) = 0xfffffc19;
            *(char *)(local_2c + 0x26c) = *(char *)(local_2c + 0x26c) + '\x01';
            goto LAB_004161bf;
          }
        }
        else {
          if (cVar1 == '\x01') {
LAB_004161bf:
            FUN_00427190(&local_38,&local_20,local_2c + 0x220,*(undefined4 *)(local_2c + 0x22c),
                         *(int *)(local_2c + 0x264) % 0xc == 0);
            if (*(int *)(local_2c + 0x264) < *(int *)(local_2c + 0x24c)) goto LAB_00416422;
            *(undefined4 *)(local_2c + 0x264) = 0;
            *(undefined4 *)(local_2c + 0x260) = 0;
            *(undefined4 *)(local_2c + 0x25c) = 0xfffffc19;
            *(char *)(local_2c + 0x26c) = *(char *)(local_2c + 0x26c) + '\x01';
            if (*(int *)(local_2c + 0x250) == 0) {
              *(undefined4 *)(local_2c + 600) = 0;
              goto LAB_00415e08;
            }
          }
          else if (cVar1 != '\x02') goto LAB_00416422;
          if ((*(ushort *)(local_2c + 0x268) & 1) == 0) {
            if (0 < *(int *)(local_2c + 0x250)) {
              local_14 = *(float *)(local_2c + 0x23c) -
                         (((float)*(int *)(local_2c + 0x264) + *(float *)(local_2c + 0x260)) *
                         *(float *)(local_2c + 0x23c)) / (float)*(int *)(local_2c + 0x250);
              *(float *)(local_2c + 0x1c) = local_14 / 16.0;
              local_20 = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((double)((((float)*(int *)(local_2c + 0x264) +
                                         *(float *)(local_2c + 0x260)) * 255.0) /
                                       (float)*(int *)(local_2c + 0x244)));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            *(int *)(local_2c + 0x7c) = local_28 << 0x18;
          }
          if (*(int *)(local_2c + 0x264) < *(int *)(local_2c + 0x254)) {
            FUN_00427190(&local_38,&local_20,local_2c + 0x220,*(undefined4 *)(local_2c + 0x22c),
                         *(int *)(local_2c + 0x264) % 0xc == 0);
          }
          if (*(int *)(local_2c + 0x250) <= *(int *)(local_2c + 0x264)) {
            *(undefined4 *)(local_2c + 600) = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= *(float *)(local_2c + 0x230)) {
          *(undefined4 *)(local_2c + 600) = 0;
        }
        *(undefined4 *)(local_2c + 0x25c) = *(undefined4 *)(local_2c + 0x264);
        FUN_00424285(local_2c + 0x264,local_2c + 0x260);
        FUN_00433960();
      }
LAB_00415e08:
      local_2c = local_2c + 0x270;
    }
    *(undefined4 *)(param_1 + 0xf5c08) = *(undefined4 *)(param_1 + 0xf5c10);
    FUN_00424285(param_1 + 0xf5c10,param_1 + 0xf5c0c);
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int FUN_004264b0(float *param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int local_d4;
  undefined2 local_80;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_c;
  int local_8;
  
  local_34 = 0;
  local_30 = *param_1 - *param_2 / 2.0;
  local_2c = param_1[1] - param_2[1] / 2.0;
  local_18 = *param_2 / 2.0 + *param_1;
  local_14 = param_2[1] / 2.0 + param_1[1];
  local_8 = in_ECX + 0xa28;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((*(short *)(local_8 + 0x14e) != 0) &&
       ((*(short *)(local_8 + 0x14e) == 1 || (*(short *)(local_8 + 0x150) == 2)))) {
      local_40 = *(float *)(local_8 + 0x110) - *(float *)(local_8 + 0x11c) / 2.0;
      local_3c = *(float *)(local_8 + 0x114) - *(float *)(local_8 + 0x120) / 2.0;
      local_24 = *(float *)(local_8 + 0x11c) / 2.0 + *(float *)(local_8 + 0x110);
      local_20 = *(float *)(local_8 + 0x120) / 2.0 + *(float *)(local_8 + 0x114);
      if ((local_3c <= local_14) &&
         (((local_40 <= local_18 && (local_20 < local_2c == (NAN(local_20) || NAN(local_2c)))) &&
          (local_24 < local_30 == (NAN(local_24) || NAN(local_30)))))) {
        if (*(int *)(in_ECX + 0x75c8) == 0) {
          local_d4 = (int)*(short *)(local_8 + 0x14c);
        }
        else if ((int)*(short *)(local_8 + 0x14c) / 3 == 0) {
          local_d4 = 1;
        }
        else {
          local_d4 = (int)*(short *)(local_8 + 0x14c) / 3;
        }
        local_34 = local_34 + local_d4;
        if (*(short *)(local_8 + 0x150) == 2) {
          *(short *)(local_8 + 0x14c) =
               (short)((int)((int)*(short *)(local_8 + 0x14c) +
                            ((int)*(short *)(local_8 + 0x14c) >> 0x1f & 3U)) >> 2);
          if (*(short *)(local_8 + 0x14c) == 0) {
            *(undefined2 *)(local_8 + 0x14c) = 1;
          }
          switch(*(undefined2 *)(local_8 + 0xb4)) {
          case 0x441:
            *(undefined4 *)(local_8 + 0x11c) = 0x42000000;
            *(undefined4 *)(local_8 + 0x120) = 0x42000000;
            break;
          case 0x442:
            *(undefined4 *)(local_8 + 0x11c) = 0x42280000;
            *(undefined4 *)(local_8 + 0x120) = 0x42280000;
            break;
          case 0x443:
            *(undefined4 *)(local_8 + 0x11c) = 0x42400000;
            *(undefined4 *)(local_8 + 0x120) = 0x42400000;
            break;
          case 0x444:
            *(undefined4 *)(local_8 + 0x11c) = 0x42400000;
            *(undefined4 *)(local_8 + 0x120) = 0x42400000;
          }
          if (*(int *)(local_8 + 0x148) % 6 == 0) {
            FUN_0040ef50(5,local_8 + 0x110,1,0xffffffff);
          }
        }
        iVar4 = DAT_006d4588;
        if (*(short *)(local_8 + 0x150) == 3) {
          *(char *)(in_ECX + 0x9e4) = *(char *)(in_ECX + 0x9e4) + '\x01';
          if ((*(byte *)(in_ECX + 0x9e4) & 7) == 0) {
            local_3c = param_1[1];
            local_38 = param_1[2];
            local_40 = *(float *)(local_8 + 0x110);
            FUN_0040ef50(5,&local_40,1,0xffffffff);
          }
        }
        else {
          if (*(short *)(local_8 + 0x14e) == 1) {
            iVar5 = *(short *)(local_8 + 0xb4) + 0x20;
            local_80 = (undefined2)iVar5;
            *(undefined2 *)(local_8 + 0xb4) = local_80;
            FUN_00432430(local_8,*(undefined4 *)(iVar4 + 0x1c934 + iVar5 * 4));
            FUN_0040ef50(5,local_8 + 0x110,1,0xffffffff);
            *(undefined4 *)(local_8 + 0x118) = 0x3dcccccd;
          }
          *(undefined2 *)(local_8 + 0x14e) = 2;
          *(float *)(local_8 + 0x128) = *(float *)(local_8 + 0x128) / 8.0;
          *(float *)(local_8 + 300) = *(float *)(local_8 + 300) / 8.0;
        }
      }
    }
    local_8 = local_8 + 0x158;
  }
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    fVar3 = *(float *)(in_ECX + 0x638 + local_c * 0xc);
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfVar1 = (float *)(in_ECX + 0x638 + local_c * 0xc);
      pfVar2 = (float *)(in_ECX + 0x4b8 + local_c * 0xc);
      local_38 = pfVar2[2] - pfVar1[2] * 0.5;
      local_3c = pfVar2[1] - pfVar1[1] * 0.5;
      local_40 = *pfVar2 - *pfVar1 * 0.5;
      pfVar1 = (float *)(in_ECX + 0x638 + local_c * 0xc);
      pfVar2 = (float *)(in_ECX + 0x4b8 + local_c * 0xc);
      local_1c = pfVar1[2] * 0.5 + pfVar2[2];
      local_20 = pfVar1[1] * 0.5 + pfVar2[1];
      local_24 = *pfVar1 * 0.5 + *pfVar2;
      if (((local_40 <= local_18) && (local_24 < local_30 == (NAN(local_24) || NAN(local_30)))) &&
         ((local_3c <= local_14 && (local_20 < local_2c == (NAN(local_20) || NAN(local_2c)))))) {
        local_34 = local_34 + *(int *)(in_ECX + 0x7b8 + local_c * 4);
        *(int *)(in_ECX + 0x838 + local_c * 4) =
             *(int *)(in_ECX + 0x838 + local_c * 4) + *(int *)(in_ECX + 0x7b8 + local_c * 4);
        *(char *)(in_ECX + 0x9e4) = *(char *)(in_ECX + 0x9e4) + '\x01';
        if ((*(byte *)(in_ECX + 0x9e4) & 3) == 0) {
          FUN_0040ef50(3,param_1,1,0xffffffff);
        }
        if ((*(int *)(in_ECX + 0x75c8) != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004123e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_28;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00411530(param_1);
  local_28 = param_1 + 0xed0;
  *(undefined4 *)(param_1 + 0xee5bc) = 0;
  local_10 = 0;
  do {
    if (0xff < (int)local_10) {
      *(undefined4 *)(param_1 + 0xee5e0) = *(undefined4 *)(param_1 + 0xee5e8);
      FUN_00424285(&g_GameContext,(int *)(param_1 + 0xee5e8),(float *)(param_1 + 0xee5e4));
      return 1;
    }
    if (-1 < *(char *)(local_28 + 0xe50)) goto LAB_00412416;
    *(int *)(param_1 + 0xee5bc) = *(int *)(param_1 + 0xee5bc) + 1;
    FUN_00413380();
    FUN_00412240();
    if (((*(byte *)(local_28 + 0xe51) >> 2 & 1) == 0) &&
       (iVar1 = FUN_0041b5e1(*(undefined4 *)(local_28 + 0xc6c),*(undefined4 *)(local_28 + 0xc70),
                             *(undefined4 *)(*(int *)(local_28 + 0xc0) + 0x30),
                             *(undefined4 *)(*(int *)(local_28 + 0xc0) + 0x2c)), iVar1 != 0)) {
      *(byte *)(local_28 + 0xe51) = *(byte *)(local_28 + 0xe51) | 4;
    }
    if (((*(byte *)(local_28 + 0xe51) >> 2 & 1) == 1) &&
       (iVar1 = FUN_0041b5e1(*(undefined4 *)(local_28 + 0xc6c),*(undefined4 *)(local_28 + 0xc70),
                             *(undefined4 *)(*(int *)(local_28 + 0xc0) + 0x30),
                             *(undefined4 *)(*(int *)(local_28 + 0xc0) + 0x2c)), iVar1 == 0)) {
      *(byte *)(local_28 + 0xe50) = *(byte *)(local_28 + 0xe50) & 0x7f;
      FUN_004121b0();
      goto LAB_00412416;
    }
    if (-1 < *(int *)(local_28 + 0xea8)) {
      FUN_00411da0();
    }
    if (-1 < *(int *)(local_28 + 0xeb0)) {
      FUN_00411f40();
    }
    iVar1 = FUN_004074a0(local_28);
    if (iVar1 == -1) {
      *(byte *)(local_28 + 0xe50) = *(byte *)(local_28 + 0xe50) & 0x7f;
      FUN_004121b0();
      goto LAB_00412416;
    }
    FUN_00412240();
    *(undefined4 *)(local_28 + 0x7c) = *(undefined4 *)(local_28 + 0xcfc);
    FUN_00433960(local_28);
    *(undefined4 *)(local_28 + 0xcfc) = *(undefined4 *)(local_28 + 0x7c);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < *(short *)(local_28 + 0x1c4 + local_20 * 0x110)) &&
         (iVar1 = FUN_00433960(local_28 + 0x110 + local_20 * 0x110), iVar1 != 0)) {
        *(undefined2 *)(local_28 + 0x1c4 + local_20 * 0x110) = 0xffff;
      }
    }
    local_8 = 0;
    if (((*(byte *)(local_28 + 0xe51) >> 2 & 1) == 0) ||
       ((*(byte *)(local_28 + 0xe52) >> 3 & 1) != 0)) goto LAB_00412dbc;
    iVar1 = *(int *)(local_28 + 0xce4);
    if (((*(byte *)(local_28 + 0xe51) >> 1 & 1) != 0) && ((*(byte *)(local_28 + 0xe51) & 1) != 0)) {
      local_14 = *(float *)(local_28 + 0xc80) * 0.6666667;
      local_18 = *(float *)(local_28 + 0xc7c) * 0.6666667;
      local_1c = *(float *)(local_28 + 0xc78) * 0.6666667;
      iVar2 = FUN_00426c40(local_28 + 0xc6c,&local_1c);
      if (((iVar2 == 1) && ((*(byte *)(local_28 + 0xe51) & 1) != 0)) &&
         ((*(byte *)(local_28 + 0xe51) >> 3 & 1) == 0)) {
        *(int *)(local_28 + 0xce4) = *(int *)(local_28 + 0xce4) + -10;
      }
    }
    if ((*(byte *)(local_28 + 0xe51) & 1) != 0) {
      local_c = FUN_004264b0(local_28 + 0xc6c,local_28 + 0xc78,&local_8);
      if (0x45 < local_c) {
        local_c = 0x46;
      }
      DAT_0069bca4 = (local_c / 5) * 10 + DAT_0069bca4;
      if (*(int *)(param_1 + 0xee5c8) != 0) {
        if (local_8 == 0) {
          if (local_c < 8) {
            if (local_c != 0) {
              local_c = 1;
            }
          }
          else {
            local_c = local_c / 7;
          }
        }
        else if (*(int *)(param_1 + 0xee5d4) == 0) {
          local_c = 0;
        }
        else if (local_c < 4) {
          if (local_c != 0) {
            local_c = 1;
          }
        }
        else {
          local_c = local_c / 3;
        }
      }
      if ((*(byte *)(local_28 + 0xe51) >> 4 & 1) != 0) {
        *(int *)(local_28 + 0xce4) = *(int *)(local_28 + 0xce4) - local_c;
      }
      if (_DAT_006cb048 < *(float *)(local_28 + 0xc70) !=
          (NAN(_DAT_006cb048) || NAN(*(float *)(local_28 + 0xc70)))) {
        _DAT_006cb044 = *(undefined4 *)(local_28 + 0xc6c);
        _DAT_006cb048 = *(float *)(local_28 + 0xc70);
        _DAT_006cb04c = *(undefined4 *)(local_28 + 0xc74);
      }
    }
    if ((0 < *(int *)(local_28 + 0xce4)) || ((*(byte *)(local_28 + 0xe51) & 1) == 0))
    goto LAB_00412ce2;
    *(undefined4 *)(local_28 + 0xea8) = 0xffffffff;
    *(undefined4 *)(local_28 + 0xeb0) = 0xffffffff;
    switch(*(byte *)(local_28 + 0xe51) >> 5) {
    case 0:
      DAT_0069bca4 = DAT_0069bca4 + *(int *)(local_28 + 0xcec);
      *(byte *)(local_28 + 0xe50) = *(byte *)(local_28 + 0xe50) & 0x7f;
      goto LAB_00412a4d;
    case 1:
      DAT_0069bca4 = DAT_0069bca4 + *(int *)(local_28 + 0xcec);
      *(byte *)(local_28 + 0xe51) = *(byte *)(local_28 + 0xe51) & 0xfe;
LAB_00412a4d:
      if ((*(byte *)(local_28 + 0xe51) >> 3 & 1) != 0) {
        DAT_0069bc50 = 0;
        FUN_004114c0(local_28);
      }
switchD_00412938_caseD_2:
      if (*(char *)(local_28 + 0xe3f) < '\0') {
        if (*(char *)(local_28 + 0xe3f) == -1) {
          if ((uint)*(ushort *)(param_1 + 0xee5b8) % 3 == 0) {
            FUN_0040ef50(*(byte *)(local_28 + 0xe3d) + 4,local_28 + 0xc6c,6,0xffffffff);
            FUN_0041f290(local_28 + 0xc6c,(&DAT_00476338)[*(ushort *)(param_1 + 0xee5ba)],local_8);
            *(short *)(param_1 + 0xee5ba) = *(short *)(param_1 + 0xee5ba) + 1;
            if (0x1f < *(ushort *)(param_1 + 0xee5ba)) {
              *(undefined2 *)(param_1 + 0xee5ba) = 0;
            }
          }
          *(short *)(param_1 + 0xee5b8) = *(short *)(param_1 + 0xee5b8) + 1;
        }
      }
      else {
        FUN_0040ef50(*(byte *)(local_28 + 0xe3d) + 4,local_28 + 0xc6c,3,0xffffffff);
        FUN_0041f290(local_28 + 0xc6c,(int)*(char *)(local_28 + 0xe3f),local_8);
      }
      if (((*(byte *)(local_28 + 0xe51) >> 3 & 1) != 0) && (DAT_005a5f90 == 0)) {
        FUN_00414360(0x3200,0);
      }
      *(undefined4 *)(local_28 + 0xce4) = 0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      *(undefined4 *)(local_28 + 0xce4) = 1;
      *(byte *)(local_28 + 0xe51) = *(byte *)(local_28 + 0xe51) & 0xef;
      *(byte *)(local_28 + 0xe51) = *(byte *)(local_28 + 0xe51) & 0x1f;
      DAT_0069bc50 = 0;
      FUN_0040ef50(*(undefined *)(local_28 + 0xe3c),local_28 + 0xc6c,1,0xffffffff);
      FUN_0040ef50(*(undefined *)(local_28 + 0xe3c),local_28 + 0xc6c,1,0xffffffff);
      FUN_0040ef50(*(undefined *)(local_28 + 0xe3c),local_28 + 0xc6c,1,0xffffffff);
    }
    uVar3 = local_10 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    FUN_004311e0(uVar3 + 2);
    FUN_0040ef50(*(undefined *)(local_28 + 0xe3c),local_28 + 0xc6c,1,0xffffffff);
    FUN_0040ef50(*(byte *)(local_28 + 0xe3d) + 4,local_28 + 0xc6c,4,0xffffffff);
    if (-1 < *(int *)(local_28 + 0xc44)) {
      *(undefined4 *)(local_28 + 0xcd4) = 0xbf000000;
      *(undefined4 *)(local_28 + 0xcd8) = 0x3f000000;
      *(undefined2 *)(local_28 + 0xcdc) = 0;
      *(undefined2 *)(local_28 + 0xcde) = 0;
      *(undefined2 *)(local_28 + 0xce0) = 0;
      *(undefined2 *)(local_28 + 0xce2) = 0;
      *(undefined4 *)(local_28 + 0xc3c) = 0;
      FUN_00407440(local_28 + 0x990,
                   CONCAT22((short)((uint)local_28 >> 0x10),*(undefined2 *)(local_28 + 0xc44)));
      *(undefined4 *)(local_28 + 0xc44) = 0xffffffff;
    }
LAB_00412ce2:
    if (((*(byte *)(local_28 + 0xe51) >> 3 & 1) != 0) && (iVar2 = FUN_004195a2(), iVar2 == 0)) {
      _DAT_0069bc54 = (float)*(int *)(local_28 + 0xce4) / (float)*(int *)(local_28 + 0xce8);
    }
    if (*(char *)(local_28 + 0xe41) == '\0') {
      if (*(int *)(local_28 + 0xce4) < iVar1) {
        FUN_004311e0(0x14);
        *(uint *)(local_28 + 0x80) = *(uint *)(local_28 + 0x80) | 8;
        *(undefined *)(local_28 + 0xe41) = 4;
      }
      else {
        *(uint *)(local_28 + 0x80) = *(uint *)(local_28 + 0x80) & 0xfffffff7;
      }
    }
    else {
      *(char *)(local_28 + 0xe41) = *(char *)(local_28 + 0xe41) + -1;
      *(uint *)(local_28 + 0x80) = *(uint *)(local_28 + 0x80) & 0xfffffff7;
    }
LAB_00412dbc:
    FUN_00412e50(local_28);
    if (DAT_0069bccc == '\0') {
      *(undefined4 *)(local_28 + 0xcf0) = *(undefined4 *)(local_28 + 0xcf8);
      FUN_00424285(&g_GameContext,(int *)(local_28 + 0xcf8),(float *)(local_28 + 0xcf4));
    }
LAB_00412416:
    local_10 = local_10 + 1;
    local_28 = local_28 + 0xec8;
  } while( true );
}


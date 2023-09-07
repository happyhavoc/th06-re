
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  long lVar6;
  int local_24;
  float local_20;
  int *local_c;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (DAT_0069bccc == '\0') {
      do {
        local_c = (int *)(*(int *)(param_1 + 0x28) * 0x14 + *(int *)(param_1 + 0x18));
        switch(*(undefined2 *)(local_c + 1)) {
        case 0:
          if (*local_c == -1) {
            *(int *)(param_1 + 0x2e4) = local_c[2];
            *(int *)(param_1 + 0x2e8) = local_c[3];
            *(int *)(param_1 + 0x2ec) = local_c[4];
            *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2e4);
            *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2e8);
            *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2ec);
          }
          else if (*local_c <= *(int *)(param_1 + 0x24)) {
            iVar1 = local_c[2];
            iVar2 = local_c[3];
            iVar3 = local_c[4];
            *(int *)(param_1 + 0x3c) = iVar1;
            *(int *)(param_1 + 0x40) = iVar2;
            *(int *)(param_1 + 0x44) = iVar3;
            *(int *)(param_1 + 0x2e4) = iVar1;
            *(int *)(param_1 + 0x2e8) = iVar2;
            *(int *)(param_1 + 0x2ec) = iVar3;
            *(int *)(param_1 + 0x2f0) = *local_c;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            do {
              piVar5 = local_c;
              local_c = piVar5 + 5;
            } while (*(short *)(piVar5 + 6) != 0);
            *(int *)(param_1 + 0x2e0) = *local_c;
            *(int *)(param_1 + 0x2d4) = piVar5[7];
            *(int *)(param_1 + 0x2d8) = piVar5[8];
            *(int *)(param_1 + 0x2dc) = piVar5[9];
          }
        default:
switchD_00403892_caseD_6:
          if (*local_c != -1) {
            fVar4 = (((float)*(int *)(param_1 + 0x24) + *(float *)(param_1 + 0x20)) -
                    (float)*(int *)(param_1 + 0x2f0)) /
                    (float)(*(int *)(param_1 + 0x2e0) - *(int *)(param_1 + 0x2f0));
            *(float *)(param_1 + 0x3c) =
                 (*(float *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x2e4)) * fVar4 +
                 *(float *)(param_1 + 0x2e4);
            *(float *)(param_1 + 0x40) =
                 (*(float *)(param_1 + 0x2d8) - *(float *)(param_1 + 0x2e8)) * fVar4 +
                 *(float *)(param_1 + 0x2e8);
            *(float *)(param_1 + 0x44) =
                 (*(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2ec)) * fVar4 +
                 *(float *)(param_1 + 0x2ec);
          }
          if (*(int *)(param_1 + 0x2c4) != 0) {
            if (*(int *)(param_1 + 0x2d0) < *(int *)(param_1 + 0x2c4)) {
              *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2d0);
              FUN_00424285(&g_GameContext,(int *)(param_1 + 0x2d0),(float *)(param_1 + 0x2cc));
            }
            else {
              *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c4);
              *(undefined4 *)(param_1 + 0x2cc) = 0;
              *(undefined4 *)(param_1 + 0x2c8) = 0xfffffc19;
            }
            fVar4 = ((float)*(int *)(param_1 + 0x2d0) + *(float *)(param_1 + 0x2cc)) /
                    (float)*(int *)(param_1 + 0x2c4);
            _DAT_0069d700 =
                 (*(float *)(param_1 + 0x2b8) - *(float *)(param_1 + 0x2ac)) * fVar4 +
                 *(float *)(param_1 + 0x2ac);
            _DAT_0069d704 =
                 (*(float *)(param_1 + 700) - *(float *)(param_1 + 0x2b0)) * fVar4 +
                 *(float *)(param_1 + 0x2b0);
            _DAT_0069d708 =
                 (*(float *)(param_1 + 0x2c0) - *(float *)(param_1 + 0x2b4)) * fVar4 +
                 *(float *)(param_1 + 0x2b4);
          }
          if (*(int *)(param_1 + 0x6c) != 0) {
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x78);
            FUN_00424285(&g_GameContext,(int *)(param_1 + 0x78),(float *)(param_1 + 0x74));
            local_20 = ((float)*(int *)(param_1 + 0x78) + *(float *)(param_1 + 0x74)) /
                       (float)*(int *)(param_1 + 0x6c);
            if (1.0 <= local_20) {
              local_20 = 1.0;
            }
            for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
              lVar6 = __ftol2((double)(((float)(uint)*(byte *)(param_1 + local_24 + 0x68) -
                                       (float)(uint)*(byte *)(param_1 + local_24 + 0x5c)) * local_20
                                      + (float)(uint)*(byte *)(param_1 + local_24 + 0x5c)));
              *(char *)(param_1 + local_24 + 0x50) = (char)lVar6;
            }
            *(float *)(param_1 + 0x48) =
                 (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x54)) * local_20 +
                 *(float *)(param_1 + 0x54);
            *(float *)(param_1 + 0x4c) =
                 (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x58)) * local_20 +
                 *(float *)(param_1 + 0x58);
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGCOLOR,*(DWORD *)(param_1 + 0x50));
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGSTART,*(DWORD *)(param_1 + 0x48));
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGEND,*(DWORD *)(param_1 + 0x4c));
            if (*(int *)(param_1 + 0x6c) <= *(int *)(param_1 + 0x78)) {
              *(undefined4 *)(param_1 + 0x6c) = 0;
            }
          }
          if (*(short *)(local_c + 1) != 5) {
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
            FUN_00424285(&g_GameContext,(int *)(param_1 + 0x24),(float *)(param_1 + 0x20));
          }
          FUN_00404860();
          if (*(int *)(param_1 + 0x80) < 1) {
            return 1;
          }
          if (*(int *)(param_1 + 0x84) == 0x3c) {
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          }
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          FUN_00433960(param_1 + 0x88);
          return 1;
        case 1:
          if (*(int *)(param_1 + 0x24) < *local_c) goto switchD_00403892_caseD_6;
          *(int *)(param_1 + 0x50) = local_c[2];
          *(int *)(param_1 + 0x48) = local_c[3];
          *(int *)(param_1 + 0x4c) = local_c[4];
          if (*(int *)(param_1 + 0x6c) == 0) {
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGCOLOR,*(DWORD *)(param_1 + 0x50));
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGSTART,*(DWORD *)(param_1 + 0x48));
            (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                      (g_GameContext.d3dDevice,D3DRS_FOGEND,*(DWORD *)(param_1 + 0x4c));
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x50);
          break;
        case 2:
          if (*(int *)(param_1 + 0x24) < *local_c) goto switchD_00403892_caseD_6;
          *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x2b8);
          *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 700);
          *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2c0);
          *(int *)(param_1 + 0x2b8) = local_c[2];
          *(int *)(param_1 + 700) = local_c[3];
          *(int *)(param_1 + 0x2c0) = local_c[4];
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          break;
        case 3:
          if (*(int *)(param_1 + 0x24) < *local_c) goto switchD_00403892_caseD_6;
          *(int *)(param_1 + 0x2c4) = local_c[2];
          *(undefined4 *)(param_1 + 0x2d0) = 0;
          *(undefined4 *)(param_1 + 0x2cc) = 0;
          *(undefined4 *)(param_1 + 0x2c8) = 0xfffffc19;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          break;
        case 4:
          if (*(int *)(param_1 + 0x24) < *local_c) goto switchD_00403892_caseD_6;
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x48);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
          *(int *)(param_1 + 0x6c) = local_c[2];
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined4 *)(param_1 + 0x74) = 0;
          *(undefined4 *)(param_1 + 0x70) = 0xfffffc19;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          break;
        case 5:
          if (*(char *)(param_1 + 0x2a8) == '\0') goto switchD_00403892_caseD_6;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined *)(param_1 + 0x2a8) = 0;
        }
      } while( true );
    }
    *(undefined *)(param_1 + 0x107) = 0x60;
    *(undefined *)(param_1 + 0x106) = 0x80;
    *(undefined *)(param_1 + 0x105) = 0x30;
    *(undefined *)(param_1 + 0x104) = 0x30;
  }
  return 1;
}


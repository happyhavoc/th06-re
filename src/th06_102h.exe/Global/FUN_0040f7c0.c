
void FUN_0040f7c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  undefined2 local_ac;
  undefined2 local_90;
  int local_58;
  int local_54;
  int local_50;
  int local_38;
  undefined4 local_34;
  uint local_c;
  int local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_8 = 0;
  local_38 = 0;
  puVar5 = &local_34;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x113c)) {
    FUN_004241e5(1);
    if (*(int *)(in_ECX + 0x1140) == 0) {
      if ((((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001)))
         || ((*(int *)(in_ECX + 0x1118) != 0 && ((DAT_0069d904 & 0x100) != 0)))) {
        *(undefined4 *)(in_ECX + 0x113c) = 0;
        *(undefined4 *)(in_ECX + 0x1138) = 0;
        *(undefined4 *)(in_ECX + 0x1134) = 0xfffffc19;
      }
    }
    else {
      *(int *)(in_ECX + 0x1140) = *(int *)(in_ECX + 0x1140) + -1;
    }
    if (0 < *(int *)(in_ECX + 0x113c)) goto LAB_00410546;
    puVar5 = (undefined4 *)(in_ECX + 0x14);
    for (iVar4 = 0x440; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(in_ECX + 0x1154) = 0;
  }
  if (*(int *)(in_ECX + 0x1130) < 1) {
    do {
      iVar4 = DAT_006d4588;
      switch(**(undefined **)(in_ECX + 0x116c)) {
      case 0:
      case 10:
      case 0xd:
        goto switchD_0040fa32_caseD_0;
      default:
        *(undefined *)((int)&local_34 + local_38) = **(undefined **)(in_ECX + 0x116c);
        *(undefined *)((int)&local_34 + local_38 + 1) =
             *(undefined *)(*(int *)(in_ECX + 0x116c) + 1);
        local_38 = local_38 + 2;
        *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 2;
        iVar4 = DAT_006d4588;
        if (0x1f < local_38) {
          iVar2 = local_8 + 0x708 + *(int *)(in_ECX + 0x1154) * 2;
          iVar1 = in_ECX + 0x14 + (local_8 + *(int *)(in_ECX + 0x1154) * 2) * 0x110;
          local_ac = (undefined2)iVar2;
          *(undefined2 *)(iVar1 + 0xb4) = local_ac;
          FUN_00432430(iVar1,*(undefined4 *)(iVar4 + 0x1c934 + iVar2 * 4));
          FUN_00434b60(DAT_006d4588,
                       in_ECX + 0x14 + (local_8 + *(int *)(in_ECX + 0x1154) * 2) * 0x110,
                       *(undefined4 *)(in_ECX + 0x1158),0xc0d0d0,&local_34);
          if (local_8 != 0) goto LAB_00410546;
          local_8 = 1;
          local_38 = 0;
          puVar5 = &local_34;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = 0;
        }
        break;
      case 0x40:
        *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
        switch(**(undefined **)(in_ECX + 0x116c)) {
        case 0x30:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          *(undefined4 *)(in_ECX + 0x1168) = 1;
          *(undefined4 *)(in_ECX + 0x1160) = 0;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1164) = uVar3;
          break;
        case 0x31:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          *(undefined4 *)(in_ECX + 0x1168) = 2;
          *(undefined4 *)(in_ECX + 0x1160) = 0;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1164) = uVar3;
          break;
        case 0x32:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          *(undefined4 *)(in_ECX + 0x1168) = 3;
          *(undefined4 *)(in_ECX + 0x1160) = 0;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1164) = uVar3;
          break;
        case 0x33:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          *(undefined4 *)(in_ECX + 0x1168) = 4;
          *(undefined4 *)(in_ECX + 0x1160) = 0;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1164) = uVar3;
          break;
        case 0x46:
          iVar4 = FUN_004106d0(*(int *)(in_ECX + 0x116c) + 1);
          if (iVar4 == 0) {
            local_38 = 0;
            local_8 = 0;
            for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
              for (local_54 = 0; local_54 < 4; local_54 = local_54 + 1) {
                if (((&DAT_0069ccdc)[local_54 + local_50 * 0x18] == 'c') ||
                   ((&DAT_0069cce1)[local_54 + local_50 * 0x18] == 'c')) {
                  *(undefined4 *)(in_ECX + 0x1118) = 1;
                  break;
                }
              }
            }
            goto switchD_0040fa93_caseD_52;
          }
          goto LAB_004105d3;
        case 0x4d:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          iVar4 = FUN_0040f4d0();
          FUN_00424d82((float)iVar4);
          break;
        case 0x52:
switchD_0040fa93_caseD_52:
          for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
            *(undefined2 *)(in_ECX + 200 + local_58 * 0x110) = 0;
          }
          break;
        case 0x56:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          iVar4 = FUN_0040f4d0();
          iVar1 = FUN_0040f4d0();
          *(float *)(in_ECX + 0x10) = (float)iVar4 / (float)iVar1;
          break;
        case 0x61:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          iVar4 = FUN_0040f4d0();
          iVar1 = FUN_0040f4d0();
          iVar2 = FUN_0040f4d0();
          FUN_004051b0(in_ECX + 0x14 + iVar4 * 0x110,iVar1 + 0x600);
          FUN_004323a0(in_ECX + 0x14 + iVar4 * 0x110,iVar2 + 0x600);
          break;
        case 0x62:
          iVar4 = FUN_00435010(DAT_006d4588,0,(char *)(*(int *)(in_ECX + 0x116c) + 1));
          if (iVar4 != 0) goto LAB_004105d3;
          break;
        case 99:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1158) = uVar3;
          break;
        case 0x6d:
          FUN_00424b5d(*(int *)(in_ECX + 0x116c) + 1);
          break;
        case 0x72:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x113c) = uVar3;
          *(undefined4 *)(in_ECX + 0x1138) = 0;
          *(undefined4 *)(in_ECX + 0x1134) = 0xfffffc19;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1140) = uVar3;
          while ((**(char **)(in_ECX + 0x116c) != '\n' && (**(char **)(in_ECX + 0x116c) != '\r'))) {
            *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          }
          while ((**(char **)(in_ECX + 0x116c) == '\n' || (**(char **)(in_ECX + 0x116c) == '\r'))) {
            *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          }
          goto LAB_00410546;
        case 0x73:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1148) = uVar3;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x114c) = uVar3;
          break;
        case 0x76:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          iVar4 = FUN_0040f4d0();
          *(float *)(in_ECX + 0xc) = (float)iVar4;
          break;
        case 0x77:
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1130) = uVar3;
          *(undefined4 *)(in_ECX + 0x112c) = 0;
          *(undefined4 *)(in_ECX + 0x1128) = 0xfffffc19;
          uVar3 = FUN_0040f4d0();
          *(undefined4 *)(in_ECX + 0x1144) = uVar3;
          while ((**(char **)(in_ECX + 0x116c) != '\n' && (**(char **)(in_ECX + 0x116c) != '\r'))) {
            *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          }
          while ((**(char **)(in_ECX + 0x116c) == '\n' || (**(char **)(in_ECX + 0x116c) == '\r'))) {
            *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
          }
          goto LAB_00410546;
        case 0x7a:
          goto LAB_004105d3;
        }
        while ((**(char **)(in_ECX + 0x116c) != '\n' && (**(char **)(in_ECX + 0x116c) != '\r'))) {
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
        }
        while ((**(char **)(in_ECX + 0x116c) == '\n' || (**(char **)(in_ECX + 0x116c) == '\r'))) {
          *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
        }
      }
    } while( true );
  }
  FUN_004241e5(1);
  if (*(int *)(in_ECX + 0x1144) == 0) {
    if ((((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) ||
       ((*(int *)(in_ECX + 0x1118) != 0 && ((DAT_0069d904 & 0x100) != 0)))) {
      *(undefined4 *)(in_ECX + 0x1130) = 0;
      *(undefined4 *)(in_ECX + 0x112c) = 0;
      *(undefined4 *)(in_ECX + 0x1128) = 0xfffffc19;
    }
  }
  else {
    *(int *)(in_ECX + 0x1144) = *(int *)(in_ECX + 0x1144) + -1;
  }
  goto LAB_00410546;
switchD_0040fa32_caseD_0:
  if (local_38 != 0) {
    iVar2 = local_8 + 0x708 + *(int *)(in_ECX + 0x1154) * 2;
    iVar1 = in_ECX + 0x14 + (local_8 + *(int *)(in_ECX + 0x1154) * 2) * 0x110;
    local_90 = (undefined2)iVar2;
    *(undefined2 *)(iVar1 + 0xb4) = local_90;
    FUN_00432430(iVar1,*(undefined4 *)(iVar4 + 0x1c934 + iVar2 * 4));
    FUN_00434b60(DAT_006d4588,in_ECX + 0x14 + (local_8 + *(int *)(in_ECX + 0x1154) * 2) * 0x110,
                 *(undefined4 *)(in_ECX + 0x1158),0xc0d0d0,&local_34);
  }
  while (((**(char **)(in_ECX + 0x116c) == '\n' || (**(char **)(in_ECX + 0x116c) == '\0')) ||
         (**(char **)(in_ECX + 0x116c) == '\r'))) {
    *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
  }
  if ((DAT_0069d904 & 0x1001) == 0) {
    *(undefined4 *)(in_ECX + 0x1130) = *(undefined4 *)(in_ECX + 0x1148);
    *(undefined4 *)(in_ECX + 0x112c) = 0;
    *(undefined4 *)(in_ECX + 0x1128) = 0xfffffc19;
    *(undefined4 *)(in_ECX + 0x1144) = *(undefined4 *)(in_ECX + 0x1148);
  }
  else {
    *(undefined4 *)(in_ECX + 0x1130) = *(undefined4 *)(in_ECX + 0x114c);
    *(undefined4 *)(in_ECX + 0x112c) = 0;
    *(undefined4 *)(in_ECX + 0x1128) = 0xfffffc19;
    *(undefined4 *)(in_ECX + 0x1144) = *(undefined4 *)(in_ECX + 0x114c);
  }
  *(int *)(in_ECX + 0x1154) = *(int *)(in_ECX + 0x1154) + 1;
LAB_00410546:
  *(undefined4 *)(in_ECX + 0x111c) = *(undefined4 *)(in_ECX + 0x1124);
  FUN_00424285(in_ECX + 0x1124,in_ECX + 0x1120);
  *(float *)(in_ECX + 0xc) = *(float *)(in_ECX + 0xc) - *(float *)(in_ECX + 0x10);
  if (*(float *)(in_ECX + 0xc) < 0.0 != (*(float *)(in_ECX + 0xc) == 0.0)) {
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
LAB_004105d3:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


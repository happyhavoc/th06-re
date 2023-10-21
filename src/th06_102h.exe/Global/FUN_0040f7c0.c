
void __fastcall FUN_0040f7c0(int param_1)

{
  AnmVm *pAVar1;
  AnmManager *pAVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  short local_ac;
  short local_90;
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
  puVar7 = &local_34;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  if (0 < *(int *)(param_1 + 0x113c)) {
    FUN_004241e5(1);
    if (*(int *)(param_1 + 0x1140) == 0) {
      if ((((g_CurFrameInput & 0x1001) != 0) &&
          ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
         ((*(int *)(param_1 + 0x1118) != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
        *(undefined4 *)(param_1 + 0x113c) = 0;
        *(undefined4 *)(param_1 + 0x1138) = 0;
        *(undefined4 *)(param_1 + 0x1134) = 0xfffffc19;
      }
    }
    else {
      *(int *)(param_1 + 0x1140) = *(int *)(param_1 + 0x1140) + -1;
    }
    if (0 < *(int *)(param_1 + 0x113c)) goto LAB_00410546;
    puVar7 = (undefined4 *)(param_1 + 0x14);
    for (iVar6 = 0x440; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x1154) = 0;
  }
  if (*(int *)(param_1 + 0x1130) < 1) {
    do {
      pAVar2 = g_AnmManager;
      switch(**(undefined **)(param_1 + 0x116c)) {
      case 0:
      case 10:
      case 0xd:
        goto switchD_0040fa32_caseD_0;
      default:
        *(undefined *)((int)&local_34 + local_38) = **(undefined **)(param_1 + 0x116c);
        *(undefined *)((int)&local_34 + local_38 + 1) =
             *(undefined *)(*(int *)(param_1 + 0x116c) + 1);
        local_38 = local_38 + 2;
        *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 2;
        pAVar2 = g_AnmManager;
        if (0x1f < local_38) {
          iVar6 = *(int *)(param_1 + 0x1154);
          local_ac = (short)local_8 + 0x708 + (short)iVar6 * 2;
          pAVar1 = (AnmVm *)(param_1 + 0x14 + (local_8 + *(int *)(param_1 + 0x1154) * 2) * 0x110);
          pAVar1->anmFileIndex = local_ac;
          AnmManager::SetAndExecuteScript
                    (pAVar2,pAVar1,pAVar2->scripts[iVar6 * 2 + local_8 + 0x708]);
          FUN_00434b60(g_AnmManager,
                       param_1 + 0x14 + (local_8 + *(int *)(param_1 + 0x1154) * 2) * 0x110,
                       *(undefined4 *)(param_1 + 0x1158),0xc0d0d0,&local_34);
          if (local_8 != 0) goto LAB_00410546;
          local_8 = 1;
          local_38 = 0;
          puVar7 = &local_34;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = 0;
        }
        break;
      case 0x40:
        *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
        switch(**(undefined **)(param_1 + 0x116c)) {
        case 0x30:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          *(undefined4 *)(param_1 + 0x1168) = 1;
          *(undefined4 *)(param_1 + 0x1160) = 0;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1164) = lVar5;
          break;
        case 0x31:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          *(undefined4 *)(param_1 + 0x1168) = 2;
          *(undefined4 *)(param_1 + 0x1160) = 0;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1164) = lVar5;
          break;
        case 0x32:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          *(undefined4 *)(param_1 + 0x1168) = 3;
          *(undefined4 *)(param_1 + 0x1160) = 0;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1164) = lVar5;
          break;
        case 0x33:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          *(undefined4 *)(param_1 + 0x1168) = 4;
          *(undefined4 *)(param_1 + 0x1160) = 0;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1164) = lVar5;
          break;
        case 0x46:
          iVar6 = FUN_004106d0(*(int *)(param_1 + 0x116c) + 1);
          if (iVar6 == 0) {
            local_38 = 0;
            local_8 = 0;
            for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
              for (local_54 = 0; local_54 < 4; local_54 = local_54 + 1) {
                if ((*(char *)(local_50 * 0x18 + 0x69ccdc + local_54) == 'c') ||
                   (*(char *)(local_50 * 0x18 + 0x69cce1 + local_54) == 'c')) {
                  *(undefined4 *)(param_1 + 0x1118) = 1;
                  break;
                }
              }
            }
            goto switchD_0040fa93_caseD_52;
          }
          goto LAB_004105d3;
        case 0x4d:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          FUN_00424d82((float)lVar5);
          break;
        case 0x52:
switchD_0040fa93_caseD_52:
          for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
            *(undefined2 *)(param_1 + 200 + local_58 * 0x110) = 0;
          }
          break;
        case 0x56:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          lVar3 = FUN_0040f4d0(param_1);
          *(float *)(param_1 + 0x10) = (float)lVar5 / (float)lVar3;
          break;
        case 0x61:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          lVar3 = FUN_0040f4d0(param_1);
          lVar4 = FUN_0040f4d0(param_1);
          AnmManager::FUN_004051b0
                    (g_AnmManager,(AnmVm *)(param_1 + 0x14 + lVar5 * 0x110),lVar3 + 0x600);
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)(param_1 + 0x14 + lVar5 * 0x110),lVar4 + 0x600);
          break;
        case 0x62:
          iVar6 = AnmManager::LoadSurface(g_AnmManager,0,(char *)(*(int *)(param_1 + 0x116c) + 1));
          if (iVar6 != 0) goto LAB_004105d3;
          break;
        case 99:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1158) = lVar5;
          break;
        case 0x6d:
          FUN_00424b5d((char *)(*(int *)(param_1 + 0x116c) + 1));
          break;
        case 0x72:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x113c) = lVar5;
          *(undefined4 *)(param_1 + 0x1138) = 0;
          *(undefined4 *)(param_1 + 0x1134) = 0xfffffc19;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1140) = lVar5;
          while ((**(char **)(param_1 + 0x116c) != '\n' && (**(char **)(param_1 + 0x116c) != '\r')))
          {
            *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          }
          while ((**(char **)(param_1 + 0x116c) == '\n' || (**(char **)(param_1 + 0x116c) == '\r')))
          {
            *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          }
          goto LAB_00410546;
        case 0x73:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1148) = lVar5;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x114c) = lVar5;
          break;
        case 0x76:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          *(float *)(param_1 + 0xc) = (float)lVar5;
          break;
        case 0x77:
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1130) = lVar5;
          *(undefined4 *)(param_1 + 0x112c) = 0;
          *(undefined4 *)(param_1 + 0x1128) = 0xfffffc19;
          lVar5 = FUN_0040f4d0(param_1);
          *(long *)(param_1 + 0x1144) = lVar5;
          while ((**(char **)(param_1 + 0x116c) != '\n' && (**(char **)(param_1 + 0x116c) != '\r')))
          {
            *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          }
          while ((**(char **)(param_1 + 0x116c) == '\n' || (**(char **)(param_1 + 0x116c) == '\r')))
          {
            *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
          }
          goto LAB_00410546;
        case 0x7a:
          goto LAB_004105d3;
        }
        while ((**(char **)(param_1 + 0x116c) != '\n' && (**(char **)(param_1 + 0x116c) != '\r'))) {
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
        }
        while ((**(char **)(param_1 + 0x116c) == '\n' || (**(char **)(param_1 + 0x116c) == '\r'))) {
          *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
        }
      }
    } while( true );
  }
  FUN_004241e5(1);
  if (*(int *)(param_1 + 0x1144) == 0) {
    if ((((g_CurFrameInput & 0x1001) != 0) &&
        ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
       ((*(int *)(param_1 + 0x1118) != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
      *(undefined4 *)(param_1 + 0x1130) = 0;
      *(undefined4 *)(param_1 + 0x112c) = 0;
      *(undefined4 *)(param_1 + 0x1128) = 0xfffffc19;
    }
  }
  else {
    *(int *)(param_1 + 0x1144) = *(int *)(param_1 + 0x1144) + -1;
  }
  goto LAB_00410546;
switchD_0040fa32_caseD_0:
  if (local_38 != 0) {
    iVar6 = *(int *)(param_1 + 0x1154);
    local_90 = (short)local_8 + 0x708 + (short)iVar6 * 2;
    pAVar1 = (AnmVm *)(param_1 + 0x14 + (local_8 + *(int *)(param_1 + 0x1154) * 2) * 0x110);
    pAVar1->anmFileIndex = local_90;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar1,pAVar2->scripts[iVar6 * 2 + local_8 + 0x708]);
    FUN_00434b60(g_AnmManager,param_1 + 0x14 + (local_8 + *(int *)(param_1 + 0x1154) * 2) * 0x110,
                 *(undefined4 *)(param_1 + 0x1158),0xc0d0d0,&local_34);
  }
  while (((**(char **)(param_1 + 0x116c) == '\n' || (**(char **)(param_1 + 0x116c) == '\0')) ||
         (**(char **)(param_1 + 0x116c) == '\r'))) {
    *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
  }
  if ((g_CurFrameInput & 0x1001) == 0) {
    *(undefined4 *)(param_1 + 0x1130) = *(undefined4 *)(param_1 + 0x1148);
    *(undefined4 *)(param_1 + 0x112c) = 0;
    *(undefined4 *)(param_1 + 0x1128) = 0xfffffc19;
    *(undefined4 *)(param_1 + 0x1144) = *(undefined4 *)(param_1 + 0x1148);
  }
  else {
    *(undefined4 *)(param_1 + 0x1130) = *(undefined4 *)(param_1 + 0x114c);
    *(undefined4 *)(param_1 + 0x112c) = 0;
    *(undefined4 *)(param_1 + 0x1128) = 0xfffffc19;
    *(undefined4 *)(param_1 + 0x1144) = *(undefined4 *)(param_1 + 0x114c);
  }
  *(int *)(param_1 + 0x1154) = *(int *)(param_1 + 0x1154) + 1;
LAB_00410546:
  *(undefined4 *)(param_1 + 0x111c) = *(undefined4 *)(param_1 + 0x1124);
  GameContext::FUN_00424285(&g_GameContext,(int *)(param_1 + 0x1124),(float *)(param_1 + 0x1120));
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10);
  if (*(float *)(param_1 + 0xc) < 0.0 != (*(float *)(param_1 + 0xc) == 0.0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_004105d3:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


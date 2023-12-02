
undefined4 FUN_00429c50(AnmVm *param_1)

{
  undefined4 *puVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float *local_c;
  int local_8;
  
  if (g_GameManager.character == 0) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player00.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    param_1->anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,param_1,pAVar2->scripts[0x400]);
  }
  else if (g_GameManager.character == 1) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player01.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    param_1->anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,param_1,pAVar2->scripts[0x400]);
  }
  param_1[4].rotation.x = g_GameManager.arcade_region_size.x / 2.0;
  param_1[4].rotation.y = g_GameManager.arcade_region_size.y - 64.0;
  param_1[4].rotation.z = 0.49;
  param_1[4].matrix.m[2][3] = 0.49;
  param_1[4].matrix.m[3][2] = 0.49;
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    (&param_1[5].pos2)[local_8].y = 0.0;
  }
  param_1[4].matrix.m[0][3] = 1.25;
  param_1[4].matrix.m[1][0] = 1.25;
  param_1[4].matrix.m[1][1] = 5.0;
  param_1[4].matrix.m[1][2] = 12.0;
  param_1[4].matrix.m[1][3] = 12.0;
  param_1[4].matrix.m[2][0] = 5.0;
  param_1[9].color = 0;
  pfVar5 = (float *)(&DAT_00476728 +
                    ((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18);
  pfVar6 = param_1[9].matrix.m[2] + 2;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  fVar7 = (float10)FUN_0045bc34(0x4000000000000000);
  param_1[9].matrix.m[3][0] = param_1[9].matrix.m[2][2] / (float)fVar7;
  fVar7 = (float10)FUN_0045bc34(0x4000000000000000);
  param_1[9].matrix.m[3][1] = param_1[9].matrix.m[2][3] / (float)fVar7;
  param_1[0x6e].posInterpFinal.z = param_1[9].matrix.m[3][2];
  param_1[0x6e].pos2.x = param_1[9].matrix.m[3][3];
  *(undefined *)(param_1[9].matrix.m[1] + 1) = 1;
  param_1[0x6e].posInterpFinal.y = 1.681558e-43;
  param_1[0x6e].posInterpFinal.x = 0.0;
  param_1[0x6e].posInterpInitial.z = -NAN;
  *(undefined *)((int)param_1[9].matrix.m[1] + 6) = 0;
  pAVar2 = g_AnmManager;
  param_1[1].anmFileIndex = 0x480;
  AnmManager::SetAndExecuteScript(pAVar2,param_1 + 1,pAVar2->scripts[0x480]);
  pAVar2 = g_AnmManager;
  param_1[2].anmFileIndex = 0x481;
  AnmManager::SetAndExecuteScript(pAVar2,param_1 + 2,pAVar2->scripts[0x481]);
  local_c = &param_1[9].pos.z;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    *(undefined2 *)((int)local_c + 0x14e) = 0;
    local_c = local_c + 0x56;
  }
  param_1[0x6e].posInterpInitial.y = -NAN;
  param_1[0x6e].posInterpInitial.x = 0.0;
  param_1[0x6e].alphaInterpFinal = 0xfffffc19;
  param_1[0x6e].timeOfLastSpriteSet =
       (int)g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].calc;
  param_1[0x6e].alphaInterpTime.previous =
       (int)g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].draw;
  param_1[0x6e].pos2.y = 0.0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    puVar1 = (undefined4 *)((int)&param_1[9].uvScrollPos + local_8 * 0xc);
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0xfffffc19;
  }
  param_1[9].matrix.m[0][2] = 1.0;
  param_1[9].matrix.m[0][1] = 1.0;
  param_1[9].matrix.m[0][3] = 1.121039e-44;
  return 0;
}


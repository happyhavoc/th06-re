
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004288c0(AnmVm *param_1)

{
  float fVar1;
  AnmManager *this;
  int iVar2;
  long lVar3;
  uint uVar4;
  int local_8;
  
  if (DAT_0069bccc != '\0') {
    return 1;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    (&param_1[5].pos2)[local_8].y = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    param_1[8].matrix.m[local_8][1] = 0.0;
  }
  if (param_1[0x6e].pos2.y == 0.0) {
    iVar2 = FUN_004195a2();
    if (((((iVar2 == 0) && (param_1[9].matrix.m[0][3] != 0.0)) && ('\0' < (char)DAT_0069d4bb)) &&
        (((g_CurFrameInput & 2) != 0 && ((g_CurFrameInput & 2) != (g_LastFrameInput & 2))))) &&
       (param_1[0x6e].timeOfLastSpriteSet != 0)) {
      DAT_0069bcc4 = DAT_0069bcc4 + 1;
      DAT_0069d4bb = DAT_0069d4bb - 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
      param_1[0x6e].pos2.y = 1.401298e-45;
      param_1[0x6e].posInterpTime.current = 0;
      param_1[0x6e].posInterpTime.subFrame = 0.0;
      param_1[0x6e].posInterpTime.previous = -999;
      param_1[0x6e].pos2.z = 1.399897e-42;
      (*(code *)param_1[0x6e].timeOfLastSpriteSet)(param_1);
      _DAT_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (*(code *)param_1[0x6e].timeOfLastSpriteSet)(param_1);
  }
  if (*(char *)(param_1[9].matrix.m[1] + 1) == '\x02') {
    if (param_1[9].matrix.m[0][3] != 0.0) {
      param_1[9].matrix.m[0][3] = (float)((int)param_1[9].matrix.m[0][3] + -1);
      if (param_1[9].matrix.m[0][3] == 0.0) {
        DAT_0069d4b9 = 0;
        if (DAT_0069d4ba < '\x01') {
          FUN_0041f290(param_1 + 4,4,2);
          FUN_0041f290(param_1 + 4,4,2);
          FUN_0041f290(param_1 + 4,4,2);
          FUN_0041f290(param_1 + 4,4,2);
          FUN_0041f290(param_1 + 4,4,2);
          _DAT_0069d4b0 = 0;
          DAT_0069d4bc = 0xff;
        }
        else {
          FUN_0041f290(param_1 + 4,2,2);
          FUN_0041f290(param_1 + 4,0,2);
          FUN_0041f290(param_1 + 4,0,2);
          FUN_0041f290(param_1 + 4,0,2);
          FUN_0041f290(param_1 + 4,0,2);
          FUN_0041f290(param_1 + 4,0,2);
          if (_DAT_0069d4b0 < 0x11) {
            _DAT_0069d4b0 = 0;
          }
          else {
            _DAT_0069d4b0 = _DAT_0069d4b0 - 0x10;
          }
        }
        DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
        FUN_0041c5fa(0x640);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)(int)param_1[0x6e].posInterpFinal.y + param_1[0x6e].posInterpFinal.x) / 30.0;
    param_1->scaleY = fVar1 * 3.0 + 1.0;
    param_1->scaleX = 1.0 - fVar1 * 1.0;
    lVar3 = __ftol2((double)(255.0 - (((float)(int)param_1[0x6e].posInterpFinal.y +
                                      param_1[0x6e].posInterpFinal.x) * 255.0) / 30.0));
    param_1->color = lVar3 << 0x18 | 0xffffff;
    param_1->flags = param_1->flags | 4;
    param_1[9].flags = 0;
    param_1[9].alphaInterpEndTime = 0;
    param_1[9].scaleInterpEndTime = 0;
    if ((int)param_1[0x6e].posInterpFinal.y < 0x1e) goto LAB_00428fa8;
    *(undefined *)(param_1[9].matrix.m[1] + 1) = 1;
    param_1[4].rotation.x = VIEWPORT_WIDTH / 2.0;
    param_1[4].rotation.y = VIEWPORT_HEIGHT - 64.0;
    param_1[4].rotation.z = 0.2;
    param_1[0x6e].posInterpFinal.y = 0.0;
    param_1[0x6e].posInterpFinal.x = 0.0;
    param_1[0x6e].posInterpInitial.z = -NAN;
    param_1->scaleX = 3.0;
    param_1->scaleY = 3.0;
    this = g_AnmManager;
    param_1->anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(this,param_1,this->scripts[0x400]);
    if (DAT_0069d4ba < '\x01') {
      DAT_0069d4c0 = 1;
      goto LAB_00428fa8;
    }
    DAT_0069d4ba = DAT_0069d4ba + -1;
    if ((DAT_0069bcb0 < 4) && (DAT_0069d4c3 == '\0')) {
      DAT_0069d4bb = g_GameContext.bombCount;
    }
    else {
      DAT_0069d4bb = 3;
    }
    DAT_0069bc30 = DAT_0069bc30 & 0xfffffff0 | 10;
  }
  else if (*(char *)(param_1[9].matrix.m[1] + 1) != '\x01') goto LAB_00428fa8;
  param_1[9].matrix.m[1][0] = 1.261169e-43;
  fVar1 = 1.0 - ((float)(int)param_1[0x6e].posInterpFinal.y + param_1[0x6e].posInterpFinal.x) / 30.0
  ;
  param_1->scaleY = fVar1 * 2.0 + 1.0;
  param_1->scaleX = 1.0 - fVar1 * 1.0;
  param_1->flags = param_1->flags | 4;
  param_1[9].matrix.m[0][2] = 1.0;
  param_1[9].matrix.m[0][1] = 1.0;
  param_1->color = ((int)param_1[0x6e].posInterpFinal.y * 0xff) / 0x1e << 0x18 | 0xffffff;
  param_1[9].matrix.m[0][3] = 0.0;
  if (0x1d < (int)param_1[0x6e].posInterpFinal.y) {
    *(undefined *)(param_1[9].matrix.m[1] + 1) = 3;
    param_1->scaleX = 1.0;
    param_1->scaleY = 1.0;
    param_1->color = 0xffffffff;
    param_1->flags = param_1->flags & 0xfffffffb;
    param_1[0x6e].posInterpFinal.y = 3.363116e-43;
    param_1[0x6e].posInterpFinal.x = 0.0;
    param_1[0x6e].posInterpInitial.z = -NAN;
    param_1[9].matrix.m[0][3] = 8.407791e-45;
  }
LAB_00428fa8:
  if (param_1[9].matrix.m[1][0] != 0.0) {
    param_1[9].matrix.m[1][0] = (float)((int)param_1[9].matrix.m[1][0] + -1);
    FUN_00414160(0);
  }
  if (*(char *)(param_1[9].matrix.m[1] + 1) == '\x03') {
    FUN_004241e5(1);
    if ((int)param_1[0x6e].posInterpFinal.y < 1) {
      *(undefined *)(param_1[9].matrix.m[1] + 1) = 0;
      param_1[0x6e].posInterpFinal.y = 0.0;
      param_1[0x6e].posInterpFinal.x = 0.0;
      param_1[0x6e].posInterpInitial.z = -NAN;
      param_1->flags = param_1->flags & 0xfffffff7;
      param_1->color = 0xffffffff;
    }
    else {
      uVar4 = (uint)param_1[0x6e].posInterpFinal.y & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar4 < 2) {
        param_1->flags = param_1->flags | 8;
        param_1->color = 0xff404040;
      }
      else {
        param_1->flags = param_1->flags & 0xfffffff7;
        param_1->color = 0xffffffff;
      }
    }
  }
  else {
    param_1[0x6e].posInterpInitial.z = param_1[0x6e].posInterpFinal.y;
    GameContext::FUN_00424285
              (&g_GameContext,(int *)&param_1[0x6e].posInterpFinal.y,&param_1[0x6e].posInterpFinal.x
              );
  }
  if ((*(char *)(param_1[9].matrix.m[1] + 1) != '\x02') &&
     (*(char *)(param_1[9].matrix.m[1] + 1) != '\x01')) {
    FUN_00427860();
  }
  AnmManager::ExecuteScript(g_AnmManager,param_1);
  FUN_004291b0(param_1);
  if (*(char *)((int)param_1[9].matrix.m[1] + 6) != '\0') {
    AnmManager::ExecuteScript(g_AnmManager,param_1 + 1);
    AnmManager::ExecuteScript(g_AnmManager,param_1 + 2);
  }
  *(undefined4 *)&param_1[9].posInterpEndTime = 0xc479c000;
  param_1[9].pos.x = -999.0;
  param_1[9].pos.y = 0.0;
  FUN_00429710(param_1);
  return 1;
}


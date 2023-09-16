
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004288c0(AnmVm *param_1)

{
  float fVar1;
  AnmManager *pAVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int local_8;
  
  if (DAT_0069bccc != '\0') {
    return 1;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    (&param_1[5].pos2)[local_8].y = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(undefined4 *)((int)&param_1[8].matrix.field0_0x0 + local_8 * 0x10 + 4) = 0;
  }
  if (param_1[0x6e].pos2.y == 0.0) {
    iVar3 = FUN_004195a2();
    if (((((iVar3 == 0) && (param_1[9].matrix.field0_0x0.field0._14 != 0.0)) &&
         ('\0' < (char)BOMB_COUNT)) &&
        (((BUTTONS_PRESSED_CURFRAME & 2) != 0 &&
         ((BUTTONS_PRESSED_CURFRAME & 2) != (BUTTONS_PRESSED_PREVFRAME & 2))))) &&
       (param_1[0x6e].timeOfLastSpriteSet != 0)) {
      DAT_0069bcc4 = DAT_0069bcc4 + 1;
      BOMB_COUNT = BOMB_COUNT - 1;
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
  if (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) == '\x02') {
    if (param_1[9].matrix.field0_0x0.field0._14 != 0.0) {
      param_1[9].matrix.field0_0x0.field0._14 =
           (float)((int)param_1[9].matrix.field0_0x0.field0._14 + -1);
      if (param_1[9].matrix.field0_0x0.field0._14 == 0.0) {
        DAT_0069d4b9 = 0;
        if (LIFE_COUNT < '\x01') {
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
    param_1->scaleX = fVar1 * 3.0 + 1.0;
    param_1->scaleY = 1.0 - fVar1 * 1.0;
    lVar4 = __ftol2((double)(255.0 - (((float)(int)param_1[0x6e].posInterpFinal.y +
                                      param_1[0x6e].posInterpFinal.x) * 255.0) / 30.0));
    param_1->color = lVar4 << 0x18 | 0xffffff;
    param_1->flags = param_1->flags | 4;
    param_1[9].flags = 0;
    param_1[9].alphaInterpEndTime = 0;
    param_1[9].scaleInterpEndTime = 0;
    if ((int)param_1[0x6e].posInterpFinal.y < 0x1e) goto LAB_00428fa8;
    *(undefined *)((int)&param_1[9].matrix.field0_0x0 + 0x14) = 1;
    param_1[4].rotation.x = VIEWPORT_WIDTH / 2.0;
    param_1[4].rotation.y = VIEWPORT_HEIGHT - 64.0;
    param_1[4].rotation.z = 0.2;
    param_1[0x6e].posInterpFinal.y = 0.0;
    param_1[0x6e].posInterpFinal.x = 0.0;
    param_1[0x6e].posInterpInitial.z = -NAN;
    param_1->scaleY = 3.0;
    param_1->scaleX = 3.0;
    pAVar2 = g_AnmManager;
    param_1->anmFileIndex = 0x400;
    FUN_00432430((Unknown *)param_1,(int)pAVar2->scripts[0x400]);
    if (LIFE_COUNT < '\x01') {
      DAT_0069d4c0 = 1;
      goto LAB_00428fa8;
    }
    LIFE_COUNT = LIFE_COUNT + -1;
    if ((CUR_RANK < 4) && (DAT_0069d4c3 == '\0')) {
      BOMB_COUNT = g_GameContext.bombCount;
    }
    else {
      BOMB_COUNT = 3;
    }
    DAT_0069bc30 = DAT_0069bc30 & 0xfffffff0 | 10;
  }
  else if (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) != '\x01') goto LAB_00428fa8;
  param_1[9].matrix.field0_0x0.field0._21 = 1.261169e-43;
  fVar1 = 1.0 - ((float)(int)param_1[0x6e].posInterpFinal.y + param_1[0x6e].posInterpFinal.x) / 30.0
  ;
  param_1->scaleX = fVar1 * 2.0 + 1.0;
  param_1->scaleY = 1.0 - fVar1 * 1.0;
  param_1->flags = param_1->flags | 4;
  param_1[9].matrix.field0_0x0.field0._13 = 1.0;
  param_1[9].matrix.field0_0x0.field0._12 = 1.0;
  param_1->color = ((int)param_1[0x6e].posInterpFinal.y * 0xff) / 0x1e << 0x18 | 0xffffff;
  param_1[9].matrix.field0_0x0.field0._14 = 0.0;
  if (0x1d < (int)param_1[0x6e].posInterpFinal.y) {
    *(undefined *)((int)&param_1[9].matrix.field0_0x0 + 0x14) = 3;
    param_1->scaleY = 1.0;
    param_1->scaleX = 1.0;
    param_1->color = 0xffffffff;
    param_1->flags = param_1->flags & 0xfffffffb;
    param_1[0x6e].posInterpFinal.y = 3.363116e-43;
    param_1[0x6e].posInterpFinal.x = 0.0;
    param_1[0x6e].posInterpInitial.z = -NAN;
    param_1[9].matrix.field0_0x0.field0._14 = 8.407791e-45;
  }
LAB_00428fa8:
  if (param_1[9].matrix.field0_0x0.field0._21 != 0.0) {
    param_1[9].matrix.field0_0x0.field0._21 =
         (float)((int)param_1[9].matrix.field0_0x0.field0._21 + -1);
    FUN_00414160(0);
  }
  if (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) == '\x03') {
    FUN_004241e5(1);
    if ((int)param_1[0x6e].posInterpFinal.y < 1) {
      *(undefined *)((int)&param_1[9].matrix.field0_0x0 + 0x14) = 0;
      param_1[0x6e].posInterpFinal.y = 0.0;
      param_1[0x6e].posInterpFinal.x = 0.0;
      param_1[0x6e].posInterpInitial.z = -NAN;
      param_1->flags = param_1->flags & 0xfffffff7;
      param_1->color = 0xffffffff;
    }
    else {
      uVar5 = (uint)param_1[0x6e].posInterpFinal.y & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar5 < 2) {
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
    FUN_00424285(&g_GameContext,(int *)&param_1[0x6e].posInterpFinal.y,
                 &param_1[0x6e].posInterpFinal.x);
  }
  if ((*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) != '\x02') &&
     (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x14) != '\x01')) {
    FUN_00427860();
  }
  AnmManager::FUN_00433960(g_AnmManager,param_1);
  FUN_004291b0(param_1);
  if (*(char *)((int)&param_1[9].matrix.field0_0x0 + 0x16) != '\0') {
    AnmManager::FUN_00433960(g_AnmManager,param_1 + 1);
    AnmManager::FUN_00433960(g_AnmManager,param_1 + 2);
  }
  *(undefined4 *)&param_1[9].posInterpEndTime = 0xc479c000;
  param_1[9].pos.x = -999.0;
  param_1[9].pos.y = 0.0;
  FUN_00429710(param_1);
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004288c0(Unknown *param_1)

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
    (&param_1[8].field6_0x18)[local_8 * 3] = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    (&param_1[0xb].field13_0x3c.field6_0x18)[local_8 * 4] = 0;
  }
  if (*(int *)&param_1[0x99].field_0xa4 == 0) {
    iVar3 = FUN_004195a2();
    if (((((iVar3 == 0) && (*(int *)&param_1[0xc].field_0xa8 != 0)) && ('\0' < (char)BOMB_COUNT)) &&
        (((BUTTONS_PRESSED_CURFRAME & 2) != 0 &&
         ((BUTTONS_PRESSED_CURFRAME & 2) != (BUTTONS_PRESSED_PREVFRAME & 2))))) &&
       (*(int *)&param_1[0x99].field_0xb8 != 0)) {
      DAT_0069bcc4 = DAT_0069bcc4 + 1;
      BOMB_COUNT = BOMB_COUNT - 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
      *(undefined4 *)&param_1[0x99].field_0xa4 = 1;
      *(undefined4 *)&param_1[0x99].field_0xb4 = 0;
      *(undefined4 *)&param_1[0x99].field52_0xb0 = 0;
      *(undefined4 *)&param_1[0x99].field_0xac = 0xfffffc19;
      *(undefined4 *)&param_1[0x99].field_0xa8 = 999;
      (**(code **)&param_1[0x99].field_0xb8)(param_1);
      _DAT_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (**(code **)&param_1[0x99].field_0xb8)(param_1);
  }
  if (*(char *)&param_1[0xc].field52_0xb0 == '\x02') {
    if (*(int *)&param_1[0xc].field_0xa8 != 0) {
      *(int *)&param_1[0xc].field_0xa8 = *(int *)&param_1[0xc].field_0xa8 + -1;
      if (*(int *)&param_1[0xc].field_0xa8 == 0) {
        DAT_0069d4b9 = 0;
        if (LIFE_COUNT < '\x01') {
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,4,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,4,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,4,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,4,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,4,2);
          _DAT_0069d4b0 = 0;
          DAT_0069d4bc = 0xff;
        }
        else {
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,2,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,0,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,0,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,0,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,0,2);
          FUN_0041f290(&param_1[5].field13_0x3c.field12_0x30,0,2);
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
    fVar1 = ((float)(int)param_1[0x99].field31_0x98 + *(float *)&param_1[0x99].field_0x94) / 30.0;
    param_1->field6_0x18 = fVar1 * 3.0 + 1.0;
    param_1->field7_0x1c = 1.0 - fVar1 * 1.0;
    lVar4 = __ftol2((double)(255.0 - (((float)(int)param_1[0x99].field31_0x98 +
                                      *(float *)&param_1[0x99].field_0x94) * 255.0) / 30.0));
    param_1->field14_0x7c = lVar4 << 0x18 | 0xffffff;
    param_1->field15_0x80 = param_1->field15_0x80 | 4;
    param_1[0xd].field7_0x1c = 0.0;
    param_1[0xd].field8_0x20 = 0;
    if ((int)param_1[0x99].field31_0x98 < 0x1e) goto LAB_00428fa8;
    *(undefined *)&param_1[0xc].field52_0xb0 = 1;
    param_1[5].field13_0x3c.field12_0x30 = (int)(VIEWPORT_WIDTH / 2.0);
    param_1[5].field13_0x3c.field13_0x34 = (int)(VIEWPORT_HEIGHT - 64.0);
    param_1[5].field13_0x3c.field14_0x38 = 0x3e4ccccd;
    param_1[0x99].field31_0x98 = 0.0;
    *(undefined4 *)&param_1[0x99].field_0x94 = 0;
    *(undefined4 *)&param_1[0x99].field_0x90 = 0xfffffc19;
    param_1->field7_0x1c = 3.0;
    param_1->field6_0x18 = 3.0;
    pAVar2 = g_AnmManager;
    *(undefined2 *)&param_1->field_0xb4 = 0x400;
    FUN_00432430(param_1,(int)pAVar2->scripts[0x400]);
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
  else if (*(char *)&param_1[0xc].field52_0xb0 != '\x01') goto LAB_00428fa8;
  *(undefined4 *)&param_1[0xc].field_0xac = 0x5a;
  fVar1 = 1.0 - ((float)(int)param_1[0x99].field31_0x98 + *(float *)&param_1[0x99].field_0x94) /
                30.0;
  param_1->field6_0x18 = fVar1 * 2.0 + 1.0;
  param_1->field7_0x1c = 1.0 - fVar1 * 1.0;
  param_1->field15_0x80 = param_1->field15_0x80 | 4;
  *(undefined4 *)&param_1[0xc].field_0xa4 = 0x3f800000;
  *(undefined4 *)&param_1[0xc].field_0xa0 = 0x3f800000;
  param_1->field14_0x7c = ((int)param_1[0x99].field31_0x98 * 0xff) / 0x1e << 0x18 | 0xffffff;
  *(undefined4 *)&param_1[0xc].field_0xa8 = 0;
  if (0x1d < (int)param_1[0x99].field31_0x98) {
    *(undefined *)&param_1[0xc].field52_0xb0 = 3;
    param_1->field7_0x1c = 1.0;
    param_1->field6_0x18 = 1.0;
    param_1->field14_0x7c = -1;
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffb;
    param_1[0x99].field31_0x98 = 3.363116e-43;
    *(undefined4 *)&param_1[0x99].field_0x94 = 0;
    *(undefined4 *)&param_1[0x99].field_0x90 = 0xfffffc19;
    *(undefined4 *)&param_1[0xc].field_0xa8 = 6;
  }
LAB_00428fa8:
  if (*(int *)&param_1[0xc].field_0xac != 0) {
    *(int *)&param_1[0xc].field_0xac = *(int *)&param_1[0xc].field_0xac + -1;
    FUN_00414160(0);
  }
  if (*(char *)&param_1[0xc].field52_0xb0 == '\x03') {
    FUN_004241e5(1);
    if ((int)param_1[0x99].field31_0x98 < 1) {
      *(undefined *)&param_1[0xc].field52_0xb0 = 0;
      param_1[0x99].field31_0x98 = 0.0;
      *(undefined4 *)&param_1[0x99].field_0x94 = 0;
      *(undefined4 *)&param_1[0x99].field_0x90 = 0xfffffc19;
      param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffff7;
      param_1->field14_0x7c = -1;
    }
    else {
      uVar5 = (uint)param_1[0x99].field31_0x98 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar5 < 2) {
        param_1->field15_0x80 = param_1->field15_0x80 | 8;
        param_1->field14_0x7c = -0xbfbfc0;
      }
      else {
        param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffff7;
        param_1->field14_0x7c = -1;
      }
    }
  }
  else {
    *(float *)&param_1[0x99].field_0x90 = param_1[0x99].field31_0x98;
    FUN_00424285(&g_GameContext,(int *)&param_1[0x99].field31_0x98,
                 (float *)&param_1[0x99].field_0x94);
  }
  if ((*(char *)&param_1[0xc].field52_0xb0 != '\x02') &&
     (*(char *)&param_1[0xc].field52_0xb0 != '\x01')) {
    FUN_00427860();
  }
  AnmManager::FUN_00433960(param_1);
  FUN_004291b0(param_1);
  if (param_1[0xc].field_0xb2 != '\0') {
    AnmManager::FUN_00433960(&param_1[1].field13_0x3c.field4_0x10);
    AnmManager::FUN_00433960(&param_1[2].field31_0x98);
  }
  param_1[0xd].field10_0x28 = 0xc479c000;
  param_1[0xd].field11_0x2c = 0xc479c000;
  param_1[0xd].field12_0x30.previous = 0;
  FUN_00429710(param_1);
  return 1;
}


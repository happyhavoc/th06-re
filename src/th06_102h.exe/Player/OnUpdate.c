
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Player::OnUpdate(Player *param_1)

{
  float fVar1;
  AnmManager *this;
  bool bVar2;
  undefined3 extraout_var;
  long lVar3;
  uint uVar4;
  int local_8;
  
  if (g_GameManager.field6_0x18[20] != '\0') {
    return 1;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    *(undefined4 *)(&param_1->field_0x638 + local_8 * 0xc) = 0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(undefined4 *)(&param_1->field_0x8c0 + local_8 * 0x10) = 0;
  }
  if (*(int *)&param_1->field_0x75c8 == 0) {
    bVar2 = FUN_004195a2(0x69bc30);
    if (((((CONCAT31(extraout_var,bVar2) == 0) && (*(int *)&param_1->field_0x9d8 != 0)) &&
         ('\0' < (char)g_GameManager.bombs_remaining)) &&
        (((g_CurFrameInput & 2) != 0 && ((g_CurFrameInput & 2) != (g_LastFrameInput & 2))))) &&
       (*(int *)&param_1->field_0x75dc != 0)) {
      g_GameManager.field6_0x18._12_4_ = g_GameManager.field6_0x18._12_4_ + 1;
      g_GameManager.bombs_remaining = g_GameManager.bombs_remaining - 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
      *(undefined4 *)&param_1->field_0x75c8 = 1;
      *(undefined4 *)&param_1->field_0x75d8 = 0;
      *(undefined4 *)&param_1->field_0x75d4 = 0;
      *(undefined4 *)&param_1->field_0x75d0 = 0xfffffc19;
      *(undefined4 *)&param_1->field_0x75cc = 999;
      (**(code **)&param_1->field_0x75dc)(param_1);
      _DAT_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (**(code **)&param_1->field_0x75dc)(param_1);
  }
  if (param_1->field_0x9e0 == '\x02') {
    if (*(int *)&param_1->field_0x9d8 != 0) {
      *(int *)&param_1->field_0x9d8 = *(int *)&param_1->field_0x9d8 + -1;
      if (*(int *)&param_1->field_0x9d8 == 0) {
        g_GameManager.power_item_count_for_score = 0;
        if ((char)g_GameManager.lives_remaining < '\x01') {
          FUN_0041f290(&param_1->field_0x440,4,2);
          FUN_0041f290(&param_1->field_0x440,4,2);
          FUN_0041f290(&param_1->field_0x440,4,2);
          FUN_0041f290(&param_1->field_0x440,4,2);
          FUN_0041f290(&param_1->field_0x440,4,2);
          g_GameManager.current_power = 0;
          g_GameManager._6172_1_ = 0xff;
        }
        else {
          FUN_0041f290(&param_1->field_0x440,2,2);
          FUN_0041f290(&param_1->field_0x440,0,2);
          FUN_0041f290(&param_1->field_0x440,0,2);
          FUN_0041f290(&param_1->field_0x440,0,2);
          FUN_0041f290(&param_1->field_0x440,0,2);
          FUN_0041f290(&param_1->field_0x440,0,2);
          if (g_GameManager.current_power < 0x11) {
            g_GameManager.current_power = 0;
          }
          else {
            g_GameManager.current_power = g_GameManager.current_power - 0x10;
          }
        }
        DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
        FUN_0041c5fa(0x640);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)*(int *)&param_1->field_0x75bc + *(float *)&param_1->field_0x75b8) / 30.0;
    *(float *)&param_1->field_0x18 = fVar1 * 3.0 + 1.0;
    *(float *)&param_1->field_0x1c = 1.0 - fVar1 * 1.0;
    lVar3 = __ftol2((double)(255.0 - (((float)*(int *)&param_1->field_0x75bc +
                                      *(float *)&param_1->field_0x75b8) * 255.0) / 30.0));
    *(uint *)&param_1->field_0x7c = lVar3 << 0x18 | 0xffffff;
    *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 | 4;
    *(undefined4 *)&param_1->field_0xa10 = 0;
    *(undefined4 *)&param_1->field_0xa14 = 0;
    if (*(int *)&param_1->field_0x75bc < 0x1e) goto LAB_00428fa8;
    param_1->field_0x9e0 = 1;
    *(float *)&param_1->field_0x440 = g_GameManager.arcade_region_size.x / 2.0;
    *(float *)&param_1->field_0x444 = g_GameManager.arcade_region_size.y - 64.0;
    *(undefined4 *)&param_1->field_0x448 = 0x3e4ccccd;
    *(undefined4 *)&param_1->field_0x75bc = 0;
    *(undefined4 *)&param_1->field_0x75b8 = 0;
    *(undefined4 *)&param_1->field_0x75b4 = 0xfffffc19;
    *(undefined4 *)&param_1->field_0x1c = 0x40400000;
    *(undefined4 *)&param_1->field_0x18 = 0x40400000;
    this = g_AnmManager;
    *(undefined2 *)&param_1->field_0xb4 = 0x400;
    AnmManager::SetAndExecuteScript(this,(AnmVm *)param_1,this->scripts[0x400]);
    if ((char)g_GameManager.lives_remaining < '\x01') {
      g_GameManager.field22_0x1820._0_1_ = 1;
      goto LAB_00428fa8;
    }
    g_GameManager.lives_remaining = g_GameManager.lives_remaining - 1;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager._6179_1_ == '\0')) {
      g_GameManager.bombs_remaining = g_GameContext.bombCount;
    }
    else {
      g_GameManager.bombs_remaining = 3;
    }
    DAT_0069bc30 = DAT_0069bc30 & 0xfffffff0 | 10;
  }
  else if (param_1->field_0x9e0 != '\x01') goto LAB_00428fa8;
  *(undefined4 *)&param_1->field_0x9dc = 0x5a;
  fVar1 = 1.0 - ((float)*(int *)&param_1->field_0x75bc + *(float *)&param_1->field_0x75b8) / 30.0;
  *(float *)&param_1->field_0x18 = fVar1 * 2.0 + 1.0;
  *(float *)&param_1->field_0x1c = 1.0 - fVar1 * 1.0;
  *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 | 4;
  *(undefined4 *)&param_1->field_0x9d4 = 0x3f800000;
  *(undefined4 *)&param_1->field_0x9d0 = 0x3f800000;
  *(uint *)&param_1->field_0x7c = (*(int *)&param_1->field_0x75bc * 0xff) / 0x1e << 0x18 | 0xffffff;
  *(undefined4 *)&param_1->field_0x9d8 = 0;
  if (0x1d < *(int *)&param_1->field_0x75bc) {
    param_1->field_0x9e0 = 3;
    *(undefined4 *)&param_1->field_0x1c = 0x3f800000;
    *(undefined4 *)&param_1->field_0x18 = 0x3f800000;
    *(undefined4 *)&param_1->field_0x7c = 0xffffffff;
    *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 & 0xfffffffb;
    *(undefined4 *)&param_1->field_0x75bc = 0xf0;
    *(undefined4 *)&param_1->field_0x75b8 = 0;
    *(undefined4 *)&param_1->field_0x75b4 = 0xfffffc19;
    *(undefined4 *)&param_1->field_0x9d8 = 6;
  }
LAB_00428fa8:
  if (*(int *)&param_1->field_0x9dc != 0) {
    *(int *)&param_1->field_0x9dc = *(int *)&param_1->field_0x9dc + -1;
    FUN_00414160(0x5a5ff8,0);
  }
  if (param_1->field_0x9e0 == '\x03') {
    FUN_004241e5(1);
    if (*(int *)&param_1->field_0x75bc < 1) {
      param_1->field_0x9e0 = 0;
      *(undefined4 *)&param_1->field_0x75bc = 0;
      *(undefined4 *)&param_1->field_0x75b8 = 0;
      *(undefined4 *)&param_1->field_0x75b4 = 0xfffffc19;
      *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 & 0xfffffff7;
      *(undefined4 *)&param_1->field_0x7c = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)&param_1->field_0x75bc & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar4 < 2) {
        *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 | 8;
        *(undefined4 *)&param_1->field_0x7c = 0xff404040;
      }
      else {
        *(uint *)&param_1->field_0x80 = *(uint *)&param_1->field_0x80 & 0xfffffff7;
        *(undefined4 *)&param_1->field_0x7c = 0xffffffff;
      }
    }
  }
  else {
    *(undefined4 *)&param_1->field_0x75b4 = *(undefined4 *)&param_1->field_0x75bc;
    GameContext::FUN_00424285
              (&g_GameContext,(int *)&param_1->field_0x75bc,(float *)&param_1->field_0x75b8);
  }
  if ((param_1->field_0x9e0 != '\x02') && (param_1->field_0x9e0 != '\x01')) {
    CalcMove();
  }
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)param_1);
  FUN_004291b0(param_1);
  if (param_1->field_0x9e2 != '\0') {
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)&param_1->field_0x110);
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)&param_1->field_0x220);
  }
  *(undefined4 *)&param_1->field_0xa1c = 0xc479c000;
  *(undefined4 *)&param_1->field_0xa20 = 0xc479c000;
  *(undefined4 *)&param_1->field_0xa24 = 0;
  FUN_00429710(param_1);
  return 1;
}


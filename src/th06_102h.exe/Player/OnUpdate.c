
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Player::OnUpdate(undefined param_1)

{
  float fVar1;
  AnmManager *this;
  bool bVar2;
  undefined3 extraout_var;
  long lVar3;
  uint uVar4;
  undefined3 in_stack_00000005;
  int local_8;
  
  if (g_GameManager._44_1_ != '\0') {
    return 1;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    (&_param_1[5].pos2)[local_8].y = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    _param_1[8].matrix.m[local_8][1] = 0.0;
  }
  if (_param_1[0x6e].pos2.y == 0.0) {
    bVar2 = FUN_004195a2(0x69bc30);
    if (((((CONCAT31(extraout_var,bVar2) == 0) && (_param_1[9].matrix.m[0][3] != 0.0)) &&
         ('\0' < (char)g_GameManager.bombs_remaining)) &&
        (((g_CurFrameInput & 2) != 0 && ((g_CurFrameInput & 2) != (g_LastFrameInput & 2))))) &&
       (_param_1[0x6e].timeOfLastSpriteSet != 0)) {
      g_GameManager._36_4_ = g_GameManager._36_4_ + 1;
      g_GameManager.bombs_remaining = g_GameManager.bombs_remaining - 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
      _param_1[0x6e].pos2.y = 1.401298e-45;
      _param_1[0x6e].posInterpTime.current = 0;
      _param_1[0x6e].posInterpTime.subFrame = 0.0;
      _param_1[0x6e].posInterpTime.previous = -999;
      _param_1[0x6e].pos2.z = 1.399897e-42;
      (*(code *)_param_1[0x6e].timeOfLastSpriteSet)(_param_1);
      _DAT_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (*(code *)_param_1[0x6e].timeOfLastSpriteSet)(_param_1);
  }
  if (*(char *)(_param_1[9].matrix.m[1] + 1) == '\x02') {
    if (_param_1[9].matrix.m[0][3] != 0.0) {
      _param_1[9].matrix.m[0][3] = (float)((int)_param_1[9].matrix.m[0][3] + -1);
      if (_param_1[9].matrix.m[0][3] == 0.0) {
        g_GameManager.power_item_count_for_score = 0;
        if ((char)g_GameManager.lives_remaining < '\x01') {
          FUN_0041f290(_param_1 + 4,4,2);
          FUN_0041f290(_param_1 + 4,4,2);
          FUN_0041f290(_param_1 + 4,4,2);
          FUN_0041f290(_param_1 + 4,4,2);
          FUN_0041f290(_param_1 + 4,4,2);
          g_GameManager.current_power = 0;
          g_GameManager.field38_0x181c = 0xff;
        }
        else {
          FUN_0041f290(_param_1 + 4,2,2);
          FUN_0041f290(_param_1 + 4,0,2);
          FUN_0041f290(_param_1 + 4,0,2);
          FUN_0041f290(_param_1 + 4,0,2);
          FUN_0041f290(_param_1 + 4,0,2);
          FUN_0041f290(_param_1 + 4,0,2);
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
    fVar1 = ((float)(int)_param_1[0x6e].posInterpFinal.y + _param_1[0x6e].posInterpFinal.x) / 30.0;
    _param_1->scaleY = fVar1 * 3.0 + 1.0;
    _param_1->scaleX = 1.0 - fVar1 * 1.0;
    lVar3 = __ftol2((double)(255.0 - (((float)(int)_param_1[0x6e].posInterpFinal.y +
                                      _param_1[0x6e].posInterpFinal.x) * 255.0) / 30.0));
    _param_1->color = lVar3 << 0x18 | 0xffffff;
    _param_1->flags = _param_1->flags | 4;
    _param_1[9].flags = 0;
    _param_1[9].alphaInterpEndTime = 0;
    _param_1[9].scaleInterpEndTime = 0;
    if ((int)_param_1[0x6e].posInterpFinal.y < 0x1e) goto LAB_00428fa8;
    *(undefined *)(_param_1[9].matrix.m[1] + 1) = 1;
    _param_1[4].rotation.x = g_GameManager.arcade_region_size.x / 2.0;
    _param_1[4].rotation.y = g_GameManager.arcade_region_size.y - 64.0;
    _param_1[4].rotation.z = 0.2;
    _param_1[0x6e].posInterpFinal.y = 0.0;
    _param_1[0x6e].posInterpFinal.x = 0.0;
    _param_1[0x6e].posInterpInitial.z = -NAN;
    _param_1->scaleX = 3.0;
    _param_1->scaleY = 3.0;
    this = g_AnmManager;
    _param_1->anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(this,_param_1,this->scripts[0x400]);
    if ((char)g_GameManager.lives_remaining < '\x01') {
      g_GameManager.is_in_retry_menu = 1;
      goto LAB_00428fa8;
    }
    g_GameManager.lives_remaining = g_GameManager.lives_remaining - 1;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager.field45_0x1823 == 0)) {
      g_GameManager.bombs_remaining = g_Supervisor.bombCount;
    }
    else {
      g_GameManager.bombs_remaining = 3;
    }
    DAT_0069bc30 = DAT_0069bc30 & 0xfffffff0 | 10;
  }
  else if (*(char *)(_param_1[9].matrix.m[1] + 1) != '\x01') goto LAB_00428fa8;
  _param_1[9].matrix.m[1][0] = 1.261169e-43;
  fVar1 = 1.0 - ((float)(int)_param_1[0x6e].posInterpFinal.y + _param_1[0x6e].posInterpFinal.x) /
                30.0;
  _param_1->scaleY = fVar1 * 2.0 + 1.0;
  _param_1->scaleX = 1.0 - fVar1 * 1.0;
  _param_1->flags = _param_1->flags | 4;
  _param_1[9].matrix.m[0][2] = 1.0;
  _param_1[9].matrix.m[0][1] = 1.0;
  _param_1->color = ((int)_param_1[0x6e].posInterpFinal.y * 0xff) / 0x1e << 0x18 | 0xffffff;
  _param_1[9].matrix.m[0][3] = 0.0;
  if (0x1d < (int)_param_1[0x6e].posInterpFinal.y) {
    *(undefined *)(_param_1[9].matrix.m[1] + 1) = 3;
    _param_1->scaleX = 1.0;
    _param_1->scaleY = 1.0;
    _param_1->color = 0xffffffff;
    _param_1->flags = _param_1->flags & 0xfffffffb;
    _param_1[0x6e].posInterpFinal.y = 3.363116e-43;
    _param_1[0x6e].posInterpFinal.x = 0.0;
    _param_1[0x6e].posInterpInitial.z = -NAN;
    _param_1[9].matrix.m[0][3] = 8.407791e-45;
  }
LAB_00428fa8:
  if (_param_1[9].matrix.m[1][0] != 0.0) {
    _param_1[9].matrix.m[1][0] = (float)((int)_param_1[9].matrix.m[1][0] + -1);
    BulletManager::FUN_00414160(0x5a5ff8,0);
  }
  if (*(char *)(_param_1[9].matrix.m[1] + 1) == '\x03') {
    AnmTimer::FUN_004241e5((AnmTimer *)&_param_1[0x6e].posInterpInitial.z,1);
    if ((int)_param_1[0x6e].posInterpFinal.y < 1) {
      *(undefined *)(_param_1[9].matrix.m[1] + 1) = 0;
      _param_1[0x6e].posInterpFinal.y = 0.0;
      _param_1[0x6e].posInterpFinal.x = 0.0;
      _param_1[0x6e].posInterpInitial.z = -NAN;
      _param_1->flags = _param_1->flags & 0xfffffff7;
      _param_1->color = 0xffffffff;
    }
    else {
      uVar4 = (uint)_param_1[0x6e].posInterpFinal.y & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar4 < 2) {
        _param_1->flags = _param_1->flags | 8;
        _param_1->color = 0xff404040;
      }
      else {
        _param_1->flags = _param_1->flags & 0xfffffff7;
        _param_1->color = 0xffffffff;
      }
    }
  }
  else {
    _param_1[0x6e].posInterpInitial.z = _param_1[0x6e].posInterpFinal.y;
    Supervisor::TickTimer
              (&g_Supervisor,(int *)&_param_1[0x6e].posInterpFinal.y,
               &_param_1[0x6e].posInterpFinal.x);
  }
  if ((*(char *)(_param_1[9].matrix.m[1] + 1) != '\x02') &&
     (*(char *)(_param_1[9].matrix.m[1] + 1) != '\x01')) {
    CalcMove();
  }
  AnmManager::ExecuteScript(g_AnmManager,_param_1);
  FUN_004291b0(_param_1);
  if (*(char *)((int)_param_1[9].matrix.m[1] + 6) != '\0') {
    AnmManager::ExecuteScript(g_AnmManager,_param_1 + 1);
    AnmManager::ExecuteScript(g_AnmManager,_param_1 + 2);
  }
  *(undefined4 *)&_param_1[9].posInterpEndTime = 0xc479c000;
  _param_1[9].pos.x = -999.0;
  _param_1[9].pos.y = 0.0;
  FUN_00429710(_param_1);
  return 1;
}


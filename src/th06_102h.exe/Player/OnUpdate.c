
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ChainCallbackResult Player::OnUpdate(Player *param_1)

{
  float fVar1;
  AnmManager *this;
  BOOL BVar2;
  long lVar3;
  uint uVar4;
  int local_8;
  
  if ((char)g_GameManager.field11_0x2c != '\0') {
    return CHAIN_CALLBACK_RESULT_CONTINUE;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    param_1->field12_0x638[local_8].x = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    param_1->field15_0x8b8[local_8].size1.x = 0.0;
  }
  if ((param_1->inner).field0_0x0 == 0) {
    BVar2 = Gui::HasCurrentMsgIdx(&g_Gui);
    if (((((BVar2 == 0) && (param_1->field19_0x9d8 != 0)) &&
         ('\0' < (char)g_GameManager.bombs_remaining)) &&
        (((g_CurFrameInput & 2) != 0 && ((g_CurFrameInput & 2) != (g_LastFrameInput & 2))))) &&
       ((param_1->inner).bombCalc != (void *)0x0)) {
      g_GameManager.field9_0x24 = g_GameManager.field9_0x24 + 1;
      g_GameManager.bombs_remaining = g_GameManager.bombs_remaining - 1;
      g_Gui.flags = g_Gui.flags & 0xfffffff3 | 8;
      (param_1->inner).field0_0x0 = 1;
      (param_1->inner).field2_0x8.current = 0;
      (param_1->inner).field2_0x8.subFrame = 0.0;
      (param_1->inner).field2_0x8.previous = -999;
      (param_1->inner).field1_0x4 = 999;
      (*(code *)(param_1->inner).bombCalc)(param_1);
      BOOL_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (*(code *)(param_1->inner).bombCalc)(param_1);
  }
  if (param_1->field21_0x9e0 == 2) {
    if (param_1->field19_0x9d8 != 0) {
      param_1->field19_0x9d8 = param_1->field19_0x9d8 + -1;
      if (param_1->field19_0x9d8 == 0) {
        g_GameManager.power_item_count_for_score = 0;
        if ((char)g_GameManager.lives_remaining < '\x01') {
          FUN_0041f290(&param_1->position,4,2);
          FUN_0041f290(&param_1->position,4,2);
          FUN_0041f290(&param_1->position,4,2);
          FUN_0041f290(&param_1->position,4,2);
          FUN_0041f290(&param_1->position,4,2);
          g_GameManager.current_power = 0;
          g_GameManager.field23_0x181c = 0xff;
        }
        else {
          FUN_0041f290(&param_1->position,2,2);
          FUN_0041f290(&param_1->position,0,2);
          FUN_0041f290(&param_1->position,0,2);
          FUN_0041f290(&param_1->position,0,2);
          FUN_0041f290(&param_1->position,0,2);
          FUN_0041f290(&param_1->position,0,2);
          if (g_GameManager.current_power < 0x11) {
            g_GameManager.current_power = 0;
          }
          else {
            g_GameManager.current_power = g_GameManager.current_power - 0x10;
          }
        }
        g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
        FUN_0041c5fa(0x640);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)(param_1->field35_0x75b4).current + (param_1->field35_0x75b4).subFrame) / 30.0;
    (param_1->vm0).scaleY = fVar1 * 3.0 + 1.0;
    (param_1->vm0).scaleX = 1.0 - fVar1 * 1.0;
    lVar3 = __ftol2((double)(255.0 - (((float)(param_1->field35_0x75b4).current +
                                      (param_1->field35_0x75b4).subFrame) * 255.0) / 30.0));
    (param_1->vm0).color.color = lVar3 << 0x18 | 0xffffff;
    (param_1->vm0).flags = (param_1->vm0).flags | 4;
    param_1->field29_0xa10 = 0.0;
    param_1->field30_0xa14 = 0;
    if ((param_1->field35_0x75b4).current < 0x1e) goto LAB_00428fa8;
    param_1->field21_0x9e0 = 1;
    (param_1->position).x = g_GameManager.arcade_region_size.x / 2.0;
    (param_1->position).y = g_GameManager.arcade_region_size.y - 64.0;
    (param_1->position).z = 0.2;
    (param_1->field35_0x75b4).current = 0;
    (param_1->field35_0x75b4).subFrame = 0.0;
    (param_1->field35_0x75b4).previous = -999;
    (param_1->vm0).scaleX = 3.0;
    (param_1->vm0).scaleY = 3.0;
    this = g_AnmManager;
    (param_1->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(this,&param_1->vm0,this->scripts[0x400]);
    if ((char)g_GameManager.lives_remaining < '\x01') {
      g_GameManager.is_in_retry_menu = 1;
      goto LAB_00428fa8;
    }
    g_GameManager.lives_remaining = g_GameManager.lives_remaining - 1;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager.field30_0x1823 == 0)) {
      g_GameManager.bombs_remaining = g_Supervisor.bombCount;
    }
    else {
      g_GameManager.bombs_remaining = 3;
    }
    g_Gui.flags = g_Gui.flags & 0xfffffff0 | 10;
  }
  else if (param_1->field21_0x9e0 != 1) goto LAB_00428fa8;
  param_1->field20_0x9dc = 0x5a;
  fVar1 = 1.0 - ((float)(param_1->field35_0x75b4).current + (param_1->field35_0x75b4).subFrame) /
                30.0;
  (param_1->vm0).scaleY = fVar1 * 2.0 + 1.0;
  (param_1->vm0).scaleX = 1.0 - fVar1 * 1.0;
  (param_1->vm0).flags = (param_1->vm0).flags | 4;
  param_1->field18_0x9d4 = 1.0;
  param_1->field17_0x9d0 = 1.0;
  (param_1->vm0).color.color = ((param_1->field35_0x75b4).current * 0xff) / 0x1e << 0x18 | 0xffffff;
  param_1->field19_0x9d8 = 0;
  if (0x1d < (param_1->field35_0x75b4).current) {
    param_1->field21_0x9e0 = 3;
    (param_1->vm0).scaleX = 1.0;
    (param_1->vm0).scaleY = 1.0;
    (param_1->vm0).color.color = 0xffffffff;
    (param_1->vm0).flags = (param_1->vm0).flags & 0xfffffffb;
    (param_1->field35_0x75b4).current = 0xf0;
    (param_1->field35_0x75b4).subFrame = 0.0;
    (param_1->field35_0x75b4).previous = -999;
    param_1->field19_0x9d8 = 6;
  }
LAB_00428fa8:
  if (param_1->field20_0x9dc != 0) {
    param_1->field20_0x9dc = param_1->field20_0x9dc + -1;
    BulletManager::FUN_00414160(&g_BulletManager,0);
  }
  if (param_1->field21_0x9e0 == 3) {
    ZunTimer::Decrement(&param_1->field35_0x75b4,1);
    if ((param_1->field35_0x75b4).current < 1) {
      param_1->field21_0x9e0 = 0;
      (param_1->field35_0x75b4).current = 0;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      (param_1->vm0).flags = (param_1->vm0).flags & 0xfffffff7;
      (param_1->vm0).color.color = 0xffffffff;
    }
    else {
      uVar4 = (param_1->field35_0x75b4).current & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar4 < 2) {
        (param_1->vm0).flags = (param_1->vm0).flags | 8;
        (param_1->vm0).color.color = 0xff404040;
      }
      else {
        (param_1->vm0).flags = (param_1->vm0).flags & 0xfffffff7;
        (param_1->vm0).color.color = 0xffffffff;
      }
    }
  }
  else {
    (param_1->field35_0x75b4).previous = (param_1->field35_0x75b4).current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->field35_0x75b4).current,&(param_1->field35_0x75b4).subFrame)
    ;
  }
  if ((param_1->field21_0x9e0 != 2) && (param_1->field21_0x9e0 != 1)) {
    CalcMove(param_1);
  }
  AnmManager::ExecuteScript(g_AnmManager,&param_1->vm0);
  FUN_004291b0(param_1);
  if (param_1->field23_0x9e2 != 0) {
    AnmManager::ExecuteScript(g_AnmManager,param_1->vm1);
    AnmManager::ExecuteScript(g_AnmManager,param_1->vm1 + 1);
  }
  (param_1->position_of_last_enemy_hit).x = -999.0;
  (param_1->position_of_last_enemy_hit).y = -999.0;
  (param_1->position_of_last_enemy_hit).z = 0.0;
  FUN_00429710(param_1);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


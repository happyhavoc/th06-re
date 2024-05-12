
void __thiscall Gui::calculateStageScore(Gui *this)

{
  int iVar1;
  uint stage_score;
  int local_8;
  GuiImpl *fVar2;
  AnmManager *this_00;
  
  for (local_8 = 0; this_00 = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
    if ((local_8 == 0x13) && ((int)(this->impl->msg).current_msg_idx < 0)) {
      if (this->boss_present == false) {
        if (this->impl->field1_0x1ba0 != 0) {
          if (this->impl->field1_0x1ba0 < 3) {
            fVar2 = this->impl;
            fVar2->vms[0x13].anmFileIndex = 0x614;
            AnmManager::SetAndExecuteScript(this_00,fVar2->vms + 0x13,this_00->scripts[0x614]);
            this->impl->field1_0x1ba0 = 3;
          }
          if (this->field4_0x10 == 0) {
            this->field4_0x10 = 0;
          }
          else {
            this->field4_0x10 = this->field4_0x10 - 4;
          }
          iVar1 = AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + 0x13);
          if (iVar1 != 0) {
            this->impl->field1_0x1ba0 = 0;
            this->boss_health_bar2 = 0.0;
            this->field4_0x10 = 0;
          }
        }
      }
      else if (this->impl->field1_0x1ba0 == 0) {
        fVar2 = this->impl;
        fVar2->vms[0x13].anmFileIndex = 0x613;
        AnmManager::SetAndExecuteScript(this_00,fVar2->vms + 0x13,this_00->scripts[0x613]);
        this->impl->field1_0x1ba0 = 1;
        this->field4_0x10 = 0;
      }
      else {
        iVar1 = AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + 0x13);
        if (iVar1 != 0) {
          this->impl->field1_0x1ba0 = 2;
        }
        if (this->field4_0x10 < 0xfc) {
          this->field4_0x10 = this->field4_0x10 + 4;
        }
        else {
          this->field4_0x10 = 0xff;
        }
      }
      if (1 < this->impl->field1_0x1ba0) {
        if (this->boss_health_bar1 <= this->boss_health_bar2) {
          if ((this->boss_health_bar1 < this->boss_health_bar2 !=
               (NAN(this->boss_health_bar1) || NAN(this->boss_health_bar2))) &&
             (this->boss_health_bar2 = this->boss_health_bar2 - 0.02,
             this->boss_health_bar2 < this->boss_health_bar1)) {
            this->boss_health_bar2 = this->boss_health_bar1;
          }
        }
        else {
          this->boss_health_bar2 = this->boss_health_bar2 + 0.01;
          if (this->boss_health_bar1 < this->boss_health_bar2 !=
              (NAN(this->boss_health_bar1) || NAN(this->boss_health_bar2))) {
            this->boss_health_bar2 = this->boss_health_bar1;
          }
        }
      }
    }
    else {
      AnmManager::ExecuteScript(g_AnmManager,this->impl->vms + local_8);
    }
  }
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm1);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm2);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm3);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm5);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm4);
  AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm6);
  if ((-1 < (this->impl->vm9).spriteNumber) &&
     (iVar1 = AnmManager::ExecuteScript(g_AnmManager,&this->impl->vm9), iVar1 != 0)) {
    (this->impl->vm9).spriteNumber = -1;
  }
  if ((this->impl->field15_0x2be4).field2_0x10 != 0) {
    if ((this->impl->field15_0x2be4).field3_0x14.current < 0x1e) {
      (this->impl->field15_0x2be4).field0_0x0.x =
           (((float)(this->impl->field15_0x2be4).field3_0x14.current +
            (this->impl->field15_0x2be4).field3_0x14.subFrame) * -312.0) / 30.0 + 416.0;
    }
    else {
      (this->impl->field15_0x2be4).field0_0x0.x = 104.0;
    }
    if (0xf9 < (this->impl->field15_0x2be4).field3_0x14.current) {
      (this->impl->field15_0x2be4).field2_0x10 = 0;
    }
    ZunTimer::nextTick(&(this->impl->field15_0x2be4).field3_0x14);
  }
  if ((this->impl->field16_0x2c04).field2_0x10 != 0) {
    if ((this->impl->field16_0x2c04).field3_0x14.current < 0x1e) {
      (this->impl->field16_0x2c04).field0_0x0.x =
           (((float)(this->impl->field16_0x2c04).field3_0x14.current +
            (this->impl->field16_0x2c04).field3_0x14.subFrame) * -312.0) / 30.0 + 416.0;
    }
    else {
      (this->impl->field16_0x2c04).field0_0x0.x = 104.0;
    }
    if (0xb3 < (this->impl->field16_0x2c04).field3_0x14.current) {
      (this->impl->field16_0x2c04).field2_0x10 = 0;
    }
    ZunTimer::nextTick(&(this->impl->field16_0x2c04).field3_0x14);
  }
  if ((this->impl->field17_0x2c24).field2_0x10 != 0) {
    if (0x117 < (this->impl->field17_0x2c24).field3_0x14.current) {
      (this->impl->field17_0x2c24).field2_0x10 = 0;
    }
    ZunTimer::nextTick(&(this->impl->field17_0x2c24).field3_0x14);
  }
  if (this->impl->finishedStage == 1) {
    stage_score = (g_GameManager.current_stage * 1000 + g_GameManager.graze_in_stage * 10 +
                  (uint)g_GameManager.current_power * 100) *
                  (uint)g_GameManager.point_items_collected_in_stage;
    if (5 < g_GameManager.current_stage) {
      stage_score = stage_score + (char)g_GameManager.lives_remaining * 3000000 +
                    (char)g_GameManager.bombs_remaining * 1000000;
    }
    if (g_GameManager.difficulty == EASY) {
      stage_score = (int)stage_score / 2 - ((int)stage_score / 2) % 10;
    }
    else if (g_GameManager.difficulty == HARD) {
      iVar1 = (int)(stage_score * 0xc) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_GameManager.difficulty == LUNATIC) {
      iVar1 = (int)(stage_score * 0xf) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_GameManager.difficulty == EXTRA) {
      stage_score = stage_score * 2 - (int)(stage_score * 2) % 10;
    }
    if (g_Supervisor.defaultConfig.lifeCount == 3) {
      iVar1 = (int)(stage_score * 5) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    else if (g_Supervisor.defaultConfig.lifeCount == 4) {
      iVar1 = (int)(stage_score << 1) / 10;
      stage_score = iVar1 - iVar1 % 10;
    }
    this->impl->stage_score = stage_score;
    g_GameManager.score = g_GameManager.score + stage_score;
    this->impl->finishedStage = this->impl->finishedStage + 1;
  }
  return;
}



void __thiscall EnemyManager::RunEclTimeline(EnemyManager *this)

{
  EclTimelineInstr *pEVar1;
  FLOAT FVar2;
  bool bVar3;
  BOOL BVar4;
  undefined3 extraout_var;
  float fVar5;
  D3DXVECTOR3 local_4c;
  D3DXVECTOR3 local_40;
  f32 *local_34;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  f32 *local_18;
  f32 *local_14;
  f32 *local_10;
  int local_c;
  Enemy *local_8;
  
  if (this->timeline_instr == (EclTimelineInstr *)0x0) {
    this->timeline_instr = (EclTimelineInstr *)g_EclManager.timeline;
  }
  BVar4 = Gui::HasCurrentMsgIdx(&g_Gui);
  if (((BVar4 == 0) &&
      (local_c = (char)g_GameManager.lives_remaining * -0xf0 + 0x960,
      (this->timeline_time).current != (this->timeline_time).previous)) &&
     ((this->timeline_time).current % local_c == 0)) {
    GameManager::IncreaseSubrank(&g_GameManager,100);
  }
  while (FVar2 = g_GameManager.playerMovementAreaSize.x, -1 < this->timeline_instr->time) {
    if ((this->timeline_time).current == (int)this->timeline_instr->time) {
      switch(this->timeline_instr->opcode) {
      case 0:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_10 = &pEVar1->floatVar1;
          SpawnEnemy(this,(int)this->timeline_instr->arg0,(D3DXVECTOR3 *)local_10,pEVar1->ushortVar1
                     ,(char)pEVar1->ushortVar2,pEVar1->uintVar);
        }
        break;
      case 1:
        if (g_Gui.boss_present == 0) {
          SpawnEnemy(this,(int)this->timeline_instr->arg0,
                     (D3DXVECTOR3 *)&this->timeline_instr->floatVar1,-1,0xff,-1);
        }
        break;
      case 2:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_14 = &pEVar1->floatVar1;
          local_8 = SpawnEnemy(this,(int)this->timeline_instr->arg0,(D3DXVECTOR3 *)local_14,
                               pEVar1->ushortVar1,(char)pEVar1->ushortVar2,pEVar1->uintVar);
          local_8->flags1 = local_8->flags1 | 0x40;
        }
        break;
      case 3:
        if (g_Gui.boss_present == 0) {
          local_8 = SpawnEnemy(this,(int)this->timeline_instr->arg0,
                               (D3DXVECTOR3 *)&this->timeline_instr->floatVar1,-1,0xff,-1);
          local_8->flags1 = local_8->flags1 | 0x40;
        }
        break;
      case 4:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_18 = &pEVar1->floatVar1;
          local_24.x = *local_18;
          local_24.y = pEVar1->floatVar2;
          local_24.z = pEVar1->floatVar3;
          if (*local_18 < -990.0 != (*local_18 == -990.0)) {
            local_24.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.x = local_24.x * FVar2;
          }
          FVar2 = g_GameManager.playerMovementAreaSize.y;
          if (local_18[1] < -990.0 != (local_18[1] == -990.0)) {
            local_24.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.y = local_24.y * FVar2;
          }
          if (local_18[2] < -990.0 != (local_18[2] == -990.0)) {
            local_24.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.z = local_24.z * 800.0;
          }
          SpawnEnemy(this,(int)this->timeline_instr->arg0,&local_24,*(u16 *)(local_18 + 3),
                     (char)*(u16 *)((int)local_18 + 0xe),(int)local_18[4]);
        }
        break;
      case 5:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_30.x = pEVar1->floatVar1;
          local_30.y = pEVar1->floatVar2;
          local_30.z = pEVar1->floatVar3;
          if (local_30.x < -990.0 != (local_30.x == -990.0)) {
            local_30.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.x = local_30.x * FVar2;
          }
          FVar2 = g_GameManager.playerMovementAreaSize.y;
          if (local_30.y < -990.0 != (local_30.y == -990.0)) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.y = fVar5 * FVar2;
          }
          if (local_30.z < -990.0 != (local_30.z == -990.0)) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.z = fVar5 * 800.0;
          }
          SpawnEnemy(this,(int)this->timeline_instr->arg0,&local_30,-1,0xff,-1);
        }
        break;
      case 6:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_34 = &pEVar1->floatVar1;
          local_40.x = *local_34;
          local_40.y = pEVar1->floatVar2;
          local_40.z = pEVar1->floatVar3;
          if (*local_34 < -990.0 != (*local_34 == -990.0)) {
            local_40.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.x = local_40.x * FVar2;
          }
          FVar2 = g_GameManager.playerMovementAreaSize.y;
          if (local_34[1] < -990.0 != (local_34[1] == -990.0)) {
            local_40.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.y = local_40.y * FVar2;
          }
          if (local_34[2] < -990.0 != (local_34[2] == -990.0)) {
            local_40.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.z = local_40.z * 800.0;
          }
          local_8 = SpawnEnemy(this,(int)this->timeline_instr->arg0,&local_40,*(u16 *)(local_34 + 3)
                               ,(char)*(u16 *)((int)local_34 + 0xe),(int)local_34[4]);
          local_8->flags1 = local_8->flags1 | 0x40;
        }
        break;
      case 7:
        if (g_Gui.boss_present == 0) {
          pEVar1 = this->timeline_instr;
          local_4c.x = pEVar1->floatVar1;
          local_4c.y = pEVar1->floatVar2;
          local_4c.z = pEVar1->floatVar3;
          if (local_4c.x < -990.0 != (local_4c.x == -990.0)) {
            local_4c.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.x = local_4c.x * FVar2;
          }
          FVar2 = g_GameManager.playerMovementAreaSize.y;
          if (local_4c.y < -990.0 != (local_4c.y == -990.0)) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.y = fVar5 * FVar2;
          }
          if (local_4c.z < -990.0 != (local_4c.z == -990.0)) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.z = fVar5 * 800.0;
          }
          local_8 = SpawnEnemy(this,(int)this->timeline_instr->arg0,&local_4c,-1,0xff,-1);
          local_8->flags1 = local_8->flags1 | 0x40;
        }
        break;
      case 8:
        if (((g_GameManager.difficulty == EASY) && (g_GameManager.current_stage == 5)) &&
           (this->timeline_instr->arg0 == 1)) {
          Gui::MsgRead(&g_Gui,(uint)g_GameManager.character * 10 + 3);
        }
        else {
          Gui::MsgRead(&g_Gui,(int)this->timeline_instr->arg0 + (uint)g_GameManager.character * 10);
        }
        break;
      case 9:
        bVar3 = Gui::MsgWait(&g_Gui);
        if (CONCAT31(extraout_var,bVar3) != 0) {
          ZunTimer::Decrement(&this->timeline_time,1);
          return;
        }
        break;
      case 10:
        this->bosses[(int)this->timeline_instr->floatVar1]->run_interrupt =
             (int)this->timeline_instr->floatVar2;
        break;
      case 0xb:
        g_GameManager.current_power = this->timeline_instr->arg0;
        break;
      case 0xc:
        if ((this->bosses[this->timeline_instr->arg0] != (Enemy *)0x0) &&
           ((char)this->bosses[this->timeline_instr->arg0]->flags1 < '\0')) {
          ZunTimer::Decrement(&this->timeline_time,1);
          return;
        }
      }
    }
    else if ((this->timeline_time).current < (int)this->timeline_instr->time) break;
    this->timeline_instr =
         (EclTimelineInstr *)
         ((int)&this->timeline_instr->time + (int)(short)this->timeline_instr->size);
  }
  BVar4 = Gui::HasCurrentMsgIdx(&g_Gui);
  if (BVar4 == 0) {
    g_GameManager.counat = g_GameManager.counat + 1;
  }
  return;
}


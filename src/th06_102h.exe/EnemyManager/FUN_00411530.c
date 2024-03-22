
void __thiscall EnemyManager::FUN_00411530(EnemyManager *this)

{
  void *pvVar1;
  float fVar2;
  bool bVar3;
  BOOL BVar4;
  undefined3 extraout_var;
  D3DXVECTOR3 local_4c;
  D3DXVECTOR3 local_40;
  float *local_34;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  float *local_18;
  D3DXVECTOR3 *local_14;
  D3DXVECTOR3 *local_10;
  int local_c;
  undefined4 *local_8;
  
  if (this->timeline_instr == (void *)0x0) {
    this->timeline_instr = g_EclManager.timeline;
  }
  BVar4 = Gui::HasCurrentMsgIdx(&g_Gui);
  if (((BVar4 == 0) &&
      (local_c = (char)g_GameManager.lives_remaining * -0xf0 + 0x960,
      (this->timeline_time).current != (this->timeline_time).previous)) &&
     ((this->timeline_time).current % local_c == 0)) {
    GameManager::IncreaseSubrank(&g_GameManager,100);
  }
                    /* WARNING: Load size is inaccurate */
  while (fVar2 = g_GameManager.field51_0x1a54, -1 < *this->timeline_instr) {
                    /* WARNING: Load size is inaccurate */
    if ((this->timeline_time).current == (int)*this->timeline_instr) {
      switch(*(undefined2 *)((int)this->timeline_instr + 4)) {
      case 0:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_10 = (D3DXVECTOR3 *)((int)pvVar1 + 8);
          SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),local_10,
                     *(short *)((int)pvVar1 + 0x14),(char)*(undefined2 *)((int)pvVar1 + 0x16),
                     *(int *)((int)pvVar1 + 0x18));
        }
        break;
      case 1:
        if (g_Gui.boss_present == false) {
          SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),
                     (D3DXVECTOR3 *)((int)this->timeline_instr + 8),-1,0xff,-1);
        }
        break;
      case 2:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_14 = (D3DXVECTOR3 *)((int)pvVar1 + 8);
          local_8 = SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),local_14,
                               *(short *)((int)pvVar1 + 0x14),
                               (char)*(undefined2 *)((int)pvVar1 + 0x16),
                               *(int *)((int)pvVar1 + 0x18));
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 3:
        if (g_Gui.boss_present == false) {
          local_8 = SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),
                               (D3DXVECTOR3 *)((int)this->timeline_instr + 8),-1,0xff,-1);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 4:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_18 = (float *)((int)pvVar1 + 8);
          local_24.x = *local_18;
          local_24.y = *(float *)((int)pvVar1 + 0xc);
          local_24.z = *(float *)((int)pvVar1 + 0x10);
          if (*local_18 < -990.0 != (*local_18 == -990.0)) {
            local_24.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.x = local_24.x * fVar2;
          }
          fVar2 = g_GameManager.field52_0x1a58;
          if (local_18[1] < -990.0 != (local_18[1] == -990.0)) {
            local_24.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.y = local_24.y * fVar2;
          }
          if (local_18[2] < -990.0 != (local_18[2] == -990.0)) {
            local_24.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_24.z = local_24.z * 800.0;
          }
          SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),&local_24,
                     *(short *)(local_18 + 3),(char)*(undefined2 *)((int)local_18 + 0xe),
                     (int)local_18[4]);
        }
        break;
      case 5:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_30.x = *(float *)((int)pvVar1 + 8);
          local_30.y = *(float *)((int)pvVar1 + 0xc);
          local_30.z = *(float *)((int)pvVar1 + 0x10);
          if (local_30.x < -990.0 != (local_30.x == -990.0)) {
            local_30.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.x = local_30.x * fVar2;
          }
          fVar2 = g_GameManager.field52_0x1a58;
          if (local_30.y < -990.0 != (local_30.y == -990.0)) {
            local_30.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.y = local_30.y * fVar2;
          }
          if (local_30.z < -990.0 != (local_30.z == -990.0)) {
            local_30.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_30.z = local_30.z * 800.0;
          }
          SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),&local_30,-1,0xff,-1);
        }
        break;
      case 6:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_34 = (float *)((int)pvVar1 + 8);
          local_40.x = *local_34;
          local_40.y = *(float *)((int)pvVar1 + 0xc);
          local_40.z = *(float *)((int)pvVar1 + 0x10);
          if (*local_34 < -990.0 != (*local_34 == -990.0)) {
            local_40.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.x = local_40.x * fVar2;
          }
          fVar2 = g_GameManager.field52_0x1a58;
          if (local_34[1] < -990.0 != (local_34[1] == -990.0)) {
            local_40.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.y = local_40.y * fVar2;
          }
          if (local_34[2] < -990.0 != (local_34[2] == -990.0)) {
            local_40.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_40.z = local_40.z * 800.0;
          }
          local_8 = SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),&local_40,
                               *(short *)(local_34 + 3),(char)*(undefined2 *)((int)local_34 + 0xe),
                               (int)local_34[4]);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 7:
        if (g_Gui.boss_present == false) {
          pvVar1 = this->timeline_instr;
          local_4c.x = *(float *)((int)pvVar1 + 8);
          local_4c.y = *(float *)((int)pvVar1 + 0xc);
          local_4c.z = *(float *)((int)pvVar1 + 0x10);
          if (local_4c.x < -990.0 != (local_4c.x == -990.0)) {
            local_4c.x = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.x = local_4c.x * fVar2;
          }
          fVar2 = g_GameManager.field52_0x1a58;
          if (local_4c.y < -990.0 != (local_4c.y == -990.0)) {
            local_4c.y = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.y = local_4c.y * fVar2;
          }
          if (local_4c.z < -990.0 != (local_4c.z == -990.0)) {
            local_4c.z = Rng::GetRandomF32ZeroToOne(&g_Rng);
            local_4c.z = local_4c.z * 800.0;
          }
          local_8 = SpawnEnemy(this,*(short *)((int)this->timeline_instr + 2),&local_4c,-1,0xff,-1);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 8:
        if (((g_GameManager.difficulty == EASY) && (g_GameManager.current_stage == 5)) &&
           (*(short *)((int)this->timeline_instr + 2) == 1)) {
          Gui::FUN_00418768(&g_Gui,(uint)g_GameManager.character * 10 + 3);
        }
        else {
          Gui::FUN_00418768(&g_Gui,(int)*(short *)((int)this->timeline_instr + 2) +
                                   (uint)g_GameManager.character * 10);
        }
        break;
      case 9:
        bVar3 = Gui::FUN_00419572(&g_Gui);
        if (CONCAT31(extraout_var,bVar3) != 0) {
          ZunTimer::Decrement(&this->timeline_time,1);
          return;
        }
        break;
      case 10:
        this->bosses[*(int *)((int)this->timeline_instr + 8)]->run_interrupt =
             *(int *)((int)this->timeline_instr + 0xc);
        break;
      case 0xb:
        g_GameManager.current_power = *(ushort *)((int)this->timeline_instr + 2);
        break;
      case 0xc:
        if ((this->bosses[*(short *)((int)this->timeline_instr + 2)] != (Enemy *)0x0) &&
           ((char)this->bosses[*(short *)((int)this->timeline_instr + 2)]->flags1 < '\0')) {
          ZunTimer::Decrement(&this->timeline_time,1);
          return;
        }
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      if ((this->timeline_time).current < (int)*this->timeline_instr) break;
    }
    this->timeline_instr =
         (void *)((int)*(short *)((int)this->timeline_instr + 6) + (int)this->timeline_instr);
  }
  BVar4 = Gui::HasCurrentMsgIdx(&g_Gui);
  if (BVar4 == 0) {
    g_GameManager.counat = g_GameManager.counat + 1;
  }
  return;
}


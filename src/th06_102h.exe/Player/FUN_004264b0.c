
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int __thiscall
Player::FUN_004264b0(Player *this,D3DXVECTOR3 *param_1,D3DXVECTOR3 *param_2,undefined4 *param_3)

{
  int iVar8;
  int local_d4;
  short local_80;
  D3DXVECTOR3 local_40;
  int local_34;
  D3DXVECTOR3 local_30;
  int local_c;
  AnmVm *local_8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  short sVar4;
  AnmManager *this_00;
  
  local_34 = 0;
  local_30.x = param_1->x - param_2->x / 2.0;
  local_30.y = param_1->y - param_2->y / 2.0;
  fVar1 = param_2->x / 2.0 + param_1->x;
  fVar2 = param_2->y / 2.0 + param_1->y;
  local_8 = &this->bullets[0].vm;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((*(short *)((int)local_8[1].matrix.m[0] + 2) != 0) &&
       ((*(short *)((int)local_8[1].matrix.m[0] + 2) == 1 ||
        (*(short *)(local_8[1].matrix.m[0] + 1) == 2)))) {
      local_40.x = local_8[1].rotation.x - local_8[1].angleVel.x / 2.0;
      local_40.y = local_8[1].rotation.y - local_8[1].angleVel.y / 2.0;
      fVar3 = local_8[1].angleVel.x / 2.0 + local_8[1].rotation.x;
      fVar4 = local_8[1].angleVel.y / 2.0 + local_8[1].rotation.y;
      if ((local_40.y <= fVar2) &&
         (((local_40.x <= fVar1 && (fVar4 < local_30.y == (NAN(fVar4) || NAN(local_30.y)))) &&
          (fVar3 < local_30.x == (NAN(fVar3) || NAN(local_30.x)))))) {
        if ((this->inner).isUsingBomb == 0) {
          local_d4 = (int)*(short *)local_8[1].matrix.m[0];
        }
        else if ((int)*(short *)local_8[1].matrix.m[0] / 3 == 0) {
          local_d4 = 1;
        }
        else {
          local_d4 = (int)*(short *)local_8[1].matrix.m[0] / 3;
        }
        local_34 = local_34 + local_d4;
        if (*(short *)(local_8[1].matrix.m[0] + 1) == 2) {
          iVar8 = (int)*(short *)local_8[1].matrix.m[0];
          *(short *)local_8[1].matrix.m[0] = (short)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2);
          if (*(short *)local_8[1].matrix.m[0] == 0) {
            *(undefined2 *)local_8[1].matrix.m[0] = 1;
          }
          switch(local_8->anmFileIndex) {
          case 0x441:
            local_8[1].angleVel.x = 32.0;
            local_8[1].angleVel.y = 32.0;
            break;
          case 0x442:
            local_8[1].angleVel.x = 42.0;
            local_8[1].angleVel.y = 42.0;
            break;
          case 0x443:
            local_8[1].angleVel.x = 48.0;
            local_8[1].angleVel.y = 48.0;
            break;
          case 0x444:
            local_8[1].angleVel.x = 48.0;
            local_8[1].angleVel.y = 48.0;
          }
          if (local_8[1].currentTimeInScript.current % 6 == 0) {
            EffectManager::SpawnEffect(&g_EffectManager,5,&local_8[1].rotation,1,0xffffffff);
          }
        }
        this_00 = g_AnmManager;
        if (*(short *)(local_8[1].matrix.m[0] + 1) == 3) {
          this->unk_9e4 = this->unk_9e4 + 1;
          if ((this->unk_9e4 & 7) == 0) {
            local_40.y = param_1->y;
            local_40.z = param_1->z;
            local_40.x = local_8[1].rotation.x;
            EffectManager::SpawnEffect(&g_EffectManager,5,&local_40,1,0xffffffff);
          }
        }
        else {
          if (*(short *)((int)local_8[1].matrix.m[0] + 2) == 1) {
            sVar4 = local_8->anmFileIndex;
            local_80 = sVar4 + 0x20;
            local_8->anmFileIndex = local_80;
            AnmManager::SetAndExecuteScript(this_00,local_8,this_00->scripts[sVar4 + 0x20]);
            EffectManager::SpawnEffect(&g_EffectManager,5,&local_8[1].rotation,1,0xffffffff);
            local_8[1].rotation.z = 0.1;
          }
          *(undefined2 *)((int)local_8[1].matrix.m[0] + 2) = 2;
          local_8[1].scaleY = local_8[1].scaleY / 8.0;
          local_8[1].scaleX = local_8[1].scaleX / 8.0;
        }
      }
    }
    local_8 = (AnmVm *)(local_8[1].matrix.m[0] + 3);
  }
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    fVar3 = this->unk_638[local_c].x;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pDVar1 = this->unk_638 + local_c;
      pDVar2 = this->unk_4b8 + local_c;
      local_40.z = pDVar2->z - pDVar1->z * 0.5;
      local_40.y = pDVar2->y - pDVar1->y * 0.5;
      local_40.x = pDVar2->x - pDVar1->x * 0.5;
      fVar3 = this->unk_638[local_c].y * 0.5 + this->unk_4b8[local_c].y;
      fVar4 = this->unk_638[local_c].x * 0.5 + this->unk_4b8[local_c].x;
      if (((local_40.x <= fVar1) && (fVar4 < local_30.x == (NAN(fVar4) || NAN(local_30.x)))) &&
         ((local_40.y <= fVar2 && (fVar3 < local_30.y == (NAN(fVar3) || NAN(local_30.y)))))) {
        local_34 = local_34 + this->unk_7b8[local_c];
        this->unk_838[local_c] = this->unk_838[local_c] + this->unk_7b8[local_c];
        this->unk_9e4 = this->unk_9e4 + 1;
        if ((this->unk_9e4 & 3) == 0) {
          EffectManager::SpawnEffect(&g_EffectManager,3,param_1,1,0xffffffff);
        }
        if (((this->inner).isUsingBomb != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}


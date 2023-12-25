
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int __thiscall Player::FUN_004264b0(Player *this,float *param_1,float *param_2,undefined4 *param_3)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  short sVar4;
  AnmManager *this_00;
  int iVar5;
  int local_d4;
  short local_80;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_c;
  AnmVm *local_8;
  
  local_34 = 0;
  local_30 = *param_1 - *param_2 / 2.0;
  local_2c = param_1[1] - param_2[1] / 2.0;
  local_18 = *param_2 / 2.0 + *param_1;
  local_14 = param_2[1] / 2.0 + param_1[1];
  local_8 = &this->bullets[0].field0_0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((*(short *)((int)local_8[1].matrix.m[0] + 2) != 0) &&
       ((*(short *)((int)local_8[1].matrix.m[0] + 2) == 1 ||
        (*(short *)(local_8[1].matrix.m[0] + 1) == 2)))) {
      local_40 = local_8[1].rotation.x - local_8[1].angleVel.x / 2.0;
      local_3c = local_8[1].rotation.y - local_8[1].angleVel.y / 2.0;
      local_24 = local_8[1].angleVel.x / 2.0 + local_8[1].rotation.x;
      local_20 = local_8[1].angleVel.y / 2.0 + local_8[1].rotation.y;
      if ((local_3c <= local_14) &&
         (((local_40 <= local_18 && (local_20 < local_2c == (NAN(local_20) || NAN(local_2c)))) &&
          (local_24 < local_30 == (NAN(local_24) || NAN(local_30)))))) {
        if ((this->inner).field0_0x0 == 0) {
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
          iVar5 = (int)*(short *)local_8[1].matrix.m[0];
          *(short *)local_8[1].matrix.m[0] = (short)((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
          if (*(short *)local_8[1].matrix.m[0] == 0) {
            *(short *)local_8[1].matrix.m[0] = 1;
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
            EffectManager::FUN_0040ef50
                      ((int *)&g_EffectManager,5,(float *)(local_8 + 1),1,0xffffffff);
          }
        }
        this_00 = g_AnmManager;
        if (*(short *)(local_8[1].matrix.m[0] + 1) == 3) {
          this->field25_0x9e4 = this->field25_0x9e4 + 1;
          if ((this->field25_0x9e4 & 7) == 0) {
            local_3c = param_1[1];
            local_38 = param_1[2];
            local_40 = local_8[1].rotation.x;
            EffectManager::FUN_0040ef50((int *)&g_EffectManager,5,&local_40,1,0xffffffff);
          }
        }
        else {
          if (*(short *)((int)local_8[1].matrix.m[0] + 2) == 1) {
            sVar4 = local_8->anmFileIndex;
            local_80 = sVar4 + 0x20;
            local_8->anmFileIndex = local_80;
            AnmManager::SetAndExecuteScript(this_00,local_8,this_00->scripts[sVar4 + 0x20]);
            EffectManager::FUN_0040ef50
                      ((int *)&g_EffectManager,5,(float *)(local_8 + 1),1,0xffffffff);
            local_8[1].rotation.z = 0.1;
          }
          *(short *)((int)local_8[1].matrix.m[0] + 2) = 2;
          local_8[1].scaleY = local_8[1].scaleY / 8.0;
          local_8[1].scaleX = local_8[1].scaleX / 8.0;
        }
      }
    }
    local_8 = (AnmVm *)(local_8[1].matrix.m[0] + 3);
  }
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    fVar3 = this->field12_0x638[local_c].x;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pDVar1 = this->field12_0x638 + local_c;
      pDVar2 = this->field11_0x4b8 + local_c;
      local_38 = pDVar2->z - pDVar1->z * 0.5;
      local_3c = pDVar2->y - pDVar1->y * 0.5;
      local_40 = pDVar2->x - pDVar1->x * 0.5;
      pDVar1 = this->field12_0x638 + local_c;
      pDVar2 = this->field11_0x4b8 + local_c;
      local_1c = pDVar1->z * 0.5 + pDVar2->z;
      local_20 = pDVar1->y * 0.5 + pDVar2->y;
      local_24 = pDVar1->x * 0.5 + pDVar2->x;
      if (((local_40 <= local_18) && (local_24 < local_30 == (NAN(local_24) || NAN(local_30)))) &&
         ((local_3c <= local_14 && (local_20 < local_2c == (NAN(local_20) || NAN(local_2c)))))) {
        local_34 = local_34 + this->field13_0x7b8[local_c];
        this->field14_0x838[local_c] = this->field14_0x838[local_c] + this->field13_0x7b8[local_c];
        this->field25_0x9e4 = this->field25_0x9e4 + 1;
        if ((this->field25_0x9e4 & 3) == 0) {
          EffectManager::FUN_0040ef50((int *)&g_EffectManager,3,param_1,1,0xffffffff);
        }
        if (((this->inner).field0_0x0 != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}


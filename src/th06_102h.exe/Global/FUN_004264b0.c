
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int FUN_004264b0(float *param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  AnmManager *this;
  int iVar5;
  int in_ECX;
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
  local_8 = (AnmVm *)(in_ECX + 0xa28);
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
        if (*(int *)(in_ECX + 0x75c8) == 0) {
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
            FUN_0040ef50(5,local_8 + 1,1,0xffffffff);
          }
        }
        this = g_AnmManager;
        if (*(short *)(local_8[1].matrix.m[0] + 1) == 3) {
          *(char *)(in_ECX + 0x9e4) = *(char *)(in_ECX + 0x9e4) + '\x01';
          if ((*(byte *)(in_ECX + 0x9e4) & 7) == 0) {
            local_3c = param_1[1];
            local_38 = param_1[2];
            local_40 = local_8[1].rotation.x;
            FUN_0040ef50(5,&local_40,1,0xffffffff);
          }
        }
        else {
          if (*(short *)((int)local_8[1].matrix.m[0] + 2) == 1) {
            sVar4 = local_8->anmFileIndex;
            local_80 = sVar4 + 0x20;
            local_8->anmFileIndex = local_80;
            AnmManager::SetBeginingOfScript(this,local_8,this->scripts[sVar4 + 0x20]);
            FUN_0040ef50(5,local_8 + 1,1,0xffffffff);
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
    fVar3 = *(float *)(in_ECX + 0x638 + local_c * 0xc);
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfVar1 = (float *)(in_ECX + 0x638 + local_c * 0xc);
      pfVar2 = (float *)(in_ECX + 0x4b8 + local_c * 0xc);
      local_38 = pfVar2[2] - pfVar1[2] * 0.5;
      local_3c = pfVar2[1] - pfVar1[1] * 0.5;
      local_40 = *pfVar2 - *pfVar1 * 0.5;
      pfVar1 = (float *)(in_ECX + 0x638 + local_c * 0xc);
      pfVar2 = (float *)(in_ECX + 0x4b8 + local_c * 0xc);
      local_1c = pfVar1[2] * 0.5 + pfVar2[2];
      local_20 = pfVar1[1] * 0.5 + pfVar2[1];
      local_24 = *pfVar1 * 0.5 + *pfVar2;
      if (((local_40 <= local_18) && (local_24 < local_30 == (NAN(local_24) || NAN(local_30)))) &&
         ((local_3c <= local_14 && (local_20 < local_2c == (NAN(local_20) || NAN(local_2c)))))) {
        local_34 = local_34 + *(int *)(in_ECX + 0x7b8 + local_c * 4);
        *(int *)(in_ECX + 0x838 + local_c * 4) =
             *(int *)(in_ECX + 0x838 + local_c * 4) + *(int *)(in_ECX + 0x7b8 + local_c * 4);
        *(char *)(in_ECX + 0x9e4) = *(char *)(in_ECX + 0x9e4) + '\x01';
        if ((*(byte *)(in_ECX + 0x9e4) & 3) == 0) {
          FUN_0040ef50(3,param_1,1,0xffffffff);
        }
        if ((*(int *)(in_ECX + 0x75c8) != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}


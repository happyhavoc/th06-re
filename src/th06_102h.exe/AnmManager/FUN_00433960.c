
undefined4 AnmManager::FUN_00433960(AnmVm *param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  ushort uVar4;
  AnmManager *in_ECX;
  uint uVar5;
  float10 fVar6;
  undefined local_120;
  int local_e0;
  float local_3c;
  int local_38;
  long local_34;
  float local_30;
  D3DCOLOR local_2c;
  D3DCOLOR local_28;
  AnmRawInstr *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  AnmRawInstr *local_8;
  
  if (param_1->currentInstruction == (AnmRawInstr *)0x0) {
    return 1;
  }
  if (param_1->pendingInterrupt == 0) goto LAB_00433998;
LAB_00434098:
  local_24 = (AnmRawInstr *)0x0;
  for (local_8 = param_1->beginingOfScript;
      (((local_8->opcode != '\x16' || ((int)param_1->pendingInterrupt != local_8->args[0])) &&
       (local_8->opcode != '\0')) && (local_8->opcode != '\x0f'));
      local_8 = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount)) {
    if ((local_8->opcode == '\x16') && (local_8->args[0] == 0xffffffff)) {
      local_24 = local_8;
    }
  }
  param_1->pendingInterrupt = 0;
  param_1->flags = param_1->flags & 0xffffdfff;
  if (local_8->opcode != '\x16') {
    if (local_24 == (AnmRawInstr *)0x0) {
      FUN_004241e5(1);
      goto LAB_00434338;
    }
    local_8 = local_24;
  }
  param_1->currentInstruction = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount);
  (param_1->currentTimeInScript).current = (int)(short)param_1->currentInstruction->time;
  (param_1->currentTimeInScript).subFrame = 0.0;
  (param_1->currentTimeInScript).previous = -999;
  param_1->flags = param_1->flags | 1;
LAB_00433998:
  local_8 = param_1->currentInstruction;
  if ((param_1->currentTimeInScript).current < (int)(short)local_8->time) goto LAB_00434338;
  switch(local_8->opcode) {
  case '\0':
    param_1->flags = param_1->flags & 0xfffffffe;
  case '\x0f':
    param_1->currentInstruction = (AnmRawInstr *)0x0;
    return 1;
  case '\x01':
    param_1->flags = param_1->flags | 1;
    FUN_004323a0(in_ECX,param_1,local_8->args[0] + in_ECX->spriteIndices[param_1->anmFileIndex]);
    param_1->timeOfLastSpriteSet = (param_1->currentTimeInScript).current;
    break;
  case '\x02':
    param_1->scaleY = (float)local_8->args[0];
    param_1->scaleX = (float)local_8->args[1];
    break;
  case '\x03':
    *(char *)((int)&param_1->color + 3) = (char)local_8->args[0];
    break;
  case '\x04':
    param_1->color = param_1->color & 0xff000000 | local_8->args[0] & 0xffffff;
    break;
  case '\x05':
    goto switchD_004339dd_caseD_5;
  case '\a':
    param_1->flags = param_1->flags & 0xffffff3f | (param_1->flags >> 6 & 3 ^ 1) << 6;
    param_1->scaleY = param_1->scaleY * -1.0;
    break;
  case '\b':
    param_1->flags = param_1->flags & 0xffffff3f | (param_1->flags >> 6 & 3 ^ 2) << 6;
    param_1->scaleX = param_1->scaleX * -1.0;
    break;
  case '\t':
    (param_1->rotation).x = (float)local_8->args[0];
    (param_1->rotation).y = (float)local_8->args[1];
    local_10 = local_8->args + 2;
    (param_1->rotation).z = (float)*local_10;
    break;
  case '\n':
    (param_1->angleVel).x = (float)local_8->args[0];
    (param_1->angleVel).y = (float)local_8->args[1];
    local_14 = local_8->args + 2;
    (param_1->angleVel).z = (float)*local_14;
    break;
  case '\v':
    param_1->scaleInterpFinalX = (float)local_8->args[0];
    local_18 = local_8->args + 1;
    param_1->scaleInterpFinalY = (float)*local_18;
    param_1->scaleInterpEndTime = 0;
    break;
  case '\f':
    local_20 = local_8->args;
    param_1->alphaInterpInitial = param_1->color;
    param_1->alphaInterpFinal = param_1->color & 0xffffff | *local_20 << 0x18;
    param_1->alphaInterpEndTime = *(ushort *)(local_8->args + 1);
    (param_1->alphaInterpTime).current = 0;
    (param_1->alphaInterpTime).subFrame = 0.0;
    (param_1->alphaInterpTime).previous = -999;
    break;
  case '\r':
    param_1->flags = param_1->flags | 4;
    break;
  case '\x0e':
    param_1->flags = param_1->flags & 0xfffffffb;
    break;
  case '\x10':
    param_1->flags = param_1->flags | 1;
    local_c = local_8->args;
    uVar2 = *(ushort *)(local_8->args + 1);
    if (uVar2 == 0) {
      local_e0 = 0;
    }
    else {
      uVar4 = FUN_0041e780(&DAT_0069d8f8);
      local_e0 = (int)((ulonglong)uVar4 % (ulonglong)(longlong)(int)(uint)uVar2);
    }
    FUN_004323a0(in_ECX,param_1,*local_c + local_e0 + in_ECX->spriteIndices[param_1->anmFileIndex]);
    param_1->timeOfLastSpriteSet = (param_1->currentTimeInScript).current;
    break;
  case '\x11':
    if ((param_1->flags >> 5 & 1) == 0) {
      fVar1 = (float)local_8->args[2];
      fVar3 = (float)local_8->args[1];
      (param_1->pos).x = (float)local_8->args[0];
      (param_1->pos).y = fVar3;
      (param_1->pos).z = fVar1;
    }
    else {
      fVar1 = (float)local_8->args[2];
      fVar3 = (float)local_8->args[1];
      (param_1->pos2).x = (float)local_8->args[0];
      (param_1->pos2).y = fVar3;
      (param_1->pos2).z = fVar1;
    }
    break;
  case '\x12':
    param_1->flags = param_1->flags & 0xfffff3ff;
    goto LAB_00433f53;
  case '\x13':
    param_1->flags = param_1->flags & 0xfffff3ff | 0x400;
    goto LAB_00433f53;
  case '\x14':
    param_1->flags = param_1->flags & 0xfffff3ff | 0x800;
LAB_00433f53:
    if ((param_1->flags >> 5 & 1) == 0) {
      (param_1->posInterpInitial).x = (param_1->pos).x;
      (param_1->posInterpInitial).y = (param_1->pos).y;
      (param_1->posInterpInitial).z = (param_1->pos).z;
    }
    else {
      (param_1->posInterpInitial).x = (param_1->pos2).x;
      (param_1->posInterpInitial).y = (param_1->pos2).y;
      (param_1->posInterpInitial).z = (param_1->pos2).z;
    }
    fVar1 = (float)local_8->args[2];
    fVar3 = (float)local_8->args[1];
    (param_1->posInterpFinal).x = (float)local_8->args[0];
    (param_1->posInterpFinal).y = fVar3;
    (param_1->posInterpFinal).z = fVar1;
    param_1->posInterpEndTime = *(ushort *)(local_8->args + 3);
    (param_1->posInterpTime).current = 0;
    (param_1->posInterpTime).subFrame = 0.0;
    (param_1->posInterpTime).previous = -999;
    break;
  case '\x15':
    goto switchD_004339dd_caseD_15;
  case '\x17':
    param_1->flags = param_1->flags | 0x300;
    break;
  case '\x18':
    goto switchD_004339dd_caseD_18;
  case '\x19':
    param_1->flags = param_1->flags & 0xffffffdf | (local_8->args[0] & 1) << 5;
    break;
  case '\x1a':
    param_1->autoRotate = *(ushort *)local_8->args;
    break;
  case '\x1b':
    (param_1->uvScrollPos).x = (param_1->uvScrollPos).x + (float)local_8->args[0];
    if ((param_1->uvScrollPos).x < 1.0) {
      fVar1 = (param_1->uvScrollPos).x;
      if (fVar1 < 0.0 != NAN(fVar1)) {
        (param_1->uvScrollPos).x = (param_1->uvScrollPos).x + 1.0;
      }
    }
    else {
      (param_1->uvScrollPos).x = (param_1->uvScrollPos).x - 1.0;
    }
    break;
  case '\x1c':
    (param_1->uvScrollPos).y = (param_1->uvScrollPos).y + (float)local_8->args[0];
    if ((param_1->uvScrollPos).y < 1.0) {
      fVar1 = (param_1->uvScrollPos).y;
      if (fVar1 < 0.0 != NAN(fVar1)) {
        (param_1->uvScrollPos).y = (param_1->uvScrollPos).y + 1.0;
      }
    }
    else {
      (param_1->uvScrollPos).y = (param_1->uvScrollPos).y - 1.0;
    }
    break;
  case '\x1d':
    param_1->flags = param_1->flags & 0xfffffffe | local_8->args[0] & 1;
    break;
  case '\x1e':
    param_1->scaleInterpFinalX = (float)local_8->args[0];
    param_1->scaleInterpFinalY = (float)local_8->args[1];
    local_1c = local_8->args + 2;
    param_1->scaleInterpEndTime = *(ushort *)local_1c;
    (param_1->scaleInterpTime).current = 0;
    (param_1->scaleInterpTime).subFrame = 0.0;
    (param_1->scaleInterpTime).previous = -999;
    param_1->scaleInterpInitialX = param_1->scaleY;
    param_1->scaleInterpInitialY = param_1->scaleX;
    break;
  case '\x1f':
    param_1->flags = param_1->flags & 0xffffefff | (local_8->args[0] & 1) << 0xc;
  }
  param_1->currentInstruction = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount);
  goto LAB_00433998;
switchD_004339dd_caseD_18:
  param_1->flags = param_1->flags & 0xfffffffe;
switchD_004339dd_caseD_15:
  if (param_1->pendingInterrupt == 0) {
    param_1->flags = param_1->flags | 0x2000;
    FUN_004241e5(1);
LAB_00434338:
    fVar1 = (param_1->angleVel).x;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar6 = (float10)FUN_0041e850((param_1->rotation).x,
                                    (float)g_GameContext._424_4_ * (param_1->angleVel).x);
      (param_1->rotation).x = (float)fVar6;
    }
    fVar1 = (param_1->angleVel).y;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar6 = (float10)FUN_0041e850((param_1->rotation).y,
                                    (float)g_GameContext._424_4_ * (param_1->angleVel).y);
      (param_1->rotation).y = (float)fVar6;
    }
    fVar1 = (param_1->angleVel).z;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar6 = (float10)FUN_0041e850((param_1->rotation).z,
                                    (float)g_GameContext._424_4_ * (param_1->angleVel).z);
      (param_1->rotation).z = (float)fVar6;
    }
    if ((short)param_1->scaleInterpEndTime < 1) {
      param_1->scaleX = (float)g_GameContext._424_4_ * param_1->scaleInterpFinalY + param_1->scaleX;
      param_1->scaleY = (float)g_GameContext._424_4_ * param_1->scaleInterpFinalX + param_1->scaleY;
    }
    else {
      (param_1->scaleInterpTime).previous = (param_1->scaleInterpTime).current;
      FUN_00424285(&g_GameContext,&(param_1->scaleInterpTime).current,
                   &(param_1->scaleInterpTime).subFrame);
      if ((param_1->scaleInterpTime).current < (int)(short)param_1->scaleInterpEndTime) {
        param_1->scaleY =
             (((float)(param_1->scaleInterpTime).current + (param_1->scaleInterpTime).subFrame) *
             (param_1->scaleInterpFinalX - param_1->scaleInterpInitialX)) /
             (float)(int)(short)param_1->scaleInterpEndTime + param_1->scaleInterpInitialX;
        param_1->scaleX =
             (((float)(param_1->scaleInterpTime).current + (param_1->scaleInterpTime).subFrame) *
             (param_1->scaleInterpFinalY - param_1->scaleInterpInitialY)) /
             (float)(int)(short)param_1->scaleInterpEndTime + param_1->scaleInterpInitialY;
      }
      else {
        param_1->scaleX = param_1->scaleInterpFinalY;
        param_1->scaleY = param_1->scaleInterpFinalX;
        param_1->scaleInterpEndTime = 0;
        param_1->scaleInterpFinalY = 0.0;
        param_1->scaleInterpFinalX = 0.0;
      }
      if ((param_1->flags >> 6 & 1) != 0) {
        param_1->scaleY = param_1->scaleY * -1.0;
      }
      if ((param_1->flags >> 6 & 2) != 0) {
        param_1->scaleX = param_1->scaleX * -1.0;
      }
    }
    if (0 < (short)param_1->alphaInterpEndTime) {
      (param_1->alphaInterpTime).previous = (param_1->alphaInterpTime).current;
      FUN_00424285(&g_GameContext,&(param_1->alphaInterpTime).current,
                   &(param_1->alphaInterpTime).subFrame);
      local_2c = param_1->alphaInterpInitial;
      local_28 = param_1->alphaInterpFinal;
      local_30 = ((float)(param_1->alphaInterpTime).current + (param_1->alphaInterpTime).subFrame) /
                 (float)(int)(short)param_1->alphaInterpEndTime;
      if (1.0 <= local_30) {
        local_30 = 1.0;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = __ftol2((double)(((float)(uint)*(byte *)((int)&local_28 + local_38) -
                                    (float)(uint)*(byte *)((int)&local_2c + local_38)) * local_30 +
                                   (float)(uint)*(byte *)((int)&local_2c + local_38)));
        if (local_34 < 0) {
          local_34 = 0;
        }
        if (local_34 < 0x100) {
          local_120 = (undefined)local_34;
        }
        else {
          local_120 = 0xff;
        }
        *(undefined *)((int)&local_2c + local_38) = local_120;
      }
      param_1->color = local_2c;
      if ((int)(short)param_1->alphaInterpEndTime <= (param_1->alphaInterpTime).current) {
        param_1->alphaInterpEndTime = 0;
      }
    }
    if (param_1->posInterpEndTime != 0) {
      local_3c = ((float)(param_1->posInterpTime).current + (param_1->posInterpTime).subFrame) /
                 (float)(int)(short)param_1->posInterpEndTime;
      if (1.0 <= local_3c) {
        local_3c = 1.0;
      }
      uVar5 = param_1->flags >> 10 & 3;
      if (uVar5 == 1) {
        local_3c = 1.0 - (1.0 - local_3c) * (1.0 - local_3c);
      }
      else if (uVar5 == 2) {
        local_3c = 1.0 - local_3c;
        local_3c = 1.0 - local_3c * local_3c * local_3c * local_3c;
      }
      if ((param_1->flags >> 5 & 1) == 0) {
        (param_1->pos).x =
             (1.0 - local_3c) * (param_1->posInterpInitial).x +
             local_3c * (param_1->posInterpFinal).x;
        (param_1->pos).y =
             (1.0 - local_3c) * (param_1->posInterpInitial).y +
             local_3c * (param_1->posInterpFinal).y;
        (param_1->pos).z =
             (1.0 - local_3c) * (param_1->posInterpInitial).z +
             local_3c * (param_1->posInterpFinal).z;
      }
      else {
        (param_1->pos2).x =
             (1.0 - local_3c) * (param_1->posInterpInitial).x +
             local_3c * (param_1->posInterpFinal).x;
        (param_1->pos2).y =
             (1.0 - local_3c) * (param_1->posInterpInitial).y +
             local_3c * (param_1->posInterpFinal).y;
        (param_1->pos2).z =
             (1.0 - local_3c) * (param_1->posInterpInitial).z +
             local_3c * (param_1->posInterpFinal).z;
      }
      if ((int)(short)param_1->posInterpEndTime <= (param_1->posInterpTime).current) {
        param_1->posInterpEndTime = 0;
      }
      (param_1->posInterpTime).previous = (param_1->posInterpTime).current;
      FUN_00424285(&g_GameContext,&(param_1->posInterpTime).current,
                   &(param_1->posInterpTime).subFrame);
    }
    (param_1->currentTimeInScript).previous = (param_1->currentTimeInScript).current;
    FUN_00424285(&g_GameContext,&(param_1->currentTimeInScript).current,
                 &(param_1->currentTimeInScript).subFrame);
    return 0;
  }
  goto LAB_00434098;
switchD_004339dd_caseD_5:
  param_1->currentInstruction =
       (AnmRawInstr *)((int)param_1->beginingOfScript->args + (local_8->args[0] - 4));
  (param_1->currentTimeInScript).current = (int)(short)param_1->currentInstruction->time;
  goto LAB_00433998;
}


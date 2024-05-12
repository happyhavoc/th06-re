
int __thiscall AnmManager::ExecuteScript(AnmManager *this,AnmVm *vm)

{
  ushort uVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  undefined local_120;
  int randValue;
  i32 scaleInterpCurTime;
  ZunTimer *timer;
  D3DXVECTOR3 local_84;
  ushort local_6c;
  ushort local_6a;
  uint local_68;
  float local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  D3DCOLOR local_28;
  AnmRawInstr *nextInstr;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  AnmRawInstr *curInstr;
  
  if (vm->currentInstruction == (AnmRawInstr *)0x0) {
    return 1;
  }
  if (vm->pendingInterrupt == 0) goto LAB_00433998;
LAB_00434098:
  nextInstr = (AnmRawInstr *)0x0;
  for (curInstr = vm->beginingOfScript;
      (((curInstr->opcode != AnmOpcode_InterruptLabel ||
        ((int)vm->pendingInterrupt != curInstr->args[0])) && (curInstr->opcode != AnmOpcode_Exit))
      && (curInstr->opcode != AnmOpcode_ExitHide));
      curInstr = (AnmRawInstr *)((int)curInstr->args + (uint)curInstr->argsCount)) {
    if ((curInstr->opcode == AnmOpcode_InterruptLabel) && (curInstr->args[0] == 0xffffffff)) {
      nextInstr = curInstr;
    }
  }
  vm->pendingInterrupt = 0;
  *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffdfff;
  if (curInstr->opcode != AnmOpcode_InterruptLabel) {
    if (nextInstr == (AnmRawInstr *)0x0) {
      ZunTimer::Decrement(&vm->currentTimeInScript,1);
      goto LAB_00434338;
    }
    curInstr = nextInstr;
  }
  vm->currentInstruction = (AnmRawInstr *)((int)curInstr->args + (uint)curInstr->argsCount);
  (vm->currentTimeInScript).current = (int)(short)vm->currentInstruction->time;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
LAB_00433998:
  curInstr = vm->currentInstruction;
  if ((vm->currentTimeInScript).current < (int)(short)curInstr->time) goto LAB_00434338;
  switch(curInstr->opcode) {
  case AnmOpcode_Exit:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe;
  case AnmOpcode_ExitHide:
    vm->currentInstruction = (AnmRawInstr *)0x0;
    return 1;
  case AnmOpcode_SetActiveSprite:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
    SetActiveSprite(this,vm,curInstr->args[0] + this->spriteIndices[vm->anmFileIndex]);
    vm->timeOfLastSpriteSet = (vm->currentTimeInScript).current;
    break;
  case AnmOpcode_SetScale:
    vm->scaleX = (float)curInstr->args[0];
    vm->scaleY = (float)curInstr->args[1];
    break;
  case AnmOpcode_SetAlpha:
    (vm->color).bytes[3] = (byte)curInstr->args[0];
    break;
  case AnmOpcode_SetColor:
    (vm->color).color = (vm->color).color & 0xff000000 | curInstr->args[0] & 0xffffff;
    break;
  case AnmOpcode_Jump:
    goto switchD_004339dd_caseD_5;
  case AnmOpcode_FlipX:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffff3f | (*(uint *)&vm->flags >> 6 & 3 ^ 1) << 6
    ;
    vm->scaleX = vm->scaleX * -1.0;
    break;
  case AnmOpcode_FlipY:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffff3f | (*(uint *)&vm->flags >> 6 & 3 ^ 2) << 6
    ;
    vm->scaleY = vm->scaleY * -1.0;
    break;
  case AnmOpcode_SetRotation:
    (vm->rotation).x = (float)curInstr->args[0];
    (vm->rotation).y = (float)curInstr->args[1];
    local_10 = curInstr->args + 2;
    (vm->rotation).z = (float)*local_10;
    break;
  case AnmOpcode_SetPosition:
    (vm->angleVel).x = (float)curInstr->args[0];
    (vm->angleVel).y = (float)curInstr->args[1];
    local_14 = curInstr->args + 2;
    (vm->angleVel).z = (float)*local_14;
    break;
  case AnmOpcode_SetScaleSpeed:
    vm->scaleInterpFinalX = (float)curInstr->args[0];
    local_18 = curInstr->args + 1;
    vm->scaleInterpFinalY = (float)*local_18;
    vm->scaleInterpEndTime = 0;
    break;
  case AnmOpcode_Fade:
    local_20 = curInstr->args;
    vm->alphaInterpInitial = (D3DCOLOR)vm->color;
    vm->alphaInterpFinal = (vm->color).color & 0xffffff | *local_20 << 0x18;
    vm->alphaInterpEndTime = *(ushort *)(curInstr->args + 1);
    (vm->alphaInterpTime).current = 0;
    (vm->alphaInterpTime).subFrame = 0.0;
    (vm->alphaInterpTime).previous = -999;
    break;
  case AnmOpcode_SetBlendAdditive:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 4;
    break;
  case AnmOpcode_SetBlendDefault:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffb;
    break;
  case AnmOpcode_SetRandomSprite:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
    local_c = curInstr->args;
    uVar1 = *(ushort *)(curInstr->args + 1);
    if (uVar1 == 0) {
      randValue = 0;
    }
    else {
      uVar3 = Rng::GetRandomU16(&g_Rng);
      randValue = (int)((ulonglong)uVar3 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    SetActiveSprite(this,vm,*local_c + randValue + this->spriteIndices[vm->anmFileIndex]);
    vm->timeOfLastSpriteSet = (vm->currentTimeInScript).current;
    break;
  case AnmOpcode_SetTranslation:
    if ((*(uint *)&vm->flags >> 5 & 1) == 0) {
      fVar5 = (float)curInstr->args[2];
      fVar2 = (float)curInstr->args[1];
      (vm->pos).x = (float)curInstr->args[0];
      (vm->pos).y = fVar2;
      (vm->pos).z = fVar5;
    }
    else {
      fVar5 = (float)curInstr->args[2];
      fVar2 = (float)curInstr->args[1];
      (vm->offset).x = (float)curInstr->args[0];
      (vm->offset).y = fVar2;
      (vm->offset).z = fVar5;
    }
    break;
  case AnmOpcode_PosTimeLinear:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff;
    goto LAB_00433f53;
  case AnmOpcode_PosTimeDecel:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff | 0x400;
    goto LAB_00433f53;
  case AnmOpcode_PosTimeAccel:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff | 0x800;
LAB_00433f53:
    if ((*(uint *)&vm->flags >> 5 & 1) == 0) {
      (vm->posInterpInitial).x = (vm->pos).x;
      (vm->posInterpInitial).y = (vm->pos).y;
      (vm->posInterpInitial).z = (vm->pos).z;
    }
    else {
      (vm->posInterpInitial).x = (vm->offset).x;
      (vm->posInterpInitial).y = (vm->offset).y;
      (vm->posInterpInitial).z = (vm->offset).z;
    }
    fVar5 = (float)curInstr->args[2];
    fVar2 = (float)curInstr->args[1];
    (vm->posInterpFinal).x = (float)curInstr->args[0];
    (vm->posInterpFinal).y = fVar2;
    (vm->posInterpFinal).z = fVar5;
    vm->posInterpEndTime = *(ushort *)(curInstr->args + 3);
    (vm->posInterpTime).current = 0;
    (vm->posInterpTime).subFrame = 0.0;
    (vm->posInterpTime).previous = -999;
    break;
  case AnmOpcode_Stop:
    goto switchD_004339dd_caseD_15;
  case AnmOpcode_23:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 0x300;
    break;
  case AnmOpcode_StopHide:
    goto switchD_004339dd_caseD_18;
  case AnmOpcode_25:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffffdf | (curInstr->args[0] & 1) << 5;
    break;
  case AnmOpcode_SetAutoRotate:
    vm->autoRotate = *(ushort *)curInstr->args;
    break;
  case AnmOpcode_27:
    (vm->uvScrollPos).x = (vm->uvScrollPos).x + (float)curInstr->args[0];
    if ((vm->uvScrollPos).x < 1.0) {
      fVar5 = (vm->uvScrollPos).x;
      if (fVar5 < 0.0 != NAN(fVar5)) {
        (vm->uvScrollPos).x = (vm->uvScrollPos).x + 1.0;
      }
    }
    else {
      (vm->uvScrollPos).x = (vm->uvScrollPos).x - 1.0;
    }
    break;
  case AnmOpcode_28:
    (vm->uvScrollPos).y = (vm->uvScrollPos).y + (float)curInstr->args[0];
    if ((vm->uvScrollPos).y < 1.0) {
      fVar5 = (vm->uvScrollPos).y;
      if (fVar5 < 0.0 != NAN(fVar5)) {
        (vm->uvScrollPos).y = (vm->uvScrollPos).y + 1.0;
      }
    }
    else {
      (vm->uvScrollPos).y = (vm->uvScrollPos).y - 1.0;
    }
    break;
  case AnmOpcode_SetVisibility:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe | curInstr->args[0] & 1;
    break;
  case AnmOpcode_30:
    vm->scaleInterpFinalX = (float)curInstr->args[0];
    vm->scaleInterpFinalY = (float)curInstr->args[1];
    local_1c = curInstr->args + 2;
    vm->scaleInterpEndTime = *(short *)local_1c;
    (vm->scaleInterpTime).current = 0;
    (vm->scaleInterpTime).subFrame = 0.0;
    (vm->scaleInterpTime).previous = -999;
    vm->scaleInterpInitialX = vm->scaleX;
    vm->scaleInterpInitialY = vm->scaleY;
    break;
  case AnmOpcode_31:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffefff | (curInstr->args[0] & 1) << 0xc;
  }
  vm->currentInstruction = (AnmRawInstr *)((int)curInstr->args + (uint)curInstr->argsCount);
  goto LAB_00433998;
switchD_004339dd_caseD_18:
  *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe;
switchD_004339dd_caseD_15:
  if (vm->pendingInterrupt == 0) {
    *(uint *)&vm->flags = *(uint *)&vm->flags | 0x2000;
    ZunTimer::Decrement(&vm->currentTimeInScript,1);
LAB_00434338:
    fVar5 = (vm->angleVel).x;
    if (NAN(fVar5) == (fVar5 == 0.0)) {
      fVar5 = AddNormalizeAngle((vm->rotation).x,
                                g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).x);
      (vm->rotation).x = fVar5;
    }
    fVar5 = (vm->angleVel).y;
    if (NAN(fVar5) == (fVar5 == 0.0)) {
      fVar5 = AddNormalizeAngle((vm->rotation).y,
                                g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).y);
      (vm->rotation).y = fVar5;
    }
    fVar5 = (vm->angleVel).z;
    if (NAN(fVar5) == (fVar5 == 0.0)) {
      fVar5 = AddNormalizeAngle((vm->rotation).z,
                                g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).z);
      (vm->rotation).z = fVar5;
    }
    if (vm->scaleInterpEndTime < 1) {
      vm->scaleY = g_Supervisor.effectiveFramerateMultiplier * vm->scaleInterpFinalY + vm->scaleY;
      vm->scaleX = g_Supervisor.effectiveFramerateMultiplier * vm->scaleInterpFinalX + vm->scaleX;
    }
    else {
      (vm->scaleInterpTime).previous = (vm->scaleInterpTime).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(vm->scaleInterpTime).current,&(vm->scaleInterpTime).subFrame);
      if ((vm->scaleInterpTime).current < (int)vm->scaleInterpEndTime) {
        vm->scaleX = (((float)(vm->scaleInterpTime).current + (vm->scaleInterpTime).subFrame) *
                     (vm->scaleInterpFinalX - vm->scaleInterpInitialX)) /
                     (float)(int)vm->scaleInterpEndTime + vm->scaleInterpInitialX;
        vm->scaleY = (((float)(vm->scaleInterpTime).current + (vm->scaleInterpTime).subFrame) *
                     (vm->scaleInterpFinalY - vm->scaleInterpInitialY)) /
                     (float)(int)vm->scaleInterpEndTime + vm->scaleInterpInitialY;
      }
      else {
        vm->scaleY = vm->scaleInterpFinalY;
        vm->scaleX = vm->scaleInterpFinalX;
        vm->scaleInterpEndTime = 0;
        vm->scaleInterpFinalY = 0.0;
        vm->scaleInterpFinalX = 0.0;
      }
      if ((*(uint *)&vm->flags >> 6 & 1) != 0) {
        vm->scaleX = vm->scaleX * -1.0;
      }
      if ((*(uint *)&vm->flags >> 6 & 2) != 0) {
        vm->scaleY = vm->scaleY * -1.0;
      }
    }
    if (0 < (short)vm->alphaInterpEndTime) {
      (vm->alphaInterpTime).previous = (vm->alphaInterpTime).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(vm->alphaInterpTime).current,&(vm->alphaInterpTime).subFrame);
      local_2c = vm->alphaInterpInitial;
      local_28 = vm->alphaInterpFinal;
      local_30 = (uint)(((float)(vm->alphaInterpTime).current + (vm->alphaInterpTime).subFrame) /
                       (float)(int)(short)vm->alphaInterpEndTime);
      if (1.0 <= (float)local_30) {
        local_30 = 0x3f800000;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = __ftol2(((float)(uint)*(byte *)((int)&local_28 + local_38) -
                           (float)(uint)*(byte *)((int)&local_2c + local_38)) * (float)local_30 +
                           (float)(uint)*(byte *)((int)&local_2c + local_38));
        if ((int)local_34 < 0) {
          local_34 = 0;
        }
        if ((int)local_34 < 0x100) {
          local_120 = (undefined)local_34;
        }
        else {
          local_120 = 0xff;
        }
        *(undefined *)((int)&local_2c + local_38) = local_120;
      }
      (vm->color).color = local_2c;
      if ((int)(short)vm->alphaInterpEndTime <= (vm->alphaInterpTime).current) {
        vm->alphaInterpEndTime = 0;
      }
    }
    if (vm->posInterpEndTime != 0) {
      local_3c = ((float)(vm->posInterpTime).current + (vm->posInterpTime).subFrame) /
                 (float)(int)(short)vm->posInterpEndTime;
      if (1.0 <= local_3c) {
        local_3c = 1.0;
      }
      uVar4 = *(uint *)&vm->flags >> 10 & 3;
      if (uVar4 == 1) {
        local_3c = 1.0 - (1.0 - local_3c) * (1.0 - local_3c);
      }
      else if (uVar4 == 2) {
        local_3c = 1.0 - local_3c;
        local_3c = 1.0 - local_3c * local_3c * local_3c * local_3c;
      }
      if ((*(uint *)&vm->flags >> 5 & 1) == 0) {
        (vm->pos).x = (1.0 - local_3c) * (vm->posInterpInitial).x +
                      local_3c * (vm->posInterpFinal).x;
        (vm->pos).y = (1.0 - local_3c) * (vm->posInterpInitial).y +
                      local_3c * (vm->posInterpFinal).y;
        (vm->pos).z = (1.0 - local_3c) * (vm->posInterpInitial).z +
                      local_3c * (vm->posInterpFinal).z;
      }
      else {
        (vm->offset).x =
             (1.0 - local_3c) * (vm->posInterpInitial).x + local_3c * (vm->posInterpFinal).x;
        (vm->offset).y =
             (1.0 - local_3c) * (vm->posInterpInitial).y + local_3c * (vm->posInterpFinal).y;
        (vm->offset).z =
             (1.0 - local_3c) * (vm->posInterpInitial).z + local_3c * (vm->posInterpFinal).z;
      }
      if ((int)(short)vm->posInterpEndTime <= (vm->posInterpTime).current) {
        vm->posInterpEndTime = 0;
      }
      (vm->posInterpTime).previous = (vm->posInterpTime).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(vm->posInterpTime).current,&(vm->posInterpTime).subFrame);
    }
    (vm->currentTimeInScript).previous = (vm->currentTimeInScript).current;
    Supervisor::TickTimer
              (&g_Supervisor,&(vm->currentTimeInScript).current,&(vm->currentTimeInScript).subFrame)
    ;
    return 0;
  }
  goto LAB_00434098;
switchD_004339dd_caseD_5:
  vm->currentInstruction =
       (AnmRawInstr *)((int)vm->beginingOfScript->args + (curInstr->args[0] - 4));
  (vm->currentTimeInScript).current = (int)(short)vm->currentInstruction->time;
  goto LAB_00433998;
}


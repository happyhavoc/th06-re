
int __thiscall AnmManager::ExecuteScript(AnmManager *this,AnmVm *vm)

{
  ushort uVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  byte local_120;
  int local_e0;
  float local_3c;
  int local_38;
  long local_34;
  float local_30;
  D3DCOLORUNION local_2c;
  D3DCOLOR local_28;
  AnmRawInstr *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  AnmRawInstr *local_8;
  
  if (vm->currentInstruction == (AnmRawInstr *)0x0) {
    return 1;
  }
  if (vm->pendingInterrupt == 0) goto LAB_00433998;
LAB_00434098:
  local_24 = (AnmRawInstr *)0x0;
  for (local_8 = vm->beginingOfScript;
      (((local_8->opcode != AnmOpcode_22 || ((int)vm->pendingInterrupt != local_8->args[0])) &&
       (local_8->opcode != AnmOpcode_Exit)) && (local_8->opcode != AnmOpcode_ExitHide));
      local_8 = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount)) {
    if ((local_8->opcode == AnmOpcode_22) && (local_8->args[0] == 0xffffffff)) {
      local_24 = local_8;
    }
  }
  vm->pendingInterrupt = 0;
  *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffdfff;
  if (local_8->opcode != AnmOpcode_22) {
    if (local_24 == (AnmRawInstr *)0x0) {
      ZunTimer::Decrement(&vm->currentTimeInScript,1);
      goto LAB_00434338;
    }
    local_8 = local_24;
  }
  vm->currentInstruction = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount);
  (vm->currentTimeInScript).current = (int)(short)vm->currentInstruction->time;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
LAB_00433998:
  local_8 = vm->currentInstruction;
  if ((vm->currentTimeInScript).current < (int)(short)local_8->time) goto LAB_00434338;
  switch(local_8->opcode) {
  case AnmOpcode_Exit:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe;
  case AnmOpcode_ExitHide:
    vm->currentInstruction = (AnmRawInstr *)0x0;
    return 1;
  case AnmOpcode_SetActiveSprite:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
    SetActiveSprite(this,vm,local_8->args[0] + this->spriteIndices[vm->anmFileIndex]);
    vm->timeOfLastSpriteSet = (vm->currentTimeInScript).current;
    break;
  case AnmOpcode_SetScale:
    vm->scaleX = (float)local_8->args[0];
    vm->scaleY = (float)local_8->args[1];
    break;
  case AnmOpcode_SetAlpha:
    (vm->color).bytes[3] = (byte)local_8->args[0];
    break;
  case AnmOpcode_SetColor:
    (vm->color).color = (vm->color).color & 0xff000000 | local_8->args[0] & 0xffffff;
    break;
  case AnmOpcode_5:
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
    (vm->rotation).x = (float)local_8->args[0];
    (vm->rotation).y = (float)local_8->args[1];
    local_10 = local_8->args + 2;
    (vm->rotation).z = (float)*local_10;
    break;
  case AnmOpcode_10:
    (vm->angleVel).x = (float)local_8->args[0];
    (vm->angleVel).y = (float)local_8->args[1];
    local_14 = local_8->args + 2;
    (vm->angleVel).z = (float)*local_14;
    break;
  case AnmOpcode_11:
    vm->scaleInterpFinalX = (float)local_8->args[0];
    local_18 = local_8->args + 1;
    vm->scaleInterpFinalY = (float)*local_18;
    vm->scaleInterpEndTime = 0;
    break;
  case AnmOpcode_12:
    local_20 = local_8->args;
    vm->alphaInterpInitial = (D3DCOLOR)vm->color;
    vm->alphaInterpFinal = (vm->color).color & 0xffffff | *local_20 << 0x18;
    vm->alphaInterpEndTime = *(ushort *)(local_8->args + 1);
    (vm->alphaInterpTime).current = 0;
    (vm->alphaInterpTime).subFrame = 0.0;
    (vm->alphaInterpTime).previous = -999;
    break;
  case AnmOpcode_13:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 4;
    break;
  case AnmOpcode_14:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffb;
    break;
  case AnmOpcode_16:
    *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
    local_c = local_8->args;
    uVar1 = *(ushort *)(local_8->args + 1);
    if (uVar1 == 0) {
      local_e0 = 0;
    }
    else {
      uVar3 = Rng::GetRandomU16(&g_Rng);
      local_e0 = (int)((ulonglong)uVar3 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    SetActiveSprite(this,vm,*local_c + local_e0 + this->spriteIndices[vm->anmFileIndex]);
    vm->timeOfLastSpriteSet = (vm->currentTimeInScript).current;
    break;
  case AnmOpcode_17:
    if ((*(uint *)&vm->flags >> 5 & 1) == 0) {
      fVar5 = (float)local_8->args[2];
      fVar2 = (float)local_8->args[1];
      (vm->pos).x = (float)local_8->args[0];
      (vm->pos).y = fVar2;
      (vm->pos).z = fVar5;
    }
    else {
      fVar5 = (float)local_8->args[2];
      fVar2 = (float)local_8->args[1];
      (vm->pos2).x = (float)local_8->args[0];
      (vm->pos2).y = fVar2;
      (vm->pos2).z = fVar5;
    }
    break;
  case AnmOpcode_18:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff;
    goto LAB_00433f53;
  case AnmOpcode_19:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff | 0x400;
    goto LAB_00433f53;
  case AnmOpcode_20:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffff3ff | 0x800;
LAB_00433f53:
    if ((*(uint *)&vm->flags >> 5 & 1) == 0) {
      (vm->posInterpInitial).x = (vm->pos).x;
      (vm->posInterpInitial).y = (vm->pos).y;
      (vm->posInterpInitial).z = (vm->pos).z;
    }
    else {
      (vm->posInterpInitial).x = (vm->pos2).x;
      (vm->posInterpInitial).y = (vm->pos2).y;
      (vm->posInterpInitial).z = (vm->pos2).z;
    }
    fVar5 = (float)local_8->args[2];
    fVar2 = (float)local_8->args[1];
    (vm->posInterpFinal).x = (float)local_8->args[0];
    (vm->posInterpFinal).y = fVar2;
    (vm->posInterpFinal).z = fVar5;
    vm->posInterpEndTime = *(ushort *)(local_8->args + 3);
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
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffffdf | (local_8->args[0] & 1) << 5;
    break;
  case AnmOpcode_26:
    vm->autoRotate = *(ushort *)local_8->args;
    break;
  case AnmOpcode_27:
    (vm->uvScrollPos).x = (vm->uvScrollPos).x + (float)local_8->args[0];
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
    (vm->uvScrollPos).y = (vm->uvScrollPos).y + (float)local_8->args[0];
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
  case AnmOpcode_29:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe | local_8->args[0] & 1;
    break;
  case AnmOpcode_30:
    vm->scaleInterpFinalX = (float)local_8->args[0];
    vm->scaleInterpFinalY = (float)local_8->args[1];
    local_1c = local_8->args + 2;
    vm->scaleInterpEndTime = *(ushort *)local_1c;
    (vm->scaleInterpTime).current = 0;
    (vm->scaleInterpTime).subFrame = 0.0;
    (vm->scaleInterpTime).previous = -999;
    vm->scaleInterpInitialX = vm->scaleX;
    vm->scaleInterpInitialY = vm->scaleY;
    break;
  case AnmOpcode_31:
    *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffefff | (local_8->args[0] & 1) << 0xc;
  }
  vm->currentInstruction = (AnmRawInstr *)((int)local_8->args + (uint)local_8->argsCount);
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
      fVar5 = add_normalize_angle((vm->rotation).x,
                                  g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).x);
      (vm->rotation).x = fVar5;
    }
    fVar5 = (vm->angleVel).y;
    if (NAN(fVar5) == (fVar5 == 0.0)) {
      fVar5 = add_normalize_angle((vm->rotation).y,
                                  g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).y);
      (vm->rotation).y = fVar5;
    }
    fVar5 = (vm->angleVel).z;
    if (NAN(fVar5) == (fVar5 == 0.0)) {
      fVar5 = add_normalize_angle((vm->rotation).z,
                                  g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).z);
      (vm->rotation).z = fVar5;
    }
    if ((short)vm->scaleInterpEndTime < 1) {
      vm->scaleY = g_Supervisor.effectiveFramerateMultiplier * vm->scaleInterpFinalY + vm->scaleY;
      vm->scaleX = g_Supervisor.effectiveFramerateMultiplier * vm->scaleInterpFinalX + vm->scaleX;
    }
    else {
      (vm->scaleInterpTime).previous = (vm->scaleInterpTime).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(vm->scaleInterpTime).current,&(vm->scaleInterpTime).subFrame);
      if ((vm->scaleInterpTime).current < (int)(short)vm->scaleInterpEndTime) {
        vm->scaleX = (((float)(vm->scaleInterpTime).current + (vm->scaleInterpTime).subFrame) *
                     (vm->scaleInterpFinalX - vm->scaleInterpInitialX)) /
                     (float)(int)(short)vm->scaleInterpEndTime + vm->scaleInterpInitialX;
        vm->scaleY = (((float)(vm->scaleInterpTime).current + (vm->scaleInterpTime).subFrame) *
                     (vm->scaleInterpFinalY - vm->scaleInterpInitialY)) /
                     (float)(int)(short)vm->scaleInterpEndTime + vm->scaleInterpInitialY;
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
      local_2c.color = vm->alphaInterpInitial;
      local_28 = vm->alphaInterpFinal;
      local_30 = ((float)(vm->alphaInterpTime).current + (vm->alphaInterpTime).subFrame) /
                 (float)(int)(short)vm->alphaInterpEndTime;
      if (1.0 <= local_30) {
        local_30 = 1.0;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = __ftol2(((float)(uint)*(byte *)((int)&local_28 + local_38) -
                           (float)(uint)local_2c.bytes[local_38]) * local_30 +
                           (float)(uint)local_2c.bytes[local_38]);
        if (local_34 < 0) {
          local_34 = 0;
        }
        if (local_34 < 0x100) {
          local_120 = (byte)local_34;
        }
        else {
          local_120 = 0xff;
        }
        local_2c.bytes[local_38] = local_120;
      }
      vm->color = local_2c;
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
        (vm->pos2).x = (1.0 - local_3c) * (vm->posInterpInitial).x +
                       local_3c * (vm->posInterpFinal).x;
        (vm->pos2).y = (1.0 - local_3c) * (vm->posInterpInitial).y +
                       local_3c * (vm->posInterpFinal).y;
        (vm->pos2).z = (1.0 - local_3c) * (vm->posInterpInitial).z +
                       local_3c * (vm->posInterpFinal).z;
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
  vm->currentInstruction = (AnmRawInstr *)((int)vm->beginingOfScript->args + (local_8->args[0] - 4))
  ;
  (vm->currentTimeInScript).current = (int)(short)vm->currentInstruction->time;
  goto LAB_00433998;
}


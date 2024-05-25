
int __thiscall AnmManager::ExecuteScript(AnmManager *this,AnmVm *vm)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
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
  uVar29._0_2_ = vm->flags;
  uVar29._2_1_ = vm->unk_82[0];
  uVar29._3_1_ = vm->unk_82[1];
  uVar29 = uVar29 & 0xffffdfff;
  vm->flags = (short)uVar29;
  vm->unk_82[0] = (char)(uVar29 >> 0x10);
  vm->unk_82[1] = (char)(uVar29 >> 0x18);
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
  uVar27._0_2_ = vm->flags;
  uVar27._2_1_ = vm->unk_82[0];
  uVar27._3_1_ = vm->unk_82[1];
  uVar27 = uVar27 | 1;
  vm->flags = (short)uVar27;
  vm->unk_82[0] = (char)(uVar27 >> 0x10);
  vm->unk_82[1] = (char)(uVar27 >> 0x18);
LAB_00433998:
  curInstr = vm->currentInstruction;
  if ((vm->currentTimeInScript).current < (int)(short)curInstr->time) goto LAB_00434338;
  switch(curInstr->opcode) {
  case AnmOpcode_Exit:
    uVar24._0_2_ = vm->flags;
    uVar24._2_1_ = vm->unk_82[0];
    uVar24._3_1_ = vm->unk_82[1];
    uVar24 = uVar24 & 0xfffffffe;
    vm->flags = (short)uVar24;
    vm->unk_82[0] = (char)(uVar24 >> 0x10);
    vm->unk_82[1] = (char)(uVar24 >> 0x18);
  case AnmOpcode_ExitHide:
    vm->currentInstruction = (AnmRawInstr *)0x0;
    return 1;
  case AnmOpcode_SetActiveSprite:
    uVar28._0_2_ = vm->flags;
    uVar28._2_1_ = vm->unk_82[0];
    uVar28._3_1_ = vm->unk_82[1];
    uVar28 = uVar28 | 1;
    vm->flags = (short)uVar28;
    vm->unk_82[0] = (char)(uVar28 >> 0x10);
    vm->unk_82[1] = (char)(uVar28 >> 0x18);
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
    uVar2._0_2_ = vm->flags;
    uVar2._2_1_ = vm->unk_82[0];
    uVar2._3_1_ = vm->unk_82[1];
    uVar3._0_2_ = vm->flags;
    uVar3._2_1_ = vm->unk_82[0];
    uVar3._3_1_ = vm->unk_82[1];
    uVar29 = uVar3 & 0xffffff3f | (uVar2 >> 6 & 3 ^ 1) << 6;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
    vm->scaleX = vm->scaleX * -1.0;
    break;
  case AnmOpcode_FlipY:
    uVar5._0_2_ = vm->flags;
    uVar5._2_1_ = vm->unk_82[0];
    uVar5._3_1_ = vm->unk_82[1];
    uVar6._0_2_ = vm->flags;
    uVar6._2_1_ = vm->unk_82[0];
    uVar6._3_1_ = vm->unk_82[1];
    uVar29 = uVar6 & 0xffffff3f | (uVar5 >> 6 & 3 ^ 2) << 6;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
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
    uVar19._0_2_ = vm->flags;
    uVar19._2_1_ = vm->unk_82[0];
    uVar19._3_1_ = vm->unk_82[1];
    uVar19 = uVar19 | 4;
    vm->flags = (short)uVar19;
    vm->unk_82[0] = (char)(uVar19 >> 0x10);
    vm->unk_82[1] = (char)(uVar19 >> 0x18);
    break;
  case AnmOpcode_SetBlendDefault:
    uVar20._0_2_ = vm->flags;
    uVar20._2_1_ = vm->unk_82[0];
    uVar20._3_1_ = vm->unk_82[1];
    uVar20 = uVar20 & 0xfffffffb;
    vm->flags = (short)uVar20;
    vm->unk_82[0] = (char)(uVar20 >> 0x10);
    vm->unk_82[1] = (char)(uVar20 >> 0x18);
    break;
  case AnmOpcode_SetRandomSprite:
    uVar25._0_2_ = vm->flags;
    uVar25._2_1_ = vm->unk_82[0];
    uVar25._3_1_ = vm->unk_82[1];
    uVar25 = uVar25 | 1;
    vm->flags = (short)uVar25;
    vm->unk_82[0] = (char)(uVar25 >> 0x10);
    vm->unk_82[1] = (char)(uVar25 >> 0x18);
    local_c = curInstr->args;
    uVar1 = *(ushort *)(curInstr->args + 1);
    if (uVar1 == 0) {
      randValue = 0;
    }
    else {
      uVar18 = Rng::GetRandomU16(&g_Rng);
      randValue = (int)((ulonglong)uVar18 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    SetActiveSprite(this,vm,*local_c + randValue + this->spriteIndices[vm->anmFileIndex]);
    vm->timeOfLastSpriteSet = (vm->currentTimeInScript).current;
    break;
  case AnmOpcode_SetTranslation:
    uVar7._0_2_ = vm->flags;
    uVar7._2_1_ = vm->unk_82[0];
    uVar7._3_1_ = vm->unk_82[1];
    if ((uVar7 >> 5 & 1) == 0) {
      fVar30 = (float)curInstr->args[2];
      fVar11 = (float)curInstr->args[1];
      (vm->pos).x = (float)curInstr->args[0];
      (vm->pos).y = fVar11;
      (vm->pos).z = fVar30;
    }
    else {
      fVar30 = (float)curInstr->args[2];
      fVar11 = (float)curInstr->args[1];
      (vm->offset).x = (float)curInstr->args[0];
      (vm->offset).y = fVar11;
      (vm->offset).z = fVar30;
    }
    break;
  case AnmOpcode_PosTimeLinear:
    uVar21._0_2_ = vm->flags;
    uVar21._2_1_ = vm->unk_82[0];
    uVar21._3_1_ = vm->unk_82[1];
    uVar21 = uVar21 & 0xfffff3ff;
    vm->flags = (short)uVar21;
    vm->unk_82[0] = (char)(uVar21 >> 0x10);
    vm->unk_82[1] = (char)(uVar21 >> 0x18);
    goto LAB_00433f53;
  case AnmOpcode_PosTimeDecel:
    uVar9._0_2_ = vm->flags;
    uVar9._2_1_ = vm->unk_82[0];
    uVar9._3_1_ = vm->unk_82[1];
    uVar29 = uVar9 & 0xfffff3ff | 0x400;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
    goto LAB_00433f53;
  case AnmOpcode_PosTimeAccel:
    uVar8._0_2_ = vm->flags;
    uVar8._2_1_ = vm->unk_82[0];
    uVar8._3_1_ = vm->unk_82[1];
    uVar29 = uVar8 & 0xfffff3ff | 0x800;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
LAB_00433f53:
    uVar10._0_2_ = vm->flags;
    uVar10._2_1_ = vm->unk_82[0];
    uVar10._3_1_ = vm->unk_82[1];
    if ((uVar10 >> 5 & 1) == 0) {
      (vm->posInterpInitial).x = (vm->pos).x;
      (vm->posInterpInitial).y = (vm->pos).y;
      (vm->posInterpInitial).z = (vm->pos).z;
    }
    else {
      (vm->posInterpInitial).x = (vm->offset).x;
      (vm->posInterpInitial).y = (vm->offset).y;
      (vm->posInterpInitial).z = (vm->offset).z;
    }
    fVar30 = (float)curInstr->args[2];
    fVar11 = (float)curInstr->args[1];
    (vm->posInterpFinal).x = (float)curInstr->args[0];
    (vm->posInterpFinal).y = fVar11;
    (vm->posInterpFinal).z = fVar30;
    vm->posInterpEndTime = *(ushort *)(curInstr->args + 3);
    (vm->posInterpTime).current = 0;
    (vm->posInterpTime).subFrame = 0.0;
    (vm->posInterpTime).previous = -999;
    break;
  case AnmOpcode_Stop:
    goto switchD_004339dd_caseD_15;
  case AnmOpcode_23:
    uVar23._0_2_ = vm->flags;
    uVar23._2_1_ = vm->unk_82[0];
    uVar23._3_1_ = vm->unk_82[1];
    uVar23 = uVar23 | 0x300;
    vm->flags = (short)uVar23;
    vm->unk_82[0] = (char)(uVar23 >> 0x10);
    vm->unk_82[1] = (char)(uVar23 >> 0x18);
    break;
  case AnmOpcode_StopHide:
    goto switchD_004339dd_caseD_18;
  case AnmOpcode_25:
    uVar4._0_2_ = vm->flags;
    uVar4._2_1_ = vm->unk_82[0];
    uVar4._3_1_ = vm->unk_82[1];
    uVar29 = uVar4 & 0xffffffdf | (curInstr->args[0] & 1) << 5;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
    break;
  case AnmOpcode_SetAutoRotate:
    vm->autoRotate = *(ushort *)curInstr->args;
    break;
  case AnmOpcode_27:
    (vm->uvScrollPos).x = (vm->uvScrollPos).x + (float)curInstr->args[0];
    if ((vm->uvScrollPos).x < 1.0) {
      fVar30 = (vm->uvScrollPos).x;
      if (fVar30 < 0.0 != NAN(fVar30)) {
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
      fVar30 = (vm->uvScrollPos).y;
      if (fVar30 < 0.0 != NAN(fVar30)) {
        (vm->uvScrollPos).y = (vm->uvScrollPos).y + 1.0;
      }
    }
    else {
      (vm->uvScrollPos).y = (vm->uvScrollPos).y - 1.0;
    }
    break;
  case AnmOpcode_SetVisibility:
    uVar12._0_2_ = vm->flags;
    uVar12._2_1_ = vm->unk_82[0];
    uVar12._3_1_ = vm->unk_82[1];
    uVar29 = uVar12 & 0xfffffffe | curInstr->args[0] & 1;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
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
    uVar13._0_2_ = vm->flags;
    uVar13._2_1_ = vm->unk_82[0];
    uVar13._3_1_ = vm->unk_82[1];
    uVar29 = uVar13 & 0xffffefff | (curInstr->args[0] & 1) << 0xc;
    vm->flags = (short)uVar29;
    vm->unk_82[0] = (char)(uVar29 >> 0x10);
    vm->unk_82[1] = (char)(uVar29 >> 0x18);
  }
  vm->currentInstruction = (AnmRawInstr *)((int)curInstr->args + (uint)curInstr->argsCount);
  goto LAB_00433998;
switchD_004339dd_caseD_18:
  uVar26._0_2_ = vm->flags;
  uVar26._2_1_ = vm->unk_82[0];
  uVar26._3_1_ = vm->unk_82[1];
  uVar26 = uVar26 & 0xfffffffe;
  vm->flags = (short)uVar26;
  vm->unk_82[0] = (char)(uVar26 >> 0x10);
  vm->unk_82[1] = (char)(uVar26 >> 0x18);
switchD_004339dd_caseD_15:
  if (vm->pendingInterrupt == 0) {
    uVar22._0_2_ = vm->flags;
    uVar22._2_1_ = vm->unk_82[0];
    uVar22._3_1_ = vm->unk_82[1];
    uVar22 = uVar22 | 0x2000;
    vm->flags = (short)uVar22;
    vm->unk_82[0] = (char)(uVar22 >> 0x10);
    vm->unk_82[1] = (char)(uVar22 >> 0x18);
    ZunTimer::Decrement(&vm->currentTimeInScript,1);
LAB_00434338:
    fVar30 = (vm->angleVel).x;
    if (NAN(fVar30) == (fVar30 == 0.0)) {
      fVar30 = AddNormalizeAngle((vm->rotation).x,
                                 g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).x);
      (vm->rotation).x = fVar30;
    }
    fVar30 = (vm->angleVel).y;
    if (NAN(fVar30) == (fVar30 == 0.0)) {
      fVar30 = AddNormalizeAngle((vm->rotation).y,
                                 g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).y);
      (vm->rotation).y = fVar30;
    }
    fVar30 = (vm->angleVel).z;
    if (NAN(fVar30) == (fVar30 == 0.0)) {
      fVar30 = AddNormalizeAngle((vm->rotation).z,
                                 g_Supervisor.effectiveFramerateMultiplier * (vm->angleVel).z);
      (vm->rotation).z = fVar30;
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
      uVar14._0_2_ = vm->flags;
      uVar14._2_1_ = vm->unk_82[0];
      uVar14._3_1_ = vm->unk_82[1];
      if ((uVar14 >> 6 & 1) != 0) {
        vm->scaleX = vm->scaleX * -1.0;
      }
      uVar15._0_2_ = vm->flags;
      uVar15._2_1_ = vm->unk_82[0];
      uVar15._3_1_ = vm->unk_82[1];
      if ((uVar15 >> 6 & 2) != 0) {
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
      uVar16._0_2_ = vm->flags;
      uVar16._2_1_ = vm->unk_82[0];
      uVar16._3_1_ = vm->unk_82[1];
      uVar29 = uVar16 >> 10 & 3;
      if (uVar29 == 1) {
        local_3c = 1.0 - (1.0 - local_3c) * (1.0 - local_3c);
      }
      else if (uVar29 == 2) {
        local_3c = 1.0 - local_3c;
        local_3c = 1.0 - local_3c * local_3c * local_3c * local_3c;
      }
      uVar17._0_2_ = vm->flags;
      uVar17._2_1_ = vm->unk_82[0];
      uVar17._3_1_ = vm->unk_82[1];
      if ((uVar17 >> 5 & 1) == 0) {
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


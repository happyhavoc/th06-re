
/* WARNING: Type propagation algorithm not settling */

void __thiscall MidiOutput::FUN_00422900(MidiOutput *this,undefined4 *param_1)

{
  char cVar1;
  MIDIHDR *pMVar2;
  LPSTR pCVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  MIDIHDR *pMVar8;
  undefined8 uVar9;
  MidiSample *local_30;
  MidiSample *local_2c;
  byte local_18;
  byte bStack_17;
  byte bStack_14;
  undefined4 local_d;
  undefined uStack_9;
  
  bStack_17 = *(byte *)param_1[5];
  if (bStack_17 < 0x80) {
    bStack_17 = *(byte *)(param_1 + 3);
  }
  else {
    param_1[5] = param_1[5] + 1;
  }
  switch(bStack_17 & 0xf0) {
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb0:
  case 0xe0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = (uint)*(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    break;
  case 0xc0:
  case 0xd0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = 0;
    break;
  case 0xf0:
    if (bStack_17 == 0xf0) {
      if ((&this->midiHeaders)[this->field128_0x90] != (MIDIHDR *)0x0) {
        UnprepareHeader(this,(&this->midiHeaders)[this->field128_0x90]);
      }
      pMVar2 = (MIDIHDR *)_malloc(0x40);
      (&this->midiHeaders)[this->field128_0x90] = pMVar2;
      pMVar2 = (&this->midiHeaders)[this->field128_0x90];
      iVar6 = FUN_00421d90(param_1 + 5);
      pMVar8 = pMVar2;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        pMVar8->lpData = (LPSTR)0x0;
        pMVar8 = (MIDIHDR *)&pMVar8->dwBufferLength;
      }
      pCVar3 = (LPSTR)_malloc(iVar6 + 1);
      pMVar2->lpData = pCVar3;
      *pMVar2->lpData = -0x10;
      pMVar2->dwFlags = 0;
      pMVar2->dwBufferLength = iVar6 + 1;
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < iVar6) {
        pMVar2->lpData[CONCAT13(uStack_9,local_d._1_3_) + 1] = *(CHAR *)param_1[5];
        param_1[5] = param_1[5] + 1;
        iVar7 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar7;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      iVar6 = FUN_00421b90(pMVar2);
      if (iVar6 != 0) {
        _free(pMVar2->lpData);
        _free(pMVar2);
        (&this->midiHeaders)[this->field128_0x90] = (MIDIHDR *)0x0;
      }
      this->field128_0x90 = this->field128_0x90 + 1;
      uVar4 = this->field128_0x90 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      this->field128_0x90 = uVar4;
    }
    else if (bStack_17 == 0xff) {
      cVar1 = *(char *)param_1[5];
      param_1[5] = param_1[5] + 1;
      iVar6 = FUN_00421d90(param_1 + 5);
      if (cVar1 == '/') {
        *param_1 = 0;
        return;
      }
      if (cVar1 == 'Q') {
        uVar9 = __allmul(*(undefined4 *)&this->field_0x128,*(undefined4 *)&this->field_0x12c,
                         this->field135_0x11c,this->field135_0x11c >> 0x1f);
        uVar9 = __allmul(uVar9,1000,0);
        uVar9 = __aulldiv(uVar9,this->field136_0x120,this->field136_0x120 >> 0x1f);
        uVar4 = *(uint *)&this->field_0x130;
        *(uint *)&this->field_0x130 = uVar4 + (uint)uVar9;
        *(uint *)&this->field_0x134 =
             *(int *)&this->field_0x134 + (int)((ulonglong)uVar9 >> 0x20) +
             (uint)CARRY4(uVar4,(uint)uVar9);
        *(undefined4 *)&this->field_0x128 = 0;
        *(undefined4 *)&this->field_0x12c = 0;
        this->field136_0x120 = 0;
        local_d = local_d & 0xff;
        uStack_9 = 0;
        while (CONCAT13(uStack_9,local_d._1_3_) < iVar6) {
          this->field136_0x120 =
               this->field136_0x120 * 0x100 + (uint)*(byte *)param_1[5] + this->field136_0x120;
          param_1[5] = param_1[5] + 1;
          iVar7 = CONCAT13(uStack_9,local_d._1_3_) + 1;
          local_d._1_3_ = (undefined3)iVar7;
          uStack_9 = (undefined)((uint)iVar7 >> 0x18);
        }
      }
      else {
        param_1[5] = param_1[5] + iVar6;
      }
    }
  }
  switch(bStack_17 & 0xf0) {
  case 0x90:
    if ((local_d & 0xff) != 0) {
      local_18 = local_18 + this->field_0x2c4;
      (&this->field_0x154)
      [((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
       (uint)(bStack_17 & 0xffff0f) * 0x17] =
           (&this->field_0x154)
           [((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
            (uint)(bStack_17 & 0xffff0f) * 0x17] | (byte)(1 << (local_18 & 7));
      break;
    }
  case 0x80:
    local_18 = local_18 + this->field_0x2c4;
    (&this->field_0x154)
    [((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
     (uint)(bStack_17 & 0xffff0f) * 0x17] =
         (&this->field_0x154)
         [((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
          (uint)(bStack_17 & 0xffff0f) * 0x17] & ~(byte)(1 << (local_18 & 7));
    break;
  case 0xb0:
    switch(local_18) {
    case 0:
      (&this->field_0x165)[(uint)(bStack_17 & 0xffff0f) * 0x17] = (undefined)local_d;
      break;
    case 2:
      local_2c = this->unk;
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < this->field130_0x114) {
        *(undefined4 *)&local_2c->field_0x18 = *(undefined4 *)&local_2c->field_0x14;
        *(undefined4 *)&local_2c->field_0x1c = *(undefined4 *)&local_2c->field_0x4;
        iVar6 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar6;
        local_2c = local_2c + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      *(int *)&this->field_0x2ec = this->field136_0x120;
      *(undefined4 *)&this->field_0x2f0 = *(undefined4 *)&this->field_0x128;
      *(undefined4 *)&this->field_0x2f4 = *(undefined4 *)&this->field_0x12c;
      *(undefined4 *)&this->field_0x2f8 = *(undefined4 *)&this->field_0x130;
      *(undefined4 *)&this->field_0x2fc = *(undefined4 *)&this->field_0x134;
      break;
    case 4:
      local_30 = this->unk;
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < this->field130_0x114) {
        *(undefined4 *)&local_30->field_0x14 = *(undefined4 *)&local_30->field_0x18;
        *(undefined4 *)&local_30->field_0x4 = *(undefined4 *)&local_30->field_0x1c;
        iVar6 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar6;
        local_30 = local_30 + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      this->field136_0x120 = *(int *)&this->field_0x2ec;
      *(undefined4 *)&this->field_0x128 = *(undefined4 *)&this->field_0x2f0;
      *(undefined4 *)&this->field_0x12c = *(undefined4 *)&this->field_0x2f4;
      *(undefined4 *)&this->field_0x130 = *(undefined4 *)&this->field_0x2f8;
      *(undefined4 *)&this->field_0x134 = *(undefined4 *)&this->field_0x2fc;
      break;
    case 7:
      (&this->field_0x169)[(uint)(bStack_17 & 0xffff0f) * 0x17] = (undefined)local_d;
      lVar5 = __ftol2((double)((float)(local_d & 0xff) * this->field551_0x2c8));
      bStack_14 = (byte)lVar5;
      if (lVar5 < 0) {
        bStack_14 = 0;
      }
      else if (0x7f < lVar5) {
        bStack_14 = 0x7f;
      }
      (&this->field_0x16a)[((CONCAT11(bStack_14,bStack_17) & 0xffff0f) & 0xff) * 0x17] = bStack_14;
      local_d = (uint)bStack_14;
      break;
    case 10:
      (&this->field_0x166)[(uint)(bStack_17 & 0xffff0f) * 0x17] = (undefined)local_d;
      break;
    case 0x5b:
      (&this->field_0x167)[(uint)(bStack_17 & 0xffff0f) * 0x17] = (undefined)local_d;
      break;
    case 0x5d:
      (&this->field_0x168)[(uint)(bStack_17 & 0xffff0f) * 0x17] = (undefined)local_d;
    }
    break;
  case 0xc0:
    (&this->field_0x164)[(uint)(bStack_17 & 0xffff0f) * 0x17] = local_18;
  }
  if (bStack_17 < 0xf0) {
    FUN_00421be0(&this->midiOutDev,bStack_17,local_18,(undefined)local_d);
  }
  *(byte *)(param_1 + 3) = bStack_17;
  iVar6 = FUN_00421d90(param_1 + 5);
  param_1[1] = param_1[1] + iVar6;
  return;
}


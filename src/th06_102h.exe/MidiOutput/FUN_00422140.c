
/* WARNING: Inlined function: FUN_00421d70 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall MidiOutput::FUN_00422140(MidiOutput *this,int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  DWORD_PTR cookie;
  MidiSample *pMVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ushort uStackY_58;
  undefined local_3c;
  undefined uStack_3b;
  undefined uStack_3a;
  undefined uStack_39;
  size_t local_38;
  int local_30;
  undefined local_20;
  undefined uStack_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined *local_c;
  int local_8;
  
  cookie = __security_cookie;
  FUN_004220b0(this);
  iVar6 = this->midiFileData[param_1];
  if (iVar6 == 0) {
    DebugPrint2(
               "error : まだMIDIが読み込まれていないのに再生しようとしている\n"
               );
  }
  else {
    uVar2 = *(undefined4 *)(iVar6 + 4);
    uStack_1d = (undefined)((uint)uVar2 >> 0x18);
    uStack_1e = (undefined)((uint)uVar2 >> 0x10);
    uStack_1f = (undefined)((uint)uVar2 >> 8);
    local_20 = (undefined)uVar2;
    local_30 = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
    local_c = (undefined *)((int)(undefined2 *)(iVar6 + 8) + local_30);
    uVar1 = *(undefined2 *)(iVar6 + 8);
    uStackY_58 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    *(uint *)&this->field_0x118 = (uint)uStackY_58;
    uStackY_58 = CONCAT11((char)*(undefined2 *)(iVar6 + 0xc),
                          (char)((ushort)*(undefined2 *)(iVar6 + 0xc) >> 8));
    this->field135_0x11c = (uint)uStackY_58;
    uStackY_58 = CONCAT11((char)*(undefined2 *)(iVar6 + 10),
                          (char)((ushort)*(undefined2 *)(iVar6 + 10) >> 8));
    this->field130_0x114 = (uint)uStackY_58;
    pMVar3 = (MidiSample *)_malloc(this->field130_0x114 << 5);
    this->unk = pMVar3;
    pMVar3 = this->unk;
    for (uVar5 = (uint)(this->field130_0x114 << 5) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pMVar3 = 0;
      pMVar3 = (MidiSample *)&pMVar3->field_0x4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined *)pMVar3 = 0;
      pMVar3 = (MidiSample *)&pMVar3->field_0x1;
    }
    for (local_8 = 0; local_8 < this->field130_0x114; local_8 = local_8 + 1) {
      uVar2 = *(undefined4 *)(local_c + 4);
      uStack_39 = (undefined)((uint)uVar2 >> 0x18);
      uStack_3a = (undefined)((uint)uVar2 >> 0x10);
      uStack_3b = (undefined)((uint)uVar2 >> 8);
      local_38._0_3_ = CONCAT12(uStack_3b,CONCAT11(uStack_3a,uStack_39));
      local_3c = (undefined)uVar2;
      local_38 = CONCAT13(local_3c,(uint3)local_38);
      this->unk[local_8].field8_0x8 = local_38;
      pvVar4 = _malloc(local_38);
      *(void **)&this->unk[local_8].field_0x10 = pvVar4;
      *(undefined4 *)(this->unk + local_8) = 1;
      puVar7 = (undefined4 *)(local_c + 8);
      puVar8 = *(undefined4 **)&this->unk[local_8].field_0x10;
      for (uVar5 = local_38 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = (uint3)local_38 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_c = (undefined *)((int)(local_c + 8) + local_38);
    }
    this->field136_0x120 = 1000000;
  }
  __security_check_cookie(cookie);
  return;
}


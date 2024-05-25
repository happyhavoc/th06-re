
void __thiscall
AnmManager::SetAndExecuteScript(AnmManager *this,AnmVm *vm,AnmRawInstr *beginingOfScript)

{
  uint uVar1;
  uint uVar2;
  
  uVar1._0_2_ = vm->flags;
  uVar1._2_1_ = vm->unk_82[0];
  uVar1._3_1_ = vm->unk_82[1];
  uVar1 = uVar1 & 0xffffff3f;
  vm->flags = (short)uVar1;
  vm->unk_82[0] = (char)(uVar1 >> 0x10);
  vm->unk_82[1] = (char)(uVar1 >> 0x18);
  AnmVm::Initialize(vm);
  vm->beginingOfScript = beginingOfScript;
  vm->currentInstruction = vm->beginingOfScript;
  (vm->currentTimeInScript).current = 0;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  uVar2._0_2_ = vm->flags;
  uVar2._2_1_ = vm->unk_82[0];
  uVar2._3_1_ = vm->unk_82[1];
  uVar2 = uVar2 & 0xfffffffe;
  vm->flags = (short)uVar2;
  vm->unk_82[0] = (char)(uVar2 >> 0x10);
  vm->unk_82[1] = (char)(uVar2 >> 0x18);
  if (beginingOfScript != (AnmRawInstr *)0x0) {
    ExecuteScript(this,vm);
  }
  return;
}


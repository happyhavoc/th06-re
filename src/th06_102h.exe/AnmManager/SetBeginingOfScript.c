
void __thiscall
AnmManager::SetBeginingOfScript(AnmManager *this,AnmVm *vm,AnmRawInstr *beginingOfScript)

{
  vm->flags = vm->flags & 0xffffff3f;
  AnmVm::Initialize(vm);
  vm->beginingOfScript = beginingOfScript;
  vm->currentInstruction = vm->beginingOfScript;
  (vm->currentTimeInScript).current = 0;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  vm->flags = vm->flags & 0xfffffffe;
  if (beginingOfScript != (AnmRawInstr *)0x0) {
    ExecuteScript(this,vm);
  }
  return;
}


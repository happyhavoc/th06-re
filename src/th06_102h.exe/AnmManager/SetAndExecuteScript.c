
void __thiscall
AnmManager::SetAndExecuteScript(AnmManager *this,AnmVm *vm,AnmRawInstr *beginingOfScript)

{
  *(uint *)&vm->flags = *(uint *)&vm->flags & 0xffffff3f;
  AnmVm::Initialize(vm);
  vm->beginingOfScript = beginingOfScript;
  vm->currentInstruction = vm->beginingOfScript;
  (vm->currentTimeInScript).current = 0;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  *(uint *)&vm->flags = *(uint *)&vm->flags & 0xfffffffe;
  if (beginingOfScript != (AnmRawInstr *)0x0) {
    ExecuteScript(this,vm);
  }
  return;
}


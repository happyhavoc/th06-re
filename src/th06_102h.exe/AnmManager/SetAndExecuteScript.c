
void __thiscall
th06::AnmManager::SetAndExecuteScript(AnmManager *this,AnmVm *vm,AnmRawInstr *beginingOfScript)

{
  vm->flags = vm->flags & ~(AnmVmFlags_6|AnmVmFlags_7);
  AnmVm::Initialize((AnmVm *)vm);
  vm->beginingOfScript = beginingOfScript;
  vm->currentInstruction = vm->beginingOfScript;
  (vm->currentTimeInScript).current = 0;
  (vm->currentTimeInScript).subFrame = 0.0;
  (vm->currentTimeInScript).previous = -999;
  vm->flags = vm->flags & ~AnmVmFlags_1;
  if (beginingOfScript != (AnmRawInstr *)0x0) {
    ExecuteScript((AnmManager *)this,vm);
  }
  return;
}


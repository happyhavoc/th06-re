
void __thiscall AnmManager::FUN_004051b0(AnmManager *this,AnmVm *vm,int anmFileIdx)

{
  vm->anmFileIndex = (short)anmFileIdx;
  (vm->pos).x = 0.0;
  (vm->pos).y = 0.0;
  (vm->pos).z = 0.0;
  (vm->pos2).x = 0.0;
  (vm->pos2).y = 0.0;
  (vm->pos2).z = 0.0;
  vm->fontHeight = '\x0f';
  vm->fontWidth = '\x0f';
  SetAndExecuteScript(this,vm,this->scripts[anmFileIdx]);
  return;
}


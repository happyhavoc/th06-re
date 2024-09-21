
void __thiscall th06::AnmManager::ExecuteAnmIdx(AnmManager *this,AnmVm *vm,int anmFileIdx)

{
  vm->anmFileIndex = (short)anmFileIdx;
  (vm->pos).x = 0.0;
  (vm->pos).y = 0.0;
  (vm->pos).z = 0.0;
  (vm->offset).x = 0.0;
  (vm->offset).y = 0.0;
  (vm->offset).z = 0.0;
  vm->fontHeight = 15;
  vm->fontWidth = uVar2;
  SetAndExecuteScript(this,vm,this->scripts[anmFileIdx]);
  return;
}


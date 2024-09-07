
ZunResult __thiscall th06::Stage::UpdateObjects(Stage *this)

{
  AnmVm *vm;
  short *objQuad;
  int objIdx;
  int local_c;
  int obj;
  
  for (objIdx = 0; objIdx < *(int *)(this + 0xc); objIdx = objIdx + 1) {
    obj = *(int *)(*(int *)(this + 0x10) + objIdx * 4);
    if ((*(byte *)(obj + 3) & 1) != 0) {
      local_c = 0;
      for (objQuad = (short *)(obj + 0x1c); -1 < *objQuad;
          objQuad = (short *)((int)objQuad + (int)objQuad[1])) {
        vm = (AnmVm *)(objQuad[3] * 0x110 + *(int *)this);
        if (*objQuad == 0) {
          AnmManager::ExecuteScript(g_AnmManager,vm);
        }
        else if (*objQuad == 1) {
          AnmManager::ExecuteScript(g_AnmManager,vm);
        }
        if (vm->currentInstruction != (AnmRawInstr *)0x0) {
          local_c = local_c + 1;
        }
      }
      if (local_c == 0) {
        *(byte *)(obj + 3) = *(byte *)(obj + 3) & 0xfe;
      }
    }
  }
  return ZUN_SUCCESS;
}


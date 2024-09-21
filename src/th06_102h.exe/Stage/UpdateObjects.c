
ZunResult __thiscall th06::Stage::UpdateObjects(Stage *this)

{
  AnmVm *vm;
  StdRawQuadBasic *objQuad;
  int objIdx;
  int local_c;
  StdRawObject *obj;
  
  for (objIdx = 0; objIdx < this->objectsCount; objIdx = objIdx + 1) {
    obj = this->objects[objIdx];
    if ((obj->flags & 1) != 0) {
      local_c = 0;
      for (objQuad = &obj->firstQuad; -1 < objQuad->type;
          objQuad = (StdRawQuadBasic *)((int)&objQuad->type + (int)objQuad->byteSize)) {
        vm = this->quadVms + objQuad->vmIndex;
        if (objQuad->type == 0) {
          AnmManager::ExecuteScript(g_AnmManager,vm);
        }
        else if (objQuad->type == 1) {
          AnmManager::ExecuteScript(g_AnmManager,vm);
        }
        if (vm->currentInstruction != (AnmRawInstr *)0x0) {
          local_c = local_c + 1;
        }
      }
      if (local_c == 0) {
        obj->flags = obj->flags & 0xfe;
      }
    }
  }
  return ZUN_SUCCESS;
}


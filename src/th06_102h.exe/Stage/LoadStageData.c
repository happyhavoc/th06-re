
undefined4 __thiscall Stage::LoadStageData(Stage *this,char *anmpath,char *stdpath)

{
  StdRawObject *pSVar1;
  int anm;
  undefined4 uVar2;
  byte *std;
  AnmVm *pAVar3;
  StdRawQuadBasic *local_14;
  int local_c;
  int local_8;
  
  anm = AnmManager::LoadAnm(g_AnmManager,4,anmpath,0x300);
  if (anm == 0) {
    std = FileSystem::OpenPath(stdpath,0);
    this->stdData = std;
    if (this->stdData == (byte *)0x0) {
      GameErrorContextLog(&g_GameErrorContext,
                          "ステージデータが見つかりません。データが壊れています\n"
                         );
      uVar2 = 0xffffffff;
    }
    else {
      this->objectsCount = (int)*(short *)this->stdData;
      this->quadCount = (int)*(short *)(this->stdData + 2);
      this->objectInstances = (StdRawInstance *)(this->stdData + *(int *)(this->stdData + 4));
      this->beginningOfScript = (StdRawInstr *)(this->stdData + *(int *)(this->stdData + 8));
      this->objects = (StdRawObject **)(this->stdData + 0x490);
      for (local_c = 0; local_c < this->objectsCount; local_c = local_c + 1) {
        this->objects[local_c] = (StdRawObject *)(this->stdData + (int)&this->objects[local_c]->id);
      }
      pAVar3 = (AnmVm *)_malloc(this->quadCount * sizeof(AnmVm));
      this->quadVms = pAVar3;
      local_8 = 0;
      for (local_c = 0; local_c < this->objectsCount; local_c = local_c + 1) {
        pSVar1 = this->objects[local_c];
        pSVar1->flags = '\x01';
        for (local_14 = &pSVar1->firstQuad; -1 < local_14->type;
            local_14 = (StdRawQuadBasic *)((int)&local_14->type + (int)local_14->byteSize)) {
          AnmManager::FUN_004051b0(g_AnmManager,this->quadVms + local_8,local_14->anmScript + 0x300)
          ;
          local_14->vmIndex = (short)local_8;
          local_8 = local_8 + 1;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


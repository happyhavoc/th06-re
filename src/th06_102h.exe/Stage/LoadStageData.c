
ZunResult __thiscall th06::Stage::LoadStageData(Stage *this,char *anmpath,char *stdpath)

{
  StdRawObject *pSVar1;
  ZunResult anm;
  RawStdHeader *std;
  AnmVm *pAVar2;
  StdRawQuadBasic *local_14;
  int local_c;
  int local_8;
  
  anm = AnmManager::LoadAnm(g_AnmManager,4,anmpath,0x300);
  if (anm == ZUN_SUCCESS) {
    std = (RawStdHeader *)FileSystem::OpenPath(stdpath,0);
    this->stdData = std;
    if (this->stdData == (RawStdHeader *)0x0) {
      GameErrorContext::Log
                (&g_GameErrorContext,
                 "ステージデータが見つかりません。データが壊れています\n")
      ;
      anm = ZUN_ERROR;
    }
    else {
      this->objectsCount = (int)(short)this->stdData->nbObjects;
      this->quadCount = (int)(short)this->stdData->nbFaces;
      this->objectInstances =
           (StdRawInstance *)(this->stdData->stageName + (this->stdData->facesOffset - 0x10));
      this->beginningOfScript =
           (StdRawInstr *)(this->stdData->stageName + (this->stdData->scriptOffset - 0x10));
      this->objects = (StdRawObject **)(this->stdData + 1);
      for (local_c = 0; local_c < this->objectsCount; local_c = local_c + 1) {
        this->objects[local_c] =
             (StdRawObject *)(this->stdData->stageName + (int)(&this->objects[local_c]->id + -8));
      }
      pAVar2 = (AnmVm *)_malloc(this->quadCount * sizeof(AnmVm));
      this->quadVms = pAVar2;
      local_8 = 0;
      for (local_c = 0; local_c < this->objectsCount; local_c = local_c + 1) {
        pSVar1 = this->objects[local_c];
        pSVar1->flags = '\x01';
        for (local_14 = &pSVar1->firstQuad; -1 < local_14->type;
            local_14 = (StdRawQuadBasic *)((int)&local_14->type + (int)local_14->byteSize)) {
          AnmManager::ExecuteAnmIdx
                    (g_AnmManager,this->quadVms + local_8,local_14->anmScript + 0x300);
          local_14->vmIndex = (short)local_8;
          local_8 = local_8 + 1;
        }
      }
      anm = ZUN_SUCCESS;
    }
  }
  else {
    anm = ZUN_ERROR;
  }
  return anm;
}


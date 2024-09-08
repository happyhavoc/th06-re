
ZunResult __thiscall th06::Stage::LoadStageData(Stage *this,char *anmpath,char *stdpath)

{
  int iVar1;
  ZunResult anm;
  byte *std;
  void *pvVar2;
  short *local_14;
  int local_c;
  int local_8;
  
  anm = AnmManager::LoadAnm(g_AnmManager,4,anmpath,0x300);
  if (anm == ZUN_SUCCESS) {
    std = FileSystem::OpenPath(stdpath,0);
    *(byte **)(this + 4) = std;
    if (*(int *)(this + 4) == 0) {
      GameErrorContext::Log
                (&g_GameErrorContext,
                 "ステージデータが見つかりません。データが壊れています\n")
      ;
      anm = ZUN_ERROR;
    }
    else {
      *(int *)(this + 0xc) = (int)**(short **)(this + 4);
      *(int *)(this + 8) = (int)*(short *)(*(int *)(this + 4) + 2);
      *(int *)(this + 0x14) = *(int *)(*(int *)(this + 4) + 4) + *(int *)(this + 4);
      *(int *)(this + 0x18) = *(int *)(*(int *)(this + 4) + 8) + *(int *)(this + 4);
      *(int *)(this + 0x10) = *(int *)(this + 4) + 0x490;
      for (local_c = 0; local_c < *(int *)(this + 0xc); local_c = local_c + 1) {
        *(int *)(*(int *)(this + 0x10) + local_c * 4) =
             *(int *)(*(int *)(this + 0x10) + local_c * 4) + *(int *)(this + 4);
      }
      pvVar2 = _malloc(*(int *)(this + 8) * sizeof(AnmVm));
      *(void **)this = pvVar2;
      local_8 = 0;
      for (local_c = 0; local_c < *(int *)(this + 0xc); local_c = local_c + 1) {
        iVar1 = *(int *)(*(int *)(this + 0x10) + local_c * 4);
        *(undefined *)(iVar1 + 3) = 1;
        for (local_14 = (short *)(iVar1 + 0x1c); -1 < *local_14;
            local_14 = (short *)((int)local_14 + (int)local_14[1])) {
          AnmManager::ExecuteAnmIdx
                    ((AnmManager *)g_AnmManager,(AnmVm *)(local_8 * 0x110 + *(int *)this),
                     local_14[2] + 0x300);
          local_14[3] = (short)local_8;
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


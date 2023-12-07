
int AsciiManager::AddedCallback(AsciiManager *arg)

{
  ZunResult res;
  int iVar1;
  
  res = AnmManager::LoadAnm(g_AnmManager,1,"data/ascii.anm",0);
  if (res == ZUN_SUCCESS) {
    res = AnmManager::LoadAnm(g_AnmManager,2,"data/asciis.anm",0x77);
    if (res == ZUN_SUCCESS) {
      res = AnmManager::LoadAnm(g_AnmManager,3,"data/capture.anm",0x718);
      if (res == ZUN_SUCCESS) {
        InitializeVms(arg);
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


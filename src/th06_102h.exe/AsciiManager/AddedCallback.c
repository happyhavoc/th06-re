
int AsciiManager::AddedCallback(AsciiManager *arg)

{
  int res;
  
  res = AnmManager::LoadAnm(g_AnmManager,1,"data/ascii.anm",0);
  if (res == 0) {
    res = AnmManager::LoadAnm(g_AnmManager,2,"data/asciis.anm",0x77);
    if (res == 0) {
      res = AnmManager::LoadAnm(g_AnmManager,3,"data/capture.anm",0x718);
      if (res == 0) {
        Initialize(arg);
        res = 0;
      }
      else {
        res = -1;
      }
    }
    else {
      res = -1;
    }
  }
  else {
    res = -1;
  }
  return res;
}


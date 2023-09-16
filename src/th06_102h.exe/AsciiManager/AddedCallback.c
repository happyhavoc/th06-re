
int AsciiManager::AddedCallback(AsciiManager *arg)

{
  int res;
  
  res = AnmManager::LoadAnim(DAT_006d4588,1,"data/ascii.anm",0);
  if (res == 0) {
    res = AnmManager::LoadAnim(DAT_006d4588,2,"data/asciis.anm",0x77);
    if (res == 0) {
      res = AnmManager::LoadAnim(DAT_006d4588,3,"data/capture.anm",0x718);
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


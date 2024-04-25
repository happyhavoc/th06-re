
undefined4 MusicRoom::OnUpdate(MusicRoom *param_1)

{
  int iVar1;
  ZunResult ZVar2;
  int iVar3;
  
  iVar1 = param_1->field6_0xc;
  do {
    iVar3 = param_1->field6_0xc;
    if (iVar3 != 0) {
      if ((iVar3 == 1) && (drawMusicList(param_1), iVar3 != 0)) {
        return 0;
      }
      break;
    }
    ZVar2 = FUN_00424e8f(param_1);
  } while (ZVar2 != ZUN_SUCCESS);
  if (iVar1 == param_1->field6_0xc) {
    param_1->field5_0x8 = param_1->field5_0x8 + 1;
  }
  else {
    param_1->field5_0x8 = 0;
  }
  AnmManager::ExecuteScript(g_AnmManager,&param_1->field12_0x24);
  return 1;
}


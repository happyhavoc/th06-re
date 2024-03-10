
undefined4 FUN_00439da0(int param_1)

{
  ZunResult ZVar1;
  undefined4 uVar2;
  int local_8;
  
  Supervisor::LoadPbg3(&g_Supervisor,3,"紅魔郷TL.dat");
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,local_8);
  }
  ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x15,"data/title01.anm",0x100);
  if (ZVar1 == ZUN_SUCCESS) {
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x18,"data/title02.anm",0x11b);
    if (ZVar1 == ZUN_SUCCESS) {
      ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x19,"data/title03.anm",0x11f);
      if (ZVar1 == ZUN_SUCCESS) {
        ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x1a,"data/title04.anm",0x122);
        if (ZVar1 == ZUN_SUCCESS) {
          ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x16,"data/title01s.anm",0x17a);
          if (ZVar1 == ZUN_SUCCESS) {
            ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x17,"data/title04s.anm",0x195);
            if (ZVar1 == ZUN_SUCCESS) {
              for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
                AnmManager::ExecuteAnmIdx
                          (g_AnmManager,(AnmVm *)(param_1 + local_8 * 0x110),local_8 + 0x100);
                *(uint *)(param_1 + 0x80 + local_8 * 0x110) =
                     *(uint *)(param_1 + 0x80 + local_8 * 0x110) & 0xfffffffe;
                *(undefined2 *)(param_1 + 0xb2 + local_8 * 0x110) =
                     *(undefined2 *)(param_1 + 0xb0 + local_8 * 0x110);
                *(uint *)(param_1 + 0x80 + local_8 * 0x110) =
                     *(uint *)(param_1 + 0x80 + local_8 * 0x110) | 0x1000;
              }
              ZVar1 = AnmManager::LoadSurface(g_AnmManager,0,"data/title/title00.jpg");
              if (ZVar1 == ZUN_SUCCESS) {
                uVar2 = 0;
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


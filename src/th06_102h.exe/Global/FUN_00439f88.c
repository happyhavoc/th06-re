
undefined4 FUN_00439f88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1b; local_8 = local_8 + 1) {
    FUN_00432030(g_AnmManager,local_8);
  }
  iVar1 = AnmManager::LogoStuff(g_AnmManager,0,"data/title/select00.jpg");
  if (iVar1 == 0) {
    iVar1 = AnmManager::LoadAnim(g_AnmManager,0x1b,"data/select01.anm",0x150);
    if (iVar1 == 0) {
      iVar1 = AnmManager::LoadAnim(g_AnmManager,0x1c,"data/select02.anm",0x153);
      if (iVar1 == 0) {
        iVar1 = AnmManager::LoadAnim(g_AnmManager,0x1d,"data/select03.anm",0x15a);
        if (iVar1 == 0) {
          iVar1 = AnmManager::LoadAnim(g_AnmManager,0x1e,"data/select04.anm",0x15c);
          if (iVar1 == 0) {
            iVar1 = AnmManager::LoadAnim(g_AnmManager,0x1f,"data/select05.anm",0x155);
            if (iVar1 == 0) {
              iVar1 = AnmManager::LoadAnim(g_AnmManager,0x20,"data/slpl00a.anm",0x156);
              if (iVar1 == 0) {
                iVar1 = AnmManager::LoadAnim(g_AnmManager,0x21,"data/slpl00b.anm",0x157);
                if (iVar1 == 0) {
                  iVar1 = AnmManager::LoadAnim(g_AnmManager,0x22,"data/slpl01a.anm",0x158);
                  if (iVar1 == 0) {
                    iVar1 = AnmManager::LoadAnim(g_AnmManager,0x23,"data/slpl01b.anm",0x159);
                    if (iVar1 == 0) {
                      local_c = param_1 + 0x5500;
                      for (local_8 = 0x150; local_8 < 0x160; local_8 = local_8 + 1) {
                        FUN_004051b0(local_c,local_8);
                        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) & 0xfffffffe;
                        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) | 8;
                        if ((g_GameContext.cfg.render_opts & 1U) == 0) {
                          *(undefined4 *)(local_c + 0x7c) = 0xff000000;
                        }
                        else {
                          *(undefined4 *)(local_c + 0x7c) = 0xffffffff;
                        }
                        *(undefined4 *)(local_c + 0xe4) = 0;
                        *(undefined4 *)(local_c + 0xe8) = 0;
                        *(undefined4 *)(local_c + 0xec) = 0;
                        *(undefined2 *)(local_c + 0xb2) = *(undefined2 *)(local_c + 0xb0);
                        *(uint *)(local_c + 0x80) = *(uint *)(local_c + 0x80) | 0x1000;
                        local_c = local_c + 0x110;
                      }
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


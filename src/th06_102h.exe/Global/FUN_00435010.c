
undefined4 __thiscall FUN_00435010(int param_1_00,int param_2,char *path)

{
  void *_Memory;
  undefined4 uVar1;
  int iVar2;
  int *local_8;
  
  if (*(int *)(param_1_00 + 0x20d34 + param_2 * 4) != 0) {
    FUN_00435270(param_2);
  }
  _Memory = (void *)OpenPath(path,0);
  if (_Memory == (void *)0x0) {
    GameErrorContextFatal(&g_GameErrorContext,"%sが読み込めないです。\n",path);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x6c))
                      (g_GameContext._8_4_,0x280,0x400,g_GameContext._232_4_,&local_8);
    if (iVar2 == 0) {
      iVar2 = FUN_0043fec2(local_8,0,0,_Memory,g_FileSize,0,1,0,
                           param_1_00 + 0x20e34 + param_2 * 0x14);
      if (((iVar2 == 0) &&
          (((iVar2 = (**(code **)(*(int *)g_GameContext._8_4_ + 100))
                               (g_GameContext._8_4_,
                                *(undefined4 *)(param_1_00 + 0x20e34 + param_2 * 0x14),
                                *(undefined4 *)(param_1_00 + 0x20e38 + param_2 * 0x14),
                                g_GameContext._232_4_,0,1,param_1_00 + 0x20d34 + param_2 * 4),
            iVar2 == 0 ||
            (iVar2 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x6c))
                               (g_GameContext._8_4_,
                                *(undefined4 *)(param_1_00 + 0x20e34 + param_2 * 0x14),
                                *(undefined4 *)(param_1_00 + 0x20e38 + param_2 * 0x14),
                                g_GameContext._232_4_,param_1_00 + 0x20d34 + param_2 * 4),
            iVar2 == 0)) &&
           (iVar2 = (**(code **)(*(int *)g_GameContext._8_4_ + 0x6c))
                              (g_GameContext._8_4_,
                               *(undefined4 *)(param_1_00 + 0x20e34 + param_2 * 0x14),
                               *(undefined4 *)(param_1_00 + 0x20e38 + param_2 * 0x14),
                               g_GameContext._232_4_,param_1_00 + 0x20db4 + param_2 * 4), iVar2 == 0
           )))) && ((iVar2 = FUN_0043ff78(*(undefined4 *)(param_1_00 + 0x20d34 + param_2 * 4),0,0,
                                          local_8,0,0,1,0), iVar2 == 0 &&
                    (iVar2 = FUN_0043ff78(*(undefined4 *)(param_1_00 + 0x20db4 + param_2 * 4),0,0,
                                          local_8,0,0,1,0), iVar2 == 0)))) {
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        _free(_Memory);
        uVar1 = 0;
      }
      else {
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        _free(_Memory);
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


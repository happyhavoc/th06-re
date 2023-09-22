
undefined4 FUN_00404690(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  void *pvVar4;
  void **in_ECX;
  short *local_14;
  int local_c;
  int local_8;
  
  iVar1 = AnmManager::LoadAnm(g_AnmManager,4,param_1,0x300);
  if (iVar1 == 0) {
    pbVar3 = FileSystem::OpenPath(param_2,0);
    in_ECX[1] = pbVar3;
    if (in_ECX[1] == (void *)0x0) {
      GameErrorContextLog(&g_GameErrorContext,
                          "ステージデータが見つかりません。データが壊れています\n"
                         );
      uVar2 = 0xffffffff;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      in_ECX[3] = (void *)(int)*in_ECX[1];
      in_ECX[2] = (void *)(int)*(short *)((int)in_ECX[1] + 2);
      in_ECX[5] = (void *)(*(int *)((int)in_ECX[1] + 4) + (int)in_ECX[1]);
      in_ECX[6] = (void *)(*(int *)((int)in_ECX[1] + 8) + (int)in_ECX[1]);
      in_ECX[4] = (void *)((int)in_ECX[1] + 0x490);
      for (local_c = 0; local_c < (int)in_ECX[3]; local_c = local_c + 1) {
        *(int *)((int)in_ECX[4] + local_c * 4) =
             *(int *)((int)in_ECX[4] + local_c * 4) + (int)in_ECX[1];
      }
      pvVar4 = _malloc((int)in_ECX[2] * 0x110);
      *in_ECX = pvVar4;
      local_8 = 0;
      for (local_c = 0; local_c < (int)in_ECX[3]; local_c = local_c + 1) {
        iVar1 = *(int *)((int)in_ECX[4] + local_c * 4);
        *(undefined *)(iVar1 + 3) = 1;
        for (local_14 = (short *)(iVar1 + 0x1c); -1 < *local_14;
            local_14 = (short *)((int)local_14 + (int)local_14[1])) {
          FUN_004051b0((void *)(local_8 * 0x110 + (int)*in_ECX),local_14[2] + 0x300);
          local_14[3] = (short)local_8;
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


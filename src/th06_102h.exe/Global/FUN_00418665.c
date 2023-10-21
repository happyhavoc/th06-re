
undefined4 FUN_00418665(char *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_8;
  
  FUN_0041872a();
  pbVar1 = FileSystem::OpenPath(param_1,0);
  *(byte **)(*(int *)(in_ECX + 4) + 0x2534) = pbVar1;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2534) == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : メッセージファイル %s が読み込めませんでした\n"
                        ,param_1);
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x253c) = 0xffffffff;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2538) = 0;
    for (local_8 = 0; local_8 < **(int **)(*(int *)(in_ECX + 4) + 0x2534); local_8 = local_8 + 1) {
      *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x2534) + 4 + local_8 * 4) =
           *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x2534) + 4 + local_8 * 4) +
           *(int *)(*(int *)(in_ECX + 4) + 0x2534);
    }
    uVar2 = 0;
  }
  return uVar2;
}


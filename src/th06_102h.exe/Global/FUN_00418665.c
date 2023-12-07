
undefined4 __thiscall FUN_00418665(int param_1_00,char *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0041872a(param_1_00,param_1_00);
  pbVar1 = FileSystem::OpenPath(param_2,0);
  *(byte **)(*(int *)(param_1_00 + 4) + 0x2534) = pbVar1;
  if (*(int *)(*(int *)(param_1_00 + 4) + 0x2534) == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : メッセージファイル %s が読み込めませんでした\n"
                        ,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(param_1_00 + 4) + 0x253c) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1_00 + 4) + 0x2538) = 0;
    for (iVar3 = 0; iVar3 < **(int **)(*(int *)(param_1_00 + 4) + 0x2534); iVar3 = iVar3 + 1) {
      *(int *)(*(int *)(*(int *)(param_1_00 + 4) + 0x2534) + 4 + iVar3 * 4) =
           *(int *)(*(int *)(*(int *)(param_1_00 + 4) + 0x2534) + 4 + iVar3 * 4) +
           *(int *)(*(int *)(param_1_00 + 4) + 0x2534);
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00418665(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int local_8;
  
  FUN_0041872a();
  uVar1 = OpenPath(param_1,0);
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2534) = uVar1;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2534) == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : メッセージファイル %s が読み込めませんでした\n"
                        ,param_1);
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x253c) = 0xffffffff;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2538) = 0;
    for (local_8 = 0; local_8 < **(int **)(*(int *)(in_ECX + 4) + 0x2534); local_8 = local_8 + 1) {
      *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x2534) + 4 + local_8 * 4) =
           *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x2534) + 4 + local_8 * 4) +
           *(int *)(*(int *)(in_ECX + 4) + 0x2534);
    }
    uVar1 = 0;
  }
  return uVar1;
}


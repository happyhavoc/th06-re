
undefined4 FUN_00431dc0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int *local_18;
  int local_14;
  int *local_10;
  char *local_c;
  int local_8;
  
  FUN_00432030(param_1);
  uVar1 = FUN_0041e290(param_2,0);
  *(undefined4 *)(in_ECX + 0x20934 + param_1 * 4) = uVar1;
  local_8 = *(int *)(in_ECX + 0x20934 + param_1 * 4);
  if (local_8 == 0) {
    GameErrorContextFatal
              (&g_GameErrorContext,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
               ,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(local_8 + 8) = param_1;
    local_c = (char *)(local_8 + *(int *)(local_8 + 0x1c));
    if (*local_c == '@') {
      FUN_00431d70(*(undefined4 *)(local_8 + 8),*(undefined4 *)(local_8 + 0xc),
                   *(undefined4 *)(local_8 + 0x10),*(undefined4 *)(local_8 + 0x14));
    }
    else {
      iVar2 = FUN_00431920(*(undefined4 *)(local_8 + 8),local_c,*(undefined4 *)(local_8 + 0x14),
                           *(undefined4 *)(local_8 + 0x18));
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    if (*(int *)(local_8 + 0x24) != 0) {
      local_c = (char *)(local_8 + *(int *)(local_8 + 0x24));
      iVar2 = FUN_00431a10(*(undefined4 *)(local_8 + 8),local_c,*(undefined4 *)(local_8 + 0x14),
                           *(undefined4 *)(local_8 + 0x18));
      if (iVar2 != 0) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                   ,local_c);
        return 0xffffffff;
      }
    }
    *(int *)(local_8 + 0x20) = param_3;
    local_18 = (int *)(local_8 + 0x40);
    for (local_14 = 0; local_14 < **(int **)(in_ECX + 0x20934 + param_1 * 4);
        local_14 = local_14 + 1) {
      local_10 = (int *)(local_8 + *local_18);
      local_50 = *(undefined4 *)(*(int *)(in_ECX + 0x20934 + param_1 * 4) + 8);
      local_4c = local_10[1];
      local_48 = local_10[2];
      local_44 = (float)local_10[1] + (float)local_10[3];
      local_40 = (float)local_10[2] + (float)local_10[4];
      local_38 = (float)*(int *)(local_8 + 0xc);
      local_3c = (float)*(int *)(local_8 + 0x10);
      FUN_00432260(*local_10 + param_3,&local_50);
      local_18 = local_18 + 1;
    }
    for (local_14 = 0; local_14 < *(int *)(local_8 + 4); local_14 = local_14 + 1) {
      *(int *)(in_ECX + 0x1c934 + (*local_18 + param_3) * 4) = local_8 + local_18[1];
      *(int *)(in_ECX + 0x1e934 + (*local_18 + param_3) * 4) = param_3;
      local_18 = local_18 + 2;
    }
    *(int *)(in_ECX + 0x20b34 + param_1 * 4) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}


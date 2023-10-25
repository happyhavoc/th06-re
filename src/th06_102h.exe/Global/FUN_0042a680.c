
undefined4 FUN_0042a680(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  int local_c;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    pvVar3 = operator_new(0x50);
    param_1[1] = pvVar3;
    *(char (*) [4])param_1[1] = (char  [4])0x50523654;
    *(byte *)(param_1[1] + 6) = g_GameManager.shottype + g_GameManager.character * '\x02';
    *(undefined2 *)(param_1[1] + 4) = 0x102;
    *(undefined *)(param_1[1] + 7) = (undefined)g_GameManager.difficulty;
    *(undefined4 *)(param_1[1] + 0x19) = 0x4e204f4e;
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      *(undefined4 *)(param_1[1] + 0x34 + local_c * 4) = 0;
    }
  }
  else {
    puVar1 = *(uint **)(param_1[1] + 0x2c + g_GameManager.current_stage * 4);
    if (puVar1 == (uint *)0x0) {
      return 0xffffffff;
    }
    *puVar1 = g_GameManager.score;
  }
  if (*(int *)(param_1[1] + 0x30 + g_GameManager.current_stage * 4) != 0) {
    DebugPrint2("error : replay.cpp");
  }
  pvVar3 = _malloc(0x69780);
  *(void **)(param_1[1] + 0x30 + g_GameManager.current_stage * 4) = pvVar3;
  iVar2 = *(int *)(param_1[1] + 0x30 + g_GameManager.current_stage * 4);
  *(byte *)(iVar2 + 10) = g_GameManager.bombs_remaining;
  *(byte *)(iVar2 + 9) = g_GameManager.lives_remaining;
  *(undefined *)(iVar2 + 8) = (undefined)g_GameManager.current_power;
  *(undefined *)(iVar2 + 0xb) = (undefined)g_GameManager.rank;
  *(undefined2 *)(iVar2 + 6) = g_GameManager.field13_0x1816;
  *(undefined2 *)(iVar2 + 4) = g_GameManager.field35_0x1a2c;
  *(byte *)(iVar2 + 0xc) = g_GameManager.power_item_count_for_score;
  param_1[0x12] = iVar2 + 0x10;
  *(undefined4 *)param_1[0x12] = 0;
  *(undefined2 *)(param_1[0x12] + 4) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  return 0;
}


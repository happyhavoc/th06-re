
/* WARNING: Removing unreachable block (ram,0x0042a940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042a840(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    pbVar1 = FileSystem::OpenPath((char *)param_1[3],(uint)(g_GameManager.demo_mode == 0));
    param_1[1] = pbVar1;
    iVar2 = FUN_0042a140(param_1[1],g_LastFileSize);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if (*(int *)(param_1[1] + 0x34 + local_c * 4) != 0) {
        *(int *)(param_1[1] + 0x34 + local_c * 4) =
             *(int *)(param_1[1] + 0x34 + local_c * 4) + param_1[1];
      }
    }
  }
  if (*(int *)(param_1[1] + 0x30 + g_GameManager.current_stage * 4) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1[1] + 0x30 + g_GameManager.current_stage * 4);
    g_GameManager.character = (byte)((int)(uint)*(byte *)(param_1[1] + 6) >> 1);
    g_GameManager.shottype = *(byte *)(param_1[1] + 6) & 1;
    g_GameManager.difficulty = (uint)*(byte *)(param_1[1] + 7);
    g_GameManager.field13_0x1816 = *(undefined2 *)(iVar2 + 6);
    DAT_0069d8f8 = *(undefined2 *)(iVar2 + 4);
    _DAT_0069d8fc = 0;
    g_GameManager.rank = (uint)*(byte *)(iVar2 + 0xb);
    g_GameManager.lives_remaining = *(byte *)(iVar2 + 9);
    g_GameManager.bombs_remaining = *(byte *)(iVar2 + 10);
    g_GameManager.current_power = (ushort)*(byte *)(iVar2 + 8);
    param_1[0x12] = iVar2 + 0x10;
    g_GameManager.power_item_count_for_score = *(byte *)(iVar2 + 0xc);
    if ((1 < (int)g_GameManager.current_stage) &&
       (*(int *)(param_1[1] + 0x2c + g_GameManager.current_stage * 4) != 0)) {
      g_GameManager.field0_0x0 = **(uint **)(param_1[1] + 0x2c + g_GameManager.current_stage * 4);
      g_GameManager.score = g_GameManager.field0_0x0;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0040afb0(int param_1,int *param_2,undefined4 *param_3)

{
  float10 fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 3;
  }
  switch(*param_2) {
  case -0x2729:
    _DAT_00487e44 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)&DAT_00487e44;
    break;
  case -0x2728:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0xce4);
    break;
  case -0x2727:
    local_8 = (float)g_Player._1096_4_ - *(float *)(param_1 + 0xc74);
    local_c = (float)g_Player._1092_4_ - *(float *)(param_1 + 0xc70);
    local_10 = (float)g_Player._1088_4_ - *(float *)(param_1 + 0xc6c);
    fVar1 = (float10)FUN_0040b890(&local_10);
    _DAT_00487e48 = (float)fVar1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&DAT_00487e48;
    break;
  case -0x2726:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0xcf8);
    break;
  case -0x2725:
    fVar1 = Player::FUN_00428700(&g_Player,(float *)(param_1 + 0xc6c));
    _DAT_00487e4c = (float)fVar1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&DAT_00487e4c;
    break;
  case -0x2724:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.field_0x448;
    break;
  case -0x2723:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.field_0x444;
    break;
  case -0x2722:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.field_0x440;
    break;
  case -0x2721:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc74);
    break;
  case -0x2720:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc70);
    break;
  case -0x271f:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc6c);
    break;
  case -0x271e:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_GameManager.rank;
    break;
  case -0x271d:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_GameManager.difficulty;
    break;
  case -0x271c:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9d0);
    break;
  case -0x271b:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9cc);
    break;
  case -0x271a:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9c8);
    break;
  case -0x2719:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9c4);
    break;
  case -0x2718:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9c0);
    break;
  case -0x2717:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9bc);
    break;
  case -0x2716:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9b8);
    break;
  case -0x2715:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9b4);
    break;
  case -0x2714:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9b0);
    break;
  case -0x2713:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9ac);
    break;
  case -0x2712:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9a8);
    break;
  case -0x2711:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9a4);
  }
  return param_2;
}


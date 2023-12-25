
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0040afb0(int param_1,int *param_2,undefined4 *param_3)

{
  float10 extraout_ST0;
  float10 fVar1;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 3;
  }
  switch((float *)(*param_2 + 0x2729)) {
  case (float *)0x0:
    _DAT_00487e44 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)&DAT_00487e44;
    break;
  case (float *)0x1:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0xce4);
    break;
  case (float *)0x2:
    local_8 = g_Player.position.z - *(float *)(param_1 + 0xc74);
    local_c = g_Player.position.y - *(float *)(param_1 + 0xc70);
    local_10 = g_Player.position.x - *(float *)(param_1 + 0xc6c);
    fVar1 = (float10)FUN_0040b890(&local_10);
    _DAT_00487e48 = (float)fVar1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&DAT_00487e48;
    break;
  case (float *)0x3:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0xcf8);
    break;
  case (float *)0x4:
    Player::FUN_00428700(&g_Player,(float10 *)(param_1 + 0xc6c),(float *)(*param_2 + 0x2729));
    _DAT_00487e4c = (float)extraout_ST0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&DAT_00487e4c;
    break;
  case (float *)0x5:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.position.z;
    break;
  case (float *)0x6:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.position.y;
    break;
  case (float *)0x7:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_Player.position;
    break;
  case (float *)0x8:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc74);
    break;
  case (float *)0x9:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc70);
    break;
  case (float *)0xa:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0xc6c);
    break;
  case (float *)0xb:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_GameManager.rank;
    break;
  case (float *)0xc:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (int *)&g_GameManager.difficulty;
    break;
  case (float *)0xd:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9d0);
    break;
  case (float *)0xe:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9cc);
    break;
  case (float *)0xf:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9c8);
    break;
  case (float *)0x10:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9c4);
    break;
  case (float *)0x11:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9c0);
    break;
  case (float *)0x12:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9bc);
    break;
  case (float *)0x13:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9b8);
    break;
  case (float *)0x14:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (int *)(param_1 + 0x9b4);
    break;
  case (float *)0x15:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9b0);
    break;
  case (float *)0x16:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9ac);
    break;
  case (float *)0x17:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9a8);
    break;
  case (float *)0x18:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (int *)(param_1 + 0x9a4);
  }
  return param_2;
}


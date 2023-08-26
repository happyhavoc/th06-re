
void FUN_0043a9c0(undefined4 *param_1,LPSTR param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,int param_9,
                 undefined4 param_10)

{
  undefined4 *puVar1;
  void *pvVar2;
  int **in_ECX;
  int iVar3;
  uint *puVar4;
  uint unaff_retaddr;
  undefined4 local_7c;
  void **local_78;
  uint local_54;
  int *local_50;
  int local_4c;
  uint local_48 [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 *local_20;
  void **local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004692d6;
  local_10 = ExceptionList;
  local_24 = __security_cookie ^ unaff_retaddr;
  if (*in_ECX != (int *)0x0) {
    local_20 = (undefined4 *)0x0;
    local_1c = (void **)0x0;
    local_18 = (void *)0x0;
    local_50 = (int *)0x0;
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)operator_new(0x98);
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      local_78 = (void **)0x0;
    }
    else {
      local_78 = (void **)FUN_0043b9b0(puVar1);
    }
    local_8 = 0xffffffff;
    local_1c = local_78;
    FUN_0043ba60(local_78,param_2,0,(void *)0x1);
    local_14 = param_9 * param_8;
    puVar4 = local_48;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_48[0] = 0x24;
    local_48[1] = param_3 | 0x18188;
    local_48[2] = local_14;
    local_34 = param_4;
    local_30 = param_5;
    local_2c = param_6;
    local_28 = param_7;
    local_38 = *local_1c;
    local_4c = (**(code **)(**in_ECX + 0xc))(*in_ECX,local_48,&local_20,0);
    if (((-1 < local_4c) &&
        (local_4c = (**(code **)*local_20)(local_20,&DAT_0046fe10,&local_50), -1 < local_4c)) &&
       (local_18 = operator_new(param_8 << 3), local_18 != (void *)0x0)) {
      for (local_54 = 0; local_54 < param_8; local_54 = local_54 + 1) {
        *(uint *)((int)local_18 + local_54 * 8) = param_9 * local_54 + -1 + param_9;
        *(undefined4 *)((int)local_18 + local_54 * 8 + 4) = param_10;
      }
      local_4c = (**(code **)(*local_50 + 0xc))(local_50,param_8,local_18);
      if (local_4c < 0) {
        if (local_50 != (int *)0x0) {
          (**(code **)(*local_50 + 8))(local_50);
          local_50 = (int *)0x0;
        }
        if (local_18 != (void *)0x0) {
          _free(local_18);
          local_18 = (void *)0x0;
        }
      }
      else {
        if (local_50 != (int *)0x0) {
          (**(code **)(*local_50 + 8))(local_50);
          local_50 = (int *)0x0;
        }
        if (local_18 != (void *)0x0) {
          _free(local_18);
          local_18 = (void *)0x0;
        }
        pvVar2 = operator_new(0x34);
        local_8 = 1;
        if (pvVar2 == (void *)0x0) {
          local_7c = 0;
        }
        else {
          local_7c = FUN_0043b420(local_20,local_14,local_1c,param_9);
        }
        local_8 = 0xffffffff;
        *param_1 = local_7c;
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ unaff_retaddr);
  return;
}


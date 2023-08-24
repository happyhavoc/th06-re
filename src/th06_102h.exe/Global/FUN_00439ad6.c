
undefined4 FUN_00439ad6(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  void *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x44200000;
  local_c = 0x43f00000;
  if (*(int *)((int)param_1 + 0x81f0) != 0) {
    VERY_BIG_STRUCT->field20246_0x210b8 = 0;
    FUN_00435300(0,0,0,0,0);
    if (*(int *)((int)param_1 + 0x8210) == 0) {
      if (*(int *)((int)param_1 + 0x820c) != 0) {
        *(int *)((int)param_1 + 0x820c) = *(int *)((int)param_1 + 0x820c) + -1;
        local_8 = (*(uint *)((int)param_1 + 0x8200) >> 0x18) -
                  (*(uint *)((int)param_1 + 0x81fc) >> 0x18);
        FUN_0042f8b0(&local_18,
                     ((uint)(local_8 * *(int *)((int)param_1 + 0x820c)) /
                      *(uint *)((int)param_1 + 0x8214) + (*(uint *)((int)param_1 + 0x81fc) >> 0x18))
                     * 0x1000000 | *(uint *)((int)param_1 + 0x8200) & 0xffffff);
      }
    }
    else {
      if (*(int *)((int)param_1 + 0x820c) < *(int *)((int)param_1 + 0x8210)) {
        *(int *)((int)param_1 + 0x820c) = *(int *)((int)param_1 + 0x820c) + 1;
      }
      local_8 = (*(uint *)((int)param_1 + 0x8200) >> 0x18) -
                (*(uint *)((int)param_1 + 0x81fc) >> 0x18);
      FUN_0042f8b0(&local_18,
                   ((uint)(local_8 * *(int *)((int)param_1 + 0x820c)) /
                    *(uint *)((int)param_1 + 0x8210) + (*(uint *)((int)param_1 + 0x81fc) >> 0x18)) *
                   0x1000000 | *(uint *)((int)param_1 + 0x8200) & 0xffffff);
    }
    for (local_1c = 0; local_1c < 0x62; local_1c = local_1c + 1) {
      if (*(int *)((int)local_20 + 0xc0) == 0) {
        bVar4 = false;
      }
      else if (**(int **)((int)local_20 + 0xc0) < 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(&VERY_BIG_STRUCT->field_0x1c110 + **(int **)((int)local_20 + 0xc0) * 4) !=
                0;
      }
      if (bVar4) {
        uVar1 = *(undefined4 *)((int)local_20 + 0x90);
        uVar2 = *(undefined4 *)((int)local_20 + 0x94);
        uVar3 = *(undefined4 *)((int)local_20 + 0x98);
        *(float *)((int)local_20 + 0x90) =
             *(float *)((int)local_20 + 0x90) + *(float *)((int)local_20 + 0xe4);
        *(float *)((int)local_20 + 0x94) =
             *(float *)((int)local_20 + 0x94) + *(float *)((int)local_20 + 0xe8);
        *(float *)((int)local_20 + 0x98) =
             *(float *)((int)local_20 + 0x98) + *(float *)((int)local_20 + 0xec);
        FUN_00432cc0(local_20);
        *(undefined4 *)((int)local_20 + 0x90) = uVar1;
        *(undefined4 *)((int)local_20 + 0x94) = uVar2;
        *(undefined4 *)((int)local_20 + 0x98) = uVar3;
      }
      local_20 = (void *)((int)local_20 + 0x110);
    }
    if ((0xc < *(int *)((int)param_1 + 0x81f0)) && (*(int *)((int)param_1 + 0x81f0) < 0x10)) {
      FUN_00438bc1();
    }
    FUN_00439965();
  }
  return 1;
}


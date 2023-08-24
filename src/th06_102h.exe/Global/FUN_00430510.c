
undefined4 __fastcall FUN_00430510(undefined4 *param_1)

{
  void *_Memory;
  int local_8;
  
  if (param_1[0x184] != 0) {
    for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
      if (param_1[local_8 + 0x82] != 0) {
        (**(code **)(*(int *)param_1[local_8 + 0x82] + 8))(param_1[local_8 + 0x82]);
        param_1[local_8 + 0x82] = 0;
      }
      if (param_1[local_8 + 2] != 0) {
        (**(code **)(*(int *)param_1[local_8 + 2] + 8))(param_1[local_8 + 2]);
        param_1[local_8 + 2] = 0;
      }
    }
    KillTimer((HWND)param_1[0x183],1);
    FUN_00430f80();
    *param_1 = 0;
    (**(code **)(*(int *)param_1[0x182] + 0x48))(param_1[0x182]);
    if (param_1[0x182] != 0) {
      (**(code **)(*(int *)param_1[0x182] + 8))(param_1[0x182]);
      param_1[0x182] = 0;
    }
    if (param_1[0x18b] != 0) {
      if ((undefined4 *)param_1[0x18b] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)param_1[0x18b])(1);
      }
      param_1[0x18b] = 0;
    }
    if (param_1[0x184] != 0) {
      _Memory = (void *)param_1[0x184];
      if (_Memory != (void *)0x0) {
        FUN_0043a7d0();
        _free(_Memory);
      }
      param_1[0x184] = 0;
    }
  }
  return 0;
}


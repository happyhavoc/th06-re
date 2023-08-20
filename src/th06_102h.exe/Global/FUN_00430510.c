
undefined4 FUN_00430510(void)

{
  void *_Memory;
  undefined4 *in_ECX;
  int local_8;
  
  if (in_ECX[0x184] != 0) {
    for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
      if (in_ECX[local_8 + 0x82] != 0) {
        (**(code **)(*(int *)in_ECX[local_8 + 0x82] + 8))(in_ECX[local_8 + 0x82]);
        in_ECX[local_8 + 0x82] = 0;
      }
      if (in_ECX[local_8 + 2] != 0) {
        (**(code **)(*(int *)in_ECX[local_8 + 2] + 8))(in_ECX[local_8 + 2]);
        in_ECX[local_8 + 2] = 0;
      }
    }
    KillTimer((HWND)in_ECX[0x183],1);
    FUN_00430f80();
    *in_ECX = 0;
    (**(code **)(*(int *)in_ECX[0x182] + 0x48))(in_ECX[0x182]);
    if (in_ECX[0x182] != 0) {
      (**(code **)(*(int *)in_ECX[0x182] + 8))(in_ECX[0x182]);
      in_ECX[0x182] = 0;
    }
    if (in_ECX[0x18b] != 0) {
      if ((undefined4 *)in_ECX[0x18b] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)in_ECX[0x18b])(1);
      }
      in_ECX[0x18b] = 0;
    }
    if (in_ECX[0x184] != 0) {
      _Memory = (void *)in_ECX[0x184];
      if (_Memory != (void *)0x0) {
        FUN_0043a7d0();
        _free(_Memory);
      }
      in_ECX[0x184] = 0;
    }
  }
  return 0;
}


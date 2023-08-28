
void __thiscall FUN_004242f3(int param_1_00,int param_2)

{
  void *_Memory;
  
  if (*(int *)(param_1_00 + 0x1bc + param_2 * 4) != 0) {
    FUN_0043c8d0();
    _Memory = *(void **)(param_1_00 + 0x1bc + param_2 * 4);
    if (_Memory != (void *)0x0) {
      thunk_FUN_0043c8d0();
      _free(_Memory);
    }
    *(undefined4 *)(param_1_00 + 0x1bc + param_2 * 4) = 0;
  }
  return;
}


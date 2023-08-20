
void FUN_004242f3(int param_1)

{
  void *_Memory;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1bc + param_1 * 4) != 0) {
    FUN_0043c8d0();
    _Memory = *(void **)(in_ECX + 0x1bc + param_1 * 4);
    if (_Memory != (void *)0x0) {
      thunk_FUN_0043c8d0();
      _free(_Memory);
    }
    *(undefined4 *)(in_ECX + 0x1bc + param_1 * 4) = 0;
  }
  return;
}


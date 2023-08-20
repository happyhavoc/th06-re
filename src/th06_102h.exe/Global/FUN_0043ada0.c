
void FUN_0043ada0(void)

{
  void *_Memory;
  undefined4 *in_ECX;
  uint local_8;
  
  *in_ECX = &PTR_FUN_0046c680;
  for (local_8 = 0; local_8 < (uint)in_ECX[4]; local_8 = local_8 + 1) {
    if (*(int *)(in_ECX[1] + local_8 * 4) != 0) {
      (**(code **)(**(int **)(in_ECX[1] + local_8 * 4) + 8))
                (*(undefined4 *)(in_ECX[1] + local_8 * 4));
      *(undefined4 *)(in_ECX[1] + local_8 * 4) = 0;
    }
  }
  if (in_ECX[1] != 0) {
    _free((void *)in_ECX[1]);
    in_ECX[1] = 0;
  }
  if (in_ECX[3] != 0) {
    _Memory = (void *)in_ECX[3];
    if (_Memory != (void *)0x0) {
      FUN_0043ba10();
      _free(_Memory);
    }
    in_ECX[3] = 0;
  }
  return;
}


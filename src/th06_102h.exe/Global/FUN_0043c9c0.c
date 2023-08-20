
void * FUN_0043c9c0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  void *_Memory;
  int **in_ECX;
  size_t *unaff_EBX;
  size_t _Size;
  int *unaff_EDI;
  
  if (*in_ECX == (int *)0x0) {
    return (void *)0x0;
  }
  if (((param_3 < in_ECX[2]) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = (**(code **)(**in_ECX + 0xc))(in_ECX[4][(int)param_3 * 0x45 + 3]);
    if (iVar1 != 0) {
      if (param_3 == (int *)((int)in_ECX[2] + -1)) {
        _Size = (int)in_ECX[3] - in_ECX[4][(int)param_3 * 0x45 + 3];
      }
      else {
        _Size = in_ECX[4][(int)param_3 * 0x45 + 0x48] - in_ECX[4][(int)param_3 * 0x45 + 3];
      }
      _Memory = _malloc(_Size);
      if (_Memory != (void *)0x0) {
        iVar1 = (**(code **)(**in_ECX + 0x14))(_Memory,_Size);
        if (iVar1 != 0) {
          *unaff_EDI = in_ECX[4][(int)param_3 * 0x45 + 4];
          *unaff_EBX = _Size;
          return _Memory;
        }
        _free(_Memory);
      }
    }
  }
  return (void *)0x0;
}


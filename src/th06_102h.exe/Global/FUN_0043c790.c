
undefined4 FUN_0043c790(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int **in_ECX;
  
  iVar1 = FUN_0043c380();
  piVar2 = *in_ECX;
  if (iVar1 == 0x33474250) {
    piVar2 = (int *)FUN_0043c310();
    in_ECX[2] = piVar2;
    piVar2 = (int *)FUN_0043c310();
    in_ECX[3] = piVar2;
    iVar1 = (**(code **)(**in_ECX + 0xc))(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)operator_new((int)in_ECX[2] * 0x114);
      in_ECX[4] = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)0x0;
        if (in_ECX[2] != (int *)0x0) {
          iVar1 = 0;
          do {
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 4 + (int)in_ECX[4]) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + (int)in_ECX[4]) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 0x10 + (int)in_ECX[4]) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 0xc + (int)in_ECX[4]) = uVar3;
            uVar3 = FUN_0043c310();
            *(undefined4 *)(iVar1 + 8 + (int)in_ECX[4]) = uVar3;
            iVar4 = FUN_0043c3c0(iVar1 + 0x14 + (int)in_ECX[4],0x100);
            if (iVar4 == 0) {
              if (*in_ECX != (int *)0x0) {
                (**(code **)(**in_ECX + 0x1c))(1);
                *in_ECX = (int *)0x0;
              }
              if (in_ECX[4] != (int *)0x0) {
                _free(in_ECX[4]);
                in_ECX[4] = (int *)0x0;
              }
              return 0;
            }
            piVar2 = (int *)((int)piVar2 + 1);
            iVar1 = iVar1 + 0x114;
          } while (piVar2 < in_ECX[2]);
        }
        return 1;
      }
      if (*in_ECX == (int *)0x0) {
        return 0;
      }
      (**(code **)(**in_ECX + 0x1c))(1);
      *in_ECX = (int *)0x0;
      return 0;
    }
    piVar2 = *in_ECX;
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar2 + 0x1c))(1);
  *in_ECX = (int *)0x0;
  return 0;
}


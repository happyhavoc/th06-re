
uint FUN_0043c310(void)

{
  int iVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 != 0) {
    uVar3 = uVar3 | 1;
  }
  switch(uVar3) {
  case 0:
    uVar3 = 0x80;
    break;
  case 1:
    uVar3 = 0x8000;
    break;
  case 2:
    uVar3 = 0x800000;
    break;
  case 3:
    uVar3 = 0x80000000;
    break;
  default:
    goto switchD_0043c338_caseD_4;
  }
  do {
    iVar1 = (**(code **)*in_ECX)();
    if (iVar1 != 0) {
      uVar2 = uVar2 | uVar3;
    }
    uVar3 = uVar3 >> 1;
  } while (uVar3 != 0);
switchD_0043c338_caseD_4:
  return uVar2;
}


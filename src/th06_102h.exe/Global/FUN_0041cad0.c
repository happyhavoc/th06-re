
int FUN_0041cad0(void)

{
  short *psVar1;
  undefined4 uVar2;
  short *in_ECX;
  int local_c;
  short *local_8;
  
  local_c = 0;
  local_8 = in_ECX + 0x10;
LAB_0041cae9:
  while( true ) {
    if (local_8 == (short *)0x0) {
      return local_c;
    }
    if (*(int *)(local_8 + 2) != 0) break;
LAB_0041cb5c:
    local_8 = *(short **)(local_8 + 10);
  }
  do {
    uVar2 = (**(code **)(local_8 + 2))(*(undefined4 *)(local_8 + 0xe));
    switch(uVar2) {
    case 0:
      goto switchD_0041cb14_caseD_0;
    default:
      local_c = local_c + 1;
      goto LAB_0041cb5c;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    }
  } while( true );
switchD_0041cb14_caseD_0:
  psVar1 = *(short **)(local_8 + 10);
  FUN_0041cde0(in_ECX,local_8);
  local_c = local_c + 1;
  local_8 = psVar1;
  goto LAB_0041cae9;
}


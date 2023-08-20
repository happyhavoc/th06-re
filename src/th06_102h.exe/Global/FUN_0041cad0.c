
int FUN_0041cad0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = in_ECX + 0x20;
LAB_0041cae9:
  while( true ) {
    if (local_8 == 0) {
      return local_c;
    }
    if (*(int *)(local_8 + 4) != 0) break;
LAB_0041cb5c:
    local_8 = *(int *)(local_8 + 0x14);
  }
  do {
    uVar2 = (**(code **)(local_8 + 4))(*(undefined4 *)(local_8 + 0x1c));
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
  iVar1 = *(int *)(local_8 + 0x14);
  FUN_0041cde0(local_8);
  local_c = local_c + 1;
  local_8 = iVar1;
  goto LAB_0041cae9;
}


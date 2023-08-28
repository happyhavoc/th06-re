
int __fastcall RunChain(ChainElem *param_1)

{
  ChainElem *pCVar1;
  undefined4 uVar2;
  int local_c;
  ChainElem *local_8;
  
  local_c = 0;
  local_8 = param_1 + 1;
LAB_0041cae9:
  while( true ) {
    if (local_8 == (ChainElem *)0x0) {
      return local_c;
    }
    if (local_8->callback != 0) break;
LAB_0041cb5c:
    local_8 = local_8->next;
  }
  do {
    uVar2 = (*(code *)local_8->callback)(local_8->arg);
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
  pCVar1 = local_8->next;
  CutChain(param_1,local_8);
  local_c = local_c + 1;
  local_8 = pCVar1;
  goto LAB_0041cae9;
}


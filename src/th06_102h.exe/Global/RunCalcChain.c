
int __fastcall RunCalcChain(Chain *param_1)

{
  Chain *pCVar1;
  undefined4 uVar2;
  int local_c;
  Chain *local_8;
  
LAB_0041ca19:
  local_c = 0;
  local_8 = param_1;
LAB_0041ca26:
  while( true ) {
    if (local_8 == (Chain *)0x0) {
      return local_c;
    }
    if ((local_8->calcChain).callback != 0) break;
LAB_0041ca9b:
    local_8 = (Chain *)(local_8->calcChain).next;
  }
  do {
    uVar2 = (*(code *)(local_8->calcChain).callback)((local_8->calcChain).arg);
    switch(uVar2) {
    case 0:
      goto switchD_0041ca51_caseD_0;
    default:
      local_c = local_c + 1;
      goto LAB_0041ca9b;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    case 6:
      goto LAB_0041ca19;
    }
  } while( true );
switchD_0041ca51_caseD_0:
  pCVar1 = (Chain *)(local_8->calcChain).next;
  CutChain(param_1,&local_8->calcChain);
  local_c = local_c + 1;
  local_8 = pCVar1;
  goto LAB_0041ca26;
}


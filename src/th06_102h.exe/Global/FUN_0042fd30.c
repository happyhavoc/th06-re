
int * FUN_0042fd30(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *local_2c;
  ChainElem *local_18;
  ChainElem *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046926b;
  local_10 = ExceptionList;
  local_14 = (ChainElem *)0x0;
  local_18 = (ChainElem *)0x0;
  ExceptionList = &local_10;
  local_2c = (int *)operator_new(0x30);
  local_8 = 0;
  if (local_2c == (int *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    FUN_00424127((AnmTimer *)(local_2c + 9));
  }
  local_8 = 0xffffffff;
  if (local_2c == (int *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    piVar2 = local_2c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    if (param_1 == 0) {
      local_14 = ChainElem::Allocate(FUN_0042f800);
      local_18 = ChainElem::Allocate(FUN_0042fee0);
    }
    else if (param_1 == 1) {
      local_14 = ChainElem::Allocate(FUN_0042ffc0);
    }
    else if (param_1 == 2) {
      local_14 = ChainElem::Allocate(FUN_0042fc80);
      local_18 = ChainElem::Allocate(FUN_0042ff70);
    }
    local_14->addedCallback = FUN_004301f0;
    local_14->deletedCallback = FUN_00430220;
    local_14->arg = local_2c;
    *local_2c = param_1;
    local_2c[5] = param_2;
    local_2c[6] = param_3;
    local_2c[7] = param_4;
    local_2c[8] = param_5;
    iVar1 = Chain::AddToCalcChain(&Chain_0069d918,local_14,0xe);
    if (iVar1 == 0) {
      if (local_18 != (ChainElem *)0x0) {
        local_18->arg = local_2c;
        Chain::AddToDrawChain(&Chain_0069d918,local_18,0x10);
      }
      local_2c[1] = (int)local_14;
      local_2c[2] = (int)local_18;
    }
    else {
      local_2c = (int *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}


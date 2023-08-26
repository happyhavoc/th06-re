
ChainElem * __thiscall CreateChainElem(void *this,undefined4 param_1)

{
  ChainElem *this_00;
  ChainElem *local_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046919b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (ChainElem *)operator_new(0x20);
  local_8 = 0;
  if (this_00 == (ChainElem *)0x0) {
    local_24 = (ChainElem *)0x0;
  }
  else {
    local_24 = FUN_0041c720(this_00);
  }
  local_24->callback = param_1;
  local_24->field3_0x8 = 0;
  local_24->field4_0xc = 0;
  local_24->field1_0x2 = local_24->field1_0x2 | 1;
  ExceptionList = local_10;
  return local_24;
}


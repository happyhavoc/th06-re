
undefined2 * __fastcall UnkChain2(undefined2 *param_1)

{
  UINT UVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ChainElem::Init((ChainElem *)param_1);
  local_8 = 0;
  ChainElem::Init((ChainElem *)(param_1 + 0x10));
  UVar1 = midiOutGetNumDevs();
  *(UINT *)(param_1 + 0x20) = UVar1;
  *(undefined4 *)(param_1 + 0x22) = 0;
  ExceptionList = local_10;
  return param_1;
}


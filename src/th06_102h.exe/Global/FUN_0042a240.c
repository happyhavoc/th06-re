
undefined4 FUN_0042a240(int param_1,undefined4 param_2)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  if ((DAT_006c6ec4 < 0.99 == NAN(DAT_006c6ec4)) || (param_1 != 0)) {
    DAT_006c6ec4 = 1.0;
    if (DAT_006d3f18 == (void *)0x0) {
      local_14 = operator_new(0x74);
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      DAT_006d3f18 = local_14;
      *(undefined4 *)((int)local_14 + 4) = 0;
      *(int *)((int)local_14 + 8) = param_1;
      *(undefined4 *)((int)local_14 + 0xc) = param_2;
      if (param_1 == 0) {
        pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042a470);
        *(ChainElem **)((int)local_14 + 0x68) = pCVar1;
        *(code **)(*(int *)((int)local_14 + 0x68) + 8) = FUN_0042a680;
        *(code **)(*(int *)((int)local_14 + 0x68) + 0xc) = FUN_0042aa20;
        pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042a670);
        *(ChainElem **)((int)local_14 + 0x6c) = pCVar1;
        *(void **)(*(int *)((int)local_14 + 0x68) + 0x1c) = local_14;
        iVar2 = AddToCalcChain((short *)&DAT_0069d918,*(ChainElem **)((int)local_14 + 0x68),0xf);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        *(undefined4 *)((int)local_14 + 0x70) = 0;
      }
      else if (param_1 == 1) {
        pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042a570);
        *(ChainElem **)((int)local_14 + 0x68) = pCVar1;
        *(code **)(*(int *)((int)local_14 + 0x68) + 8) = FUN_0042a840;
        *(code **)(*(int *)((int)local_14 + 0x68) + 0xc) = FUN_0042aa20;
        pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042a670);
        *(ChainElem **)((int)local_14 + 0x6c) = pCVar1;
        *(void **)(*(int *)((int)local_14 + 0x68) + 0x1c) = local_14;
        iVar2 = AddToCalcChain((short *)&DAT_0069d918,*(ChainElem **)((int)local_14 + 0x68),5);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042a510);
        *(ChainElem **)((int)local_14 + 0x70) = pCVar1;
        *(void **)(*(int *)((int)local_14 + 0x70) + 0x1c) = local_14;
        AddToCalcChain((short *)&DAT_0069d918,*(ChainElem **)((int)local_14 + 0x70),0x10);
      }
      *(void **)(*(int *)((int)local_14 + 0x6c) + 0x1c) = local_14;
      AddToDrawChain(0x69d918,*(ChainElem **)((int)local_14 + 0x6c),0xd);
    }
    else if (param_1 == 0) {
      FUN_0042a680(DAT_006d3f18);
    }
    else if (param_1 == 1) {
      uVar3 = FUN_0042a840(DAT_006d3f18);
      return uVar3;
    }
  }
  return 0;
}

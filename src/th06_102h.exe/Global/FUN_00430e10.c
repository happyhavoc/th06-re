
undefined4 FUN_00430e10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x610) == 0) {
    uVar3 = 0xffffffff;
  }
  else if (g_GameContext.cfg.unk6 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(int *)(in_ECX + 0x62c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    _Memory = (int *)OpenPath(param_1,0);
    if (_Memory == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x62c) + 0xc);
      iVar2 = _Memory[1];
      *(int *)(iVar1 + 0x90) = *_Memory << 2;
      *(int *)(iVar1 + 0x94) = iVar2 << 2;
      _free(_Memory);
      uVar3 = 0;
    }
  }
  return uVar3;
}


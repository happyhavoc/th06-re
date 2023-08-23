
undefined4 __thiscall FUN_00430ec0(int param_1_00,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  DebugPrint2("play BGM\n");
  if (*(int *)(param_1_00 + 0x62c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0043b8e0();
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0043b200(0);
      iVar2 = FUN_0043aea0(uVar1,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar2 = FUN_0043b240(0,1);
        if (iVar2 < 0) {
          uVar1 = 0xffffffff;
        }
        else {
          DebugPrint2("comp\n");
          *(undefined4 *)(param_1_00 + 0x634) = param_2;
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}


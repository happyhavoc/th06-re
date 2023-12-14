
undefined4 FUN_0042a510(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if ((((g_GameManager.field40_0x1821 != 0) &&
       (bVar1 = FUN_004195a2(0x69bc30), CONCAT31(extraout_var,bVar1) != 0)) &&
      (iVar2 = FUN_00417344(0x69bc30), iVar2 != 0)) && (*param_1 % 3 != 2)) {
    return 6;
  }
  return 1;
}


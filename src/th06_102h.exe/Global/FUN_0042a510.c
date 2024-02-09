
undefined4 FUN_0042a510(int *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if ((((g_GameManager.field28_0x1821 != 0) && (BVar1 = Gui::HasCurrentMsgIdx(&g_Gui), BVar1 != 0))
      && (iVar2 = FUN_00417344(0x69bc30), iVar2 != 0)) && (*param_1 % 3 != 2)) {
    return 6;
  }
  return 1;
}


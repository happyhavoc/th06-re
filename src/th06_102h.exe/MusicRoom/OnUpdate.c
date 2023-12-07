
undefined4 MusicRoom::OnUpdate(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      if ((iVar2 == 1) && (FUN_00424ead(param_1), iVar2 != 0)) {
        return 0;
      }
      break;
    }
    iVar2 = FUN_00424e8f(param_1);
  } while (iVar2 != 0);
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(param_1 + 0x24));
  return 1;
}


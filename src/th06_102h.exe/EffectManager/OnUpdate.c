
undefined4 EffectManager::OnUpdate(int param_1)

{
  int iVar1;
  int local_c;
  AnmVm *local_8;
  
  local_8 = (AnmVm *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)(local_8[1].matrix.m[2] + 3) != '\0') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      if ((local_8[1].matrix.m[2][2] != 0.0) &&
         (iVar1 = (*(code *)local_8[1].matrix.m[2][2])(local_8), iVar1 != 1)) {
        *(undefined *)(local_8[1].matrix.m[2] + 3) = 0;
      }
      iVar1 = AnmManager::ExecuteScript(g_AnmManager,local_8);
      if (iVar1 != 0) {
        *(undefined *)(local_8[1].matrix.m[2] + 3) = 0;
      }
      local_8[1].matrix.m[1][2] = local_8[1].matrix.m[2][0];
      Supervisor::TickTimer
                (&g_Supervisor,(int *)(local_8[1].matrix.m + 2),local_8[1].matrix.m[1] + 3);
    }
    local_8 = (AnmVm *)(local_8[1].matrix.m + 3);
  }
  return 1;
}


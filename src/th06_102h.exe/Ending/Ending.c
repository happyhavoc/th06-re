
undefined4 * __fastcall Ending::Ending(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = (AnmVm *)(param_1 + 5);
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x447));
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x44a));
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x44d));
  puVar2 = param_1;
  for (iVar1 = 0x45c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x452] = 8;
  param_1[0x44c] = 0;
  param_1[1099] = 0;
  param_1[0x44a] = 4294966297;
  param_1[0x449] = 0;
  param_1[0x448] = 0;
  param_1[0x447] = 4294966297;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}

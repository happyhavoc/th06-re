
undefined4 * __fastcall Ending::Ending(Ending *ending)

{
  int iVar1;
  Ending *pEVar2;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = ending->AnmVm;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  AnmTimer::AnmTimer(&ending->anmTimer1);
  AnmTimer::AnmTimer(&ending->anmTimer2);
  AnmTimer::AnmTimer(&ending->anmTimer3);
  pEVar2 = ending;
                    /* memset? */
  for (iVar1 = 0x45c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pEVar2 = 0;
    pEVar2 = (Ending *)&pEVar2->field_0x4;
  }
  *(undefined4 *)&ending->field_0x1148 = 8;
  (ending->anmTimer2).current = 0;
  (ending->anmTimer2).subFrame = 0.0;
  (ending->anmTimer2).previous = -999;
  (ending->anmTimer1).current = 0;
  (ending->anmTimer1).subFrame = 0.0;
  (ending->anmTimer1).previous = -999;
  (ending->anmTimer4).previous = 0;
  (ending->anmTimer4).subFrame = 0.0;
  (ending->anmTimer4).current = 0;
  return (undefined4 *)ending;
}



undefined4 * __thiscall Ending::Ending(Ending *this)

{
  int iVar1;
  Ending *pEVar2;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = this->AnmVm;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  AnmTimer::AnmTimer(&this->anmTimer1);
  AnmTimer::AnmTimer(&this->anmTimer2);
  AnmTimer::AnmTimer(&this->anmTimer3);
  pEVar2 = this;
                    /* memset? */
  for (iVar1 = 0x45c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pEVar2 = 0;
    pEVar2 = (Ending *)&pEVar2->field_0x4;
  }
  *(undefined4 *)&this->field_0x1148 = 8;
  (this->anmTimer2).current = 0;
  (this->anmTimer2).subFrame = 0.0;
  (this->anmTimer2).previous = -999;
  (this->anmTimer1).current = 0;
  (this->anmTimer1).subFrame = 0.0;
  (this->anmTimer1).previous = -999;
  (this->anmTimer4).previous = 0;
  (this->anmTimer4).subFrame = 0.0;
  (this->anmTimer4).current = 0;
  return (undefined4 *)this;
}


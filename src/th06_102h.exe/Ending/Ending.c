
Ending * __thiscall th06::Ending::Ending(Ending *this)

{
  int iVar1;
  Ending *pEVar2;
  AnmVm *vm_ref;
  int vm_list_length;
  
                    /* Init all 16 vms. */
  vm_list_length = 16;
  vm_ref = this->sprites;
  while (vm_list_length = vm_list_length + -1, -1 < vm_list_length) {
    AnmVm::AnmVm(vm_ref);
    vm_ref = vm_ref + 1;
  }
  ZunTimer::Initialize(&this->Timer1);
  ZunTimer::Initialize(&this->Timer2);
  ZunTimer::Initialize(&this->Timer3);
  pEVar2 = this;
                    /* memset? */
  for (iVar1 = 1116; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->calcChain = (ChainElem *)0x0;
    pEVar2 = (Ending *)&pEVar2->drawChain;
  }
  this->line2Delay = 8;
  (this->Timer2).current = 0;
  (this->Timer2).subFrame = 0.0;
  (this->Timer2).previous = -999;
  (this->Timer1).current = 0;
  (this->Timer1).subFrame = 0.0;
  (this->Timer1).previous = -999;
  (this->backgroundPos).x = 0.0;
  (this->backgroundPos).y = 0.0;
  this->backgroundScrollSpeed = 0.0;
  return this;
}


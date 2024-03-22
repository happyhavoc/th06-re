
GuiImpl * __thiscall GuiImpl::GuiImpl(GuiImpl *this)

{
  GuiImpl *local_10;
  int local_8;
  
  local_8 = 0x1a;
  local_10 = this;
  while (local_8 = local_8 + -1, -1 < local_8) {
    AnmVm::AnmVm(local_10->vms);
    local_10 = (GuiImpl *)(local_10->vms + 1);
  }
  AnmVm::AnmVm(&this->vm1);
  AnmVm::AnmVm(&this->vm2);
  AnmVm::AnmVm(&this->vm3);
  AnmVm::AnmVm(&this->vm4);
  AnmVm::AnmVm(&this->vm5);
  AnmVm::AnmVm(&this->vm6);
  AnmVm::AnmVm(&this->vm7);
  AnmVm::AnmVm(&this->vm8);
  AnmVm::AnmVm(&this->vm9);
  GuiMsgVm::GuiMsgVm(&this->msg);
  ZunTimer::Initialize(&(this->field15_0x2be4).field3_0x14);
  ZunTimer::Initialize(&(this->field16_0x2c04).field3_0x14);
  ZunTimer::Initialize(&(this->field17_0x2c24).field3_0x14);
  return this;
}


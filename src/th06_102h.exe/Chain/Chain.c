
void __thiscall Chain::Chain(Chain *this)

{
  UINT midiOutputDeviceCount;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ChainElem::ChainElem(&this->calcChain);
  local_8 = 0;
  ChainElem::ChainElem(&this->drawChain);
  midiOutputDeviceCount = midiOutGetNumDevs();
  this->midiOutputDeviceCount = midiOutputDeviceCount;
  this->unk = 0;
  ExceptionList = local_10;
  return;
}


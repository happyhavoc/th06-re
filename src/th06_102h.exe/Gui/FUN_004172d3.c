
undefined4 __thiscall Gui::FUN_004172d3(Gui *this)

{
  undefined4 local_c;
  
  if (((this->impl->vm9).spriteNumber < 0) || (((this->impl->vm9).flags >> 0xd & 1) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}


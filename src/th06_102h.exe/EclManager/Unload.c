
void __thiscall th06::EclManager::Unload(EclManager *this)

{
  if (this->ecl_file != (EclRawHeader *)0x0) {
    _free(this->ecl_file);
  }
  this->ecl_file = (EclRawHeader *)0x0;
  return;
}


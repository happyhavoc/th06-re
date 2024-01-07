
void * __thiscall CSound::operator_delete(CSound *this,uint param_1)

{
  ~CSound(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


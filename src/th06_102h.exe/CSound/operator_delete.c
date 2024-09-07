
void * __thiscall th06::CSound::operator_delete(CSound *this,uint param_1)

{
  ~CSound(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this);
  }
  return this;
}



void * __thiscall th06::CStreamingSound::operator_delete(CStreamingSound *this,uint param_1)

{
  ~CStreamingSound(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this);
  }
  return this;
}


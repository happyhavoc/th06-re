
void * __thiscall CStreamingSound::operator_delete(CStreamingSound *this,uint param_1)

{
  ~CStreamingSound(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


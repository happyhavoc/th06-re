
void __thiscall CStreamingSound::~CStreamingSound(CStreamingSound *this)

{
  (this->base).vtbl = &PTR_operator_delete_0046c69c;
  CSound::~CSound(&this->base);
  return;
}


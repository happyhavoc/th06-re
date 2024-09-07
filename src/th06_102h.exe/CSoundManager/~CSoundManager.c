
void __thiscall th06::CSoundManager::~CSoundManager(CSoundManager *this)

{
  if (this->m_pDS != (LPDIRECTSOUND8)0x0) {
    (*this->m_pDS->lpVtbl->Release)(this->m_pDS);
    this->m_pDS = (LPDIRECTSOUND8)0x0;
  }
  return;
}



undefined4 __thiscall CStreamingSound::FUN_0043b4d0(CStreamingSound *this)

{
  if ((this->base).field7_0x1c != 0) {
    (this->base).field5_0x14 = (this->base).field5_0x14 + -1;
    if ((this->base).field5_0x14 < 1) {
      (this->base).field7_0x1c = 0;
      (*(*(this->base).m_apDSBuffer)->lpVtbl->Stop)(*(this->base).m_apDSBuffer);
      return 1;
    }
    (*(*(this->base).m_apDSBuffer)->lpVtbl->SetVolume)
              (*(this->base).m_apDSBuffer,
               ((this->base).field5_0x14 * 5000) / (this->base).field6_0x18 + -5000);
  }
  return 0;
}


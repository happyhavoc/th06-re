
undefined4 __thiscall th06::CStreamingSound::UpdateFadeOut(CStreamingSound *this)

{
  if ((this->base).m_dwIsFadingOut != 0) {
    (this->base).m_dwCurFadeoutProgress = (this->base).m_dwCurFadeoutProgress + -1;
    if ((this->base).m_dwCurFadeoutProgress < 1) {
      (this->base).m_dwIsFadingOut = 0;
      (*(*(this->base).m_apDSBuffer)->lpVtbl->Stop)(*(this->base).m_apDSBuffer);
      return 1;
    }
    (*(*(this->base).m_apDSBuffer)->lpVtbl->SetVolume)
              (*(this->base).m_apDSBuffer,
               ((this->base).m_dwCurFadeoutProgress * 5000) / (this->base).m_dwTotalFadeout + -5000)
    ;
  }
  return 0;
}


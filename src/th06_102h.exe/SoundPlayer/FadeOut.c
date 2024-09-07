
void __thiscall th06::SoundPlayer::FadeOut(SoundPlayer *this,float fadeOutSeconds)

{
  CStreamingSound *pCVar1;
  long lVar2;
  
  if (this->backgroundMusic != (CStreamingSound *)0x0) {
    pCVar1 = this->backgroundMusic;
    (pCVar1->base).m_dwIsFadingOut = 1;
    lVar2 = __ftol2(fadeOutSeconds * 60.0);
    (pCVar1->base).m_dwCurFadeoutProgress = lVar2;
    (pCVar1->base).m_dwTotalFadeout = (pCVar1->base).m_dwCurFadeoutProgress;
  }
  return;
}


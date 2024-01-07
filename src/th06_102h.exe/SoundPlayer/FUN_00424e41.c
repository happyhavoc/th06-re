
void __thiscall SoundPlayer::FUN_00424e41(SoundPlayer *this,float param_1)

{
  CStreamingSound *pCVar1;
  long lVar2;
  
  if (this->streamingSound != (CStreamingSound *)0x0) {
    pCVar1 = this->streamingSound;
    (pCVar1->base).field7_0x1c = 1;
    lVar2 = __ftol2((double)(param_1 * 60.0));
    (pCVar1->base).field5_0x14 = lVar2;
    (pCVar1->base).field6_0x18 = (pCVar1->base).field5_0x14;
  }
  return;
}


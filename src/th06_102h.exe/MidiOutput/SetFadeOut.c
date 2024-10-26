
void __thiscall th06::MidiOutput::SetFadeOut(MidiOutput *this,int param_1)

{
                    /* Volume multiplier is later overridden to be inversely proportional to elapsed
                       time */
  this->fadeOutVolumeMultiplier = 0.0;
  this->fadeOutInterval = param_1;
  this->fadeOutElapsedMS = 0;
  this->unk2dc = 0;
  this->fadeOutFlag = 1;
  return;
}


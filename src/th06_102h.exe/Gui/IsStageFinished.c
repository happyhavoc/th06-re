
undefined4 __thiscall Gui::IsStageFinished(Gui *this)

{
  undefined4 local_c;
  
  if (((this->impl->stageFinishedScoreSprite).activeSpriteIndex < 0) ||
     (((this->impl->stageFinishedScoreSprite).flags >> 0xd & 1) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}


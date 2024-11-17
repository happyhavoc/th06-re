
ZunResult __thiscall th06::MusicRoom::CheckInputEnable(MusicRoom *this)

{
  if (7 < this->waitFramesCounter) {
    this->enableInput = 1;
  }
  return ZUN_SUCCESS;
}


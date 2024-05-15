
void __thiscall ResultScreen::FreeScore(ResultScreen *this,int difficulty,int character)

{
  ZunFreeArray(this->scores + difficulty * 4 + character);
  return;
}


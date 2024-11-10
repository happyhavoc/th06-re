
void __thiscall th06::ResultScreen::FreeScore(ResultScreen *this,int difficulty,int character)

{
  FreeAllScores(this->scores + difficulty * 4 + character);
  return;
}



void __thiscall
ResultScreen::FUN_0042bc2d(ResultScreen *this,Hscr *out,int difficulty,int character)

{
  LinkScore(this->scores + difficulty * 4 + character,out);
  return;
}


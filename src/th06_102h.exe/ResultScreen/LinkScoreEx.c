
void __thiscall
th06::ResultScreen::LinkScoreEx(ResultScreen *this,Hscr *out,int difficulty,int character)

{
  LinkScore(this->scores + difficulty * 4 + character,out);
  return;
}


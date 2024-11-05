
int __thiscall
th06::ResultScreen::LinkScoreEx(ResultScreen *this,Hscr *out,int difficulty,int character)

{
  int iVar1;
  
  iVar1 = LinkScore(this->scores + difficulty * 4 + character,out);
  return iVar1;
}


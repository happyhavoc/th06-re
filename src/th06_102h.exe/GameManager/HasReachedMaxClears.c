
/* Not entirely sure about this function, seems to not influence any other behavior */

int __thiscall GameManager::HasReachedMaxClears(GameManager *this,int character,int shottype)

{
  int hasMaxClears;
  
  if (((this->clrd[shottype + character * 2].difficulty_cleared_with_retries[1] == 99) ||
      (this->clrd[shottype + character * 2].difficulty_cleared_with_retries[2] == 99)) ||
     (this->clrd[shottype + character * 2].difficulty_cleared_with_retries[3] == 99)) {
    hasMaxClears = 1;
  }
  else {
    hasMaxClears = 0;
  }
  return hasMaxClears;
}


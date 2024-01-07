
undefined4 __thiscall GameManager::FUN_0043a736(GameManager *this,int character,int shottype)

{
  undefined4 local_c;
  
  if (((this->clrd[shottype + character * 2].difficulty_cleared_with_retries[1] == 99) ||
      (this->clrd[shottype + character * 2].difficulty_cleared_with_retries[2] == 99)) ||
     (this->clrd[shottype + character * 2].difficulty_cleared_with_retries[3] == 99)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}


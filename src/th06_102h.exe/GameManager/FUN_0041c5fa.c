
void __thiscall GameManager::FUN_0041c5fa(GameManager *this,int param_1)

{
  this->subrank = this->subrank - param_1;
  while ((int)this->subrank < 0) {
    this->rank = this->rank - 1;
    this->subrank = this->subrank + 100;
  }
  if ((int)this->rank < (int)this->min_rank) {
    this->rank = this->min_rank;
  }
  return;
}



void __thiscall GameManager::IncreaseSubrank(GameManager *this,int param_1)

{
  this->subrank = this->subrank + param_1;
  while (99 < (int)this->subrank) {
    this->rank = this->rank + 1;
    this->subrank = this->subrank - 100;
  }
  if ((int)this->max_rank < (int)this->rank) {
    this->rank = this->max_rank;
  }
  return;
}


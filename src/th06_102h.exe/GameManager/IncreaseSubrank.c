
void __thiscall th06::GameManager::IncreaseSubrank(GameManager *this,int amount)

{
  this->subrank = this->subrank + amount;
  while (99 < this->subrank) {
    this->rank = this->rank + 1;
    this->subrank = this->subrank + -100;
  }
  if (this->max_rank < this->rank) {
    this->rank = this->max_rank;
  }
  return;
}


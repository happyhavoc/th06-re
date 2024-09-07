
void __thiscall th06::GameManager::DecreaseSubrank(GameManager *this,int amount)

{
  this->subrank = this->subrank - amount;
  while (this->subrank < 0) {
    this->rank = this->rank + -1;
    this->subrank = this->subrank + 100;
  }
  if (this->rank < this->min_rank) {
    this->rank = this->min_rank;
  }
  return;
}


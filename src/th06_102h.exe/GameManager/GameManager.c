
void __thiscall th06::GameManager::GameManager(GameManager *this)

{
  int iVar1;
  GameManager *pGVar2;
  
  pGVar2 = this;
  for (iVar1 = 0x6a0; iVar1 != 0; iVar1 = iVar1 + -1) {
    pGVar2->gui_score = 0;
    pGVar2 = (GameManager *)&pGVar2->score;
  }
  (this->arcade_region_top_left_pos).x = 32.0;
  (this->arcade_region_top_left_pos).y = 16.0;
  (this->arcade_region_size).x = 384.0;
  (this->arcade_region_size).y = 448.0;
  return;
}


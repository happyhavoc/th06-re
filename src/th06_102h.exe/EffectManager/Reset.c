
void __thiscall EffectManager::Reset(EffectManager *this)

{
  int iVar1;
  
  for (iVar1 = 0xbe61; iVar1 != 0; iVar1 = iVar1 + -1) {
    this->next_index = 0;
    this = (EffectManager *)&this->unk;
  }
  return;
}


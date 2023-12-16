
void __thiscall EffectManager::Reset(EffectManager *this)

{
  int iVar1;
  
  for (iVar1 = 0xbe61; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = 0;
    this = (EffectManager *)&this->field_0x4;
  }
  return;
}


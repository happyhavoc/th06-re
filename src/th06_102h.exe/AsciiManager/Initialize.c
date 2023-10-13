
void __thiscall AsciiManager::Initialize(AsciiManager *this)

{
  AnmManager *pAVar1;
  int iVar2;
  AsciiManager *pAVar3;
  
  pAVar3 = this;
  for (iVar2 = 0x306b; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pAVar3->vm0).rotation.x = 0.0;
    pAVar3 = (AsciiManager *)&(pAVar3->vm0).rotation.y;
  }
  this->color = 0xffffffff;
  (this->scale).x = 1.0;
  (this->scale).y = 1.0;
  (this->vm1).flags = (this->vm1).flags | 0x300;
  pAVar1 = g_AnmManager;
  AnmVm::Initialize(&this->vm1);
  AnmManager::SetActiveSprite(pAVar1,&this->vm1,0);
  pAVar1 = g_AnmManager;
  AnmVm::Initialize(&this->vm0);
  AnmManager::SetActiveSprite(pAVar1,&this->vm0,0x20);
  (this->vm1).pos.z = 0.1;
  this->field10_0x6234 = 0;
  return;
}


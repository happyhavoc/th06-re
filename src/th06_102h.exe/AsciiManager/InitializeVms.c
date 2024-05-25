
void __thiscall AsciiManager::InitializeVms(AsciiManager *this)

{
  AnmManager *pAVar1;
  int iVar2;
  uint uVar3;
  AsciiManager *pAVar4;
  
  pAVar4 = this;
  for (iVar2 = 0x306b; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pAVar4->vm0).rotation.x = 0.0;
    pAVar4 = (AsciiManager *)&(pAVar4->vm0).rotation.y;
  }
  this->color = 0xffffffff;
  (this->scale).x = 1.0;
  (this->scale).y = 1.0;
  uVar3._0_2_ = (this->vm1).flags;
  uVar3._2_1_ = (this->vm1).unk_82[0];
  uVar3._3_1_ = (this->vm1).unk_82[1];
  uVar3 = uVar3 | 0x300;
  (this->vm1).flags = (short)uVar3;
  pAVar1 = g_AnmManager;
  (this->vm1).unk_82[0] = (char)(uVar3 >> 0x10);
  (this->vm1).unk_82[1] = (char)(uVar3 >> 0x18);
  AnmVm::Initialize(&this->vm1);
  AnmManager::SetActiveSprite(pAVar1,&this->vm1,0);
  pAVar1 = g_AnmManager;
  AnmVm::Initialize(&this->vm0);
  AnmManager::SetActiveSprite(pAVar1,&this->vm0,0x20);
  (this->vm1).pos.z = 0.1;
  this->isSelected = 0;
  return;
}


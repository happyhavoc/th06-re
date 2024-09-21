
void __thiscall th06::AnmVm::Initialize(AnmVm *this)

{
  (this->uvScrollPos).y = 0.0;
  (this->uvScrollPos).x = 0.0;
  this->scaleInterpFinalX = 0.0;
  this->scaleInterpFinalY = 0.0;
  (this->angleVel).z = 0.0;
  (this->angleVel).y = 0.0;
  (this->angleVel).x = 0.0;
  (this->rotation).z = 0.0;
  (this->rotation).y = 0.0;
  (this->rotation).x = 0.0;
  this->scaleX = 1.0;
  this->scaleY = 1.0;
  this->scaleInterpEndTime = 0;
  this->alphaInterpEndTime = 0;
  (this->color).color = 0xffffffff;
  D3DXMatrixIdentity(&this->matrix);
  *(undefined2 *)&this->flags = 3;
  this->autoRotate = 0;
  this->pendingInterrupt = 0;
  this->posInterpEndTime = 0;
  ZunTimer::Initialize(&this->currentTimeInScript);
  return;
}



int __thiscall AnmManager::FUN_004323a0(AnmManager *this,AnmVm *param_1,int idx)

{
  int res;
  
  if ((int)this->sprites[idx].sourceFileIndex < 0) {
    res = -1;
  }
  else {
    param_1->spriteNumber = (short)idx;
    param_1->sprite = this->sprites + idx;
    InitializeMatrix(&param_1->matrix);
    (param_1->matrix).field0_0x0.field0._11 =
         param_1->sprite->widthPx / param_1->sprite->textureWidth;
    (param_1->matrix).field0_0x0.field0._22 =
         param_1->sprite->heightPx / param_1->sprite->textureHeight;
    res = 0;
  }
  return res;
}


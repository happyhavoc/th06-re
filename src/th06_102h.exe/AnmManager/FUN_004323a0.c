
int __thiscall AnmManager::FUN_004323a0(AnmManager *this,AnmVm *vm,int sprite_index)

{
  int res;
  
  if ((int)this->sprites[sprite_index].sourceFileIndex < 0) {
    res = -1;
  }
  else {
    vm->spriteNumber = (short)sprite_index;
    vm->sprite = this->sprites + sprite_index;
    D3DXMatrixIdentity(&vm->matrix);
    (vm->matrix).field0_0x0.field0._11 = vm->sprite->widthPx / vm->sprite->textureWidth;
    (vm->matrix).field0_0x0.field0._22 = vm->sprite->heightPx / vm->sprite->textureHeight;
    res = 0;
  }
  return res;
}


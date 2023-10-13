
int __thiscall AnmManager::SetActiveSprite(AnmManager *this,AnmVm *vm,int sprite_index)

{
  int res;
  
  if ((int)this->sprites[sprite_index].sourceFileIndex < 0) {
    res = -1;
  }
  else {
    vm->spriteNumber = (short)sprite_index;
    vm->sprite = this->sprites + sprite_index;
    D3DXMatrixIdentity(&vm->matrix);
    (vm->matrix).m[0][0] = vm->sprite->widthPx / vm->sprite->textureWidth;
    (vm->matrix).m[1][1] = vm->sprite->heightPx / vm->sprite->textureHeight;
    res = 0;
  }
  return res;
}


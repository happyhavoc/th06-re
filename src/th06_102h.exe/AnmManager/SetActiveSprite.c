
ZunResult __thiscall AnmManager::SetActiveSprite(AnmManager *this,AnmVm *vm,uint sprite_index)

{
  ZunResult res;
  
  if (this->sprites[sprite_index].sourceFileIndex < 0) {
    res = ZUN_ERROR;
  }
  else {
    vm->activeSpriteIndex = (short)sprite_index;
    vm->sprite = this->sprites + sprite_index;
    D3DXMatrixIdentity(&vm->matrix);
    (vm->matrix).m[0][0] = vm->sprite->widthPx / vm->sprite->textureWidth;
    (vm->matrix).m[1][1] = vm->sprite->heightPx / vm->sprite->textureHeight;
    res = ZUN_SUCCESS;
  }
  return res;
}


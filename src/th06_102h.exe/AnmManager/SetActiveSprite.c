
ZunResult __thiscall th06::AnmManager::SetActiveSprite(AnmManager *this,AnmVm *vm,uint sprite_index)

{
  ZunResult res;
  
  if (*(int *)(this + sprite_index * 0x38) < 0) {
    res = ZUN_ERROR;
  }
  else {
    vm->activeSpriteIndex = (short)sprite_index;
    vm->sprite = (AnmLoadedSprite *)(this + sprite_index * 0x38);
    D3DXMatrixIdentity(&vm->matrix);
    (vm->matrix).m[0][0] = vm->sprite->widthPx / vm->sprite->textureWidth;
    (vm->matrix).m[1][1] = vm->sprite->heightPx / vm->sprite->textureHeight;
    res = ZUN_SUCCESS;
  }
  return res;
}


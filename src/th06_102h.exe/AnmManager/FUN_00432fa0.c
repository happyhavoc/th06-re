
ZunResult __thiscall AnmManager::FUN_00432fa0(AnmManager *this,AnmVm *vm)

{
  ZunResult result;
  float centerX;
  float centerY;
  float fVar1;
  
  if ((vm->flags & AnmVmFlags_1) == AnmVmFlags_None) {
    result = ZUN_ERROR;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    result = ZUN_ERROR;
  }
  else if ((vm->color).color == 0) {
    result = ZUN_ERROR;
  }
  else {
    centerX = (vm->sprite->widthPx * vm->scaleX) / 2.0;
    centerY = (vm->sprite->heightPx * vm->scaleY) / 2.0;
    if ((vm->flags >> 8 & 1) == 0) {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x - centerX;
      fVar1 = (vm->pos).x;
    }
    else {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x;
      fVar1 = centerX + (vm->pos).x;
    }
    g_PrimitivesToDrawVertexBuf[3].pos.x = centerX + fVar1;
    if ((vm->flags >> 8 & 2) == 0) {
      g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y - centerY;
      centerX = (vm->pos).y;
    }
    else {
      g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y;
      centerX = centerY + (vm->pos).y;
    }
    g_PrimitivesToDrawVertexBuf[3].pos.y = centerY + centerX;
    g_PrimitivesToDrawVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x;
    g_PrimitivesToDrawVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y;
    g_PrimitivesToDrawVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x;
    g_PrimitivesToDrawVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y;
    result = DrawInner(this,vm,0);
  }
  return result;
}


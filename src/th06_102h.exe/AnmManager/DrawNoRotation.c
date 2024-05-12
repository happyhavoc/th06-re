
ZunResult __thiscall AnmManager::DrawNoRotation(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ZunResult ZVar4;
  
  if ((*(uint *)&vm->flags & 1) == 0) {
    ZVar4 = ZUN_ERROR;
  }
  else if ((*(uint *)&vm->flags >> 1 & 1) == 0) {
    ZVar4 = ZUN_ERROR;
  }
  else if ((vm->color).color == 0) {
    ZVar4 = ZUN_ERROR;
  }
  else {
    fVar2 = (vm->sprite->widthPx * vm->scaleX) / 2.0;
    fVar3 = (vm->sprite->heightPx * vm->scaleY) / 2.0;
    if ((*(uint *)&vm->flags >> 8 & 1) == 0) {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x - fVar2;
      fVar1 = (vm->pos).x;
    }
    else {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x;
      fVar1 = fVar2 + (vm->pos).x;
    }
    g_PrimitivesToDrawVertexBuf[3].pos.x = fVar2 + fVar1;
    if ((*(uint *)&vm->flags >> 8 & 2) == 0) {
      g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y - fVar3;
      fVar2 = (vm->pos).y;
    }
    else {
      g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y;
      fVar2 = fVar3 + (vm->pos).y;
    }
    g_PrimitivesToDrawVertexBuf[3].pos.y = fVar3 + fVar2;
    g_PrimitivesToDrawVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x;
    g_PrimitivesToDrawVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y;
    g_PrimitivesToDrawVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x;
    g_PrimitivesToDrawVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y;
    ZVar4 = DrawInner(this,vm,1);
  }
  return ZVar4;
}



int __thiscall AnmManager::FUN_00432fa0(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((vm->flags & 1) == 0) {
    iVar4 = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    iVar4 = -1;
  }
  else if (vm->color == 0) {
    iVar4 = -1;
  }
  else {
    fVar2 = (vm->sprite->widthPx * vm->scaleX) / 2.0;
    fVar3 = (vm->sprite->heightPx * vm->scaleY) / 2.0;
    if ((vm->flags >> 8 & 1) == 0) {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x - fVar2;
      fVar1 = (vm->pos).x;
    }
    else {
      g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x;
      fVar1 = fVar2 + (vm->pos).x;
    }
    g_PrimitivesToDrawVertexBuf[3].pos.x = fVar2 + fVar1;
    if ((vm->flags >> 8 & 2) == 0) {
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
    iVar4 = FUN_00432730(this,vm,0);
  }
  return iVar4;
}


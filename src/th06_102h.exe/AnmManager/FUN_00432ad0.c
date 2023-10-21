
int __thiscall AnmManager::FUN_00432ad0(AnmManager *this,AnmVm *vm)

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
      PRIMITIVES_TO_DRAW_VERTEXBUF[12] = (vm->pos).x - fVar2;
      fVar1 = (vm->pos).x;
    }
    else {
      PRIMITIVES_TO_DRAW_VERTEXBUF[12] = (vm->pos).x;
      fVar1 = fVar2 + (vm->pos).x;
    }
    PRIMITIVES_TO_DRAW_VERTEXBUF[18] = fVar2 + fVar1;
    if ((vm->flags >> 8 & 2) == 0) {
      PRIMITIVES_TO_DRAW_VERTEXBUF[7] = (vm->pos).y - fVar3;
      fVar2 = (vm->pos).y;
    }
    else {
      PRIMITIVES_TO_DRAW_VERTEXBUF[7] = (vm->pos).y;
      fVar2 = fVar3 + (vm->pos).y;
    }
    PRIMITIVES_TO_DRAW_VERTEXBUF[19] = fVar3 + fVar2;
    PRIMITIVES_TO_DRAW_VERTEXBUF[0] = PRIMITIVES_TO_DRAW_VERTEXBUF[12];
    PRIMITIVES_TO_DRAW_VERTEXBUF[1] = PRIMITIVES_TO_DRAW_VERTEXBUF[7];
    PRIMITIVES_TO_DRAW_VERTEXBUF[6] = PRIMITIVES_TO_DRAW_VERTEXBUF[18];
    PRIMITIVES_TO_DRAW_VERTEXBUF[13] = PRIMITIVES_TO_DRAW_VERTEXBUF[19];
    iVar4 = FUN_00432730(this,vm,1);
  }
  return iVar4;
}


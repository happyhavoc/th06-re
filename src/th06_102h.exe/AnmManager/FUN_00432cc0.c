
int __thiscall AnmManager::FUN_00432cc0(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float yOffset;
  float xOffset;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  
  fVar1 = (vm->rotation).z;
  if (NAN(fVar1) == (fVar1 == 0.0)) {
    if ((vm->flags & 1) == 0) {
      iVar6 = -1;
    }
    else if ((vm->flags >> 1 & 1) == 0) {
      iVar6 = -1;
    }
    else if (vm->color == 0) {
      iVar6 = -1;
    }
    else {
      fVar7 = (float10)(vm->rotation).z;
      fVar3 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      fVar1 = (float)fVar3;
      fVar2 = (float)fVar7;
      yOffset = ROUND((vm->pos).x);
      xOffset = ROUND((vm->pos).y);
      fVar4 = ROUND((vm->sprite->widthPx * vm->scaleX) / 2.0);
      fVar5 = ROUND((vm->sprite->heightPx * vm->scaleY) / 2.0);
      FUN_00432c80(PRIMITIVES_TO_DRAW_VERTEXBUF,-fVar4 - 0.5,-fVar5 - 0.5,fVar2,fVar1,yOffset,
                   xOffset);
      FUN_00432c80(PRIMITIVES_TO_DRAW_VERTEXBUF + 6,fVar4 - 0.5,-fVar5 - 0.5,fVar2,fVar1,yOffset,
                   xOffset);
      FUN_00432c80(PRIMITIVES_TO_DRAW_VERTEXBUF + 0xc,-fVar4 - 0.5,fVar5 - 0.5,fVar2,fVar1,yOffset,
                   xOffset);
      FUN_00432c80(PRIMITIVES_TO_DRAW_VERTEXBUF + 0x12,fVar4 - 0.5,fVar5 - 0.5,fVar2,fVar1,yOffset,
                   xOffset);
      PRIMITIVES_TO_DRAW_VERTEXBUF[2] = (vm->pos).z;
      if ((vm->flags >> 8 & 1) != 0) {
        PRIMITIVES_TO_DRAW_VERTEXBUF[0] = PRIMITIVES_TO_DRAW_VERTEXBUF[0] + fVar4;
        PRIMITIVES_TO_DRAW_VERTEXBUF[6] = PRIMITIVES_TO_DRAW_VERTEXBUF[6] + fVar4;
        PRIMITIVES_TO_DRAW_VERTEXBUF[12] = PRIMITIVES_TO_DRAW_VERTEXBUF[12] + fVar4;
        PRIMITIVES_TO_DRAW_VERTEXBUF[18] = PRIMITIVES_TO_DRAW_VERTEXBUF[18] + fVar4;
      }
      if ((vm->flags >> 8 & 2) != 0) {
        PRIMITIVES_TO_DRAW_VERTEXBUF[1] = PRIMITIVES_TO_DRAW_VERTEXBUF[1] + fVar5;
        PRIMITIVES_TO_DRAW_VERTEXBUF[7] = PRIMITIVES_TO_DRAW_VERTEXBUF[7] + fVar5;
        PRIMITIVES_TO_DRAW_VERTEXBUF[13] = PRIMITIVES_TO_DRAW_VERTEXBUF[13] + fVar5;
        PRIMITIVES_TO_DRAW_VERTEXBUF[19] = PRIMITIVES_TO_DRAW_VERTEXBUF[19] + fVar5;
      }
      PRIMITIVES_TO_DRAW_VERTEXBUF[8] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      PRIMITIVES_TO_DRAW_VERTEXBUF[14] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      PRIMITIVES_TO_DRAW_VERTEXBUF[20] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      iVar6 = FUN_00432730(this,vm,0);
    }
  }
  else {
    iVar6 = FUN_00432ad0(this,vm);
  }
  return iVar6;
}



int __thiscall AnmManager::FUN_00432cc0(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  
  fVar1 = (vm->rotation).z;
  if (NAN(fVar1) == (fVar1 == 0.0)) {
    if ((vm->flags & 1) == 0) {
      iVar8 = -1;
    }
    else if ((vm->flags >> 1 & 1) == 0) {
      iVar8 = -1;
    }
    else if (vm->color == 0) {
      iVar8 = -1;
    }
    else {
      fVar9 = (float10)(vm->rotation).z;
      fVar3 = (float10)fcos(fVar9);
      fVar9 = (float10)fsin(fVar9);
      fVar1 = (float)fVar3;
      fVar2 = (float)fVar9;
      fVar4 = ROUND((vm->pos).x);
      fVar5 = ROUND((vm->pos).y);
      fVar6 = ROUND((vm->sprite->widthPx * vm->scaleX) / 2.0);
      fVar7 = ROUND((vm->sprite->heightPx * vm->scaleY) / 2.0);
      FUN_00432c80(PRIMITIVES_TO_DRAW_VERTEXBUF,-fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(0x6d4618,fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(0x6d4630,-fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(0x6d4648,fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      PRIMITIVES_TO_DRAW_VERTEXBUF[2] = (vm->pos).z;
      if ((vm->flags >> 8 & 1) != 0) {
        PRIMITIVES_TO_DRAW_VERTEXBUF[0] = PRIMITIVES_TO_DRAW_VERTEXBUF[0] + fVar6;
        PRIMITIVES_TO_DRAW_VERTEXBUF[6] = PRIMITIVES_TO_DRAW_VERTEXBUF[6] + fVar6;
        PRIMITIVES_TO_DRAW_VERTEXBUF[12] = PRIMITIVES_TO_DRAW_VERTEXBUF[12] + fVar6;
        PRIMITIVES_TO_DRAW_VERTEXBUF[18] = PRIMITIVES_TO_DRAW_VERTEXBUF[18] + fVar6;
      }
      if ((vm->flags >> 8 & 2) != 0) {
        PRIMITIVES_TO_DRAW_VERTEXBUF[1] = PRIMITIVES_TO_DRAW_VERTEXBUF[1] + fVar7;
        PRIMITIVES_TO_DRAW_VERTEXBUF[7] = PRIMITIVES_TO_DRAW_VERTEXBUF[7] + fVar7;
        PRIMITIVES_TO_DRAW_VERTEXBUF[13] = PRIMITIVES_TO_DRAW_VERTEXBUF[13] + fVar7;
        PRIMITIVES_TO_DRAW_VERTEXBUF[19] = PRIMITIVES_TO_DRAW_VERTEXBUF[19] + fVar7;
      }
      PRIMITIVES_TO_DRAW_VERTEXBUF[8] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      PRIMITIVES_TO_DRAW_VERTEXBUF[14] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      PRIMITIVES_TO_DRAW_VERTEXBUF[20] = PRIMITIVES_TO_DRAW_VERTEXBUF[2];
      iVar8 = FUN_00432730(this,vm,0);
    }
  }
  else {
    iVar8 = FUN_00432ad0(this,vm);
  }
  return iVar8;
}


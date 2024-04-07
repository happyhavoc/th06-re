
int __thiscall AnmManager::FUN_00432cc0(AnmManager *this,AnmVm *vm)

{
  int iVar6;
  float10 fVar7;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float xOffset;
  float yOffset;
  
  fVar1 = (vm->rotation).z;
  if (NAN(fVar1) == (fVar1 == 0.0)) {
    if ((*(uint *)&vm->flags & 1) == 0) {
      iVar6 = -1;
    }
    else if ((*(uint *)&vm->flags >> 1 & 1) == 0) {
      iVar6 = -1;
    }
    else if ((vm->color).color == 0) {
      iVar6 = -1;
    }
    else {
      fVar7 = (float10)(vm->rotation).z;
      fVar3 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      fVar1 = (float)fVar3;
      fVar2 = (float)fVar7;
      xOffset = ROUND((vm->pos).x);
      yOffset = ROUND((vm->pos).y);
      fVar4 = ROUND((vm->sprite->widthPx * vm->scaleX) / 2.0);
      fVar5 = ROUND((vm->sprite->heightPx * vm->scaleY) / 2.0);
      FUN_00432c80(g_PrimitivesToDrawVertexBuf,-fVar4 - 0.5,-fVar5 - 0.5,fVar2,fVar1,xOffset,yOffset
                  );
      FUN_00432c80(g_PrimitivesToDrawVertexBuf + 1,fVar4 - 0.5,-fVar5 - 0.5,fVar2,fVar1,xOffset,
                   yOffset);
      FUN_00432c80(g_PrimitivesToDrawVertexBuf + 2,-fVar4 - 0.5,fVar5 - 0.5,fVar2,fVar1,xOffset,
                   yOffset);
      FUN_00432c80(g_PrimitivesToDrawVertexBuf + 3,fVar4 - 0.5,fVar5 - 0.5,fVar2,fVar1,xOffset,
                   yOffset);
      g_PrimitivesToDrawVertexBuf[0].pos.z = (vm->pos).z;
      if ((*(uint *)&vm->flags >> 8 & 1) != 0) {
        g_PrimitivesToDrawVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[0].pos.x + fVar4;
        g_PrimitivesToDrawVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[1].pos.x + fVar4;
        g_PrimitivesToDrawVertexBuf[2].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x + fVar4;
        g_PrimitivesToDrawVertexBuf[3].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x + fVar4;
      }
      if ((*(uint *)&vm->flags >> 8 & 2) != 0) {
        g_PrimitivesToDrawVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[0].pos.y + fVar5;
        g_PrimitivesToDrawVertexBuf[1].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y + fVar5;
        g_PrimitivesToDrawVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[2].pos.y + fVar5;
        g_PrimitivesToDrawVertexBuf[3].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y + fVar5;
      }
      g_PrimitivesToDrawVertexBuf[1].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
      g_PrimitivesToDrawVertexBuf[2].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
      g_PrimitivesToDrawVertexBuf[3].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
      iVar6 = FUN_00432730(this,vm,0);
    }
  }
  else {
    iVar6 = FUN_00432ad0(this,vm);
  }
  return iVar6;
}


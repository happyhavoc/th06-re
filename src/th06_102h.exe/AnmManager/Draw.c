
ZunResult __thiscall AnmManager::Draw(AnmManager *this,AnmVm *vm)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float xOffset;
  float yOffset;
  ZunResult iVar6;
  float10 fVar7;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float zCosine;
  float zSine;
  
  zCosine = (vm->rotation).z;
  if (NAN(zCosine) == (zCosine == 0.0)) {
    uVar1._0_2_ = vm->flags;
    uVar1._2_1_ = vm->unk_82[0];
    uVar1._3_1_ = vm->unk_82[1];
    if ((uVar1 & 1) == 0) {
      iVar6 = ZUN_ERROR;
    }
    else {
      uVar2._0_2_ = vm->flags;
      uVar2._2_1_ = vm->unk_82[0];
      uVar2._3_1_ = vm->unk_82[1];
      if ((uVar2 >> 1 & 1) == 0) {
        iVar6 = ZUN_ERROR;
      }
      else if ((vm->color).color == 0) {
        iVar6 = ZUN_ERROR;
      }
      else {
        fVar7 = (float10)(vm->rotation).z;
        fVar3 = (float10)fcos(fVar7);
        fVar7 = (float10)fsin(fVar7);
        zCosine = (float)fVar3;
        zSine = (float)fVar7;
        xOffset = ROUND((vm->pos).x);
        yOffset = ROUND((vm->pos).y);
        fVar4 = ROUND((vm->sprite->widthPx * vm->scaleX) / 2.0);
        fVar5 = ROUND((vm->sprite->heightPx * vm->scaleY) / 2.0);
        TranslateRotation(this,g_PrimitivesToDrawVertexBuf,-fVar4 - 0.5,-fVar5 - 0.5,zSine,zCosine,
                          xOffset,yOffset);
        TranslateRotation(this,g_PrimitivesToDrawVertexBuf + 1,fVar4 - 0.5,-fVar5 - 0.5,zSine,
                          zCosine,xOffset,yOffset);
        TranslateRotation(this,g_PrimitivesToDrawVertexBuf + 2,-fVar4 - 0.5,fVar5 - 0.5,zSine,
                          zCosine,xOffset,yOffset);
        TranslateRotation(this,g_PrimitivesToDrawVertexBuf + 3,fVar4 - 0.5,fVar5 - 0.5,zSine,zCosine
                          ,xOffset,yOffset);
        g_PrimitivesToDrawVertexBuf[0].pos.z = (vm->pos).z;
        uVar3._0_2_ = vm->flags;
        uVar3._2_1_ = vm->unk_82[0];
        uVar3._3_1_ = vm->unk_82[1];
        if ((uVar3 >> 8 & 1) != 0) {
          g_PrimitivesToDrawVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[0].pos.x + fVar4;
          g_PrimitivesToDrawVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[1].pos.x + fVar4;
          g_PrimitivesToDrawVertexBuf[2].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x + fVar4;
          g_PrimitivesToDrawVertexBuf[3].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x + fVar4;
        }
        uVar4._0_2_ = vm->flags;
        uVar4._2_1_ = vm->unk_82[0];
        uVar4._3_1_ = vm->unk_82[1];
        if ((uVar4 >> 8 & 2) != 0) {
          g_PrimitivesToDrawVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[0].pos.y + fVar5;
          g_PrimitivesToDrawVertexBuf[1].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y + fVar5;
          g_PrimitivesToDrawVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[2].pos.y + fVar5;
          g_PrimitivesToDrawVertexBuf[3].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y + fVar5;
        }
        g_PrimitivesToDrawVertexBuf[1].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
        g_PrimitivesToDrawVertexBuf[2].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
        g_PrimitivesToDrawVertexBuf[3].pos.z = g_PrimitivesToDrawVertexBuf[0].pos.z;
        iVar6 = DrawInner(this,vm,0);
      }
    }
  }
  else {
    iVar6 = DrawNoRotation(this,vm);
  }
  return iVar6;
}


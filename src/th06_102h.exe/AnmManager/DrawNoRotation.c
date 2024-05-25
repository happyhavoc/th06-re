
ZunResult __thiscall AnmManager::DrawNoRotation(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  ZunResult ZVar8;
  
  uVar3._0_2_ = vm->flags;
  uVar3._2_1_ = vm->unk_82[0];
  uVar3._3_1_ = vm->unk_82[1];
  if ((uVar3 & 1) == 0) {
    ZVar8 = ZUN_ERROR;
  }
  else {
    uVar4._0_2_ = vm->flags;
    uVar4._2_1_ = vm->unk_82[0];
    uVar4._3_1_ = vm->unk_82[1];
    if ((uVar4 >> 1 & 1) == 0) {
      ZVar8 = ZUN_ERROR;
    }
    else if ((vm->color).color == 0) {
      ZVar8 = ZUN_ERROR;
    }
    else {
      fVar2 = (vm->sprite->widthPx * vm->scaleX) / 2.0;
      fVar7 = (vm->sprite->heightPx * vm->scaleY) / 2.0;
      uVar5._0_2_ = vm->flags;
      uVar5._2_1_ = vm->unk_82[0];
      uVar5._3_1_ = vm->unk_82[1];
      if ((uVar5 >> 8 & 1) == 0) {
        g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x - fVar2;
        fVar1 = (vm->pos).x;
      }
      else {
        g_PrimitivesToDrawVertexBuf[2].pos.x = (vm->pos).x;
        fVar1 = fVar2 + (vm->pos).x;
      }
      g_PrimitivesToDrawVertexBuf[3].pos.x = fVar2 + fVar1;
      uVar6._0_2_ = vm->flags;
      uVar6._2_1_ = vm->unk_82[0];
      uVar6._3_1_ = vm->unk_82[1];
      if ((uVar6 >> 8 & 2) == 0) {
        g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y - fVar7;
        fVar2 = (vm->pos).y;
      }
      else {
        g_PrimitivesToDrawVertexBuf[1].pos.y = (vm->pos).y;
        fVar2 = fVar7 + (vm->pos).y;
      }
      g_PrimitivesToDrawVertexBuf[3].pos.y = fVar7 + fVar2;
      g_PrimitivesToDrawVertexBuf[0].pos.x = g_PrimitivesToDrawVertexBuf[2].pos.x;
      g_PrimitivesToDrawVertexBuf[0].pos.y = g_PrimitivesToDrawVertexBuf[1].pos.y;
      g_PrimitivesToDrawVertexBuf[1].pos.x = g_PrimitivesToDrawVertexBuf[3].pos.x;
      g_PrimitivesToDrawVertexBuf[2].pos.y = g_PrimitivesToDrawVertexBuf[3].pos.y;
      ZVar8 = DrawInner(this,vm,1);
    }
  }
  return ZVar8;
}


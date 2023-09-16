
int __thiscall AnmManager::FUN_00433590(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  int iVar2;
  D3DMATRIX *pDVar3;
  float *pfVar4;
  float local_c4 [5];
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_44 [8];
  float local_24;
  float local_20;
  
  if ((vm->flags & 1) == 0) {
    iVar2 = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    iVar2 = -1;
  }
  else {
    fVar1 = (vm->rotation).x;
    if (((NAN(fVar1) == (fVar1 == 0.0)) || (fVar1 = (vm->rotation).y, NAN(fVar1) == (fVar1 == 0.0)))
       || (fVar1 = (vm->rotation).z, NAN(fVar1) == (fVar1 == 0.0))) {
      iVar2 = FUN_00433150(vm);
    }
    else if (vm->color == 0) {
      iVar2 = -1;
    }
    else {
      pDVar3 = &vm->matrix;
      pfVar4 = local_c4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = (pDVar3->field0_0x0).field0._11;
        pDVar3 = (D3DMATRIX *)((int)&pDVar3->field0_0x0 + 4);
        pfVar4 = pfVar4 + 1;
      }
      local_94 = ROUND((vm->pos).x) - 0.5;
      local_90 = -ROUND((vm->pos).y) + 0.5;
      if ((vm->flags >> 8 & 1) != 0) {
        local_94 = (vm->sprite->widthPx * vm->scaleY) / 2.0 + local_94;
      }
      if ((vm->flags >> 8 & 2) != 0) {
        local_90 = local_90 - (vm->sprite->heightPx * vm->scaleX) / 2.0;
      }
      local_8c = (vm->pos).z;
      local_c4[0] = local_c4[0] * vm->scaleY;
      local_b0 = -vm->scaleX * local_b0;
      (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,0x100,local_c4);
      if (this->currentSprite != vm->sprite) {
        this->currentSprite = vm->sprite;
        pDVar3 = &vm->matrix;
        pfVar4 = local_44;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar4 = (pDVar3->field0_0x0).field0._11;
          pDVar3 = (D3DMATRIX *)((int)&pDVar3->field0_0x0 + 4);
          pfVar4 = pfVar4 + 1;
        }
        local_24 = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
        local_20 = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
        (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,0x10,local_44);
        if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
          this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
          (**(code **)(*DAT_006c6d20 + 0xf4))(DAT_006c6d20,0,this->currentTexture);
        }
        if (this->field16_0x210be != '\x03') {
          if ((DAT_006c6e60 >> 1 & 1) == 0) {
            (**(code **)(*DAT_006c6d20 + 0x130))(DAT_006c6d20,0x102);
            (**(code **)(*DAT_006c6d20 + 0x14c))(DAT_006c6d20,0,this->vertexBuffer,0x14);
          }
          else {
            (**(code **)(*DAT_006c6d20 + 0x130))(DAT_006c6d20,0x142);
          }
          this->field16_0x210be = '\x03';
        }
      }
      FUN_004324d0(this,(int)vm);
      if ((DAT_006c6e60 >> 1 & 1) == 0) {
        (**(code **)(*DAT_006c6d20 + 0x118))(DAT_006c6d20,5,0,2);
      }
      else {
        (**(code **)(*DAT_006c6d20 + 0x120))(DAT_006c6d20,5,2,&DAT_006d4660,0x18);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


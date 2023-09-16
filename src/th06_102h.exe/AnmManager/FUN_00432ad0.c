
undefined4 __thiscall AnmManager::FUN_00432ad0(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((vm->flags & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if (vm->color == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar2 = (vm->sprite->widthPx * vm->scaleY) / 2.0;
    fVar3 = (vm->sprite->heightPx * vm->scaleX) / 2.0;
    if ((vm->flags >> 8 & 1) == 0) {
      DAT_006d4630 = (vm->pos).x - fVar2;
      fVar1 = (vm->pos).x;
    }
    else {
      DAT_006d4630 = (vm->pos).x;
      fVar1 = fVar2 + (vm->pos).x;
    }
    DAT_006d4648 = fVar2 + fVar1;
    if ((vm->flags >> 8 & 2) == 0) {
      DAT_006d461c = (vm->pos).y - fVar3;
      fVar2 = (vm->pos).y;
    }
    else {
      DAT_006d461c = (vm->pos).y;
      fVar2 = fVar3 + (vm->pos).y;
    }
    DAT_006d464c = fVar3 + fVar2;
    DAT_006d4600 = DAT_006d4630;
    DAT_006d4604 = DAT_006d461c;
    DAT_006d4618 = DAT_006d4648;
    DAT_006d4634 = DAT_006d464c;
    uVar4 = FUN_00432730(this,(int)vm,1);
  }
  return uVar4;
}


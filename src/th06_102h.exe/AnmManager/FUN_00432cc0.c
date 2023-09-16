
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
      fVar6 = ROUND((vm->sprite->widthPx * vm->scaleY) / 2.0);
      fVar7 = ROUND((vm->sprite->heightPx * vm->scaleX) / 2.0);
      FUN_00432c80(&DAT_006d4600,-fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4618,fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4630,-fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4648,fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      DAT_006d4608 = (vm->pos).z;
      if ((vm->flags >> 8 & 1) != 0) {
        DAT_006d4600 = DAT_006d4600 + fVar6;
        DAT_006d4618 = DAT_006d4618 + fVar6;
        DAT_006d4630 = DAT_006d4630 + fVar6;
        DAT_006d4648 = DAT_006d4648 + fVar6;
      }
      if ((vm->flags >> 8 & 2) != 0) {
        DAT_006d4604 = DAT_006d4604 + fVar7;
        DAT_006d461c = DAT_006d461c + fVar7;
        DAT_006d4634 = DAT_006d4634 + fVar7;
        DAT_006d464c = DAT_006d464c + fVar7;
      }
      DAT_006d4620 = DAT_006d4608;
      DAT_006d4638 = DAT_006d4608;
      DAT_006d4650 = DAT_006d4608;
      iVar8 = FUN_00432730(this,vm,0);
    }
  }
  else {
    iVar8 = FUN_00432ad0(this,vm);
  }
  return iVar8;
}


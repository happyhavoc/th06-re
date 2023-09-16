
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
AsciiManagerProbablyStageRelated::FUN_00403060(AsciiManagerProbablyStageRelated *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  int local_8;
  
  if (DAT_0069d4c0 != '\0') {
    _DAT_006c6de0 = __ftol2((double)_DAT_0069d6dc);
    DAT_006c6de4 = __ftol2((double)_DAT_0069d6e0);
    DAT_006c6de8 = __ftol2((double)_DAT_0069d6e4);
    DAT_006c6dec = __ftol2((double)_DAT_0069d6e8);
    (**(code **)(*DAT_006c6d20 + 0xa0))(DAT_006c6d20,&DAT_006c6de0);
    if ((DAT_006c7115 != '\0') && ((this->field0_0x0 != 0 || (2 < this->field1_0x4)))) {
      AnmManager::FUN_00432ad0(DAT_006d4588,&this->vm1);
    }
    if ((this->field0_0x0 == 1) || (this->field0_0x0 == 2)) {
      pAVar2 = this->vms0 + 1;
      pAVar3 = this->vms0 + 4;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      this->vms0[4].pos.x = this->vms0[4].scaleY * 8.0 + this->vms0[4].pos.x;
      this->vms0[4].sprite =
           (AnmLoadedSprite *)((int)DAT_006d4588 + (0x1e - (uint)DAT_0069d4b8) * 0x38);
      AnmManager::FUN_00432ad0(DAT_006d4588,this->vms0 + 4);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        AnmManager::FUN_00432ad0(DAT_006d4588,this->vms0 + local_8);
      }
    }
  }
  return;
}


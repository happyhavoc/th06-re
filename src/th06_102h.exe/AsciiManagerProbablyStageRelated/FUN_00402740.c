
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
AsciiManagerProbablyStageRelated::FUN_00402740(AsciiManagerProbablyStageRelated *this)

{
  int iVar1;
  AnmVm *pAVar2;
  AnmVm *pAVar3;
  AnmVm local_11c;
  int local_8;
  
  if (DAT_0069d4bf != '\0') {
    _DAT_006c6de0 = __ftol2((double)_DAT_0069d6dc);
    DAT_006c6de4 = __ftol2((double)_DAT_0069d6e0);
    DAT_006c6de8 = __ftol2((double)_DAT_0069d6e4);
    DAT_006c6dec = __ftol2((double)_DAT_0069d6e8);
    (*DAT_006c6d20->lpVtbl->SetViewport)(DAT_006c6d20,(D3DVIEWPORT8 *)&DAT_006c6de0);
    if ((DAT_006c7115 != '\0') && (this->field0_0x0 != 0)) {
      pAVar2 = &this->vm1;
      pAVar3 = &local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pAVar3->rotation).x = (pAVar2->rotation).x;
        pAVar2 = (AnmVm *)&(pAVar2->rotation).y;
        pAVar3 = (AnmVm *)&(pAVar3->rotation).y;
      }
      local_11c.flags = local_11c.flags | 0x1000;
      AnmManager::FUN_00432ad0(DAT_006d4588,&local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((this->vms0[local_8].flags & 1) != 0) {
        AnmManager::FUN_00432ad0(DAT_006d4588,this->vms0 + local_8);
      }
    }
  }
  return;
}


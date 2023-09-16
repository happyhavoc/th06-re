
void __fastcall
AsciiManagerProbablyStageRelated::AsciiManagerProbablyStageRelated
          (AsciiManagerProbablyStageRelated *this)

{
  AnmVm *local_20;
  int local_18;
  
  local_18 = 6;
  local_20 = this->vms0;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  AnmVm::AnmVm(&this->vm1);
  return;
}


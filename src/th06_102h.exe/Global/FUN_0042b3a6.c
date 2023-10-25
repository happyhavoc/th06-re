
int FUN_0042b3a6(ResultScreenUnk3ab0 *param_1,Hscr *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int local_8;
  
  local_8 = 0;
  while ((param_1->unk2 != (void *)0x0 &&
         ((*(int *)((int)param_1->unk2 + 8) == 0 ||
          (param_2->score < *(uint *)(*(int *)((int)param_1->unk2 + 8) + 0xc)))))) {
    param_1 = (ResultScreenUnk3ab0 *)param_1->unk2;
    local_8 = local_8 + 1;
  }
  pvVar1 = param_1->unk2;
  pvVar2 = _malloc(0xc);
  param_1->unk2 = pvVar2;
  *(ResultScreenUnk3ab0 **)param_1->unk2 = param_1;
  pvVar2 = param_1->unk2;
  *(Hscr **)((int)pvVar2 + 8) = param_2;
  *(void **)((int)pvVar2 + 4) = pvVar1;
  return local_8;
}


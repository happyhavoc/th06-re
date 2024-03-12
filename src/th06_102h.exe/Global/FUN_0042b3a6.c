
int FUN_0042b3a6(ResultScreenUnk3ab0 *param_1,Hscr *param_2)

{
  ResultScreenUnk3ab0 *pRVar1;
  ResultScreenUnk3ab0 *pRVar2;
  int local_8;
  
  local_8 = 0;
  while ((param_1->unk2 != (ResultScreenUnk3ab0 *)0x0 &&
         ((param_1->unk2->unk3 == (void *)0x0 ||
          (param_2->score < *(uint *)((int)param_1->unk2->unk3 + 0xc)))))) {
    param_1 = param_1->unk2;
    local_8 = local_8 + 1;
  }
  pRVar1 = param_1->unk2;
  pRVar2 = (ResultScreenUnk3ab0 *)_malloc(0xc);
  param_1->unk2 = pRVar2;
  param_1->unk2->unk1 = (int)param_1;
  pRVar2 = param_1->unk2;
  pRVar2->unk3 = param_2;
  pRVar2->unk2 = pRVar1;
  return local_8;
}


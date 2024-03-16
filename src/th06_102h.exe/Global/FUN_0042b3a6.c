
int FUN_0042b3a6(ResultScreenUnk3ab0 *param_1,Hscr *param_2)

{
  ResultScreenUnk3ab0 *pRVar1;
  ResultScreenUnk3ab0 *pRVar2;
  int local_8;
  
  local_8 = 0;
  while ((param_1->unk2__ResultScreenUnk3ab0 != (ResultScreenUnk3ab0 *)0x0 &&
         ((param_1->unk2__ResultScreenUnk3ab0->unk3 == (Hscr *)0x0 ||
          (param_2->score < param_1->unk2__ResultScreenUnk3ab0->unk3->score))))) {
    param_1 = param_1->unk2__ResultScreenUnk3ab0;
    local_8 = local_8 + 1;
  }
  pRVar1 = param_1->unk2__ResultScreenUnk3ab0;
  pRVar2 = (ResultScreenUnk3ab0 *)_malloc(0xc);
  param_1->unk2__ResultScreenUnk3ab0 = pRVar2;
  param_1->unk2__ResultScreenUnk3ab0->unk1 = param_1;
  pRVar2 = param_1->unk2__ResultScreenUnk3ab0;
  pRVar2->unk3 = param_2;
  pRVar2->unk2__ResultScreenUnk3ab0 = pRVar1;
  return local_8;
}



void th06::ResultScreen::FreeAllScores(ScoreListNode *param_1)

{
  ScoreListNode *pSVar1;
  
  param_1 = param_1->next;
  while (param_1 != (ScoreListNode *)0x0) {
    pSVar1 = param_1->next;
    _free(param_1);
    param_1 = pSVar1;
  }
  return;
}


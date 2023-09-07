
void __fastcall ChainElem::~ChainElem(ChainElem *param_1)

{
  if (param_1->deleted_callback != 0) {
    (*(code *)param_1->deleted_callback)(param_1->arg);
  }
  param_1->prev = (ChainElem *)0x0;
  param_1->next = (ChainElem *)0x0;
  param_1->callback = 0;
  param_1->added_callback = 0;
  param_1->deleted_callback = 0;
  return;
}


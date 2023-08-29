
void __fastcall Chain::Release(Chain *param_1)

{
  ReleaseSingleChain(param_1,&param_1->calcChain);
  ReleaseSingleChain(param_1,&param_1->drawChain);
  return;
}



void __fastcall FUN_00401410(InputChainArg *param_1)

{
  VeryBigStruct *pVVar1;
  int iVar2;
  InputChainArg *pIVar3;
  
  pIVar3 = param_1;
  for (iVar2 = 0x306b; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pIVar3->field0_0x0).field0_0x0 = 0;
    pIVar3 = (InputChainArg *)&(pIVar3->field0_0x0).field1_0x4;
  }
  param_1->field24734_0x6224 = -1;
  param_1->field24735_0x6228 = 1.0;
  param_1->field24736_0x622c = 1.0;
  (param_1->field77_0x110).field15_0x80 = (param_1->field77_0x110).field15_0x80 | 0x300;
  pVVar1 = g_VeryBigStruct;
  FUN_00403580(&param_1->field77_0x110);
  FUN_004323a0(pVVar1,&param_1->field77_0x110,0);
  pVVar1 = g_VeryBigStruct;
  FUN_00403580(&param_1->field0_0x0);
  FUN_004323a0(pVVar1,&param_1->field0_0x0,0x20);
  (param_1->field77_0x110).field31_0x98 = 0.1;
  param_1->field24741_0x6234 = 0;
  return;
}


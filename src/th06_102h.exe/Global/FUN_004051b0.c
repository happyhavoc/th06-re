
void FUN_004051b0(AnmVm *param_1,int param_2)

{
  AnmManager *in_ECX;
  
  param_1->anmFileIndex = (short)param_2;
  (param_1->pos).x = 0.0;
  (param_1->pos).y = 0.0;
  (param_1->pos).z = 0.0;
  (param_1->pos2).x = 0.0;
  (param_1->pos2).y = 0.0;
  (param_1->pos2).z = 0.0;
  param_1->fontHeight = '\x0f';
  param_1->fontWidth = '\x0f';
  AnmManager::SetBeginingOfScript(in_ECX,param_1,in_ECX->scripts[param_2]);
  return;
}


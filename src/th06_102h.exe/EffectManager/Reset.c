
void __fastcall EffectManager::Reset(undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0xbe61; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


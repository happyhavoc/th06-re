
void FUN_00417bfd(short param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  VeryBigStruct *pVVar3;
  int in_ECX;
  char *local_1c;
  
  pVVar3 = g_VeryBigStruct;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x1f88) = 0x4a3;
  FUN_00432430((Unknown *)(iVar2 + 0x1ed4),*(int *)&pVVar3->field_0x1dbc0);
  FUN_004323a0(g_VeryBigStruct,(Unknown *)(*(int *)(in_ECX + 4) + 0x1ed4),param_1 + 0x4a8);
  pVVar3 = g_VeryBigStruct;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x21a8) = 0x707;
  FUN_00432430((Unknown *)(iVar2 + 0x20f4),*(int *)&pVVar3->field_0x1e550);
  FUN_00434c40(g_VeryBigStruct,*(int *)(in_ECX + 4) + 0x20f4,0xfff0f0,0,param_2);
  local_1c = param_2;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(in_ECX + 0xc) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_2 + 1)) * 0xf) / 2.0 + 16.0;
  FUN_004311e0(0xe);
  return;
}


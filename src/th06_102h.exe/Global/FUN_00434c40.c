
void FUN_00434c40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint unaff_retaddr;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  char *pcVar11;
  char *local_60;
  uint local_5c;
  char local_54 [68];
  uint local_10;
  long local_c;
  va_list local_8;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  if (*(char *)(param_2 + 0x10c) == '\0') {
    local_5c = 0xf;
  }
  else {
    local_5c = (uint)*(byte *)(param_2 + 0x10c);
  }
  local_8 = &stack0x00000018;
  vsprintf(local_54,param_5,local_8);
  local_8 = (va_list)0x0;
  puVar10 = &DAT_0046ac10;
  uVar2 = (uint)*(byte *)(param_2 + 0x10d);
  uVar7 = local_5c;
  uVar8 = param_3;
  uVar9 = param_4;
  lVar3 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x14));
  lVar4 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x18));
  lVar5 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 8));
  lVar6 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 4));
  FUN_00434af0(param_1,**(int **)(param_2 + 0xc0),lVar6,lVar5,lVar4,lVar3,uVar7,uVar2,uVar8,uVar9,
               puVar10);
  local_60 = local_54;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  local_c = __ftol2((double)((*(float *)(*(int *)(param_2 + 0xc0) + 4) +
                             *(float *)(*(int *)(param_2 + 0xc0) + 0x18)) -
                            ((float)(ulonglong)(uint)((int)local_60 - (int)(local_54 + 1)) *
                            (float)(local_5c + 1)) / 2.0));
  pcVar11 = local_54;
  uVar7 = (uint)*(byte *)(param_2 + 0x10d);
  lVar3 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x14));
  lVar4 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x18));
  lVar5 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 8));
  FUN_00434af0(param_1,**(int **)(param_2 + 0xc0),local_c,lVar5,lVar4,lVar3,local_5c,uVar7,param_3,
               param_4,pcVar11);
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 1;
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}


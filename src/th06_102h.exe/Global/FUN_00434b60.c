
void FUN_00434b60(VeryBigStruct *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_retaddr;
  char *pcVar7;
  char local_4c [64];
  uint local_c;
  va_list local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  uVar5 = (uint)*(byte *)(param_2 + 0x10c);
  local_8 = &stack0x00000018;
  vsprintf(local_4c,param_5,local_8);
  local_8 = (va_list)0x0;
  pcVar7 = local_4c;
  uVar6 = (uint)*(byte *)(param_2 + 0x10d);
  lVar1 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x14));
  lVar2 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 0x18));
  lVar3 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 8));
  lVar4 = __ftol2((double)*(float *)(*(int *)(param_2 + 0xc0) + 4));
  FUN_00434af0(**(undefined4 **)(param_2 + 0xc0),lVar4,lVar3,lVar2,lVar1,uVar5,uVar6,param_3,param_4
               ,pcVar7);
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 1;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


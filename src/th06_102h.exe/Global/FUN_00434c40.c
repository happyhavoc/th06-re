
void FUN_00434c40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5
                 )

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint unaff_retaddr;
  undefined *puVar10;
  char *pcVar11;
  char *local_60;
  uint local_5c;
  char local_54 [68];
  uint local_10;
  undefined4 local_c;
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
  uVar9 = local_5c;
  uVar7 = param_3;
  uVar8 = param_4;
  uVar3 = __ftol2(local_5c,uVar2,param_3,param_4,&DAT_0046ac10);
  uVar4 = __ftol2(uVar3);
  uVar5 = __ftol2(uVar4);
  uVar6 = __ftol2(uVar5);
  FUN_00434af0(**(undefined4 **)(param_2 + 0xc0),uVar6,uVar5,uVar4,uVar3,uVar9,uVar2,uVar7,uVar8,
               puVar10);
  local_60 = local_54;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  local_c = __ftol2((float)(local_5c + 1),local_5c + 1,
                    (float)(ulonglong)(uint)((int)local_60 - (int)(local_54 + 1)));
  pcVar11 = local_54;
  uVar9 = (uint)*(byte *)(param_2 + 0x10d);
  uVar7 = __ftol2(local_5c,uVar9,param_3,param_4,pcVar11);
  uVar8 = __ftol2(uVar7);
  uVar3 = __ftol2(uVar8);
  FUN_00434af0(**(undefined4 **)(param_2 + 0xc0),local_c,uVar3,uVar8,uVar7,local_5c,uVar9,param_3,
               param_4,pcVar11);
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 1;
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}


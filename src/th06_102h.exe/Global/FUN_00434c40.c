
void FUN_00434c40(AnmManager *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  char cVar1;
  uint fontHeight;
  long lVar2;
  long lVar3;
  long lVar4;
  long xPos;
  uint uVar5;
  uint unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  char *pcVar9;
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
  puVar8 = &DAT_0046ac10;
  fontHeight = (uint)*(byte *)(param_2 + 0x10d);
  uVar5 = local_5c;
  uVar6 = param_3;
  uVar7 = param_4;
  lVar2 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 0x14));
  lVar3 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 0x18));
  lVar4 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 8));
  xPos = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 4));
  AnmManager::FUN_00434af0
            (param_1,**(uint **)(param_2 + 0xc0),xPos,lVar4,lVar3,lVar2,uVar5,fontHeight,uVar6,uVar7
             ,puVar8);
  local_60 = local_54;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  local_c = __ftol2((*(float *)(*(int *)(param_2 + 0xc0) + 4) +
                    *(float *)(*(int *)(param_2 + 0xc0) + 0x18)) -
                    ((float)(ulonglong)(uint)((int)local_60 - (int)(local_54 + 1)) *
                    (float)(local_5c + 1)) / 2.0);
  pcVar9 = local_54;
  uVar5 = (uint)*(byte *)(param_2 + 0x10d);
  lVar2 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 0x14));
  lVar3 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 0x18));
  lVar4 = __ftol2(*(float *)(*(int *)(param_2 + 0xc0) + 8));
  AnmManager::FUN_00434af0
            (param_1,**(uint **)(param_2 + 0xc0),local_c,lVar4,lVar3,lVar2,local_5c,uVar5,param_3,
             param_4,pcVar9);
  *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) | 1;
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}



void AnmManager::FUN_00434b60
               (AnmManager *anm_mgr,AnmVm *vm,D3DCOLOR textColor,undefined4 param_4,int param_5,
               int param6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint fontWidth;
  uint uVar5;
  uint unaff_retaddr;
  char *pcVar6;
  char local_4c [64];
  uint local_c;
  int *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  fontWidth = (uint)vm->fontWidth;
  local_8 = &param6;
  vsprintf(local_4c,(char *)param_5,(va_list)local_8);
  local_8 = (int *)0x0;
  pcVar6 = local_4c;
  uVar5 = (uint)vm->fontHeight;
  lVar1 = __ftol2((double)vm->sprite->textureHeight);
  lVar2 = __ftol2((double)vm->sprite->textureWidth);
  lVar3 = __ftol2((double)(vm->sprite->startPixelInclusive).y);
  lVar4 = __ftol2((double)(vm->sprite->startPixelInclusive).x);
  FUN_00434af0(anm_mgr,vm->sprite->sourceFileIndex,lVar4,lVar3,lVar2,lVar1,fontWidth,uVar5,textColor
               ,param_4,pcVar6);
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


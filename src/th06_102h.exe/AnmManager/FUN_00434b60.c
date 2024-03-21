
void AnmManager::FUN_00434b60
               (AnmManager *anm_mgr,AnmVm *vm,D3DCOLOR textColor,undefined4 param_4,int param_5,
               int param6)

{
  long spriteHeight;
  long spriteWidth;
  long yPos;
  long xPos;
  uint fontWidth;
  uint fontHeight2;
  uint unaff_retaddr;
  char *pcVar1;
  char local_4c [64];
  uint local_c;
  int *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  fontWidth = (uint)vm->fontWidth;
  local_8 = &param6;
  vsprintf(local_4c,(char *)param_5,(va_list)local_8);
  local_8 = (int *)0x0;
  pcVar1 = local_4c;
  fontHeight2 = (uint)vm->fontHeight;
  spriteHeight = __ftol2(vm->sprite->textureHeight);
  spriteWidth = __ftol2(vm->sprite->textureWidth);
  yPos = __ftol2((vm->sprite->startPixelInclusive).y);
  xPos = __ftol2((vm->sprite->startPixelInclusive).x);
  FUN_00434af0(anm_mgr,vm->sprite->sourceFileIndex,xPos,yPos,spriteWidth,spriteHeight,fontWidth,
               fontHeight2,textColor,param_4,pcVar1);
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


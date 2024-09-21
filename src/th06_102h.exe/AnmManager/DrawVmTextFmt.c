
void th06::AnmManager::DrawVmTextFmt
               (AnmManager *anm_mgr,AnmVm *vm,D3DCOLOR textColor,D3DCOLOR shadowColor,char *param_5,
               ...)

{
  long spriteHeight;
  long spriteWidth;
  long yPos;
  long xPos;
  uint fontWidth;
  uint fontHeight2;
  uint unaff_retaddr;
  char local_4c [64];
  uint local_c;
  va_list local_8;
  char *stringToPrint;
  
  local_c = __security_cookie ^ unaff_retaddr;
  fontWidth = (uint)vm->fontWidth;
  local_8 = &stack0x00000018;
  vsprintf(local_4c,param_5,local_8);
  local_8 = (va_list)0x0;
  stringToPrint = local_4c;
  fontHeight2 = (uint)vm->fontHeight;
  spriteHeight = __ftol2(vm->sprite->textureHeight);
  spriteWidth = __ftol2(vm->sprite->textureWidth);
  yPos = __ftol2((vm->sprite->startPixelInclusive).y);
  xPos = __ftol2((vm->sprite->startPixelInclusive).x);
  DrawText(anm_mgr,vm->sprite->sourceFileIndex,xPos,yPos,spriteWidth,spriteHeight,fontWidth,
           fontHeight2,textColor,shadowColor,stringToPrint);
  vm->flags = vm->flags | AnmVmFlags_1;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}



void AnmManager::FUN_00434c40(AnmManager *this,AnmVm *vm,D3DCOLOR color1,D3DCOLOR color2,char *text)

{
  uint fontHeight;
  long textureHeight;
  long textureWidth;
  long yPos;
  long xPos;
  D3DCOLOR textColor;
  D3DCOLOR DVar1;
  char *local_60;
  uint fontWidth;
  char buf [68];
  uint stackCookie;
  long local_c;
  va_list args;
  uint fontWidth2;
  char cVar1;
  char *pcVar9;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  if (vm->fontWidth == '\0') {
    fontWidth = 0xf;
  }
  else {
    fontWidth = (uint)vm->fontWidth;
  }
  args = &stack0x00000018;
  vsprintf(buf,text,args);
  args = (va_list)0x0;
  pcVar9 = " ";
  fontHeight = (uint)vm->fontHeight;
  fontWidth2 = fontWidth;
  textColor = color1;
  DVar1 = color2;
  textureHeight = __ftol2(vm->sprite->textureHeight);
  textureWidth = __ftol2(vm->sprite->textureWidth);
  yPos = __ftol2((vm->sprite->startPixelInclusive).y);
  xPos = __ftol2((vm->sprite->startPixelInclusive).x);
  FUN_00434af0(this,vm->sprite->sourceFileIndex,xPos,yPos,textureWidth,textureHeight,fontWidth2,
               fontHeight,textColor,DVar1,pcVar9);
  local_60 = buf;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  local_c = __ftol2(((vm->sprite->startPixelInclusive).x + vm->sprite->textureWidth) -
                    ((float)(ulonglong)(uint)((int)local_60 - (int)(buf + 1)) *
                    (float)(fontWidth + 1)) / 2.0);
  pcVar9 = buf;
  fontHeight = (uint)vm->fontHeight;
  textureHeight = __ftol2(vm->sprite->textureHeight);
  textureWidth = __ftol2(vm->sprite->textureWidth);
  yPos = __ftol2((vm->sprite->startPixelInclusive).y);
  FUN_00434af0(this,vm->sprite->sourceFileIndex,local_c,yPos,textureWidth,textureHeight,fontWidth,
               fontHeight,color1,color2,pcVar9);
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}



void AnmManager::DrawStringFormat
               (AnmManager *this,AnmVm *vm,ZunColor textColor,ZunColor shadowColor,char *text,...)

{
  uint fontHeight;
  long textureHeight;
  long textureWidth;
  long yPos;
  long xPos;
  ZunColor textColor_00;
  ZunColor shadowColor_00;
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
  textColor_00.color = textColor.color;
  shadowColor_00.color = shadowColor.color;
  textureHeight = __ftol2(vm->sprite->textureHeight);
  textureWidth = __ftol2(vm->sprite->textureWidth);
  yPos = __ftol2((vm->sprite->startPixelInclusive).y);
  xPos = __ftol2((vm->sprite->startPixelInclusive).x);
  DrawText(this,vm->sprite->sourceFileIndex,xPos,yPos,textureWidth,textureHeight,fontWidth2,
           fontHeight,textColor_00.color,shadowColor_00.color,pcVar9);
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
  DrawText(this,vm->sprite->sourceFileIndex,local_c,yPos,textureWidth,textureHeight,fontWidth,
           fontHeight,textColor.color,shadowColor.color,pcVar9);
  fontHeight._0_2_ = vm->flags;
  fontHeight._2_1_ = vm->unk_82[0];
  fontHeight._3_1_ = vm->unk_82[1];
  fontHeight = fontHeight | 1;
  vm->flags = (short)fontHeight;
  vm->unk_82[0] = (char)(fontHeight >> 0x10);
  vm->unk_82[1] = (char)(fontHeight >> 0x18);
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}



void AnmManager::DrawStringFormat2
               (AnmManager *this,AnmVm *vm,ZunColor color,ZunColor color2,char *print_fmt,...)

{
  uint fontHeight;
  long spriteTextureHeight;
  long spriteTextureWidth;
  long spriteSPIYPos;
  long spriteSPIXPos;
  ZunColor textColor;
  ZunColor shadowColor;
  char *buf_reference;
  uint font_width;
  char buf [68];
  uint local_10;
  long local_c;
  va_list local_8;
  char current_digested_char;
  uint fontWidth;
  char *pcVar4;
  uint unaff_retaddr;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  if (vm->fontWidth == '\0') {
    font_width = uVar5;
  }
  else {
    font_width = (uint)vm->fontWidth;
  }
  local_8 = &stack0x00000018;
  vsprintf(buf,print_fmt,local_8);
  local_8 = (va_list)0x0;
  pcVar4 = " ";
  fontHeight = (uint)vm->fontHeight;
  fontWidth = font_width;
  textColor.color = color.color;
  shadowColor.color = color2.color;
  spriteTextureHeight = __ftol2(vm->sprite->textureHeight);
  spriteTextureWidth = __ftol2(vm->sprite->textureWidth);
  spriteSPIYPos = __ftol2((vm->sprite->startPixelInclusive).y);
  spriteSPIXPos = __ftol2((vm->sprite->startPixelInclusive).x);
  DrawText(this,vm->sprite->sourceFileIndex,spriteSPIXPos,spriteSPIYPos,spriteTextureWidth,
           spriteTextureHeight,fontWidth,fontHeight,textColor.color,shadowColor.color,pcVar4);
  buf_reference = buf;
  do {
    current_digested_char = *buf_reference;
    buf_reference = buf_reference + 1;
  } while (current_digested_char != '\0');
  local_c = __ftol2((vm->sprite->textureWidth / 2.0 + (vm->sprite->startPixelInclusive).x) -
                    ((float)(ulonglong)(uint)((int)buf_reference - (int)(buf + 1)) *
                    (float)(font_width + 1)) / 4.0);
  pcVar4 = buf;
  fontWidth = (uint)vm->fontHeight;
  spriteTextureHeight = __ftol2(vm->sprite->textureHeight);
  spriteTextureWidth = __ftol2(vm->sprite->textureWidth);
  spriteSPIYPos = __ftol2((vm->sprite->startPixelInclusive).y);
  DrawText(this,vm->sprite->sourceFileIndex,local_c,spriteSPIYPos,spriteTextureWidth,
           spriteTextureHeight,font_width,fontWidth,color.color,color2.color,pcVar4);
  fontWidth._0_2_ = vm->flags;
  fontWidth._2_1_ = vm->unk_82[0];
  fontWidth._3_1_ = vm->unk_82[1];
  fontWidth = fontWidth | 1;
  vm->flags = (short)fontWidth;
  vm->unk_82[0] = (char)(fontWidth >> 0x10);
  vm->unk_82[1] = (char)(fontWidth >> 0x18);
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}


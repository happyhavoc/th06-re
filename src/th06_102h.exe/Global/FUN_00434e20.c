
void FUN_00434e20(AnmManager *AnmMgr,AnmVm *vm,undefined4 param_3,undefined4 param_4,char *print_fmt
                 ,int param_6)

{
  uint fontHeight;
  long spriteTextureHeight;
  long spriteTextureWidth;
  long spriteSPIYPos;
  long spriteSPIXPos;
  uint unaff_retaddr;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *buf_reference;
  uint font_width;
  char buf [68];
  uint local_10;
  long local_c;
  va_list local_8;
  char current_digested_char;
  uint fontWidth;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  if (vm->fontWidth == '\0') {
    font_width = 15;
  }
  else {
    font_width = (uint)vm->fontWidth;
  }
  local_8 = (va_list)&param_6;
  vsprintf(buf,print_fmt,local_8);
  local_8 = (va_list)0x0;
  puVar3 = &DAT_0046ac10;
  fontHeight = (uint)vm->fontHeight;
  fontWidth = font_width;
  uVar1 = param_3;
  uVar2 = param_4;
  spriteTextureHeight = __ftol2(vm->sprite->textureHeight);
  spriteTextureWidth = __ftol2(vm->sprite->textureWidth);
  spriteSPIYPos = __ftol2((vm->sprite->startPixelInclusive).y);
  spriteSPIXPos = __ftol2((vm->sprite->startPixelInclusive).x);
  AnmManager::FUN_00434af0
            (AnmMgr,vm->sprite->sourceFileIndex,spriteSPIXPos,spriteSPIYPos,spriteTextureWidth,
             spriteTextureHeight,fontWidth,fontHeight,uVar1,uVar2,puVar3);
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
  AnmManager::FUN_00434af0
            (AnmMgr,vm->sprite->sourceFileIndex,local_c,spriteSPIYPos,spriteTextureWidth,
             spriteTextureHeight,font_width,fontWidth,param_3,param_4,pcVar4);
  *(uint *)&vm->flags = *(uint *)&vm->flags | 1;
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}


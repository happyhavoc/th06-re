
char * GameErrorContextLog(GameErrorContext *ctx,char *fmt,...)

{
  uint unaff_retaddr;
  char *tmpBufferEnd;
  char *tmpEndPtr;
  char *tmpEnd;
  char tmpBuffer [512];
  uint stack_cookie;
  va_list args;
  char c;
  
  stack_cookie = __security_cookie ^ unaff_retaddr;
  args = &stack0x0000000c;
  vsprintf(tmpBuffer,fmt,args);
  tmpEnd = tmpBuffer;
  do {
    c = *tmpEnd;
    tmpEnd = tmpEnd + 1;
  } while (c != '\0');
  if (ctx->m_BufferEnd + ((int)tmpEnd - (int)(tmpBuffer + 1)) < ctx->m_Buffer + 0x7ff) {
    tmpEndPtr = tmpBuffer;
    tmpBufferEnd = ctx->m_BufferEnd;
    do {
      c = *tmpEndPtr;
      *tmpBufferEnd = c;
      tmpEndPtr = tmpEndPtr + 1;
      tmpBufferEnd = tmpBufferEnd + 1;
    } while (c != '\0');
    ctx->m_BufferEnd = ctx->m_BufferEnd + ((int)tmpEnd - (int)(tmpBuffer + 1));
    *ctx->m_BufferEnd = '\0';
  }
  args = (va_list)0x0;
  __security_check_cookie(stack_cookie ^ unaff_retaddr);
  return fmt;
}


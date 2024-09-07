
void th06::AsciiManager::AddFormatText(AsciiManager *manager,D3DXVECTOR3 *position,char *fmt,...)

{
  uint unaff_retaddr;
  char str [512];
  uint local_c;
  va_list local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_8 = &stack0x00000010;
  vsprintf(str,fmt,local_8);
  AddString(manager,position,str);
  local_8 = (va_list)0x0;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


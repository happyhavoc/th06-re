
void AsciiManager::FUN_00401650(AsciiManager *param_1,undefined4 *param_2,char *param_3,...)

{
  uint unaff_retaddr;
  char str [512];
  uint local_c;
  va_list local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_8 = &stack0x00000010;
  vsprintf(str,param_3,local_8);
  FUN_00401530(param_1,param_2,str);
  local_8 = (va_list)0x0;
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


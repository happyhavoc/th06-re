
void * FUN_0041e290(char *file_path,int param_2)

{
  char *pcVar1;
  void *_DstBuf;
  FILE *_File;
  size_t _Size;
  int local_10;
  char *local_c;
  int local_8;
  
  local_10 = -1;
  if (param_2 == 0) {
    pcVar1 = _strrchr(file_path,0x5c);
    if (pcVar1 == (char *)0x0) {
      local_c = file_path;
    }
    else {
      local_c = pcVar1 + 1;
    }
    pcVar1 = _strrchr(local_c,0x2f);
    if (pcVar1 == (char *)0x0) {
      local_c = file_path;
    }
    else {
      local_c = pcVar1 + 1;
    }
    if (DAT_0069d900 != 0) {
      local_8 = 0;
      while ((local_8 < 0x10 &&
             ((*(int *)(DAT_0069d900 + local_8 * 4) == 0 ||
              (local_10 = FUN_0043c920(local_c), local_10 < 0))))) {
        local_8 = local_8 + 1;
      }
    }
    if (local_10 < 0) {
      return (void *)0x0;
    }
  }
  if (local_10 < 0) {
    DebugPrint2("%s Load ... \n",file_path);
    _File = fopen(file_path,"rb");
    if (_File == (FILE *)0x0) {
      DebugPrint2("error : %s is not found.\n",file_path);
      _DstBuf = (void *)0x0;
    }
    else {
      _fseek(_File,0,2);
      _Size = _ftell(_File);
      g_FileSize = _Size;
      _fseek(_File,0,0);
      _DstBuf = _malloc(_Size);
      _fread(_DstBuf,1,_Size,_File);
      _fclose(_File);
    }
  }
  else {
    DebugPrint2("%s Decode ... \n",local_c);
    _DstBuf = (void *)FUN_0043cb40(local_10,local_c);
    g_FileSize = FUN_0043c990(local_10);
  }
  return _DstBuf;
}


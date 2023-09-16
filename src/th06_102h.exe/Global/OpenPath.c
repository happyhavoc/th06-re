
byte * OpenPath(byte *file_path,int param_2)

{
  char *pcVar1;
  byte *buf;
  FILE *f;
  size_t _Size;
  int local_10;
  byte *filename;
  int local_8;
  
  local_10 = -1;
  if (param_2 == 0) {
    pcVar1 = _strrchr((char *)file_path,L'\\');
    if (pcVar1 == (char *)0x0) {
      filename = file_path;
    }
    else {
      filename = (byte *)(pcVar1 + 1);
    }
    pcVar1 = _strrchr((char *)filename,L'/');
    if (pcVar1 == (char *)0x0) {
      filename = file_path;
    }
    else {
      filename = (byte *)(pcVar1 + 1);
    }
    if (PBG3_FILES != (Pbg3File **)0x0) {
      local_8 = 0;
      while ((local_8 < 0x10 &&
             ((PBG3_FILES[local_8] == (Pbg3File *)0x0 ||
              (local_10 = Pbg3File_conflict1::Unk23
                                    ((Pbg3File_conflict1 *)PBG3_FILES[local_8],filename),
              local_10 < 0))))) {
        local_8 = local_8 + 1;
      }
    }
    if (local_10 < 0) {
      return (byte *)0x0;
    }
  }
  if (local_10 < 0) {
    DebugPrint2("%s Load ... \n",file_path);
    f = fopen((char *)file_path,"rb");
    if (f == (FILE *)0x0) {
      DebugPrint2("error : %s is not found.\n",file_path);
      buf = (byte *)0x0;
    }
    else {
      _fseek(f,0,2);
      _Size = _ftell(f);
      g_FileSize = _Size;
      _fseek(f,0,0);
      buf = (byte *)_malloc(_Size);
      _fread(buf,1,_Size,f);
      _fclose(f);
    }
  }
  else {
    DebugPrint2("%s Decode ... \n",filename);
    buf = (byte *)FUN_0043cb40(local_10,filename);
    g_FileSize = FUN_0043c990(local_10);
  }
  return buf;
}


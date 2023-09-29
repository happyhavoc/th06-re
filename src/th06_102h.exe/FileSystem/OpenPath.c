
byte * FileSystem::OpenPath(char *file_path,int param_2)

{
  char *slashPos;
  byte *buf;
  FILE *f;
  size_t _Size;
  int entryIdx;
  char *filename;
  int pbg3Idx;
  
  entryIdx = -1;
  if (param_2 == 0) {
    slashPos = _strrchr(file_path,L'\\');
    if (slashPos == (char *)0x0) {
      filename = file_path;
    }
    else {
      filename = slashPos + 1;
    }
    slashPos = _strrchr(filename,L'/');
    if (slashPos == (char *)0x0) {
      filename = file_path;
    }
    else {
      filename = slashPos + 1;
    }
    if (g_Pbg3Files != (Pbg3Archive **)0x0) {
      pbg3Idx = 0;
      while ((pbg3Idx < 0x10 &&
             ((g_Pbg3Files[pbg3Idx] == (Pbg3Archive *)0x0 ||
              (entryIdx = Pbg3Archive_conflict1::FindEntry
                                    ((Pbg3Archive_conflict1 *)g_Pbg3Files[pbg3Idx],filename),
              entryIdx < 0))))) {
        pbg3Idx = pbg3Idx + 1;
      }
    }
    if (entryIdx < 0) {
      return (byte *)0x0;
    }
  }
  if (entryIdx < 0) {
    DebugPrint2("%s Load ... \n",file_path);
    f = fopen(file_path,"rb");
    if (f == (FILE *)0x0) {
      DebugPrint2("error : %s is not found.\n",file_path);
      buf = (byte *)0x0;
    }
    else {
      _fseek(f,0,2);
      _Size = _ftell(f);
      g_LastFileSize = _Size;
      _fseek(f,0,0);
      buf = (byte *)_malloc(_Size);
      _fread(buf,1,_Size,f);
      _fclose(f);
    }
  }
  else {
    DebugPrint2("%s Decode ... \n",filename);
    buf = (byte *)Pbg3Archive_conflict1::ReadAndValidateEntry
                            ((Pbg3Archive_conflict1 *)g_Pbg3Files[pbg3Idx],entryIdx,filename);
    g_LastFileSize =
         Pbg3Archive_conflict1::GetEntrySize((Pbg3Archive_conflict1 *)g_Pbg3Files[pbg3Idx],entryIdx)
    ;
  }
  return buf;
}


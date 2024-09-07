
int th06::FileSystem::WriteDataToFile(char *path,void *data,size_t size)

{
  FILE *_File;
  int iVar1;
  size_t sVar2;
  
  _File = fopen(path,"wb");
  if (_File == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    sVar2 = fwrite(data,1,size,_File);
    if (sVar2 == size) {
      fclose(_File);
      iVar1 = 0;
    }
    else {
      fclose(_File);
      iVar1 = -2;
    }
  }
  return iVar1;
}


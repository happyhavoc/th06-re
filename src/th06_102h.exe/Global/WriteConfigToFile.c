
undefined4 WriteConfigToFile(char *path,void *data,size_t size)

{
  FILE *_File;
  undefined4 uVar1;
  size_t sVar2;
  
  _File = fopen(path,"wb");
  if (_File == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = _fwrite(data,1,size,_File);
    if (sVar2 == size) {
      _fclose(_File);
      uVar1 = 0;
    }
    else {
      _fclose(_File);
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


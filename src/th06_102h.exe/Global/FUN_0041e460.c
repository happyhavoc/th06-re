
undefined4 FUN_0041e460(char *param_1,void *param_2,size_t param_3)

{
  FILE *_File;
  undefined4 uVar1;
  size_t sVar2;
  
  _File = fopen(param_1,"wb");
  if (_File == (FILE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    sVar2 = _fwrite(param_2,1,param_3,_File);
    if (sVar2 == param_3) {
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


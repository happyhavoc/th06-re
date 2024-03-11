
ZunResult __thiscall loadEnding(Ending *ending,char *endFilePath)

{
  int *_Memory;
  int *piVar1;
  ZunResult result;
  
  _Memory = ending->endFileData;
  piVar1 = (int *)FileSystem::OpenPath(endFilePath,0);
  ending->endFileData = piVar1;
  if (ending->endFileData == (int *)0x0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : エン���ィングファイルが読み込めない、ファイルが破壊されています\n"
                       );
    result = ZUN_ERROR;
  }
  else {
    ending->endFileDataPtr = ending->endFileData;
    *(undefined4 *)&ending->field_0x1148 = 8;
    (ending->Timer2).current = 0;
    (ending->Timer2).subFrame = 0.0;
    (ending->Timer2).previous = -999;
    (ending->Timer1).current = 0;
    (ending->Timer1).subFrame = 0.0;
    (ending->Timer1).previous = -999;
    if (_Memory != (int *)0x0) {
      _free(_Memory);
    }
    result = ZUN_SUCCESS;
  }
  return result;
}


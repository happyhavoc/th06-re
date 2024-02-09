
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
    (ending->anmTimer2).current = 0;
    (ending->anmTimer2).subFrame = 0.0;
    (ending->anmTimer2).previous = -999;
    (ending->anmTimer1).current = 0;
    (ending->anmTimer1).subFrame = 0.0;
    (ending->anmTimer1).previous = -999;
    if (_Memory != (int *)0x0) {
      _free(_Memory);
    }
    result = ZUN_SUCCESS;
  }
  return result;
}


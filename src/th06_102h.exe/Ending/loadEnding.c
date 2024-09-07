
ZunResult __thiscall th06::Ending::loadEnding(Ending *ending,char *endFilePath)

{
  byte *pbVar1;
  ZunResult result;
  char *endFileDat;
  
  endFileDat = ending->endFileData;
  pbVar1 = FileSystem::OpenPath(endFilePath,0);
  ending->endFileData = (char *)pbVar1;
  if (ending->endFileData == (char *)0x0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "error : エンディングファイルが読み込めない、ファイルが破壊されています\n"
                       );
    result = ZUN_ERROR;
  }
  else {
    ending->endFileDataPtr = ending->endFileData;
    ending->line2Delay = 8;
    (ending->Timer2).current = 0;
    (ending->Timer2).subFrame = 0.0;
    (ending->Timer2).previous = -999;
    (ending->Timer1).current = 0;
    (ending->Timer1).subFrame = 0.0;
    (ending->Timer1).previous = -999;
    if (endFileDat != (char *)0x0) {
      _free(endFileDat);
    }
    result = ZUN_SUCCESS;
  }
  return result;
}


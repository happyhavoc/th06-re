
WAVEFORMATEX *
th06::SoundPlayer::GetWavFormatData
          (byte *soundData,char *formatString,int *formatSize,uint fileSizeExcludingFormat)

{
  int iVar1;
  
  while( true ) {
    if (fileSizeExcludingFormat == 0) {
      return (WAVEFORMATEX *)0x0;
    }
    *formatSize = *(int *)(soundData + 4);
    iVar1 = _strncmp((char *)soundData,formatString,4);
    if (iVar1 == 0) break;
    fileSizeExcludingFormat = fileSizeExcludingFormat - (*formatSize + 8);
    soundData = soundData + *formatSize + 8;
  }
  return (WAVEFORMATEX *)(soundData + 8);
}


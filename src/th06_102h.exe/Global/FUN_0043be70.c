
undefined4 FUN_0043be70(char param_1)

{
  LONG LVar1;
  MMRESULT MVar2;
  int in_ECX;
  int local_58;
  _MMIOINFO local_54;
  MMRESULT local_8;
  
  if (*(int *)(in_ECX + 0x80) == 0) {
    if (*(int *)(in_ECX + 4) == 0) {
      DebugPrint2("error : m_hmmio\t== NULL in CWaveFile::ResetFile\n");
      return 0x800401f0;
    }
    if (*(int *)(in_ECX + 0x7c) == 1) {
      LVar1 = mmioSeek(*(HMMIO *)(in_ECX + 4),*(int *)(in_ECX + 0x28) + 4,0);
      if (LVar1 == -1) {
        DebugPrint2("error : mmioSeek in CWaveFile::ResetFile\n");
        return 0x80004005;
      }
      *(undefined4 *)(in_ECX + 8) = 0x61746164;
      local_8 = mmioDescend(*(HMMIO *)(in_ECX + 4),(LPMMCKINFO)(in_ECX + 8),
                            (MMCKINFO *)(in_ECX + 0x1c),0x10);
      if (local_8 != 0) {
        DebugPrint2("error : mmioDescend in CWaveFile::ResetFile\n");
        return 0x80004005;
      }
      if (0 < *(int *)(in_ECX + 0x94)) {
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0x94);
      }
      if ((param_1 != '\0') && (0 < *(int *)(in_ECX + 0x90))) {
        MVar2 = mmioGetInfo(*(HMMIO *)(in_ECX + 4),&local_54,0);
        if (MVar2 != 0) {
          DebugPrint2("error : mmioGetInfo in CWaveFile::ResetFile\n");
          return 0x80004005;
        }
        for (local_58 = 0; local_58 < *(int *)(in_ECX + 0x90); local_58 = local_58 + 1) {
          if (local_54.pchNext == local_54.pchEndRead) {
            MVar2 = mmioAdvance(*(HMMIO *)(in_ECX + 4),&local_54,0);
            if (MVar2 != 0) {
              DebugPrint2("error : mmioAdvance in CWaveFile::ResetFile\n");
              return 0x80004005;
            }
            if (local_54.pchNext == local_54.pchEndRead) {
              DebugPrint2(
                         "error : mmioinfoIn.pchNext == mmioinfoIn.pchEndRead in CWaveFile::ResetFile\n"
                         );
              return 0x80004005;
            }
          }
          local_54.pchNext = local_54.pchNext + 1;
        }
        *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 0x90);
        MVar2 = mmioSetInfo(*(HMMIO *)(in_ECX + 4),&local_54,0);
        if (MVar2 != 0) {
          DebugPrint2("error : mmioSetInfo in CWaveFile::ResetFile\n");
          return 0x80004005;
        }
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(in_ECX + 0x84);
  }
  return 0;
}


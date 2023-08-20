
int FUN_0043ba60(LPSTR param_1,undefined4 param_2,void *param_3)

{
  HMMIO pHVar1;
  void **in_ECX;
  int iVar2;
  _MMIOINFO *p_Var3;
  _MMIOINFO local_54;
  int local_8;
  
  in_ECX[0x1f] = param_3;
  in_ECX[0x20] = (void *)0x0;
  if (in_ECX[0x1f] == (void *)0x1) {
    if (param_1 == (LPSTR)0x0) {
      local_8 = -0x7ff8ffa9;
    }
    else {
      if (*in_ECX != (void *)0x0) {
        _free(*in_ECX);
        *in_ECX = (void *)0x0;
      }
      p_Var3 = &local_54;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        p_Var3->dwFlags = 0;
        p_Var3 = (_MMIOINFO *)&p_Var3->fccIOProc;
      }
      pHVar1 = mmioOpenA(param_1,&local_54,0x10000);
      in_ECX[1] = pHVar1;
      if (in_ECX[1] == (void *)0x0) {
        switch(local_54.wErrorRet) {
        case 0x10b:
          DebugPrint2("The directory specification is incorrect. \n");
          break;
        case 0x10c:
          DebugPrint2("The file is protected and cannot be opened. \n");
          break;
        case 0x10d:
          DebugPrint2("The file is being used by another application and is unavailable. \n");
          break;
        case 0x10f:
          DebugPrint2("too Meny Open Files \n");
          break;
        case 0x110:
          DebugPrint2(
                     "Another failure condition occurred. This is the default error for an open-file failure. \n"
                     );
        }
        DebugPrint2("error : mmioOpen in CWaveFile::Open()\n");
        local_8 = -0x7fffbffb;
      }
      else {
        local_8 = FUN_0043bc00();
        if (local_8 < 0) {
          mmioClose((HMMIO)in_ECX[1],0);
          DebugPrint2("error : ReadOpen in CWaveFile::Open()\n");
          local_8 = -0x7fffbffb;
        }
        else {
          local_8 = FUN_0043be70(0);
          if (local_8 < 0) {
            DebugPrint2("error : ResetFile in CWaveFile::Open()\n");
            local_8 = -0x7fffbffb;
          }
          else {
            in_ECX[0xc] = in_ECX[3];
          }
        }
      }
    }
  }
  return local_8;
}


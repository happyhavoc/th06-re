
int __thiscall FUN_0043ba60(void **param_1_00,LPSTR param_2,undefined4 param_3,void *param_4)

{
  HMMIO pHVar1;
  int iVar2;
  _MMIOINFO *p_Var3;
  _MMIOINFO local_54;
  int local_8;
  
  param_1_00[0x1f] = param_4;
  param_1_00[0x20] = (void *)0x0;
  if (param_1_00[0x1f] == (void *)0x1) {
    if (param_2 == (LPSTR)0x0) {
      local_8 = -0x7ff8ffa9;
    }
    else {
      if (*param_1_00 != (void *)0x0) {
        _free(*param_1_00);
        *param_1_00 = (void *)0x0;
      }
      p_Var3 = &local_54;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        p_Var3->dwFlags = 0;
        p_Var3 = (_MMIOINFO *)&p_Var3->fccIOProc;
      }
      pHVar1 = mmioOpenA(param_2,&local_54,0x10000);
      param_1_00[1] = pHVar1;
      if (param_1_00[1] == (void *)0x0) {
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
          mmioClose((HMMIO)param_1_00[1],0);
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
            param_1_00[0xc] = param_1_00[3];
          }
        }
      }
    }
  }
  return local_8;
}


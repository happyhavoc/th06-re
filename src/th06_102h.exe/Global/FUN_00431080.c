
undefined4 __fastcall FUN_00431080(int **param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_8;
  
  if (param_1[0x184] == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (*param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
      param_1[local_8 + 0x188] = (int *)0xffffffff;
    }
    for (local_8 = 0; (int)local_8 < 0x1a; local_8 = local_8 + 1) {
      iVar2 = FUN_004306e0(local_8,(&PTR_s_data_wav_plst00_wav_00478628)[local_8]);
      if (iVar2 != 0) {
        GameErrorContextLog(&g_GameErrorContext,
                            "error : Sound ファイルが読み込めない データを確認 %s\n"
                            ,(&PTR_s_data_wav_plst00_wav_00478628)[local_8]);
        return 0xffffffff;
      }
    }
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      (**(code **)(**param_1 + 0x14))
                (*param_1,param_1[*(int *)(&DAT_00478528 + local_8 * 8) + 2],
                 param_1 + local_8 + 0x82);
      (**(code **)(*param_1[local_8 + 0x82] + 0x34))(param_1[local_8 + 0x82],0);
      (**(code **)(*param_1[local_8 + 0x82] + 0x3c))
                (param_1[local_8 + 0x82],(int)*(short *)(&DAT_0047852c + local_8 * 8));
    }
    uVar1 = 0;
  }
  return uVar1;
}


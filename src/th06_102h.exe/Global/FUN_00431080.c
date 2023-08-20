
undefined4 FUN_00431080(void)

{
  undefined4 uVar1;
  int iVar2;
  int **in_ECX;
  uint local_8;
  
  if (in_ECX[0x184] == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (*in_ECX == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
      in_ECX[local_8 + 0x188] = (int *)0xffffffff;
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
      (**(code **)(**in_ECX + 0x14))
                (*in_ECX,in_ECX[*(int *)(&DAT_00478528 + local_8 * 8) + 2],in_ECX + local_8 + 0x82);
      (**(code **)(*in_ECX[local_8 + 0x82] + 0x34))(in_ECX[local_8 + 0x82],0);
      (**(code **)(*in_ECX[local_8 + 0x82] + 0x3c))
                (in_ECX[local_8 + 0x82],(int)*(short *)(&DAT_0047852c + local_8 * 8));
    }
    uVar1 = 0;
  }
  return uVar1;
}


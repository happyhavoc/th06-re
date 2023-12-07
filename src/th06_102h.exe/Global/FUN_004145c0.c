
undefined4 FUN_004145c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_10;
  int local_8;
  
  fVar2 = Player::FUN_00428700(&g_Player,(float *)(param_1 + 4));
  for (local_10 = 0; local_10 < *(short *)(param_1 + 0x46); local_10 = local_10 + 1) {
    for (local_8 = 0; local_8 < *(short *)(param_1 + 0x44); local_8 = local_8 + 1) {
      iVar1 = FUN_004135b0(param_1,local_8,local_10,(float)fVar2);
      if (iVar1 != 0) goto LAB_0041463b;
    }
  }
LAB_0041463b:
  if ((*(uint *)(param_1 + 0x4c) & 0x200) != 0) {
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,*(int *)(param_1 + 0x50));
  }
  return 0;
}


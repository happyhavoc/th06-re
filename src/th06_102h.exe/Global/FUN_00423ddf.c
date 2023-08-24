
undefined4 FUN_00423ddf(int param_1)

{
  void *_Memory;
  int local_8;
  
  FUN_004240f0(VERY_BIG_STRUCT);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    FUN_004242f3(local_8);
  }
  FUN_00432030(VERY_BIG_STRUCT,0);
  FUN_00401500();
  SoundPlayer::StopBGM(&SOUND_PLAYER);
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_004224e0();
    _Memory = *(void **)(param_1 + 0x1b0);
    if (_Memory != (void *)0x0) {
      FUN_00421f50();
      _free(_Memory);
    }
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  FUN_0042ab30(0,0);
  FUN_0041f02b();
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x20))(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


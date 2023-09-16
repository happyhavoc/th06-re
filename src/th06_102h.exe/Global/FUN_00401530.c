
void __thiscall FUN_00401530(int param_1_00,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *local_14;
  char *local_10;
  
  if (*(int *)(param_1_00 + 0x6220) < 0x100) {
    pcVar1 = (char *)(param_1_00 + 0x220 + *(int *)(param_1_00 + 0x6220) * 0x60);
    *(int *)(param_1_00 + 0x6220) = *(int *)(param_1_00 + 0x6220) + 1;
    local_10 = param_3;
    local_14 = pcVar1;
    do {
      cVar2 = *local_10;
      *local_14 = cVar2;
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(pcVar1 + 0x40) = *param_2;
    *(undefined4 *)(pcVar1 + 0x44) = param_2[1];
    *(undefined4 *)(pcVar1 + 0x48) = param_2[2];
    *(undefined4 *)(pcVar1 + 0x4c) = *(undefined4 *)(param_1_00 + 0x6224);
    *(undefined4 *)(pcVar1 + 0x50) = *(undefined4 *)(param_1_00 + 0x6228);
    *(undefined4 *)(pcVar1 + 0x54) = *(undefined4 *)(param_1_00 + 0x622c);
    *(undefined4 *)(pcVar1 + 0x5c) = *(undefined4 *)(param_1_00 + 0x6230);
    if ((g_GameContext.cfg.opts >> NO_COLOR_COMP & 1 | g_GameContext.cfg.opts & 1) == 0) {
      *(undefined4 *)(pcVar1 + 0x58) = 0;
    }
    else {
      *(undefined4 *)(pcVar1 + 0x58) = *(undefined4 *)(param_1_00 + 0x6234);
    }
  }
  return;
}


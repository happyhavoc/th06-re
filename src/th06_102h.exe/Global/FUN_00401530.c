
void FUN_00401530(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int in_ECX;
  char *local_14;
  char *local_10;
  
  if (*(int *)(in_ECX + 0x6220) < 0x100) {
    pcVar1 = (char *)(in_ECX + 0x220 + *(int *)(in_ECX + 0x6220) * 0x60);
    *(int *)(in_ECX + 0x6220) = *(int *)(in_ECX + 0x6220) + 1;
    local_10 = param_2;
    local_14 = pcVar1;
    do {
      cVar2 = *local_10;
      *local_14 = cVar2;
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(pcVar1 + 0x40) = *param_1;
    *(undefined4 *)(pcVar1 + 0x44) = param_1[1];
    *(undefined4 *)(pcVar1 + 0x48) = param_1[2];
    *(undefined4 *)(pcVar1 + 0x4c) = *(undefined4 *)(in_ECX + 0x6224);
    *(undefined4 *)(pcVar1 + 0x50) = *(undefined4 *)(in_ECX + 0x6228);
    *(undefined4 *)(pcVar1 + 0x54) = *(undefined4 *)(in_ECX + 0x622c);
    *(undefined4 *)(pcVar1 + 0x5c) = *(undefined4 *)(in_ECX + 0x6230);
    if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1 | g_GameContext.cfg.field34_0x34 & 1U) == 0)
    {
      *(undefined4 *)(pcVar1 + 0x58) = 0;
    }
    else {
      *(undefined4 *)(pcVar1 + 0x58) = *(undefined4 *)(in_ECX + 0x6234);
    }
  }
  return;
}


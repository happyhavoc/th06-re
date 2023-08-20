
void FUN_00424b5d(char *param_1)

{
  char cVar1;
  int iVar2;
  uint unaff_retaddr;
  char *local_22c;
  char *local_228;
  char *local_21c;
  char *local_218;
  char local_20c [256];
  char local_10c [256];
  uint local_c;
  char *local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.cfg._27_1_ == '\x02') {
    if (DAT_006c6ec8 != 0) {
      FUN_004224e0();
      FUN_00422380(param_1);
      FUN_00422490();
    }
  }
  else if (g_GameContext.cfg._27_1_ == '\x01') {
    local_218 = param_1;
    local_21c = local_20c;
    do {
      cVar1 = *local_218;
      *local_21c = cVar1;
      local_218 = local_218 + 1;
      local_21c = local_21c + 1;
    } while (cVar1 != '\0');
    local_228 = param_1;
    local_22c = local_10c;
    do {
      cVar1 = *local_228;
      *local_22c = cVar1;
      local_228 = local_228 + 1;
      local_22c = local_22c + 1;
    } while (cVar1 != '\0');
    local_8 = _strrchr(local_20c,0x2e);
    local_8[1] = 'w';
    local_8[2] = 'a';
    local_8[3] = 'v';
    local_8 = _strrchr(local_10c,0x2e);
    local_8[1] = 'p';
    local_8[2] = 'o';
    local_8[3] = 's';
    FUN_00430a50(local_20c);
    iVar2 = FUN_00430e10(local_10c);
    if (iVar2 < 0) {
      FUN_00430ec0(0);
    }
    else {
      FUN_00430ec0(1);
    }
  }
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


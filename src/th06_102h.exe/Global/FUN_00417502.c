
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417502(int param_1)

{
  char cVar1;
  uint unaff_retaddr;
  char *local_40;
  char local_34;
  undefined auStack_33 [31];
  uint local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  
  local_14 = __security_cookie ^ unaff_retaddr;
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,8);
  if (*(int *)(*(int *)(param_1 + 4) + 0x2bdc) != 0) {
    local_10 = 0x42940000;
    local_c = 128.0;
    local_8 = 0;
    _DAT_00481b24 = 0xffffff40;
    if (DAT_0069d6d4 < 6) {
      FUN_00401650(&DAT_0047b900,&local_10,"Stage Clear\n\n");
    }
    else {
      FUN_00401650(&DAT_0047b900,&local_10,"All Clear!\n\n");
    }
    local_c = local_c + 32.0;
    _DAT_00481b24 = 0xffffffff;
    FUN_00401650(&DAT_0047b900,&local_10,"Stage * 1000 = %5d\n",DAT_0069d6d4 * 1000);
    local_c = local_c + 16.0;
    _DAT_00481b24 = 0xffe0e0ff;
    FUN_00401650(&DAT_0047b900,&local_10,"Power *  100 = %5d\n",(uint)_DAT_0069d4b0 * 100);
    local_c = local_c + 16.0;
    _DAT_00481b24 = 0xffd0d0ff;
    FUN_00401650(&DAT_0047b900,&local_10,"Graze *   10 = %5d\n",DAT_0069bcb4 * 10);
    local_c = local_c + 16.0;
    _DAT_00481b24 = 0xffff8080;
    FUN_00401650(&DAT_0047b900,&local_10,"    * Point Item %3d\n",DAT_0069d4b4);
    if (5 < DAT_0069d6d4) {
      local_c = local_c + 16.0;
      _DAT_00481b24 = 0xffffff80;
      FUN_00401650(&DAT_0047b900,&local_10,"Player    = %8d\n",DAT_0069d4ba * 3000000);
      local_c = local_c + 16.0;
      FUN_00401650(&DAT_0047b900,&local_10,"Bomb      = %8d\n",DAT_0069d4bb * 1000000);
    }
    local_c = local_c + 32.0;
    if (_DAT_0069bcb0 == 0) {
      _DAT_00481b24 = 0xffff8080;
      FUN_00401650(&DAT_0047b900,&local_10,"Easy Rank      * 0.5\n");
    }
    else if (_DAT_0069bcb0 == 1) {
      _DAT_00481b24 = 0xffff8080;
      FUN_00401650(&DAT_0047b900,&local_10,"Normal Rank    * 1.0\n");
    }
    else if (_DAT_0069bcb0 == 2) {
      _DAT_00481b24 = 0xffff8080;
      FUN_00401650(&DAT_0047b900,&local_10,"Hard Rank      * 1.2\n");
    }
    else if (_DAT_0069bcb0 == 3) {
      _DAT_00481b24 = 0xffff8080;
      FUN_00401650(&DAT_0047b900,&local_10,"Lunatic Rank   * 1.5\n");
    }
    else if (_DAT_0069bcb0 == 4) {
      _DAT_00481b24 = 0xffff8080;
      FUN_00401650(&DAT_0047b900,&local_10,"Extra Rank     * 2.0\n");
    }
    local_c = local_c + 16.0;
    if ((_DAT_0069bcb0 < 4) && (DAT_0069d4c3 == '\0')) {
      if (g_GameContext._356_1_ == '\x03') {
        _DAT_00481b24 = 0xffff8080;
        FUN_00401650(&DAT_0047b900,&local_10,"Player Penalty * 0.5\n");
        local_c = local_c + 16.0;
      }
      else if (g_GameContext._356_1_ == '\x04') {
        _DAT_00481b24 = 0xffff8080;
        FUN_00401650(&DAT_0047b900,&local_10,"Player Penalty * 0.2\n");
        local_c = local_c + 16.0;
      }
    }
    _DAT_00481b24 = 0xffffffff;
    FUN_00401650(&DAT_0047b900,&local_10,"Total     = %8d",
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x2be0));
    _DAT_00481b24 = 0xffffffff;
  }
  FUN_004190ec();
  FUN_0041adf3();
  FUN_00419c99();
  _DAT_00481b30 = 1;
  if (*(int *)(*(int *)(param_1 + 4) + 0x2bf4) != 0) {
    _DAT_00481b24 = 0xffffff80;
    FUN_00401650(&DAT_0047b900,*(int *)(param_1 + 4) + 0x2be4,"BONUS %8d",
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x2bf0));
    _DAT_00481b24 = 0xffffffff;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x2c14) != 0) {
    _DAT_00481b24 = 0xffc0b0ff;
    FUN_00401650(&DAT_0047b900,*(int *)(param_1 + 4) + 0x2c04,"Full Power Mode!!",
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c10));
    _DAT_00481b24 = 0xffffffff;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x2c34) != 0) {
    _DAT_00481b24 = 0xffff0000;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c24) = 0x42b00000;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c28) = 0x42a00000;
    FUN_00401650(&DAT_0047b900,*(int *)(param_1 + 4) + 0x2c24,"Spell Card Bonus!");
    *(float *)(*(int *)(param_1 + 4) + 0x2c28) = *(float *)(*(int *)(param_1 + 4) + 0x2c28) + 16.0;
    FUN_0045c386(&local_34,&PTR_DAT_0046a7f4,*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c30));
    local_40 = &local_34;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
    } while (cVar1 != '\0');
    *(float *)(*(int *)(param_1 + 4) + 0x2c24) =
         (384.0 - (float)(ulonglong)(uint)((int)local_40 - (int)auStack_33) * 32.0) / 2.0 + 32.0;
    _DAT_00481b28 = 0x40000000;
    _DAT_00481b2c = 0x40000000;
    _DAT_00481b24 = 0xffff8080;
    FUN_00401530(*(int *)(param_1 + 4) + 0x2c24,&local_34);
    _DAT_00481b28 = 0x3f800000;
    _DAT_00481b2c = 0x3f800000;
    _DAT_00481b24 = 0xffffffff;
  }
  _DAT_00481b30 = 0;
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZFUNC,4);
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}


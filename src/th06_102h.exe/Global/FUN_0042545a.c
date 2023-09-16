
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042545a(int param_1)

{
  float *pfVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  char local_c;
  undefined local_b;
  int local_8;
  
  local_c = '\x7f';
  local_b = 0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  FUN_00435300(g_AnmManager,0,0,0,0,0);
  AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x24));
  for (local_8 = *(int *)(param_1 + 0x18); local_8 < *(int *)(param_1 + 0x18) + 10;
      local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x10) == local_8) {
      *(undefined4 *)(param_1 + 0x1b0 + local_8 * 0x110) = 0xffffffff;
      _DAT_00481b24 = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0 + local_8 * 0x110) = 0xe0808080;
      _DAT_00481b24 = 0xe0808080;
    }
    *(undefined4 *)(param_1 + 0x1c4 + local_8 * 0x110) = 0x42ba0000;
    *(float *)(param_1 + 0x1c8 + local_8 * 0x110) =
         ((float)(((local_8 + 1) - *(int *)(param_1 + 0x18)) * 0x12) + 104.0) - 20.0;
    *(undefined4 *)(param_1 + 0x1cc + local_8 * 0x110) = 0;
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x134 + local_8 * 0x110));
    pfVar1 = (float *)(param_1 + 0x1c4 + local_8 * 0x110);
    fStack_14 = pfVar1[1];
    fStack_10 = pfVar1[2];
    local_18 = *pfVar1 - 60.0;
    if (*(int *)(param_1 + 0x10) == local_8) {
      FUN_00401530(0x47b900,&local_18,&local_c);
    }
    local_18 = local_18 + 15.0;
    FUN_00401650(0x47b900,&local_18,"%2d.",local_8 + 1);
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x2334 + local_8 * 0x110));
  }
  _DAT_00481b24 = 0xffffffff;
  return 1;
}


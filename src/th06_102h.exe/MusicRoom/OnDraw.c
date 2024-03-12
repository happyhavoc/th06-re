
undefined4 MusicRoom::OnDraw(int param_1)

{
  float *pfVar1;
  D3DXVECTOR3 local_18;
  char local_c;
  undefined local_b;
  int local_8;
  
  local_c = '\x7f';
  local_b = 0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
  AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x24));
  for (local_8 = *(int *)(param_1 + 0x18); local_8 < *(int *)(param_1 + 0x18) + 10;
      local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x10) == local_8) {
      *(undefined4 *)(param_1 + 0x1b0 + local_8 * 0x110) = 0xffffffff;
      g_AsciiManager.color = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0 + local_8 * 0x110) = 0xe0808080;
      g_AsciiManager.color = 0xe0808080;
    }
    *(undefined4 *)(param_1 + 0x1c4 + local_8 * 0x110) = 0x42ba0000;
    *(float *)(param_1 + 0x1c8 + local_8 * 0x110) =
         ((float)(((local_8 + 1) - *(int *)(param_1 + 0x18)) * 0x12) + 104.0) - 20.0;
    *(undefined4 *)(param_1 + 0x1cc + local_8 * 0x110) = 0;
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x134 + local_8 * 0x110));
    pfVar1 = (float *)(param_1 + 0x1c4 + local_8 * 0x110);
    local_18.y = pfVar1[1];
    local_18.z = pfVar1[2];
    local_18.x = *pfVar1 - 60.0;
    if (*(int *)(param_1 + 0x10) == local_8) {
      AsciiManager::AddString(&g_AsciiManager,&local_18,&local_c);
    }
    local_18.x = local_18.x + 15.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_18,"%2d.",local_8 + 1);
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0x2334 + local_8 * 0x110));
  }
  g_AsciiManager.color = 0xffffffff;
  return 1;
}


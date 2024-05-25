
ChainCallbackResult MusicRoom::OnDraw(MusicRoom *param_1)

{
  D3DXVECTOR3 local_18;
  char local_c;
  undefined local_b;
  int local_8;
  D3DXVECTOR3 *pDVar1;
  
  local_c = '\x7f';
  local_b = 0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
  AnmManager::DrawNoRotation(g_AnmManager,&param_1->field12_0x24);
  for (local_8 = param_1->listingOffset; local_8 < param_1->listingOffset + 10;
      local_8 = local_8 + 1) {
    if (param_1->cursor == local_8) {
      param_1->field13_0x134[local_8].color.color = 0xffffffff;
      g_AsciiManager.color = 0xffffffff;
    }
    else {
      param_1->field13_0x134[local_8].color.color = 0xe0808080;
      g_AsciiManager.color = 0xe0808080;
    }
    param_1->field13_0x134[local_8].pos.x = 93.0;
    param_1->field13_0x134[local_8].pos.y =
         ((float)(((local_8 + 1) - param_1->listingOffset) * 0x12) + 104.0) - 20.0;
    param_1->field13_0x134[local_8].pos.z = 0.0;
    AnmManager::DrawNoRotation(g_AnmManager,param_1->field13_0x134 + local_8);
    pDVar1 = &param_1->field13_0x134[local_8].pos;
    local_18.y = pDVar1->y;
    local_18.z = pDVar1->z;
    local_18.x = pDVar1->x - 60.0;
    if (param_1->cursor == local_8) {
      AsciiManager::AddString(&g_AsciiManager,&local_18,&local_c);
    }
    local_18.x = local_18.x + 15.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_18,"%2d.",local_8 + 1);
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    AnmManager::DrawNoRotation(g_AnmManager,param_1->field4366_0x2334 + local_8);
  }
  g_AsciiManager.color = 0xffffffff;
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


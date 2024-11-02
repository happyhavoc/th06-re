
ChainCallbackResult __cdecl th06::MusicRoom::OnDraw(MusicRoom *musicRoom)

{
  D3DXVECTOR3 vec;
  char local_c;
  undefined local_b;
  int listOffset;
  D3DXVECTOR3 *songSprite;
  
  local_c = '\x7f';
  local_b = 0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
  AnmManager::DrawNoRotation(g_AnmManager,&musicRoom->mainVM);
  for (listOffset = musicRoom->listingOffset; listOffset < musicRoom->listingOffset + 10;
      listOffset = listOffset + 1) {
    if (musicRoom->cursor == listOffset) {
      musicRoom->anmArray[listOffset].color.color = 0xffffffff;
      g_AsciiManager.color = 0xffffffff;
    }
    else {
      musicRoom->anmArray[listOffset].color.color = 0xe0808080;
      g_AsciiManager.color = 0xe0808080;
    }
    musicRoom->anmArray[listOffset].pos.x = 93.0;
    musicRoom->anmArray[listOffset].pos.y =
         ((float)(((listOffset + 1) - musicRoom->listingOffset) * 0x12) + 104.0) - 20.0;
    musicRoom->anmArray[listOffset].pos.z = 0.0;
    AnmManager::DrawNoRotation(g_AnmManager,musicRoom->anmArray + listOffset);
    songSprite = &musicRoom->anmArray[listOffset].pos;
    vec.y = songSprite->y;
    vec.z = songSprite->z;
    vec.x = songSprite->x - 60.0;
    if (musicRoom->cursor == listOffset) {
      AsciiManager::AddString(&g_AsciiManager,&vec,&local_c);
    }
    vec.x = vec.x + 15.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&vec,"%2d.",listOffset + 1);
  }
  for (listOffset = 0; listOffset < 16; listOffset = listOffset + 1) {
    AnmManager::DrawNoRotation(g_AnmManager,(AnmVm *)(&musicRoom[1].calc_chain + listOffset * 0x44))
    ;
  }
  g_AsciiManager.color = 0xffffffff;
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


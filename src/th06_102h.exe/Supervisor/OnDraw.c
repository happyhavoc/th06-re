
ChainCallbackResult th06::Supervisor::OnDraw(Supervisor *self)

{
  g_AnmManager->currentVertexShader = 0xff;
  g_AnmManager->currentSprite = (AnmLoadedSprite *)0x0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  g_AnmManager->currentColorOp = 0xff;
  g_AnmManager->currentBlendMode = 0xff;
  g_AnmManager->currentZWriteDisable = 0xff;
  DrawFpsCounter();
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}


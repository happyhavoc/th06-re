
void SetViewport(D3DCOLOR color)

{
  g_GameContext.viewport.X = 0;
  g_GameContext.viewport.Y = 0;
  g_GameContext.viewport.Width = 0x280;
  g_GameContext.viewport.Height = 0x1e0;
  g_GameContext.viewport.MinZ = 0.0;
  g_GameContext.viewport.MaxZ = 1.0;
  (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)(g_GameContext.d3dDevice,&g_GameContext.viewport)
  ;
  Clear(color);
  return;
}


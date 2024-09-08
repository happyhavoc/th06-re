
void th06::ScreenEffect::SetViewport(D3DCOLOR color)

{
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  g_Supervisor.viewport.MinZ = 0.0;
  g_Supervisor.viewport.MaxZ = 1.0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  Clear(color);
  return;
}



void Supervisor::CreateBackbuffer(void)

{
  (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
            (g_Supervisor.d3dDevice,0x280,0x40,D3DFMT_A1R5G5B5,&BACKBUFFER_SURFACE);
  return;
}



int AsciiManager::OnDrawHighPrio(AsciiManager *arg)

{
  if (g_GameContext.hasD3dHardwareVertexProcessing == 0) {
    FUN_004033b0(arg);
  }
  else {
    FUN_004031e0(arg);
  }
  return 1;
}


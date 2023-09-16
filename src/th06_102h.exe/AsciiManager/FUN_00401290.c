
int AsciiManager::FUN_00401290(AsciiManager *arg)

{
  if (g_GameContext.hasD3dHardwareVertexProcessing == 0) {
    FUN_004033b0(arg);
  }
  else {
    FUN_004031e0(arg);
  }
  return 1;
}



int AsciiManager::OnDrawPopups(AsciiManager *arg)

{
  if (g_Supervisor.hasD3dHardwareVertexProcessing == 0) {
    DrawPopupsWithoutHwVertexProcessing(arg);
  }
  else {
    DrawPopupsWithHwVertexProcessing(arg);
  }
  return 1;
}


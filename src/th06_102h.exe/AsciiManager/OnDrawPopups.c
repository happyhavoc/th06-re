
ChainCallbackResult th06::AsciiManager::OnDrawPopups(AsciiManager *arg)

{
  if (g_Supervisor.hasD3dHardwareVertexProcessing == 0) {
    DrawPopupsWithoutHwVertexProcessing(arg);
  }
  else {
    DrawPopupsWithHwVertexProcessing(arg);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}



void Supervisor::DrawFpsCounter(void)

{
  D3DXVECTOR3 local_20;
  float elapsedTimeInSecs;
  float fps;
  float local_c;
  DWORD curTime;
  
  if ((DAT_006c6d10 & 1) == 0) {
    DAT_006c6d10 = DAT_006c6d10 | 1;
    g_LastTime = timeGetTime();
  }
  curTime = timeGetTime();
  g_NumFramesSinceLastTime = g_NumFramesSinceLastTime + 1 + (uint)g_Supervisor.cfg.frameskipConfig;
  if (499 < curTime - g_LastTime) {
    elapsedTimeInSecs = (float)(ulonglong)(curTime - g_LastTime) / 1000.0;
    fps = (float)(ulonglong)g_NumFramesSinceLastTime / elapsedTimeInSecs;
    g_NumFramesSinceLastTime = 0;
    g_LastTime = curTime;
    sprintf(g_FpsCounterBuffer,"%.02ffps",(double)fps);
    if (g_GameManager.field40_0x1821 != 0) {
      local_c = 60.0 / g_Supervisor.framerateMultiplier;
      g_Supervisor.field85_0x1b8 = g_Supervisor.field85_0x1b8 + local_c;
      if (local_c * 0.9 < fps == (NAN(local_c * 0.9) || NAN(fps))) {
        if (local_c * 0.7 < fps == (NAN(local_c * 0.7) || NAN(fps))) {
          if (local_c * 0.5 < fps == (NAN(local_c * 0.5) || NAN(fps))) {
            g_Supervisor.field84_0x1b4 = local_c * 0.5 + g_Supervisor.field84_0x1b4;
          }
          else {
            g_Supervisor.field84_0x1b4 = local_c * 0.6 + g_Supervisor.field84_0x1b4;
          }
        }
        else {
          g_Supervisor.field84_0x1b4 = local_c * 0.8 + g_Supervisor.field84_0x1b4;
        }
      }
      else {
        g_Supervisor.field84_0x1b4 = g_Supervisor.field84_0x1b4 + local_c;
      }
    }
  }
  if (g_Supervisor.field78_0x19c == 0) {
    local_20.x = 512.0;
    local_20.y = 464.0;
    local_20.z = 0.0;
    AsciiManager::AddString(&g_AsciiManager,&local_20,g_FpsCounterBuffer);
  }
  return;
}


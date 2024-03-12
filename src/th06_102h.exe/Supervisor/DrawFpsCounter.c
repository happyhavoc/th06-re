
void Supervisor::DrawFpsCounter(void)

{
  D3DXVECTOR3 local_20;
  float elapsedTimeInSecs;
  float fps;
  float framerate;
  DWORD curTime;
  
  if ((g_LastTimeIsSet & 1) == 0) {
    g_LastTimeIsSet = g_LastTimeIsSet | 1;
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
    if (g_GameManager.is_in_menu != 0) {
      framerate = 60.0 / g_Supervisor.framerateMultiplier;
      g_Supervisor.unk_frames_related2 = g_Supervisor.unk_frames_related2 + framerate;
      if (framerate * 0.9 < fps == (NAN(framerate * 0.9) || NAN(fps))) {
        if (framerate * 0.7 < fps == (NAN(framerate * 0.7) || NAN(fps))) {
          if (framerate * 0.5 < fps == (NAN(framerate * 0.5) || NAN(fps))) {
            g_Supervisor.unk_frame_related1 = framerate * 0.5 + g_Supervisor.unk_frame_related1;
          }
          else {
            g_Supervisor.unk_frame_related1 = framerate * 0.6 + g_Supervisor.unk_frame_related1;
          }
        }
        else {
          g_Supervisor.unk_frame_related1 = framerate * 0.8 + g_Supervisor.unk_frame_related1;
        }
      }
      else {
        g_Supervisor.unk_frame_related1 = g_Supervisor.unk_frame_related1 + framerate;
      }
    }
  }
  if (g_Supervisor.isInEnding == 0) {
    local_20.x = 512.0;
    local_20.y = 464.0;
    local_20.z = 0.0;
    AsciiManager::AddString(&g_AsciiManager,&local_20,g_FpsCounterBuffer);
  }
  return;
}


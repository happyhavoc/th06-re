
void __thiscall Supervisor::PlayAudio(Supervisor *this,char *path)

{
  char cVar1;
  MidiOutput *this_00;
  ZunResult ZVar2;
  uint unaff_retaddr;
  char *buf2Ptr;
  char *pathPtr2;
  char *buf1Ptr;
  char *pathPtr1;
  char wavName [256];
  char wavPos [256];
  uint stackCookie;
  char *local_8;
  
  this_00 = g_Supervisor.midi_output;
  stackCookie = __security_cookie ^ unaff_retaddr;
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
      MidiOutput::LoadFile(this_00,path);
      MidiOutput::Play(this_00);
    }
  }
  else if (g_Supervisor.cfg.musicMode == WAV) {
    pathPtr1 = path;
    buf1Ptr = wavName;
    do {
      cVar1 = *pathPtr1;
      *buf1Ptr = cVar1;
      pathPtr1 = pathPtr1 + 1;
      buf1Ptr = buf1Ptr + 1;
    } while (cVar1 != '\0');
    pathPtr2 = path;
    buf2Ptr = wavPos;
    do {
      cVar1 = *pathPtr2;
      *buf2Ptr = cVar1;
      pathPtr2 = pathPtr2 + 1;
      buf2Ptr = buf2Ptr + 1;
    } while (cVar1 != '\0');
    local_8 = _strrchr(wavName,L'.');
    local_8[1] = 'w';
    local_8[2] = 'a';
    local_8[3] = 'v';
    local_8 = _strrchr(wavPos,L'.');
    local_8[1] = 'p';
    local_8[2] = 'o';
    local_8[3] = 's';
    SoundPlayer::LoadWav(&g_SoundPlayer,wavName);
    ZVar2 = SoundPlayer::LoadPos(&g_SoundPlayer,wavPos);
    if (ZVar2 < ZUN_SUCCESS) {
      SoundPlayer::PlayBGM(&g_SoundPlayer,0);
    }
    else {
      SoundPlayer::PlayBGM(&g_SoundPlayer,1);
    }
  }
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}


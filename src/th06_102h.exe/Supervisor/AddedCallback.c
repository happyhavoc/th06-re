
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult Supervisor::AddedCallback(Supervisor *param_1)

{
  int iVar1;
  ZunResult ZVar2;
  HRESULT HVar3;
  DWORD DVar4;
  MidiOutput *this;
  MidiOutput *pMStack_24;
  int iStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 isMidiOutputAllocated_usedByUnwind;
  
  isMidiOutputAllocated_usedByUnwind = 0xffffffff;
  puStack_c = &LAB_0046920a;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  for (iStack_14 = 0; iStack_14 < 0x10; iStack_14 = iStack_14 + 1) {
    param_1->pbg3Archives[iStack_14] = (Pbg3Archive *)0x0;
  }
  g_Pbg3Archives = param_1->pbg3Archives;
  iVar1 = LoadPbg3(param_1,0,"紅魔郷IN.dat");
  if (iVar1 == 0) {
    AnmManager::LoadSurface(g_AnmManager,0,"data/title/th06logo.jpg");
    AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
    HVar3 = (*(g_Supervisor.d3dDevice)->lpVtbl->Present)
                      (g_Supervisor.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
                (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
    }
    AnmManager::CopySurfaceToBackBuffer(g_AnmManager,0,0,0,0,0);
    HVar3 = (*(g_Supervisor.d3dDevice)->lpVtbl->Present)
                      (g_Supervisor.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
    if (HVar3 < 0) {
      (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
                (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
    }
    AnmManager::ReleaseSurface(g_AnmManager,0);
    DVar4 = timeGetTime();
    param_1->startup_time_for_menu_music = DVar4;
    SetupDInput(param_1);
    this = (MidiOutput *)operator_new(0x300);
    isMidiOutputAllocated_usedByUnwind = 0;
    if (this == (MidiOutput *)0x0) {
      pMStack_24 = (MidiOutput *)0x0;
    }
    else {
      pMStack_24 = (MidiOutput *)MidiOutput::MidiOutput(this);
    }
    isMidiOutputAllocated_usedByUnwind = 0xffffffff;
    param_1->midi_output = pMStack_24;
    DVar4 = timeGetTime();
    g_Rng.unk4 = 0;
    g_Rng.seed = (ushort)DVar4;
    SoundPlayer::InitSoundBuffers(&g_SoundPlayer);
    ZVar2 = AnmManager::LoadAnm(g_AnmManager,0,"data/text.anm",0x700);
    if (ZVar2 == ZUN_SUCCESS) {
      ZVar2 = AsciiManager::RegisterChain();
      if (ZVar2 == ZUN_SUCCESS) {
        param_1->unk198 = 0;
        AnmManager::SetupVertexBuffer(g_AnmManager);
        CreateBackBuffer();
        ReleasePbg3(param_1,0);
        iVar1 = LoadPbg3(&g_Supervisor,1,"紅魔郷MD.dat");
        if (iVar1 == 0) {
          ZVar2 = ZUN_SUCCESS;
        }
        else {
          ZVar2 = ZUN_ERROR;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 文字の初期化に失敗しました\n")
        ;
        ZVar2 = ZUN_ERROR;
      }
    }
    else {
      ZVar2 = ZUN_ERROR;
    }
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return ZVar2;
}


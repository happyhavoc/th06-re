
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 Supervisor::AddedCallback(Supervisor *param_1)

{
  Pbg3Archive **ppPVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  DWORD DVar4;
  MidiOutput *this;
  int iVar5;
  MidiOutput *pMStack_24;
  int iStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046920a;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  for (iStack_14 = 0; iStack_14 < 0x10; iStack_14 = iStack_14 + 1) {
    param_1->pbg3Archives[iStack_14] = (Pbg3Archive *)0x0;
  }
  ppPVar1 = param_1->pbg3Archives;
  g_Pbg3Archives = ppPVar1;
  LoadPBG3(param_1,0,(byte *)"紅魔郷IN.dat");
  if (ppPVar1 == (Pbg3Archive **)0x0) {
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
    uStack_8 = 0;
    if (this == (MidiOutput *)0x0) {
      pMStack_24 = (MidiOutput *)0x0;
    }
    else {
      pMStack_24 = (MidiOutput *)MidiOutput::MidiOutput(this);
    }
    uStack_8 = 0xffffffff;
    param_1->midi_output = pMStack_24;
    DVar4 = timeGetTime();
    g_RandomSeedUnknown = 0;
    g_RandomSeed = (short)DVar4;
    SoundPlayer::Initialize(&g_SoundPlayer);
    iVar5 = AnmManager::LoadAnm(g_AnmManager,0,"data/text.anm",0x700);
    if (iVar5 == 0) {
      iVar5 = AsciiManager::RegisterChain();
      if (iVar5 == 0) {
        param_1->unk198 = 0;
        AnmManager::SetupVertexBuffer(g_AnmManager);
        iVar5 = CreateBackbuffer();
        RemovePbg3File(param_1,0);
        LoadPBG3(&g_Supervisor,1,(byte *)"紅魔郷MD.dat");
        if (iVar5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"error : 文字の初期化に失敗しました\n")
        ;
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar2;
}


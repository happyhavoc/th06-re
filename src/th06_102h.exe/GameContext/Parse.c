
undefined4 __thiscall GameContext::Parse(GameContext *this,char *config_file_name)

{
  undefined2 uVar1;
  byte *_Memory;
  FILE *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  GameConfiguration *pGVar6;
  
  pGVar6 = &g_GameContext.cfg;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pGVar6->controllerMapping).shootButton = 0;
    (pGVar6->controllerMapping).bombButton = 0;
    pGVar6 = (GameConfiguration *)&(pGVar6->controllerMapping).focusButton;
  }
  g_GameContext.cfg.opts = g_GameContext.cfg.opts | 1;
  _Memory = FileSystem::OpenPath(config_file_name,1);
  if (_Memory == (byte *)0x0) {
    g_GameContext.cfg.lifeCount = 2;
    g_GameContext.cfg.bombCount = 3;
    g_GameContext.cfg.colorMode16bit = 0xff;
    g_GameContext.cfg.version = 0x102;
    g_GameContext.cfg.padAxisX = 600;
    g_GameContext.cfg.padAxisY = 600;
    pFVar2 = fopen("bgm/th06_01.wav","rb");
    if (pFVar2 == (FILE *)0x0) {
      g_GameContext.cfg.musicMode = MIDI;
      DebugPrint("wave データが無��ので、midi にします\n");
    }
    else {
      g_GameContext.cfg.musicMode = WAV;
      _fclose(pFVar2);
    }
    g_GameContext.cfg.playSounds = 1;
    g_GameContext.cfg.defaultDifficulty = 1;
    g_GameContext.cfg.windowed = false;
    g_GameContext.cfg.frameskipConfig = 0;
    g_GameContext.cfg.controllerMapping.shootButton = g_ControllerMapping.shootButton;
    g_GameContext.cfg.controllerMapping.bombButton = g_ControllerMapping.bombButton;
    g_GameContext.cfg.controllerMapping.focusButton = g_ControllerMapping.focusButton;
    g_GameContext.cfg.controllerMapping.menuButton = g_ControllerMapping.menuButton;
    g_GameContext.cfg.controllerMapping.upButton = g_ControllerMapping.upButton;
    g_GameContext.cfg.controllerMapping.downButton = g_ControllerMapping.downButton;
    g_GameContext.cfg.controllerMapping.leftButton = g_ControllerMapping.leftButton;
    g_GameContext.cfg.controllerMapping.rightButton = g_ControllerMapping.rightButton;
    g_GameContext.cfg.controllerMapping.skipButton = g_ControllerMapping.skipButton;
    GameErrorContextLog(&g_GameErrorContext,
                        "コンフィグデータが見つからないので初期化しました\n"
                       );
  }
  else {
    puVar5 = (undefined4 *)_Memory;
    pGVar6 = &g_GameContext.cfg;
                    /* memcpy */
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = *(undefined2 *)((int)puVar5 + 2);
      (pGVar6->controllerMapping).shootButton = *(undefined2 *)puVar5;
      (pGVar6->controllerMapping).bombButton = uVar1;
      puVar5 = puVar5 + 1;
      pGVar6 = (GameConfiguration *)&(pGVar6->controllerMapping).focusButton;
    }
    if ((((((4 < g_GameContext.cfg.lifeCount) || (3 < g_GameContext.cfg.bombCount)) ||
          (1 < g_GameContext.cfg.colorMode16bit)) ||
         ((MIDI < g_GameContext.cfg.musicMode || (4 < g_GameContext.cfg.defaultDifficulty)))) ||
        ((1 < g_GameContext.cfg.playSounds ||
         ((true < g_GameContext.cfg.windowed || (2 < g_GameContext.cfg.frameskipConfig)))))) ||
       ((g_GameContext.cfg.version != 0x102 || (g_LastFileSize != 0x38)))) {
      g_GameContext.cfg.lifeCount = 2;
      g_GameContext.cfg.bombCount = 3;
      g_GameContext.cfg.colorMode16bit = 0xff;
      g_GameContext.cfg.version = 0x102;
      g_GameContext.cfg.padAxisX = 600;
      g_GameContext.cfg.padAxisY = 600;
      pFVar2 = fopen("bgm/th06_01.wav","rb");
      if (pFVar2 == (FILE *)0x0) {
        g_GameContext.cfg.musicMode = MIDI;
        DebugPrint("wave データが無いので、midi にします\n");
      }
      else {
        g_GameContext.cfg.musicMode = WAV;
        _fclose(pFVar2);
      }
      g_GameContext.cfg.playSounds = 1;
      g_GameContext.cfg.defaultDifficulty = 1;
      g_GameContext.cfg.windowed = false;
      g_GameContext.cfg.frameskipConfig = 0;
      g_GameContext.cfg.controllerMapping.shootButton = g_ControllerMapping.shootButton;
      g_GameContext.cfg.controllerMapping.bombButton = g_ControllerMapping.bombButton;
      g_GameContext.cfg.controllerMapping.focusButton = g_ControllerMapping.focusButton;
      g_GameContext.cfg.controllerMapping.menuButton = g_ControllerMapping.menuButton;
      g_GameContext.cfg.controllerMapping.upButton = g_ControllerMapping.upButton;
      g_GameContext.cfg.controllerMapping.downButton = g_ControllerMapping.downButton;
      g_GameContext.cfg.controllerMapping.leftButton = g_ControllerMapping.leftButton;
      g_GameContext.cfg.controllerMapping.rightButton = g_ControllerMapping.rightButton;
      g_GameContext.cfg.controllerMapping.skipButton = g_ControllerMapping.skipButton;
      g_GameContext.cfg.opts = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "コンフィグデータが破壊されていたので再初期化しました\n"
                         );
    }
    g_ControllerMapping.shootButton = g_GameContext.cfg.controllerMapping.shootButton;
    g_ControllerMapping.bombButton = g_GameContext.cfg.controllerMapping.bombButton;
    g_ControllerMapping.focusButton = g_GameContext.cfg.controllerMapping.focusButton;
    g_ControllerMapping.menuButton = g_GameContext.cfg.controllerMapping.menuButton;
    g_ControllerMapping.upButton = g_GameContext.cfg.controllerMapping.upButton;
    g_ControllerMapping.downButton = g_GameContext.cfg.controllerMapping.downButton;
    g_ControllerMapping.leftButton = g_GameContext.cfg.controllerMapping.leftButton;
    g_ControllerMapping.rightButton = g_GameContext.cfg.controllerMapping.rightButton;
    g_ControllerMapping.skipButton = g_GameContext.cfg.controllerMapping.skipButton;
    _free(_Memory);
  }
  if (((this->cfg).opts >> 1 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"頂点バッファの使用を抑制します\n");
  }
  if (((this->cfg).opts >> 10 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"フォグの使用を抑制します\n");
  }
  if (((this->cfg).opts >> 2 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"16Bit のテクスチャの使用を強制します\n")
    ;
  }
  if (((this->cfg).opts >> 3 & 1 | (this->cfg).opts >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"バックバッファの消去を強制します\n");
  }
  if (((this->cfg).opts >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "ゲーム周りのアイテムの描画を抑制します\n");
  }
  if (((this->cfg).opts >> 5 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"グーローシェーディングを抑制します\n")
    ;
  }
  if (((this->cfg).opts >> 6 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"デプステストを抑制します\n");
  }
  if (((this->cfg).opts >> 7 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"６０フレーム強制モードにします\n");
    this->vsyncEnabled = 0;
  }
  if (((this->cfg).opts >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"テクスチャの色合成を抑制しますn");
  }
  if (((this->cfg).opts >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"ウィンドウモードで起動します\n");
  }
  if (((this->cfg).opts >> 9 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "リファレンスラスタライザを強制します\n");
  }
  if (((this->cfg).opts >> 0xb & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "パッド、キーボードの入力に DirectInput を使用しません\n"
                       );
  }
  iVar4 = FileSystem::WriteDataToFile(config_file_name,&g_GameContext.cfg,0x38);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    GameErrorContextFatal
              (&g_GameErrorContext,"ファイルが書き出せません %s\n",config_file_name);
    GameErrorContextFatal
              (&g_GameErrorContext,
               "フォルダが書込み禁止属性になっているか、ディスクがいっぱいいっぱいになってませんか？\n"
              );
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


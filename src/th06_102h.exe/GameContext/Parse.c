
undefined4 __thiscall GameContext::Parse(GameContext *this,char *config_file_name)

{
  int *_Memory;
  FILE *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  GameConfiguration *pGVar5;
  
  pGVar5 = &g_GameContext.cfg;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    pGVar5->unk1 = 0;
    pGVar5 = (GameConfiguration *)&pGVar5->unk2;
  }
  g_GameContext.cfg.render_opts = g_GameContext.cfg.render_opts | 1;
  _Memory = (int *)OpenPath(config_file_name,1);
  if (_Memory == (int *)0x0) {
    g_GameContext.cfg.lifeCount = 2;
    g_GameContext.cfg.bombCount = 3;
    g_GameContext.cfg.colorMode16bit = 0xff;
    g_GameContext.cfg.version = 0x102;
    g_GameContext.cfg.padAxisX = 600;
    g_GameContext.cfg.padAxisY = 600;
    pFVar1 = fopen("bgm/th06_01.wav","rb");
    if (pFVar1 == (FILE *)0x0) {
      g_GameContext.cfg.sound_mode = 2;
      DebugPrint("wave データが無いので、midi にします\n");
    }
    else {
      g_GameContext.cfg.sound_mode = 1;
      _fclose(pFVar1);
    }
    g_GameContext.cfg.unk6 = 1;
    g_GameContext.cfg.unk7 = 1;
    g_GameContext.cfg.windowed = false;
    g_GameContext.cfg.frameskip_config = 0;
    g_GameContext.cfg.unk1 = DAT_004765a0;
    g_GameContext.cfg.unk2 = DAT_004765a4;
    g_GameContext.cfg.unk3 = DAT_004765a8;
    g_GameContext.cfg.unk4 = DAT_004765ac;
    g_GameContext.cfg.unk5 = DAT_004765b0;
    GameErrorContextLog(&g_GameErrorContext,
                        "コンフィグデータが見つか���ないので初期化しました\n"
                       );
  }
  else {
    piVar4 = _Memory;
    pGVar5 = &g_GameContext.cfg;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      pGVar5->unk1 = *piVar4;
      piVar4 = piVar4 + 1;
      pGVar5 = (GameConfiguration *)&pGVar5->unk2;
    }
    if ((((((4 < g_GameContext.cfg.lifeCount) || (3 < g_GameContext.cfg.bombCount)) ||
          (1 < g_GameContext.cfg.colorMode16bit)) ||
         ((2 < g_GameContext.cfg.sound_mode || (4 < g_GameContext.cfg.unk7)))) ||
        ((1 < g_GameContext.cfg.unk6 ||
         ((true < g_GameContext.cfg.windowed || (2 < g_GameContext.cfg.frameskip_config)))))) ||
       ((g_GameContext.cfg.version != 0x102 || (g_FileSize != 0x38)))) {
      g_GameContext.cfg.lifeCount = 2;
      g_GameContext.cfg.bombCount = 3;
      g_GameContext.cfg.colorMode16bit = 0xff;
      g_GameContext.cfg.version = 0x102;
      g_GameContext.cfg.padAxisX = 600;
      g_GameContext.cfg.padAxisY = 600;
      pFVar1 = fopen("bgm/th06_01.wav","rb");
      if (pFVar1 == (FILE *)0x0) {
        g_GameContext.cfg.sound_mode = 2;
        DebugPrint("wave データが無いので、midi にします\n");
      }
      else {
        g_GameContext.cfg.sound_mode = 1;
        _fclose(pFVar1);
      }
      g_GameContext.cfg.unk6 = 1;
      g_GameContext.cfg.unk7 = 1;
      g_GameContext.cfg.windowed = false;
      g_GameContext.cfg.frameskip_config = 0;
      g_GameContext.cfg.unk1 = DAT_004765a0;
      g_GameContext.cfg.unk2 = DAT_004765a4;
      g_GameContext.cfg.unk3 = DAT_004765a8;
      g_GameContext.cfg.unk4 = DAT_004765ac;
      g_GameContext.cfg.unk5 = DAT_004765b0;
      g_GameContext.cfg.render_opts = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "コンフィグデータが破壊されていたので再初期化しました\n"
                         );
    }
    DAT_004765a0 = g_GameContext.cfg.unk1;
    DAT_004765a4 = g_GameContext.cfg.unk2;
    DAT_004765a8 = g_GameContext.cfg.unk3;
    DAT_004765ac = g_GameContext.cfg.unk4;
    DAT_004765b0 = g_GameContext.cfg.unk5;
    _free(_Memory);
  }
  if (((uint)(this->cfg).render_opts >> 1 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"頂点バッファの使用を抑制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 10 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"フォグの使用を抑制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 2 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"16Bit のテクスチャの使用を強制します\n")
    ;
  }
  if (((uint)(this->cfg).render_opts >> 3 & 1 | (uint)(this->cfg).render_opts >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"バックバッファの消去を強制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "ゲーム周りのアイテムの描画を抑制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 5 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"グーローシェーディングを抑制します\n")
    ;
  }
  if (((uint)(this->cfg).render_opts >> 6 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"デプステストを抑制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 7 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"６０フレーム強制モードにします\n");
    this->field149_0x1a0 = 0;
  }
  if (((uint)(this->cfg).render_opts >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"テクスチャの色合成を抑制しますn");
  }
  if (((uint)(this->cfg).render_opts >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"ウィンドウモードで起動します\n");
  }
  if (((uint)(this->cfg).render_opts >> 9 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "リファレンスラスタライザを強制します\n");
  }
  if (((uint)(this->cfg).render_opts >> 0xb & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "パッド、キーボードの入力に DirectInput を使用しません\n"
                       );
  }
  iVar3 = write_data_to_file(config_file_name,&g_GameContext.cfg,0x38);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    GameErrorContextFatal
              (&g_GameErrorContext,"ファイルが書き出せません %s\n",config_file_name);
    GameErrorContextFatal
              (&g_GameErrorContext,
               "フォルダが書込み禁止属性になっているか、ディスクがいっぱいいっぱいになってませんか？\n"
              );
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



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
    pGVar5->field0_0x0 = 0;
    pGVar5 = (GameConfiguration *)&pGVar5->field1_0x4;
  }
  g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 | 1;
  _Memory = (int *)OpenPath(config_file_name,1);
  if (_Memory == (int *)0x0) {
    g_GameContext.cfg.lifeCount = 2;
    g_GameContext.cfg.bombCount = 3;
    g_GameContext.cfg.field10_0x1a = 0xff;
    g_GameContext.cfg.field7_0x14 = 0x102;
    g_GameContext.cfg.padAxisX = 600;
    g_GameContext.cfg.padAxisY = 600;
    pFVar1 = fopen("bgm/th06_01.wav","rb");
    if (pFVar1 == (FILE *)0x0) {
      g_GameContext.cfg.midi_stuff = 2;
      DebugPrint("wave データが無いので、midi にします\n");
    }
    else {
      g_GameContext.cfg.midi_stuff = 1;
      _fclose(pFVar1);
    }
    g_GameContext.cfg.field12_0x1c = 1;
    g_GameContext.cfg.field13_0x1d = 1;
    g_GameContext.cfg.field14_0x1e = 0;
    g_GameContext.cfg.field15_0x1f = 0;
    g_GameContext.cfg.field0_0x0 = DAT_004765a0;
    g_GameContext.cfg.field1_0x4 = DAT_004765a4;
    g_GameContext.cfg.field2_0x8 = DAT_004765a8;
    g_GameContext.cfg.field3_0xc = DAT_004765ac;
    g_GameContext.cfg.field4_0x10 = DAT_004765b0;
    GameErrorContextLog(&g_GameErrorContext,
                        "コンフィグデータが見つからないので初期化しました\n"
                       );
  }
  else {
    piVar4 = _Memory;
    pGVar5 = &g_GameContext.cfg;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      pGVar5->field0_0x0 = *piVar4;
      piVar4 = piVar4 + 1;
      pGVar5 = (GameConfiguration *)&pGVar5->field1_0x4;
    }
    if ((((((4 < g_GameContext.cfg.lifeCount) || (3 < g_GameContext.cfg.bombCount)) ||
          (1 < g_GameContext.cfg.field10_0x1a)) ||
         ((2 < g_GameContext.cfg.midi_stuff || (4 < g_GameContext.cfg.field13_0x1d)))) ||
        ((1 < g_GameContext.cfg.field12_0x1c ||
         ((1 < g_GameContext.cfg.field14_0x1e || (2 < g_GameContext.cfg.field15_0x1f)))))) ||
       ((g_GameContext.cfg.field7_0x14 != 0x102 || (g_FileSize != 0x38)))) {
      g_GameContext.cfg.lifeCount = 2;
      g_GameContext.cfg.bombCount = 3;
      g_GameContext.cfg.field10_0x1a = 0xff;
      g_GameContext.cfg.field7_0x14 = 0x102;
      g_GameContext.cfg.padAxisX = 600;
      g_GameContext.cfg.padAxisY = 600;
      pFVar1 = fopen("bgm/th06_01.wav","rb");
      if (pFVar1 == (FILE *)0x0) {
        g_GameContext.cfg.midi_stuff = 2;
        DebugPrint("wave データが無いので、midi にします\n");
      }
      else {
        g_GameContext.cfg.midi_stuff = 1;
        _fclose(pFVar1);
      }
      g_GameContext.cfg.field12_0x1c = 1;
      g_GameContext.cfg.field13_0x1d = 1;
      g_GameContext.cfg.field14_0x1e = 0;
      g_GameContext.cfg.field15_0x1f = 0;
      g_GameContext.cfg.field0_0x0 = DAT_004765a0;
      g_GameContext.cfg.field1_0x4 = DAT_004765a4;
      g_GameContext.cfg.field2_0x8 = DAT_004765a8;
      g_GameContext.cfg.field3_0xc = DAT_004765ac;
      g_GameContext.cfg.field4_0x10 = DAT_004765b0;
      g_GameContext.cfg.field34_0x34 = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "コンフィグデータが破壊されていたので再初期化しました\n"
                         );
    }
    DAT_004765a0 = g_GameContext.cfg.field0_0x0;
    DAT_004765a4 = g_GameContext.cfg.field1_0x4;
    DAT_004765a8 = g_GameContext.cfg.field2_0x8;
    DAT_004765ac = g_GameContext.cfg.field3_0xc;
    DAT_004765b0 = g_GameContext.cfg.field4_0x10;
    _free(_Memory);
  }
  if (((uint)(this->cfg).field34_0x34 >> 1 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"頂点バッファの使用を抑制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 10 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"フォグの使用を抑制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 2 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"16Bit のテクスチャの使用を強制します\n")
    ;
  }
  if (((uint)(this->cfg).field34_0x34 >> 3 & 1 | (uint)(this->cfg).field34_0x34 >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"バックバッファの消去を強制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "ゲーム周りのアイテムの描画を抑制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 5 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"グーローシェーディングを抑制します\n")
    ;
  }
  if (((uint)(this->cfg).field34_0x34 >> 6 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"デプステストを抑制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 7 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"６０フレーム強制モードにします\n");
    this->field352_0x1a0 = 0;
  }
  if (((uint)(this->cfg).field34_0x34 >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"テクスチャの色合成を抑制しますn");
  }
  if (((uint)(this->cfg).field34_0x34 >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"ウィンドウモードで起動します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 9 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "リファレンスラスタライザを強制します\n");
  }
  if (((uint)(this->cfg).field34_0x34 >> 0xb & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "パッド、キーボードの入力に DirectInput を使用しません\n"
                       );
  }
  iVar3 = FUN_0041e460(config_file_name,&g_GameContext.cfg,0x38);
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


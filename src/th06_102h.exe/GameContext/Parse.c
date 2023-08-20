
undefined4 __thiscall GameContext::Parse(void *this,char *config_file_name)

{
  undefined4 *_Memory;
  FILE *pFVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  GameConfiguration *pGVar5;
  
  pGVar5 = &g_GameContext.cfg;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pGVar5 = 0;
    pGVar5 = (GameConfiguration *)&pGVar5->field_0x4;
  }
  g_GameContext.cfg._52_4_ = g_GameContext.cfg._52_4_ | 1;
  _Memory = (undefined4 *)FUN_0041e290(config_file_name,1);
  if (_Memory == (undefined4 *)0x0) {
    g_GameContext.cfg.lifeCount = 2;
    g_GameContext.cfg.bombCount = 3;
    g_GameContext.cfg._26_1_ = 0xff;
    g_GameContext.cfg._20_4_ = 0x102;
    g_GameContext.cfg.padAxisX = 600;
    g_GameContext.cfg.padAxisY = 600;
    pFVar1 = fopen("bgm/th06_01.wav","rb");
    if (pFVar1 == (FILE *)0x0) {
      g_GameContext.cfg._27_1_ = 2;
      DebugPrint("wave データが無いので、midi にします\n");
    }
    else {
      g_GameContext.cfg._27_1_ = 1;
      _fclose(pFVar1);
    }
    g_GameContext.cfg._28_1_ = 1;
    g_GameContext.cfg._29_1_ = 1;
    g_GameContext.cfg._30_1_ = 0;
    g_GameContext.cfg._31_1_ = 0;
    g_GameContext.cfg._0_4_ = DAT_004765a0;
    g_GameContext.cfg._4_4_ = DAT_004765a4;
    g_GameContext.cfg._8_4_ = DAT_004765a8;
    g_GameContext.cfg._12_4_ = DAT_004765ac;
    g_GameContext.cfg._16_2_ = DAT_004765b0;
    GameErrorContextLog(&g_GameErrorContext,
                        "コンフィグデータが見つからないので初期化しました\n"
                       );
  }
  else {
    puVar4 = _Memory;
    pGVar5 = &g_GameContext.cfg;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pGVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pGVar5 = (GameConfiguration *)&pGVar5->field_0x4;
    }
    if ((((((4 < g_GameContext.cfg.lifeCount) || (3 < g_GameContext.cfg.bombCount)) ||
          (1 < (byte)g_GameContext.cfg._26_1_)) ||
         ((2 < (byte)g_GameContext.cfg._27_1_ || (4 < (byte)g_GameContext.cfg._29_1_)))) ||
        ((1 < (byte)g_GameContext.cfg._28_1_ ||
         ((1 < (byte)g_GameContext.cfg._30_1_ || (2 < (byte)g_GameContext.cfg._31_1_)))))) ||
       ((g_GameContext.cfg._20_4_ != 0x102 || (g_FileSize != 0x38)))) {
      g_GameContext.cfg.lifeCount = 2;
      g_GameContext.cfg.bombCount = 3;
      g_GameContext.cfg._26_1_ = 0xff;
      g_GameContext.cfg._20_4_ = 0x102;
      g_GameContext.cfg.padAxisX = 600;
      g_GameContext.cfg.padAxisY = 600;
      pFVar1 = fopen("bgm/th06_01.wav","rb");
      if (pFVar1 == (FILE *)0x0) {
        g_GameContext.cfg._27_1_ = 2;
        DebugPrint("wave データが無いので、midi にします\n");
      }
      else {
        g_GameContext.cfg._27_1_ = 1;
        _fclose(pFVar1);
      }
      g_GameContext.cfg._28_1_ = 1;
      g_GameContext.cfg._29_1_ = 1;
      g_GameContext.cfg._30_1_ = 0;
      g_GameContext.cfg._31_1_ = 0;
      g_GameContext.cfg._0_4_ = DAT_004765a0;
      g_GameContext.cfg._4_4_ = DAT_004765a4;
      g_GameContext.cfg._8_4_ = DAT_004765a8;
      g_GameContext.cfg._12_4_ = DAT_004765ac;
      g_GameContext.cfg._16_2_ = DAT_004765b0;
      g_GameContext.cfg._52_4_ = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "コンフィグデータが破壊されていたので再初期化しました\n"
                         );
    }
    DAT_004765a0 = g_GameContext.cfg._0_4_;
    DAT_004765a4 = g_GameContext.cfg._4_4_;
    DAT_004765a8 = g_GameContext.cfg._8_4_;
    DAT_004765ac = g_GameContext.cfg._12_4_;
    DAT_004765b0 = g_GameContext.cfg._16_2_;
    _free(_Memory);
  }
  if ((*(uint *)((int)this + 0x148) >> 1 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"頂点バッファの使用を抑制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 10 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"フォグの使用を抑制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 2 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"16Bit のテクスチャの使用を強制します\n")
    ;
  }
  if ((*(uint *)((int)this + 0x148) >> 3 & 1 | *(uint *)((int)this + 0x148) >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"バックバッファの消去を強制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 4 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "ゲーム周りのアイテムの描画を抑制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 5 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"グーローシェーディングを抑制します\n")
    ;
  }
  if ((*(uint *)((int)this + 0x148) >> 6 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"デプステストを抑制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 7 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"６０フレーム強制モードにします\n");
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  if ((*(uint *)((int)this + 0x148) >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"テクスチャの色合成を抑制しますn");
  }
  if ((*(uint *)((int)this + 0x148) >> 8 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,"ウィンドウモードで起動します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 9 & 1) != 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "リファレンスラスタライザを強制します\n");
  }
  if ((*(uint *)((int)this + 0x148) >> 0xb & 1) != 0) {
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


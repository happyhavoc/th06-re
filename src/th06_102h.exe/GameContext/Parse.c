
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall GameContext::Parse(GameContext *this,char *config_file_name)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = &DAT_006c6e2c;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_006c6e60 = DAT_006c6e60 | 1;
  puVar1 = (undefined4 *)OpenPath(config_file_name,1);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_006c6e44 = 2;
    DAT_006c6e45 = 3;
    DAT_006c6e46 = 0xff;
    _DAT_006c6e40 = 0x102;
    DAT_006c6e4c = 600;
    DAT_006c6e4e = 600;
    pFVar2 = fopen("bgm/th06_01.wav","rb");
    if (pFVar2 == (FILE *)0x0) {
      DAT_006c6e47 = 2;
      DebugPrint("wave データが無いので、midi にします\n");
    }
    else {
      DAT_006c6e47 = 1;
      _fclose(pFVar2);
    }
    DAT_006c6e48 = 1;
    DAT_006c6e49 = 1;
    DAT_006c6e4a = 0;
    DAT_006c6e4b = 0;
    DAT_006c6e2c._0_2_ = g_ControllerMapping.shootButton;
    DAT_006c6e2c._2_2_ = g_ControllerMapping.bombButton;
    DAT_006c6e30._0_2_ = g_ControllerMapping.focusButton;
    DAT_006c6e30._2_2_ = g_ControllerMapping.menuButton;
    DAT_006c6e34._0_2_ = g_ControllerMapping.upButton;
    DAT_006c6e34._2_2_ = g_ControllerMapping.downButton;
    DAT_006c6e38._0_2_ = g_ControllerMapping.leftButton;
    DAT_006c6e38._2_2_ = g_ControllerMapping.rightButton;
    DAT_006c6e3c = g_ControllerMapping.skipButton;
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "コンフィグデータが見つからないので初期化しました\n"
                       );
  }
  else {
    puVar5 = puVar1;
    puVar6 = &DAT_006c6e2c;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((((((4 < DAT_006c6e44) || (3 < DAT_006c6e45)) || (1 < DAT_006c6e46)) ||
         ((2 < DAT_006c6e47 || (4 < DAT_006c6e49)))) ||
        ((1 < DAT_006c6e48 || ((1 < DAT_006c6e4a || (2 < DAT_006c6e4b)))))) ||
       ((_DAT_006c6e40 != 0x102 || (DAT_0069d914 != 0x38)))) {
      DAT_006c6e44 = 2;
      DAT_006c6e45 = 3;
      DAT_006c6e46 = 0xff;
      _DAT_006c6e40 = 0x102;
      DAT_006c6e4c = 600;
      DAT_006c6e4e = 600;
      pFVar2 = fopen("bgm/th06_01.wav","rb");
      if (pFVar2 == (FILE *)0x0) {
        DAT_006c6e47 = 2;
        DebugPrint("wave データが無いので、midi にします\n");
      }
      else {
        DAT_006c6e47 = 1;
        _fclose(pFVar2);
      }
      DAT_006c6e48 = 1;
      DAT_006c6e49 = 1;
      DAT_006c6e4a = 0;
      DAT_006c6e4b = 0;
      DAT_006c6e2c._0_2_ = g_ControllerMapping.shootButton;
      DAT_006c6e2c._2_2_ = g_ControllerMapping.bombButton;
      DAT_006c6e30._0_2_ = g_ControllerMapping.focusButton;
      DAT_006c6e30._2_2_ = g_ControllerMapping.menuButton;
      DAT_006c6e34._0_2_ = g_ControllerMapping.upButton;
      DAT_006c6e34._2_2_ = g_ControllerMapping.downButton;
      DAT_006c6e38._0_2_ = g_ControllerMapping.leftButton;
      DAT_006c6e38._2_2_ = g_ControllerMapping.rightButton;
      DAT_006c6e3c = g_ControllerMapping.skipButton;
      DAT_006c6e60 = 1;
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "コンフィグデータが破壊されていたので再初期化しました\n"
                         );
    }
    g_ControllerMapping.shootButton = (short)DAT_006c6e2c;
    g_ControllerMapping.bombButton = DAT_006c6e2c._2_2_;
    g_ControllerMapping.focusButton = (short)DAT_006c6e30;
    g_ControllerMapping.menuButton = DAT_006c6e30._2_2_;
    g_ControllerMapping.upButton = (short)DAT_006c6e34;
    g_ControllerMapping.downButton = DAT_006c6e34._2_2_;
    g_ControllerMapping.leftButton = (short)DAT_006c6e38;
    g_ControllerMapping.rightButton = DAT_006c6e38._2_2_;
    g_ControllerMapping.skipButton = DAT_006c6e3c;
    _free(puVar1);
  }
  if (((this->cfg).opts >> 1 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "頂点バッファの使用を抑制します\n");
  }
  if (((this->cfg).opts >> 10 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,"フォグの使用を抑制します\n");
  }
  if (((this->cfg).opts >> 2 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "16Bit のテクスチャの使用を強制します\n");
  }
  if (((this->cfg).opts >> 3 & 1 | (this->cfg).opts >> 4 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "バックバッファの消去を強制します\n");
  }
  if (((this->cfg).opts >> 4 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "ゲーム周りのアイテムの描画を抑制します\n");
  }
  if (((this->cfg).opts >> 5 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "グーローシェーディングを抑制します\n");
  }
  if (((this->cfg).opts >> 6 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,"デプステストを抑制します\n");
  }
  if (((this->cfg).opts >> 7 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "６０フレーム強制モードにします\n");
    this->vsyncEnabled = 0;
  }
  if (((this->cfg).opts >> 8 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "テクスチャの色合成を抑制しますn");
  }
  if (((this->cfg).opts >> 8 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "ウィンドウモードで起動します\n");
  }
  if (((this->cfg).opts >> 9 & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "リファレンスラスタライザを強制します\n");
  }
  if (((this->cfg).opts >> 0xb & 1) != 0) {
    GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                        "パッド、キーボードの入力に DirectInput を使用しません\n"
                       );
  }
  iVar4 = WriteConfigToFile(config_file_name,&DAT_006c6e2c,0x38);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    GameErrorContextFatal
              ((GameErrorContext *)&DAT_0069d998,"ファイルが書き出せません %s\n",
               config_file_name);
    GameErrorContextFatal
              ((GameErrorContext *)&DAT_0069d998,
               "フォルダが書込み禁止属性になっているか、ディスクがいっぱいいっぱいになってませんか？\n"
              );
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


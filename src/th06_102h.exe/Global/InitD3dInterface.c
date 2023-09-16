
bool InitD3dInterface(void)

{
  bool bVar1;
  
  DAT_006c6d1c = Direct3DCreate8(0x78);
  bVar1 = DAT_006c6d1c == (IDirect3D8 *)0x0;
  if (bVar1) {
    GameErrorContextFatal
              ((GameErrorContext *)&DAT_0069d998,
               "Direct3D オブジェクトは何故か作成出来なかった\n");
  }
  return bVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

D3DFORMAT * FUN_0041ec22(D3DFORMAT format)

{
  D3DFORMAT *pDVar1;
  int local_8;
  
  for (local_8 = 0;
      (D3DFORMAT_ARRAY_004765b8[local_8 * 6] != ~D3DFMT_UNKNOWN &&
      (D3DFORMAT_ARRAY_004765b8[local_8 * 6] != format)); local_8 = local_8 + 1) {
  }
  if (format == ~D3DFMT_UNKNOWN) {
    pDVar1 = (D3DFORMAT *)0x0;
  }
  else {
    pDVar1 = D3DFORMAT_ARRAY_004765b8 + local_8 * 6;
  }
  return pDVar1;
}


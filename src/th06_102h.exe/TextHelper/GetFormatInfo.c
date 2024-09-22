
FormatInfo * __thiscall th06::TextHelper::GetFormatInfo(TextHelper *this,D3DFORMAT format)

{
  FormatInfo *pFVar1;
  int local_8;
  
  for (local_8 = 0;
      (g_FormatInfoArray[local_8].format != ~D3DFMT_UNKNOWN &&
      (g_FormatInfoArray[local_8].format != format)); local_8 = local_8 + 1) {
  }
  if (format == ~D3DFMT_UNKNOWN) {
    pFVar1 = (FormatInfo *)0x0;
  }
  else {
    pFVar1 = g_FormatInfoArray + local_8;
  }
  return pFVar1;
}


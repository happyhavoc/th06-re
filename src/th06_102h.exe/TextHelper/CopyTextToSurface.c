
uint __thiscall TextHelper::CopyTextToSurface(TextHelper *this,IDirect3DSurface8 *param_1)

{
  uint uVar1;
  HRESULT HVar2;
  D3DLOCKED_RECT local_50;
  ushort *srcBuf;
  D3DSURFACE_DESC local_44;
  FormatInfo *srcWidthBytes;
  int curHeight;
  RECT local_1c;
  int dstWidthBytes;
  void *dstBuf;
  
  if (this->gdiobj2 == (HGDIOBJ)0x0) {
    uVar1 = 0;
  }
  else {
    (*param_1->lpVtbl->GetDesc)(param_1,&local_44);
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = this->width;
    local_1c.bottom = this->height;
    uVar1 = (*param_1->lpVtbl->LockRect)(param_1,&local_50,&local_1c,0);
    if (uVar1 == 0) {
      dstWidthBytes = local_50.Pitch;
      srcWidthBytes = this->formatInfo;
      srcBuf = this->buffer;
      dstBuf = local_50.pBits;
      if (local_44.Format == this->format) {
        for (curHeight = 0; curHeight < (int)this->height; curHeight = curHeight + 1) {
          _memcpy(dstBuf,srcBuf,(size_t)srcWidthBytes);
          srcBuf = (ushort *)((int)srcBuf + (int)srcWidthBytes);
          dstBuf = (void *)((int)dstBuf + dstWidthBytes);
        }
      }
      HVar2 = (*param_1->lpVtbl->UnlockRect)(param_1);
      uVar1 = CONCAT31((int3)((uint)HVar2 >> 8),1);
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}


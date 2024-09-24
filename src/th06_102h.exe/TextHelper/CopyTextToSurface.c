
bool __thiscall th06::TextHelper::CopyTextToSurface(TextHelper *this,IDirect3DSurface8 *param_1)

{
  bool bVar1;
  HRESULT uVar1;
  D3DLOCKED_RECT local_50;
  ushort *srcBuf;
  D3DSURFACE_DESC local_44;
  size_t srcWidthBytes;
  int curHeight;
  RECT local_1c;
  void *dstBuf;
  
  if (this->gdiobj2 == (HGDIOBJ)0x0) {
    bVar1 = false;
  }
  else {
    (*param_1->lpVtbl->GetDesc)(param_1,&local_44);
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = this->width;
    local_1c.bottom = this->height;
    uVar1 = (*param_1->lpVtbl->LockRect)(param_1,&local_50,&local_1c,0);
    if (uVar1 == 0) {
      srcWidthBytes = this->imageWidthInBytes;
      srcBuf = this->buffer;
      dstBuf = local_50.pBits;
      if (local_44.Format == this->format) {
        for (curHeight = 0; curHeight < this->height; curHeight = curHeight + 1) {
          _memcpy(dstBuf,srcBuf,srcWidthBytes);
          srcBuf = (ushort *)((int)srcBuf + srcWidthBytes);
          dstBuf = (void *)((int)dstBuf + local_50.Pitch);
        }
      }
      (*param_1->lpVtbl->UnlockRect)(param_1);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


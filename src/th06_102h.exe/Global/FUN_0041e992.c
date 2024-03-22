
uint __thiscall FUN_0041e992(void *this)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    SelectObject(*(HDC *)((int)this + 0x14),*(HGDIOBJ *)((int)this + 0x18));
    DeleteDC(*(HDC *)((int)this + 0x14));
    DeleteObject(*(HGDIOBJ *)((int)this + 0x1c));
    *(undefined4 *)this = 0xffffffff;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}


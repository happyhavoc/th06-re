
byte * __thiscall
Pbg3Archive_conflict1::ReadEntry
          (Pbg3Archive_conflict1 *this,int *out_size,int *out_checksum,int entry)

{
  int iVar1;
  byte *data;
  size_t *unaff_EBX;
  int iVar2;
  size_t size;
  undefined4 *unaff_EDI;
  
  if (*(int **)this == (int *)0x0) {
    return (byte *)0x0;
  }
  if ((((uint)entry < *(uint *)(this + 8)) && (out_size != (int *)0x0)) &&
     (out_checksum != (int *)0x0)) {
    iVar2 = entry * 0x114;
    iVar1 = (**(code **)(**(int **)this + 0xc))
                      (*(undefined4 *)(*(int *)(this + 0x10) + 0xc + iVar2));
    if (iVar1 != 0) {
      if (entry == *(int *)(this + 8) + -1) {
        size = *(int *)(this + 0xc) - *(int *)(*(int *)(this + 0x10) + 0xc + iVar2);
      }
      else {
        size = *(int *)(*(int *)(this + 0x10) + 0x120 + iVar2) -
               *(int *)(*(int *)(this + 0x10) + 0xc + iVar2);
      }
      data = (byte *)_malloc(size);
      if (data != (byte *)0x0) {
        iVar1 = (**(code **)(**(int **)this + 0x14))(data,size);
        if (iVar1 != 0) {
          *unaff_EDI = *(undefined4 *)(*(int *)(this + 0x10) + 0x10 + iVar2);
          *unaff_EBX = size;
          return data;
        }
        _free(data);
      }
    }
  }
  return (byte *)0x0;
}


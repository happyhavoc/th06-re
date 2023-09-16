
undefined4 __thiscall Pbg3File_conflict1::Unk12(Pbg3File_conflict1 *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  Pbg3FileStuff *this_00;
  
  iVar1 = Pbg3FileStuff::Unk3(*(Pbg3FileStuff **)this);
  this_00 = *(Pbg3FileStuff **)this;
  if (iVar1 == 0x33474250) {
    uVar2 = Pbg3FileStuff::Unk20(this_00);
    *(uint *)(this + 8) = uVar2;
    uVar2 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
    *(uint *)(this + 0xc) = uVar2;
    iVar1 = (**(code **)(**(int **)this + 0xc))(uVar2);
    if (iVar1 != 0) {
      pvVar3 = operator_new(*(int *)(this + 8) * 0x114);
      *(void **)(this + 0x10) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        uVar2 = 0;
        if (*(int *)(this + 8) != 0) {
          iVar1 = 0;
          do {
            uVar4 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
            *(uint *)(iVar1 + 4 + *(int *)(this + 0x10)) = uVar4;
            uVar4 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
            *(uint *)(iVar1 + *(int *)(this + 0x10)) = uVar4;
            uVar4 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
            *(uint *)(iVar1 + 0x10 + *(int *)(this + 0x10)) = uVar4;
            uVar4 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
            *(uint *)(iVar1 + 0xc + *(int *)(this + 0x10)) = uVar4;
            uVar4 = Pbg3FileStuff::Unk20(*(Pbg3FileStuff **)this);
            *(uint *)(iVar1 + 8 + *(int *)(this + 0x10)) = uVar4;
            iVar5 = Pbg3FileStuff::Unk21
                              (*(Pbg3FileStuff **)this,iVar1 + 0x14 + *(int *)(this + 0x10),0x100);
            if (iVar5 == 0) {
              if (*(int **)this != (int *)0x0) {
                (**(code **)(**(int **)this + 0x1c))(1);
                *(undefined4 *)this = 0;
              }
              if (*(void **)(this + 0x10) != (void *)0x0) {
                _free(*(void **)(this + 0x10));
                *(undefined4 *)(this + 0x10) = 0;
              }
              return 0;
            }
            uVar2 = uVar2 + 1;
            iVar1 = iVar1 + 0x114;
          } while (uVar2 < *(uint *)(this + 8));
        }
        return 1;
      }
      if (*(int **)this == (int *)0x0) {
        return 0;
      }
      (**(code **)(**(int **)this + 0x1c))(1);
      *(undefined4 *)this = 0;
      return 0;
    }
    this_00 = *(Pbg3FileStuff **)this;
  }
  if (this_00 == (Pbg3FileStuff *)0x0) {
    return 0;
  }
  (*(code *)this_00->vtbl->dtor)(1);
  *(undefined4 *)this = 0;
  return 0;
}



undefined4 __thiscall Pbg3Archive_conflict1::ParseHeader(Pbg3Archive_conflict1 *this)

{
  int iVar1;
  uint val;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  Pbg3Parser *inner;
  
  iVar1 = Pbg3Parser::ReadMagic(*(Pbg3Parser **)this);
  inner = *(Pbg3Parser **)this;
  if (iVar1 == 0x33474250) {
    val = Pbg3Parser::ReadVarInt(inner);
    *(uint *)(this + 8) = val;
    val = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
    *(uint *)(this + 0xc) = val;
    iVar1 = (**(code **)(**(int **)this + 0xc))(val);
    if (iVar1 != 0) {
      pvVar2 = operator_new(*(int *)(this + 8) * 0x114);
      *(void **)(this + 0x10) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        val = 0;
        if (*(int *)(this + 8) != 0) {
          iVar1 = 0;
          do {
            uVar3 = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
            *(uint *)(iVar1 + 4 + *(int *)(this + 0x10)) = uVar3;
            uVar3 = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
            *(uint *)(iVar1 + *(int *)(this + 0x10)) = uVar3;
            uVar3 = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
            *(uint *)(iVar1 + 0x10 + *(int *)(this + 0x10)) = uVar3;
            uVar3 = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
            *(uint *)(iVar1 + 0xc + *(int *)(this + 0x10)) = uVar3;
            uVar3 = Pbg3Parser::ReadVarInt(*(Pbg3Parser **)this);
            *(uint *)(iVar1 + 8 + *(int *)(this + 0x10)) = uVar3;
            iVar4 = Pbg3Parser::ReadString
                              (*(Pbg3Parser **)this,(char *)(iVar1 + 0x14 + *(int *)(this + 0x10)),
                               0x100);
            if (iVar4 == 0) {
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
            val = val + 1;
            iVar1 = iVar1 + 0x114;
          } while (val < *(uint *)(this + 8));
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
    inner = *(Pbg3Parser **)this;
  }
  if (inner == (Pbg3Parser *)0x0) {
    return 0;
  }
  (*(code *)inner->vtbl->dtor)(1);
  *(undefined4 *)this = 0;
  return 0;
}


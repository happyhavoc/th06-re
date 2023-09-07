
undefined4 __thiscall Pbg3FileStuff::Unk4(Pbg3FileStuff *this,uint param_1)

{
  int iVar1;
  
  if (param_1 < (uint)this->field5_0x8) {
    iVar1 = (**(code **)(*(int *)this + 0x10))();
    if (iVar1 != 0) {
      iVar1 = FileAbstraction::Seek(&(this->fileAbstraction).base,param_1,0);
      if (iVar1 != 0) {
        this->field4_0x4 = param_1;
        this->field8_0x14 = 0;
        return 1;
      }
    }
  }
  return 0;
}


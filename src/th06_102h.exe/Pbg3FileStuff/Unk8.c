
Pbg3FileStuff * __thiscall Pbg3FileStuff::Unk8(Pbg3FileStuff *param_1_00,byte param_2)

{
  Unk9(param_1_00);
  if ((param_2 & 1) != 0) {
    _free(param_1_00);
  }
  return param_1_00;
}


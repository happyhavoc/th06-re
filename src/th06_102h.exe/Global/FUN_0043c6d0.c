
void __fastcall FUN_0043c6d0(FileAbstraction *param_1)

{
  if (param_1[-2].handle < (HANDLE)param_1[-2].field2_0x8) {
    param_1[-2].handle = (HANDLE)((int)param_1[-2].handle + 1);
  }
  FileAbstraction::ReadByte(param_1);
  return;
}



void __fastcall FileAbstraction::Close(FileAbstraction *param_1)

{
  if (param_1->handle != (HANDLE)0xffffffff) {
    CloseHandle(param_1->handle);
    param_1->handle = (HANDLE)0xffffffff;
    param_1->field2_0x8 = 0;
  }
  return;
}


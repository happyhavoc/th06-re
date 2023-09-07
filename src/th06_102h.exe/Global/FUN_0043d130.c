
void __fastcall FUN_0043d130(FileAbstraction *param_1)

{
  param_1->vtbl = &FileAbstractionVtable_0046cbe8;
  if (param_1->handle != (HANDLE)0xffffffff) {
    CloseHandle(param_1->handle);
    param_1->handle = (HANDLE)0xffffffff;
    param_1->field2_0x8 = 0;
  }
  return;
}


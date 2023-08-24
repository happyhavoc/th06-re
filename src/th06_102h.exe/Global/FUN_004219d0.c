
void __fastcall FUN_004219d0(VeryBigStruct *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    if (param_1->surfaces[local_8] != (IDirect3DSurface8 *)0x0) {
      (*param_1->surfaces[local_8]->lpVtbl->Release)(param_1->surfaces[local_8]);
      param_1->surfaces[local_8] = (IDirect3DSurface8 *)0x0;
    }
  }
  return;
}


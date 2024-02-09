
void FUN_00412e50(int param_1)

{
  int iVar1;
  float fVar2;
  int local_c;
  
  for (local_c = 0; local_c < *(int *)(param_1 + 0xea0); local_c = local_c + 1) {
    iVar1 = *(int *)(param_1 + 0xe70 + local_c * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x134) = *(undefined4 *)(param_1 + 0xc6c);
      *(undefined4 *)(iVar1 + 0x138) = *(undefined4 *)(param_1 + 0xc70);
      *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(param_1 + 0xc74);
      if (*(float *)(iVar1 + 0x15c) < *(float *)(param_1 + 0xea4) !=
          (NAN(*(float *)(iVar1 + 0x15c)) || NAN(*(float *)(param_1 + 0xea4)))) {
        *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) + 0.3;
      }
      fVar2 = add_normalize_angle(*(float *)(iVar1 + 0x160),0.03141593);
      *(float *)(iVar1 + 0x160) = fVar2;
    }
  }
  return;
}



void FUN_0040b8e0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *local_c;
  int local_8;
  
  local_c = &DAT_005ab5f8;
  iVar1 = *(int *)(param_2 + 0x10);
  FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((*(short *)((int)local_c + 0x5be) != 0) && (*(short *)((int)local_c + 0x5be) != 5)) {
      *(undefined2 *)((int)local_c + 0x5ba) = 0xf;
      FUN_004323a0(local_c,(int)*(short *)((int)local_c + 0xb2) +
                           (int)*(short *)((int)local_c + 0x5ba));
      if (iVar1 == 0) {
        local_c[0x161] = 0;
        local_c[0x15b] = 0;
        local_c[0x15c] = 0;
        local_c[0x15d] = 0;
      }
      else if (iVar1 == 1) {
        *(ushort *)(local_c + 0x16e) = *(ushort *)(local_c + 0x16e) | 0x10;
        local_c[0x16a] = 0xdc;
        local_c[0x169] = 0;
        local_c[0x168] = 0;
        local_c[0x167] = 0xfffffc19;
        fVar2 = (float10)FUN_0041e820();
        fVar3 = (float10)(float)(fVar2 * (float10)6.283185 - (float10)3.141593);
        fVar2 = (float10)fcos(fVar3);
        fVar3 = (float10)fsin(fVar3);
        local_c[0x15e] = (float)(fVar2 * (float10)0.01);
        local_c[0x15f] = (float)(fVar3 * (float10)0.01);
      }
    }
    local_c = local_c + 0x171;
  }
  return;
}


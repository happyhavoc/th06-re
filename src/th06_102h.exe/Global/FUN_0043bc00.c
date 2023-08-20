
undefined4 FUN_0043bc00(void)

{
  MMRESULT MVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint *puVar4;
  uint uVar5;
  uint **in_ECX;
  uint local_2c;
  _MMCKINFO local_28;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  *in_ECX = (uint *)0x0;
  MVar1 = mmioDescend((HMMIO)in_ECX[1],(LPMMCKINFO)(in_ECX + 7),(MMCKINFO *)0x0,0);
  if (MVar1 == 0) {
    if ((in_ECX[7] == (uint *)0x46464952) && (in_ECX[9] == (uint *)0x45564157)) {
      local_28.ckid = 0x20746d66;
      MVar1 = mmioDescend((HMMIO)in_ECX[1],&local_28,(MMCKINFO *)(in_ECX + 7),0x10);
      if (MVar1 == 0) {
        if (local_28.cksize < 0x10) {
          uVar2 = 0x80004005;
        }
        else {
          LVar3 = mmioRead((HMMIO)in_ECX[1],(HPSTR)&local_14,0x10);
          if (LVar3 == 0x10) {
            if ((local_14 & 0xffff) == 1) {
              puVar4 = (uint *)operator_new(0x12);
              *in_ECX = puVar4;
              if (*in_ECX == (uint *)0x0) {
                return 0x80004005;
              }
              puVar4 = *in_ECX;
              *puVar4 = local_14;
              puVar4[1] = local_10;
              puVar4[2] = local_c;
              puVar4[3] = local_8;
              *(undefined2 *)(*in_ECX + 4) = 0;
            }
            else {
              local_2c = local_2c & 0xffff0000;
              LVar3 = mmioRead((HMMIO)in_ECX[1],(HPSTR)&local_2c,2);
              if (LVar3 != 2) {
                return 0x80004005;
              }
              puVar4 = (uint *)operator_new((local_2c & 0xffff) + 0x12);
              *in_ECX = puVar4;
              if (*in_ECX == (uint *)0x0) {
                return 0x80004005;
              }
              puVar4 = *in_ECX;
              *puVar4 = local_14;
              puVar4[1] = local_10;
              puVar4[2] = local_c;
              puVar4[3] = local_8;
              *(undefined2 *)(*in_ECX + 4) = (undefined2)local_2c;
              uVar5 = mmioRead((HMMIO)in_ECX[1],(HPSTR)((int)*in_ECX + 0x12),local_2c & 0xffff);
              if (uVar5 != (local_2c & 0xffff)) {
                if (*in_ECX != (uint *)0x0) {
                  _free(*in_ECX);
                  *in_ECX = (uint *)0x0;
                }
                return 0x80004005;
              }
            }
            MVar1 = mmioAscend((HMMIO)in_ECX[1],&local_28,0);
            if (MVar1 == 0) {
              uVar2 = 0;
            }
            else {
              if (*in_ECX != (uint *)0x0) {
                _free(*in_ECX);
                *in_ECX = (uint *)0x0;
              }
              uVar2 = 0x80004005;
            }
          }
          else {
            uVar2 = 0x80004005;
          }
        }
      }
      else {
        uVar2 = 0x80004005;
      }
    }
    else {
      uVar2 = 0x80004005;
    }
  }
  else {
    uVar2 = 0x80004005;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004288c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  if (DAT_0069bccc != '\0') {
    return 1;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x638 + local_8 * 0xc) = 0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x8c0 + local_8 * 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x75c8) == 0) {
    iVar2 = FUN_004195a2();
    if (((((iVar2 == 0) && (*(int *)(param_1 + 0x9d8) != 0)) && ('\0' < DAT_0069d4bb)) &&
        (((DAT_0069d904 & 2) != 0 && ((DAT_0069d904 & 2) != (DAT_0069d908 & 2))))) &&
       (*(int *)(param_1 + 0x75dc) != 0)) {
      DAT_0069bcc4 = DAT_0069bcc4 + 1;
      DAT_0069d4bb = DAT_0069d4bb + -1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
      *(undefined4 *)(param_1 + 0x75c8) = 1;
      *(undefined4 *)(param_1 + 0x75d8) = 0;
      *(undefined4 *)(param_1 + 0x75d4) = 0;
      *(undefined4 *)(param_1 + 0x75d0) = 0xfffffc19;
      *(undefined4 *)(param_1 + 0x75cc) = 999;
      (**(code **)(param_1 + 0x75dc))(param_1);
      _DAT_005a5f8c = 0;
      FUN_0041c5fa(200);
      _DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (**(code **)(param_1 + 0x75dc))(param_1);
  }
  if (*(char *)(param_1 + 0x9e0) == '\x02') {
    if (*(int *)(param_1 + 0x9d8) != 0) {
      *(int *)(param_1 + 0x9d8) = *(int *)(param_1 + 0x9d8) + -1;
      if (*(int *)(param_1 + 0x9d8) == 0) {
        DAT_0069d4b9 = 0;
        if (DAT_0069d4ba < '\x01') {
          FUN_0041f290(param_1 + 0x440,4,2);
          FUN_0041f290(param_1 + 0x440,4,2);
          FUN_0041f290(param_1 + 0x440,4,2);
          FUN_0041f290(param_1 + 0x440,4,2);
          FUN_0041f290(param_1 + 0x440,4,2);
          _DAT_0069d4b0 = 0;
          DAT_0069d4bc = 0xff;
        }
        else {
          FUN_0041f290(param_1 + 0x440,2,2);
          FUN_0041f290(param_1 + 0x440,0,2);
          FUN_0041f290(param_1 + 0x440,0,2);
          FUN_0041f290(param_1 + 0x440,0,2);
          FUN_0041f290(param_1 + 0x440,0,2);
          FUN_0041f290(param_1 + 0x440,0,2);
          if (_DAT_0069d4b0 < 0x11) {
            _DAT_0069d4b0 = 0;
          }
          else {
            _DAT_0069d4b0 = _DAT_0069d4b0 - 0x10;
          }
        }
        DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
        FUN_0041c5fa(0x640);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)*(int *)(param_1 + 0x75bc) + *(float *)(param_1 + 0x75b8)) / 30.0;
    *(float *)(param_1 + 0x18) = fVar1 * 3.0 + 1.0;
    *(float *)(param_1 + 0x1c) = 1.0 - fVar1 * 1.0;
    iVar2 = __ftol2();
    *(uint *)(param_1 + 0x7c) = iVar2 << 0x18 | 0xffffff;
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
    *(undefined4 *)(param_1 + 0xa10) = 0;
    *(undefined4 *)(param_1 + 0xa14) = 0;
    if (*(int *)(param_1 + 0x75bc) < 0x1e) goto LAB_00428fa8;
    *(undefined *)(param_1 + 0x9e0) = 1;
    *(float *)(param_1 + 0x440) = _DAT_0069d6e4 / 2.0;
    *(float *)(param_1 + 0x444) = _DAT_0069d6e8 - 64.0;
    *(undefined4 *)(param_1 + 0x448) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x75bc) = 0;
    *(undefined4 *)(param_1 + 0x75b8) = 0;
    *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
    *(undefined4 *)(param_1 + 0x1c) = 0x40400000;
    *(undefined4 *)(param_1 + 0x18) = 0x40400000;
    iVar2 = DAT_006d4588;
    *(undefined2 *)(param_1 + 0xb4) = 0x400;
    FUN_00432430(param_1,*(undefined4 *)(iVar2 + 0x1d934));
    if (DAT_0069d4ba < '\x01') {
      DAT_0069d4c0 = 1;
      goto LAB_00428fa8;
    }
    DAT_0069d4ba = DAT_0069d4ba + -1;
    if ((_DAT_0069bcb0 < 4) && (DAT_0069d4c3 == '\0')) {
      DAT_0069d4bb = DAT_006c6e7d;
    }
    else {
      DAT_0069d4bb = '\x03';
    }
    DAT_0069bc30 = DAT_0069bc30 & 0xfffffff0 | 10;
  }
  else if (*(char *)(param_1 + 0x9e0) != '\x01') goto LAB_00428fa8;
  *(undefined4 *)(param_1 + 0x9dc) = 0x5a;
  fVar1 = 1.0 - ((float)*(int *)(param_1 + 0x75bc) + *(float *)(param_1 + 0x75b8)) / 30.0;
  *(float *)(param_1 + 0x18) = fVar1 * 2.0 + 1.0;
  *(float *)(param_1 + 0x1c) = 1.0 - fVar1 * 1.0;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
  *(undefined4 *)(param_1 + 0x9d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9d0) = 0x3f800000;
  *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x75bc) * 0xff) / 0x1e << 0x18 | 0xffffff;
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  if (0x1d < *(int *)(param_1 + 0x75bc)) {
    *(undefined *)(param_1 + 0x9e0) = 3;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x75bc) = 0xf0;
    *(undefined4 *)(param_1 + 0x75b8) = 0;
    *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
    *(undefined4 *)(param_1 + 0x9d8) = 6;
  }
LAB_00428fa8:
  if (*(int *)(param_1 + 0x9dc) != 0) {
    *(int *)(param_1 + 0x9dc) = *(int *)(param_1 + 0x9dc) + -1;
    FUN_00414160(0);
  }
  if (*(char *)(param_1 + 0x9e0) == '\x03') {
    FUN_004241e5(1);
    if (*(int *)(param_1 + 0x75bc) < 1) {
      *(undefined *)(param_1 + 0x9e0) = 0;
      *(undefined4 *)(param_1 + 0x75bc) = 0;
      *(undefined4 *)(param_1 + 0x75b8) = 0;
      *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff7;
      *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x75bc) & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar3 < 2) {
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 8;
        *(undefined4 *)(param_1 + 0x7c) = 0xff404040;
      }
      else {
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff7;
        *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x75b4) = *(undefined4 *)(param_1 + 0x75bc);
    FUN_00424285(param_1 + 0x75bc,param_1 + 0x75b8);
  }
  if ((*(char *)(param_1 + 0x9e0) != '\x02') && (*(char *)(param_1 + 0x9e0) != '\x01')) {
    FUN_00427860();
  }
  FUN_00433960(param_1);
  FUN_004291b0(param_1);
  if (*(char *)(param_1 + 0x9e2) != '\0') {
    FUN_00433960(param_1 + 0x110);
    FUN_00433960(param_1 + 0x220);
  }
  *(undefined4 *)(param_1 + 0xa1c) = 0xc479c000;
  *(undefined4 *)(param_1 + 0xa20) = 0xc479c000;
  *(undefined4 *)(param_1 + 0xa24) = 0;
  FUN_00429710(param_1);
  return 1;
}


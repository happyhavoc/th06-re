
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f4a0(void)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int in_ECX;
  float10 fVar7;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_28;
  int local_20;
  int local_18;
  int local_c;
  int local_8;
  
  if ((DAT_0069e240 & 1) == 0) {
    DAT_0069e240 = DAT_0069e240 | 1;
    _DAT_0069e234 = 0x41800000;
    _DAT_0069e238 = 0x41800000;
    _DAT_0069e23c = 0x41800000;
  }
  bVar4 = false;
  *(undefined4 *)(in_ECX + 0x28948) = 0;
  local_8 = 0;
  local_18 = in_ECX;
  do {
    if (0x1ff < local_8) {
      if (bVar4) {
        FUN_004311e0(0x15,0);
      }
      return;
    }
    if (*(char *)(local_18 + 0x141) != '\0') {
      *(int *)(in_ECX + 0x28948) = *(int *)(in_ECX + 0x28948) + 1;
      if (*(char *)(local_18 + 0x143) == '\x02') {
        if (0x3b < *(int *)(local_18 + 0x13c)) {
          if (*(int *)(local_18 + 0x13c) == 0x3c) {
            *(undefined4 *)(local_18 + 0x11c) = 0;
            *(undefined4 *)(local_18 + 0x120) = 0;
            *(undefined4 *)(local_18 + 0x124) = 0;
          }
          goto LAB_0041f7c5;
        }
        fVar2 = ((float)*(int *)(local_18 + 0x13c) + *(float *)(local_18 + 0x138)) / 60.0;
        fVar3 = 1.0 - fVar2;
        *(float *)(local_18 + 0x110) =
             fVar2 * *(float *)(local_18 + 0x128) + fVar3 * *(float *)(local_18 + 0x11c);
        *(float *)(local_18 + 0x114) =
             fVar2 * *(float *)(local_18 + 300) + fVar3 * *(float *)(local_18 + 0x120);
        *(float *)(local_18 + 0x118) =
             fVar2 * *(float *)(local_18 + 0x130) + fVar3 * *(float *)(local_18 + 0x124);
      }
      else {
        if ((*(char *)(local_18 + 0x143) == '\x01') ||
           ((0x7f < _DAT_0069d4b0 && (DAT_006caa6c < 128.0 != NAN(DAT_006caa6c))))) {
          fVar7 = (float10)FUN_00428700(local_18 + 0x110);
          fVar1 = (float10)fcos((float10)(float)fVar7);
          fVar7 = (float10)fsin((float10)(float)fVar7);
          *(float *)(local_18 + 0x11c) = (float)(fVar1 * (float10)8.0);
          *(float *)(local_18 + 0x120) = (float)(fVar7 * (float10)8.0);
          *(undefined *)(local_18 + 0x143) = 1;
        }
        else {
          *(undefined4 *)(local_18 + 0x11c) = 0;
          *(undefined4 *)(local_18 + 0x124) = 0;
          if (*(float *)(local_18 + 0x120) < -2.2 != NAN(*(float *)(local_18 + 0x120))) {
            *(undefined4 *)(local_18 + 0x120) = 0xc00ccccd;
          }
        }
LAB_0041f7c5:
        fVar2 = DAT_006c6ec0 * *(float *)(local_18 + 0x124);
        fVar3 = DAT_006c6ec0 * *(float *)(local_18 + 0x120);
        *(float *)(local_18 + 0x110) =
             DAT_006c6ec0 * *(float *)(local_18 + 0x11c) + *(float *)(local_18 + 0x110);
        *(float *)(local_18 + 0x114) = fVar3 + *(float *)(local_18 + 0x114);
        *(float *)(local_18 + 0x118) = fVar2 + *(float *)(local_18 + 0x118);
        if (_DAT_0069d6e8 + 16.0 < *(float *)(local_18 + 0x114) !=
            (_DAT_0069d6e8 + 16.0 == *(float *)(local_18 + 0x114))) {
          *(undefined *)(local_18 + 0x141) = 0;
          FUN_0041c5fa(3);
          goto LAB_0041f512;
        }
        if (*(float *)(local_18 + 0x120) < 3.0 == NAN(*(float *)(local_18 + 0x120))) {
          *(undefined4 *)(local_18 + 0x120) = 0x40400000;
        }
        else {
          *(float *)(local_18 + 0x120) = DAT_006c6ec0 * 0.03 + *(float *)(local_18 + 0x120);
        }
      }
      iVar5 = FUN_00426fd0(local_18 + 0x110,&DAT_0069e234);
      if (iVar5 == 0) {
        *(undefined4 *)(local_18 + 0x134) = *(undefined4 *)(local_18 + 0x13c);
        FUN_00424285(local_18 + 0x13c,local_18 + 0x138);
        FUN_00433960(local_18);
      }
      else {
        switch(*(undefined *)(local_18 + 0x140)) {
        case 0:
          if (_DAT_0069d4b0 < 0x80) {
            for (local_20 = 0; iVar5 = local_20,
                *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)_DAT_0069d4b0;
                local_20 = local_20 + 1) {
            }
            DAT_0069d4b9 = 0;
            _DAT_0069d4b0 = _DAT_0069d4b0 + 1;
            if (0x7f < _DAT_0069d4b0) {
              _DAT_0069d4b0 = 0x80;
              FUN_00414340();
              FUN_004173d9(0);
            }
            DAT_0069bca4 = DAT_0069bca4 + 10;
            DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
            for (; *(int *)(&DAT_004766dc + local_20 * 4) <= (int)(uint)_DAT_0069d4b0;
                local_20 = local_20 + 1) {
            }
            if (local_20 == iVar5) {
              FUN_00401940(local_18 + 0x110,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 0x110,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f,0);
            }
          }
          else {
            DAT_0069d4b9 = DAT_0069d4b9 + 1;
            if (0x1e < DAT_0069d4b9) {
              DAT_0069d4b9 = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)DAT_0069d4b9 * 4);
            DAT_0069bca4 = DAT_0069bca4 + local_c;
            FUN_00401940(local_18 + 0x110,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          FUN_0041c57e(1);
          break;
        case 1:
          switch(_DAT_0069bcb0) {
          case 0:
          case 1:
            lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
            if (lVar6 < 0x80) {
              local_e0 = 100000;
            }
            else {
              lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
              local_e0 = (lVar6 + -0x80) * -100 + 60000;
            }
            local_c = local_e0;
            FUN_00401940(local_18 + 0x110,local_e0,((local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case 2:
            lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
            if (lVar6 < 0x80) {
              local_e4 = 150000;
            }
            else {
              lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
              local_e4 = (lVar6 + -0x80) * -0xb4 + 100000;
            }
            local_c = local_e4;
            FUN_00401940(local_18 + 0x110,local_e4,((local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case 3:
            lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
            if (lVar6 < 0x80) {
              local_e8 = 200000;
            }
            else {
              lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
              local_e8 = (lVar6 + -0x80) * -0x10e + 150000;
            }
            local_c = local_e8;
            FUN_00401940(local_18 + 0x110,local_e8,((local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case 4:
            lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
            if (lVar6 < 0x80) {
              local_ec = 300000;
            }
            else {
              lVar6 = __ftol2((double)*(float *)(local_18 + 0x114));
              local_ec = (lVar6 + -0x80) * -400 + 200000;
            }
            local_c = local_ec;
            FUN_00401940(local_18 + 0x110,local_ec,((local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          DAT_0069bca4 = DAT_0069bca4 + local_c;
          DAT_0069d4b4 = DAT_0069d4b4 + 1;
          DAT_0069d4b6 = DAT_0069d4b6 + 1;
          DAT_0069bc30 = DAT_0069bc30 & 0xfffffcff | 0x200;
          if (*(float *)(local_18 + 0x114) < 128.0 == NAN(*(float *)(local_18 + 0x114))) {
            FUN_0041c57e(3);
          }
          else {
            FUN_0041c57e(0x1e);
          }
          break;
        case 2:
          if (_DAT_0069d4b0 < 0x80) {
            for (local_28 = 0; iVar5 = local_28,
                *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)_DAT_0069d4b0;
                local_28 = local_28 + 1) {
            }
            _DAT_0069d4b0 = _DAT_0069d4b0 + 8;
            if (0x7f < _DAT_0069d4b0) {
              _DAT_0069d4b0 = 0x80;
              FUN_00414340();
              FUN_004173d9(0);
            }
            DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
            DAT_0069bca4 = DAT_0069bca4 + 10;
            for (; *(int *)(&DAT_004766dc + local_28 * 4) <= (int)(uint)_DAT_0069d4b0;
                local_28 = local_28 + 1) {
            }
            if (local_28 == iVar5) {
              FUN_00401940(local_18 + 0x110,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 0x110,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f,0);
            }
          }
          else {
            DAT_0069d4b9 = DAT_0069d4b9 + 8;
            if (0x1e < DAT_0069d4b9) {
              DAT_0069d4b9 = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)DAT_0069d4b9 * 4);
            DAT_0069bca4 = DAT_0069bca4 + local_c;
            FUN_00401940(local_18 + 0x110,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          break;
        case 3:
          if (DAT_0069d4bb < '\b') {
            DAT_0069d4bb = DAT_0069d4bb + '\x01';
            DAT_0069bc30 = DAT_0069bc30 & 0xfffffff3 | 8;
          }
          FUN_0041c57e(5);
          break;
        case 4:
          if (_DAT_0069d4b0 < 0x80) {
            FUN_00414340();
            FUN_004173d9(0);
            FUN_004311e0(0x1f,0);
            FUN_00401940(local_18 + 0x110,0xffffffff,0xff80c0ff);
          }
          _DAT_0069d4b0 = 0x80;
          DAT_0069bca4 = DAT_0069bca4 + 1000;
          FUN_00401940(local_18 + 0x110,1000,0xffffffff);
          DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
          break;
        case 5:
          if (DAT_0069d4ba < '\b') {
            DAT_0069d4ba = DAT_0069d4ba + '\x01';
            DAT_0069bc30 = DAT_0069bc30 & 0xfffffffc | 2;
          }
          FUN_0041c57e(200);
          FUN_004311e0(0x1c,0);
          break;
        case 6:
          local_c = (DAT_0069bcb4 / 3) * 10 + 500;
          if (_DAT_006d1bf0 != 0) {
            local_c = 100;
          }
          DAT_0069bca4 = DAT_0069bca4 + local_c;
          FUN_00401a60(local_18 + 0x110,local_c,0xffffffff);
        }
        *(undefined *)(local_18 + 0x141) = 0;
        bVar4 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    local_18 = local_18 + 0x144;
  } while( true );
}


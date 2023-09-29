
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f4a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  AnmVm *in_ECX;
  float10 fVar11;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_28;
  int local_20;
  AnmVm *local_18;
  int local_c;
  int local_8;
  
  if ((DAT_0069e240 & 1) == 0) {
    DAT_0069e240 = DAT_0069e240 | 1;
    _DAT_0069e234 = 0x41800000;
    _DAT_0069e238 = 0x41800000;
    _DAT_0069e23c = 0x41800000;
  }
  bVar8 = false;
  in_ECX[0x263].scaleX = 0.0;
  local_8 = 0;
  local_18 = in_ECX;
  do {
    if (0x1ff < local_8) {
      if (bVar8) {
        FUN_004311e0(0x15);
      }
      return;
    }
    if (*(char *)((int)&local_18[1].currentTimeInScript.previous + 1) != '\0') {
      in_ECX[0x263].scaleX = (float)((int)in_ECX[0x263].scaleX + 1);
      if (*(char *)((int)&local_18[1].currentTimeInScript.previous + 3) == '\x02') {
        if (0x3b < (int)local_18[1].uvScrollPos.y) {
          if (local_18[1].uvScrollPos.y == 8.407791e-44) {
            local_18[1].angleVel.x = 0.0;
            local_18[1].angleVel.y = 0.0;
            local_18[1].angleVel.z = 0.0;
          }
          goto LAB_0041f7c5;
        }
        fVar6 = ((float)(int)local_18[1].uvScrollPos.y + local_18[1].uvScrollPos.x) / 60.0;
        fVar7 = 1.0 - fVar6;
        fVar1 = local_18[1].angleVel.z;
        fVar2 = local_18[1].angleVel.y;
        fVar3 = local_18[1].scaleInterpFinalY;
        fVar4 = local_18[1].scaleY;
        local_18[1].rotation.x = fVar6 * local_18[1].scaleX + fVar7 * local_18[1].angleVel.x;
        local_18[1].rotation.y = fVar6 * fVar4 + fVar7 * fVar2;
        local_18[1].rotation.z = fVar6 * fVar3 + fVar7 * fVar1;
      }
      else {
        if ((*(char *)((int)&local_18[1].currentTimeInScript.previous + 3) == '\x01') ||
           ((0x7f < _DAT_0069d4b0 && (DAT_006caa6c < 128.0 != NAN(DAT_006caa6c))))) {
          fVar11 = (float10)FUN_00428700(local_18 + 1);
          fVar5 = (float10)fcos((float10)(float)fVar11);
          fVar11 = (float10)fsin((float10)(float)fVar11);
          local_18[1].angleVel.x = (float)(fVar5 * (float10)8.0);
          local_18[1].angleVel.y = (float)(fVar11 * (float10)8.0);
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 3) = 1;
        }
        else {
          local_18[1].angleVel.x = 0.0;
          local_18[1].angleVel.z = 0.0;
          fVar1 = local_18[1].angleVel.y;
          if (fVar1 < -2.2 != NAN(fVar1)) {
            local_18[1].angleVel.y = -2.2;
          }
        }
LAB_0041f7c5:
        fVar1 = g_GameContext.field84_0x1a8 * local_18[1].angleVel.z;
        fVar2 = g_GameContext.field84_0x1a8 * local_18[1].angleVel.y;
        local_18[1].rotation.x =
             g_GameContext.field84_0x1a8 * local_18[1].angleVel.x + local_18[1].rotation.x;
        local_18[1].rotation.y = fVar2 + local_18[1].rotation.y;
        local_18[1].rotation.z = fVar1 + local_18[1].rotation.z;
        fVar1 = local_18[1].rotation.y;
        if (VIEWPORT_HEIGHT + 16.0 < fVar1 != (VIEWPORT_HEIGHT + 16.0 == fVar1)) {
          *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
          FUN_0041c5fa(3);
          goto LAB_0041f512;
        }
        fVar1 = local_18[1].angleVel.y;
        if (fVar1 < 3.0 == NAN(fVar1)) {
          local_18[1].angleVel.y = 3.0;
        }
        else {
          local_18[1].angleVel.y = g_GameContext.field84_0x1a8 * 0.03 + local_18[1].angleVel.y;
        }
      }
      iVar9 = FUN_00426fd0(local_18 + 1,&DAT_0069e234);
      if (iVar9 == 0) {
        local_18[1].scaleInterpFinalX = local_18[1].uvScrollPos.y;
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)&local_18[1].uvScrollPos.y,&local_18[1].uvScrollPos.x);
        AnmManager::FUN_00433960(g_AnmManager,local_18);
      }
      else {
        switch(*(undefined *)&local_18[1].currentTimeInScript.previous) {
        case 0:
          if (_DAT_0069d4b0 < 0x80) {
            for (local_20 = 0; iVar9 = local_20,
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
            if (local_20 == iVar9) {
              FUN_00401940(local_18 + 1,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f);
            }
          }
          else {
            DAT_0069d4b9 = DAT_0069d4b9 + 1;
            if (0x1e < DAT_0069d4b9) {
              DAT_0069d4b9 = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)DAT_0069d4b9 * 4);
            DAT_0069bca4 = DAT_0069bca4 + local_c;
            FUN_00401940(local_18 + 1,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
          }
          FUN_0041c57e(1);
          break;
        case 1:
          switch(DAT_0069bcb0) {
          case 0:
          case 1:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e0 = 100000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e0 = (lVar10 + -0x80) * -100 + 60000;
            }
            local_c = local_e0;
            FUN_00401940(local_18 + 1,local_e0,((local_e0 < 100000) - 1 & 0xffffff01) - 1);
            break;
          case 2:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e4 = 150000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e4 = (lVar10 + -0x80) * -0xb4 + 100000;
            }
            local_c = local_e4;
            FUN_00401940(local_18 + 1,local_e4,((local_e4 < 150000) - 1 & 0xffffff01) - 1);
            break;
          case 3:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_e8 = 200000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_e8 = (lVar10 + -0x80) * -0x10e + 150000;
            }
            local_c = local_e8;
            FUN_00401940(local_18 + 1,local_e8,((local_e8 < 200000) - 1 & 0xffffff01) - 1);
            break;
          case 4:
            lVar10 = __ftol2((double)local_18[1].rotation.y);
            if (lVar10 < 0x80) {
              local_ec = 300000;
            }
            else {
              lVar10 = __ftol2((double)local_18[1].rotation.y);
              local_ec = (lVar10 + -0x80) * -400 + 200000;
            }
            local_c = local_ec;
            FUN_00401940(local_18 + 1,local_ec,((local_ec < 300000) - 1 & 0xffffff01) - 1);
          }
          DAT_0069bca4 = DAT_0069bca4 + local_c;
          DAT_0069d4b4 = DAT_0069d4b4 + 1;
          DAT_0069d4b6 = DAT_0069d4b6 + 1;
          DAT_0069bc30 = DAT_0069bc30 & 0xfffffcff | 0x200;
          fVar1 = local_18[1].rotation.y;
          if (fVar1 < 128.0 == NAN(fVar1)) {
            FUN_0041c57e(3);
          }
          else {
            FUN_0041c57e(0x1e);
          }
          break;
        case 2:
          if (_DAT_0069d4b0 < 0x80) {
            for (local_28 = 0; iVar9 = local_28,
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
            if (local_28 == iVar9) {
              FUN_00401940(local_18 + 1,10,0xffffffff);
            }
            else {
              FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
              FUN_004311e0(0x1f);
            }
          }
          else {
            DAT_0069d4b9 = DAT_0069d4b9 + 8;
            if (0x1e < DAT_0069d4b9) {
              DAT_0069d4b9 = 0x1e;
            }
            local_c = *(int *)(&DAT_00476660 + (char)DAT_0069d4b9 * 4);
            DAT_0069bca4 = DAT_0069bca4 + local_c;
            FUN_00401940(local_18 + 1,local_c,((local_c < 0x3200) - 1 & 0xffffff01) - 1);
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
            FUN_004311e0(0x1f);
            FUN_00401940(local_18 + 1,0xffffffff,0xff80c0ff);
          }
          _DAT_0069d4b0 = 0x80;
          DAT_0069bca4 = DAT_0069bca4 + 1000;
          FUN_00401940(local_18 + 1,1000,0xffffffff);
          DAT_0069bc30 = DAT_0069bc30 & 0xffffffcf | 0x20;
          break;
        case 5:
          if (DAT_0069d4ba < '\b') {
            DAT_0069d4ba = DAT_0069d4ba + '\x01';
            DAT_0069bc30 = DAT_0069bc30 & 0xfffffffc | 2;
          }
          FUN_0041c57e(200);
          FUN_004311e0(0x1c);
          break;
        case 6:
          local_c = (DAT_0069bcb4 / 3) * 10 + 500;
          if (_DAT_006d1bf0 != 0) {
            local_c = 100;
          }
          DAT_0069bca4 = DAT_0069bca4 + local_c;
          FUN_00401a60(local_18 + 1,local_c,0xffffffff);
        }
        *(undefined *)((int)&local_18[1].currentTimeInScript.previous + 1) = 0;
        bVar8 = true;
      }
    }
LAB_0041f512:
    local_8 = local_8 + 1;
    local_18 = (AnmVm *)&local_18[1].currentTimeInScript.subFrame;
  } while( true );
}


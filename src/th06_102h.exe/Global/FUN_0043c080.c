
undefined4 FUN_0043c080(undefined4 *param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  uint local_58;
  _MMIOINFO local_54;
  uint local_8;
  
  if (*(int *)(in_ECX + 0x80) == 0) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0x800401f0;
    }
    else if ((param_1 == (undefined4 *)0x0) || (param_3 == (uint *)0x0)) {
      uVar1 = 0x80070057;
    }
    else {
      if (param_3 != (uint *)0x0) {
        *param_3 = 0;
      }
      MVar2 = mmioGetInfo(*(HMMIO *)(in_ECX + 4),&local_54,0);
      if (MVar2 == 0) {
        local_8 = param_2;
        if (*(uint *)(in_ECX + 0xc) < param_2) {
          local_8 = *(uint *)(in_ECX + 0xc);
        }
        *(uint *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) - local_8;
        for (local_58 = 0; local_58 < local_8; local_58 = local_58 + 1) {
          if (local_54.pchNext == local_54.pchEndRead) {
            MVar2 = mmioAdvance(*(HMMIO *)(in_ECX + 4),&local_54,0);
            if (MVar2 != 0) {
              DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x433);
              return 0x80004005;
            }
            if (local_54.pchNext == local_54.pchEndRead) {
              DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x437);
              return 0x80004005;
            }
          }
          *(char *)((int)param_1 + local_58) = *local_54.pchNext;
          local_54.pchNext = local_54.pchNext + 1;
        }
        MVar2 = mmioSetInfo(*(HMMIO *)(in_ECX + 4),&local_54,0);
        if (MVar2 == 0) {
          if (param_3 != (uint *)0x0) {
            *param_3 = local_8;
          }
          uVar1 = 0;
        }
        else {
          DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x440);
          uVar1 = 0x80004005;
        }
      }
      else {
        DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x424);
        uVar1 = 0x80004005;
      }
    }
  }
  else if (*(int *)(in_ECX + 0x88) == 0) {
    uVar1 = 0x800401f0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if ((uint)(*(int *)(in_ECX + 0x84) + *(int *)(in_ECX + 0x8c)) <
        *(int *)(in_ECX + 0x88) + param_2) {
      param_2 = *(int *)(in_ECX + 0x8c) - (*(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x84));
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x88);
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)param_1 = *(undefined *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = param_2;
    }
    uVar1 = 0;
  }
  return uVar1;
}


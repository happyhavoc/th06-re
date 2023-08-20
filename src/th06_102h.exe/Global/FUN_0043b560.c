
int FUN_0043b560(int param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined local_8 [4];
  
  if ((*(int *)(in_ECX + 4) == 0) || (*(int *)(in_ECX + 0xc) == 0)) {
    local_20 = -0x7ffbfe10;
  }
  else {
    local_20 = FUN_0043b090(**(undefined4 **)(in_ECX + 4),&local_18);
    if (local_20 < 0) {
      DebugPrint2("error : RestoreBuffer in HandleWaveStreamNotification\n");
    }
    else if (local_18 == 0) {
      local_c = (undefined4 *)0x0;
      local_14 = 0;
      local_20 = (**(code **)(***(int ***)(in_ECX + 4) + 0x2c))
                           (**(undefined4 **)(in_ECX + 4),*(undefined4 *)(in_ECX + 0x2c),
                            *(undefined4 *)(in_ECX + 0x28),&local_c,&local_24,&local_14,local_8,0);
      if (local_20 < 0) {
        DebugPrint2("error : Buffer->Lock in HandleWaveStreamNotification\n");
      }
      else if (local_14 == 0) {
        if (*(int *)(in_ECX + 0x30) == 0) {
          local_20 = FUN_0043c080(local_c,local_24,&local_10);
          if (local_20 < 0) {
            DebugPrint2("error : m_pWaveFile->Read in HandleWaveStreamNotification\n");
            return local_20;
          }
        }
        else {
          cVar1 = (-(*(short *)(**(int **)(in_ECX + 0xc) + 0xe) != 8) & 0x80U) + 0x80;
          puVar3 = local_c;
          for (uVar2 = local_24 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = local_24 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)puVar3 = cVar1;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          local_10 = local_24;
        }
        if (local_10 < local_24) {
          if (param_1 == 0) {
            cVar1 = (-(*(short *)(**(int **)(in_ECX + 0xc) + 0xe) != 8) & 0x80U) + 0x80;
            puVar3 = (undefined4 *)((int)local_c + local_10);
            for (uVar2 = local_24 - local_10 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
              puVar3 = puVar3 + 1;
            }
            for (uVar2 = local_24 - local_10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(char *)puVar3 = cVar1;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
            *(undefined4 *)(in_ECX + 0x30) = 1;
          }
          else {
            for (local_2c = local_10; local_2c < local_24; local_2c = local_2c + local_10) {
              local_20 = FUN_0043be70(1);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->ResetFile in HandleWaveStreamNotification\n");
                return local_20;
              }
              local_20 = FUN_0043c080((char *)((int)local_c + local_2c),local_24 - local_2c,
                                      &local_10);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->Read(+) in HandleWaveStreamNotification\n");
                return local_20;
              }
            }
          }
        }
        (**(code **)(***(int ***)(in_ECX + 4) + 0x4c))
                  (**(undefined4 **)(in_ECX + 4),local_c,local_24,0,0);
        local_20 = (**(code **)(***(int ***)(in_ECX + 4) + 0x10))
                             (**(undefined4 **)(in_ECX + 4),&local_28,0);
        if (local_20 < 0) {
          DebugPrint2(
                     "error : m_apDSBuffer[0]->GetCurrentPosition in HandleWaveStreamNotification\n"
                     );
        }
        else {
          if (local_28 < *(uint *)(in_ECX + 0x20)) {
            local_1c = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 0x20);
          }
          else {
            local_1c = -*(int *)(in_ECX + 0x20);
          }
          local_1c = local_1c + local_28;
          *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + local_1c;
          *(uint *)(in_ECX + 0x20) = local_28;
          if ((*(int *)(in_ECX + 0x30) != 0) &&
             (uVar2 = FUN_0043be50(), uVar2 <= *(uint *)(in_ECX + 0x24))) {
            (**(code **)(***(int ***)(in_ECX + 4) + 0x48))(**(undefined4 **)(in_ECX + 4));
          }
          *(uint *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + local_24;
          *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) % *(uint *)(in_ECX + 8);
          local_20 = 0;
        }
      }
      else {
        local_20 = -0x7fff0001;
      }
    }
    else {
      local_20 = FUN_0043aea0(**(undefined4 **)(in_ECX + 4),0);
      if (local_20 < 0) {
        DebugPrint2("error : FillBufferWithSound in HandleWaveStreamNotification\n");
      }
      else {
        local_20 = 0;
      }
    }
  }
  return local_20;
}


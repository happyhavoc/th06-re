
int FUN_0043aea0(int *param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  uint local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_14 = (undefined4 *)0x0;
  local_8 = 0;
  local_c = 0;
  if (param_1 == (int *)0x0) {
    local_10 = -0x7ffbfe10;
  }
  else {
    local_10 = FUN_0043b090(param_1,0);
    if ((-1 < local_10) &&
       (local_10 = (**(code **)(*param_1 + 0x2c))
                             (param_1,0,*(undefined4 *)(in_ECX + 8),&local_14,&local_8,0,0,0),
       -1 < local_10)) {
      FUN_0043be70(0);
      local_10 = FUN_0043c080(local_14,local_8,&local_c);
      if (-1 < local_10) {
        if (local_c == 0) {
          cVar1 = (-(*(short *)(**(int **)(in_ECX + 0xc) + 0xe) != 8) & 0x80U) + 0x80;
          puVar3 = local_14;
          for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)puVar3 = cVar1;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
        }
        else if (local_c < local_8) {
          if (param_2 == 0) {
            cVar1 = (-(*(short *)(**(int **)(in_ECX + 0xc) + 0xe) != 8) & 0x80U) + 0x80;
            puVar3 = (undefined4 *)((int)local_14 + local_c);
            for (uVar2 = local_8 - local_c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
              puVar3 = puVar3 + 1;
            }
            for (uVar2 = local_8 - local_c & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(char *)puVar3 = cVar1;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
          }
          else {
            for (local_18 = local_c; local_18 < local_8; local_18 = local_18 + local_c) {
              local_10 = FUN_0043be70(0);
              if (local_10 < 0) {
                return local_10;
              }
              local_10 = FUN_0043c080((char *)((int)local_14 + local_18),local_8 - local_18,&local_c
                                     );
              if (local_10 < 0) {
                return local_10;
              }
            }
          }
        }
        (**(code **)(*param_1 + 0x4c))(param_1,local_14,local_8,0,0);
        local_10 = 0;
      }
    }
  }
  return local_10;
}


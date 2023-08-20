
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_0043cb40(uint param_1)

{
  undefined uVar1;
  undefined *_Memory;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint unaff_retaddr;
  uint local_2038;
  int local_2034;
  uint local_2030;
  uint local_202c;
  uint local_2028;
  byte *local_2024;
  size_t local_2020;
  undefined *local_201c;
  undefined *local_2018;
  int *local_2014;
  undefined4 local_2010 [2049];
  uint local_c;
  
  local_c = __security_cookie ^ unaff_retaddr;
  if ((param_1 < (uint)in_ECX[2]) && (*in_ECX != 0)) {
    local_2020 = *(size_t *)(in_ECX[4] + 8 + param_1 * 0x114);
    local_2014 = in_ECX;
    _Memory = (undefined *)_malloc(local_2020);
    local_2018 = _Memory;
    if (_Memory != (undefined *)0x0) {
      local_201c = _Memory;
      local_2024 = (byte *)FUN_0043c9c0(&local_2020,&local_2028,param_1);
      if (local_2024 != (byte *)0x0) {
        bVar5 = 0x80;
        local_2038 = 0x80;
        local_2034 = 0;
        local_2028 = 1;
        puVar8 = local_2010;
        for (iVar3 = 0x800; pbVar7 = local_2024, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        do {
          uVar4 = (uint)*pbVar7;
          if ((int)pbVar7 - (int)local_2024 < (int)local_2020) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            uVar4 = 0;
          }
          local_2034 = local_2034 + uVar4;
          do {
            uVar2 = local_2038 & uVar4;
            bVar5 = bVar5 >> 1;
            if (bVar5 == 0) {
              local_2038._0_1_ = 0x80;
              bVar5 = (byte)local_2038;
            }
            local_2038 = (uint)bVar5;
            uVar9 = 0;
            if (uVar2 == 0) {
              iVar3 = (int)pbVar7 - (int)local_2024;
              uVar2 = 0x1000;
              do {
                bVar6 = bVar5;
                if (bVar5 == 0x80) {
                  uVar4 = (uint)*pbVar7;
                  if (iVar3 < (int)local_2020) {
                    pbVar7 = pbVar7 + 1;
                    iVar3 = iVar3 + 1;
                  }
                  else {
                    uVar4 = 0;
                  }
                  local_2034 = local_2034 + uVar4;
                  bVar6 = (byte)local_2038;
                }
                if (((byte)uVar4 & bVar6) != 0) {
                  uVar9 = uVar9 | uVar2;
                }
                uVar2 = uVar2 >> 1;
                bVar5 = bVar6 >> 1;
                if (bVar6 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar5 = (byte)local_2038;
                }
                local_2038 = (uint)bVar5;
              } while (uVar2 != 0);
              if (uVar9 == 0) goto joined_r0x0043cdcd;
              uVar2 = 8;
              iVar3 = (int)pbVar7 - (int)local_2024;
              local_2030 = 0;
              do {
                if (bVar5 == 0x80) {
                  uVar4 = (uint)*pbVar7;
                  if (iVar3 < (int)local_2020) {
                    pbVar7 = pbVar7 + 1;
                    iVar3 = iVar3 + 1;
                  }
                  else {
                    uVar4 = 0;
                  }
                  local_2034 = local_2034 + uVar4;
                }
                if (((byte)uVar4 & bVar5) != 0) {
                  local_2030 = local_2030 | uVar2;
                }
                uVar2 = uVar2 >> 1;
                bVar5 = bVar5 >> 1;
                if (bVar5 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar5 = (byte)local_2038;
                }
                local_2038 = (uint)bVar5;
              } while (uVar2 != 0);
              iVar3 = 0;
              do {
                uVar1 = *(undefined *)((int)local_2010 + (uVar9 + iVar3 & 0x1fff));
                *local_201c = uVar1;
                local_201c = local_201c + 1;
                *(undefined *)((int)local_2010 + local_2028) = uVar1;
                local_2028 = local_2028 + 1 & 0x1fff;
                iVar3 = iVar3 + 1;
              } while (iVar3 <= (int)(local_2030 + 2));
            }
            else {
              local_202c = 0x80;
              local_2030 = 0;
              iVar3 = (int)pbVar7 - (int)local_2024;
              do {
                if (bVar5 == 0x80) {
                  uVar4 = (uint)*pbVar7;
                  if (iVar3 < (int)local_2020) {
                    pbVar7 = pbVar7 + 1;
                    iVar3 = iVar3 + 1;
                  }
                  else {
                    uVar4 = 0;
                  }
                  local_2034 = local_2034 + uVar4;
                }
                bVar6 = bVar5;
                if (((byte)uVar4 & bVar5) != 0) {
                  local_2030 = local_2030 | local_202c;
                  bVar6 = (byte)local_2038;
                }
                local_202c = local_202c >> 1;
                bVar5 = bVar6 >> 1;
                if (bVar6 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar5 = (byte)local_2038;
                }
                local_2038 = (uint)bVar5;
              } while (local_202c != 0);
              *local_201c = (undefined)local_2030;
              local_201c = local_201c + 1;
              *(undefined *)((int)local_2010 + local_2028) = (undefined)local_2030;
              local_2028 = local_2028 + 1 & 0x1fff;
            }
          } while (bVar5 != 0x80);
        } while( true );
      }
      _free(_Memory);
    }
  }
  goto LAB_0043ce19;
  while (bVar5 = bVar5 >> 1, bVar5 != 0) {
joined_r0x0043cdcd:
    if (bVar5 == 0x80) break;
  }
  _free(local_2024);
  if (*(int *)(local_2014[4] + 0x10 + param_1 * 0x114) != local_2034) {
    _free(local_2018);
  }
LAB_0043ce19:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


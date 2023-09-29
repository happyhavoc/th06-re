
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * __thiscall Pbg3Archive::ReadAndValidateEntry(Pbg3Archive *this,uint entryIdx,char *filename)

{
  undefined uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint unaff_retaddr;
  uint local_2038;
  uint checksum;
  uint local_2030;
  uint local_202c;
  uint expected_csum;
  byte *data;
  size_t size;
  undefined *local_201c;
  undefined *local_2018;
  Pbg3Archive *local_2014;
  undefined4 local_2010 [2049];
  uint local_c;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_2014 = this;
  if ((entryIdx < (uint)this->numOfEntries) && (this->inner != (Pbg3Parser *)0x0)) {
    size = this->entries[entryIdx].uncompressedSize;
    puVar2 = (undefined *)_malloc(size);
    local_2018 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      local_201c = puVar2;
      data = ReadEntry(this,(int *)&size,(int *)&expected_csum,entryIdx);
      if (data != (byte *)0x0) {
        bVar6 = 0x80;
        local_2038 = 0x80;
        checksum = 0;
        expected_csum = 1;
        puVar9 = local_2010;
        for (iVar4 = 0x800; pbVar8 = data, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        do {
          uVar5 = (uint)*pbVar8;
          if ((int)pbVar8 - (int)data < (int)size) {
            pbVar8 = pbVar8 + 1;
          }
          else {
            uVar5 = 0;
          }
          checksum = checksum + uVar5;
          do {
            uVar3 = local_2038 & uVar5;
            bVar6 = bVar6 >> 1;
            if (bVar6 == 0) {
              local_2038._0_1_ = 0x80;
              bVar6 = (byte)local_2038;
            }
            local_2038 = (uint)bVar6;
            uVar10 = 0;
            if (uVar3 == 0) {
              iVar4 = (int)pbVar8 - (int)data;
              uVar3 = 0x1000;
              do {
                bVar7 = bVar6;
                if (bVar6 == 0x80) {
                  uVar5 = (uint)*pbVar8;
                  if (iVar4 < (int)size) {
                    pbVar8 = pbVar8 + 1;
                    iVar4 = iVar4 + 1;
                  }
                  else {
                    uVar5 = 0;
                  }
                  checksum = checksum + uVar5;
                  bVar7 = (byte)local_2038;
                }
                if (((byte)uVar5 & bVar7) != 0) {
                  uVar10 = uVar10 | uVar3;
                }
                uVar3 = uVar3 >> 1;
                bVar6 = bVar7 >> 1;
                if (bVar7 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar6 = (byte)local_2038;
                }
                local_2038 = (uint)bVar6;
              } while (uVar3 != 0);
              if (uVar10 == 0) goto joined_r0x0043cdcd;
              uVar3 = 8;
              iVar4 = (int)pbVar8 - (int)data;
              local_2030 = 0;
              do {
                if (bVar6 == 0x80) {
                  uVar5 = (uint)*pbVar8;
                  if (iVar4 < (int)size) {
                    pbVar8 = pbVar8 + 1;
                    iVar4 = iVar4 + 1;
                  }
                  else {
                    uVar5 = 0;
                  }
                  checksum = checksum + uVar5;
                }
                if (((byte)uVar5 & bVar6) != 0) {
                  local_2030 = local_2030 | uVar3;
                }
                uVar3 = uVar3 >> 1;
                bVar6 = bVar6 >> 1;
                if (bVar6 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar6 = (byte)local_2038;
                }
                local_2038 = (uint)bVar6;
              } while (uVar3 != 0);
              iVar4 = 0;
              do {
                uVar1 = *(undefined *)((int)local_2010 + (uVar10 + iVar4 & 0x1fff));
                *local_201c = uVar1;
                local_201c = local_201c + 1;
                *(undefined *)((int)local_2010 + expected_csum) = uVar1;
                expected_csum = expected_csum + 1 & 0x1fff;
                iVar4 = iVar4 + 1;
              } while (iVar4 <= (int)(local_2030 + 2));
            }
            else {
              local_202c = 0x80;
              local_2030 = 0;
              iVar4 = (int)pbVar8 - (int)data;
              do {
                if (bVar6 == 0x80) {
                  uVar5 = (uint)*pbVar8;
                  if (iVar4 < (int)size) {
                    pbVar8 = pbVar8 + 1;
                    iVar4 = iVar4 + 1;
                  }
                  else {
                    uVar5 = 0;
                  }
                  checksum = checksum + uVar5;
                }
                bVar7 = bVar6;
                if (((byte)uVar5 & bVar6) != 0) {
                  local_2030 = local_2030 | local_202c;
                  bVar7 = (byte)local_2038;
                }
                local_202c = local_202c >> 1;
                bVar6 = bVar7 >> 1;
                if (bVar7 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  bVar6 = (byte)local_2038;
                }
                local_2038 = (uint)bVar6;
              } while (local_202c != 0);
              *local_201c = (undefined)local_2030;
              local_201c = local_201c + 1;
              *(undefined *)((int)local_2010 + expected_csum) = (undefined)local_2030;
              expected_csum = expected_csum + 1 & 0x1fff;
            }
          } while (bVar6 != 0x80);
        } while( true );
      }
      _free(puVar2);
      puVar2 = (undefined *)0x0;
      goto LAB_0043ce19;
    }
  }
  goto LAB_0043ce11;
  while (bVar6 = bVar6 >> 1, bVar6 != 0) {
joined_r0x0043cdcd:
    if (bVar6 == 0x80) break;
  }
  _free(data);
  puVar2 = local_2018;
  if (local_2014->entries[entryIdx].checksum == checksum) goto LAB_0043ce19;
  _free(local_2018);
LAB_0043ce11:
  puVar2 = (undefined *)0x0;
LAB_0043ce19:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return puVar2;
}


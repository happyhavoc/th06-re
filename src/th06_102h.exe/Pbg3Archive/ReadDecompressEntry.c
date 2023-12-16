
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * __thiscall Pbg3Archive::ReadDecompressEntry(Pbg3Archive *this,uint entryIdx,char *filename)

{
  DWORD_PTR cookie;
  byte *outData2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte curByteBitIdx2;
  byte bVar4;
  byte *curByteInData;
  undefined4 *puVar5;
  uint uVar6;
  uint local_2038;
  uint checksum;
  uint value;
  uint curByteBitIdx;
  uint expected_csum;
  byte *data;
  size_t size;
  byte *curByteInOutData;
  byte *outData;
  Pbg3Archive *self;
  byte dict [8192];
  
  cookie = __security_cookie;
  self = this;
  if ((entryIdx < (uint)this->numOfEntries) && (this->parser != (Pbg3Parser *)0x0)) {
    size = this->entries[entryIdx].uncompressedSize;
    outData2 = (byte *)_malloc(size);
    outData = outData2;
    if (outData2 != (byte *)0x0) {
      curByteInOutData = outData2;
      data = ReadEntryRaw(this,(int *)&size,(int *)&expected_csum,entryIdx);
                    /* LZSS decompression. This is kinda hell. See
                       https://github.com/thpatch/thtk/blob/663477e14a932e857c2fd852a8312f5749589e6f/thtk/thlzss.c#L242
                       for a reasonable implementation */
      if (data != (byte *)0x0) {
        curByteBitIdx2 = 0x80;
        local_2038 = 0x80;
        checksum = 0;
        expected_csum = 1;
        puVar5 = (undefined4 *)dict;
        for (iVar2 = 0x800; curByteInData = data, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        do {
          uVar3 = (uint)*curByteInData;
          if ((int)curByteInData - (int)data < (int)size) {
            curByteInData = curByteInData + 1;
          }
          else {
            uVar3 = 0;
          }
          checksum = checksum + uVar3;
          do {
            uVar1 = local_2038 & uVar3;
            curByteBitIdx2 = curByteBitIdx2 >> 1;
            if (curByteBitIdx2 == 0) {
              local_2038._0_1_ = 0x80;
              curByteBitIdx2 = (byte)local_2038;
            }
            local_2038 = (uint)curByteBitIdx2;
            uVar6 = 0;
            if (uVar1 == 0) {
              iVar2 = (int)curByteInData - (int)data;
              uVar1 = 0x1000;
              do {
                bVar4 = curByteBitIdx2;
                if (curByteBitIdx2 == 0x80) {
                  uVar3 = (uint)*curByteInData;
                  if (iVar2 < (int)size) {
                    curByteInData = curByteInData + 1;
                    iVar2 = iVar2 + 1;
                  }
                  else {
                    uVar3 = 0;
                  }
                  checksum = checksum + uVar3;
                  bVar4 = (byte)local_2038;
                }
                if (((byte)uVar3 & bVar4) != 0) {
                  uVar6 = uVar6 | uVar1;
                }
                uVar1 = uVar1 >> 1;
                curByteBitIdx2 = bVar4 >> 1;
                if (bVar4 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  curByteBitIdx2 = (byte)local_2038;
                }
                local_2038 = (uint)curByteBitIdx2;
              } while (uVar1 != 0);
              if (uVar6 == 0) goto joined_r0x0043cdcd;
              uVar1 = 8;
              iVar2 = (int)curByteInData - (int)data;
              value = 0;
              do {
                if (curByteBitIdx2 == 0x80) {
                  uVar3 = (uint)*curByteInData;
                  if (iVar2 < (int)size) {
                    curByteInData = curByteInData + 1;
                    iVar2 = iVar2 + 1;
                  }
                  else {
                    uVar3 = 0;
                  }
                  checksum = checksum + uVar3;
                }
                if (((byte)uVar3 & curByteBitIdx2) != 0) {
                  value = value | uVar1;
                }
                uVar1 = uVar1 >> 1;
                curByteBitIdx2 = curByteBitIdx2 >> 1;
                if (curByteBitIdx2 == 0) {
                  local_2038._0_1_ = 0x80;
                  curByteBitIdx2 = (byte)local_2038;
                }
                local_2038 = (uint)curByteBitIdx2;
              } while (uVar1 != 0);
              iVar2 = 0;
              do {
                bVar4 = dict[uVar6 + iVar2 & 0x1fff];
                *curByteInOutData = bVar4;
                curByteInOutData = curByteInOutData + 1;
                dict[expected_csum] = bVar4;
                expected_csum = expected_csum + 1 & 0x1fff;
                iVar2 = iVar2 + 1;
              } while (iVar2 <= (int)(value + 2));
            }
            else {
              curByteBitIdx = 0x80;
              value = 0;
              iVar2 = (int)curByteInData - (int)data;
              do {
                if (curByteBitIdx2 == 0x80) {
                  uVar3 = (uint)*curByteInData;
                  if (iVar2 < (int)size) {
                    curByteInData = curByteInData + 1;
                    iVar2 = iVar2 + 1;
                  }
                  else {
                    uVar3 = 0;
                  }
                  checksum = checksum + uVar3;
                }
                bVar4 = curByteBitIdx2;
                if (((byte)uVar3 & curByteBitIdx2) != 0) {
                  value = value | curByteBitIdx;
                  bVar4 = (byte)local_2038;
                }
                curByteBitIdx = curByteBitIdx >> 1;
                curByteBitIdx2 = bVar4 >> 1;
                if (bVar4 >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  curByteBitIdx2 = (byte)local_2038;
                }
                local_2038 = (uint)curByteBitIdx2;
              } while (curByteBitIdx != 0);
              *curByteInOutData = (byte)value;
              curByteInOutData = curByteInOutData + 1;
              dict[expected_csum] = (byte)value;
              expected_csum = expected_csum + 1 & 0x1fff;
            }
          } while (curByteBitIdx2 != 0x80);
        } while( true );
      }
      _free(outData2);
      outData2 = (byte *)0x0;
      goto LAB_0043ce19;
    }
  }
  goto LAB_0043ce11;
  while (curByteBitIdx2 = curByteBitIdx2 >> 1, curByteBitIdx2 != 0) {
joined_r0x0043cdcd:
    if (curByteBitIdx2 == 0x80) break;
  }
  _free(data);
  outData2 = outData;
  if (self->entries[entryIdx].checksum == checksum) goto LAB_0043ce19;
  _free(outData);
LAB_0043ce11:
  outData2 = (byte *)0x0;
LAB_0043ce19:
  __security_check_cookie(cookie);
  return outData2;
}


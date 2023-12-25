
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * __thiscall Pbg3Archive::ReadDecompressEntry(Pbg3Archive *this,uint entryIdx,char *filename)

{
  DWORD_PTR cookie;
  byte *outData2;
  uint uVar1;
  uint curByte;
  byte curByteBitIdx2;
  int idx;
  byte *dataCursor;
  undefined4 *puVar2;
  uint matchOffset;
  uint local_2038;
  uint checksum;
  uint value;
  uint curByteBitIdx;
  uint dict_head;
  byte *data;
  size_t size;
  byte *curByteInOutData;
  byte *outData;
  Pbg3Archive *self;
  byte dict [8192];
  byte c;
  
  cookie = __security_cookie;
  self = this;
  if ((entryIdx < (uint)this->numOfEntries) && (this->parser != (Pbg3Parser *)0x0)) {
    size = this->entries[entryIdx].uncompressedSize;
    outData2 = (byte *)_malloc(size);
    outData = outData2;
    if (outData2 != (byte *)0x0) {
      curByteInOutData = outData2;
      data = ReadEntryRaw(this,(int *)&size,(int *)&dict_head,entryIdx);
                    /* LZSS decompression. This is kinda hell. See
                       https://github.com/thpatch/thtk/blob/663477e14a932e857c2fd852a8312f5749589e6f/thtk/thlzss.c#L242
                       for a reasonable implementation */
      if (data != (byte *)0x0) {
        curByteBitIdx2 = 0x80;
        local_2038 = 0x80;
        checksum = 0;
        dict_head = 1;
        puVar2 = (undefined4 *)dict;
                    /* memset(dict, 0, sizeof(dict)) */
        for (idx = 0x800; dataCursor = data, idx != 0; idx = idx + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        do {
          curByte = (uint)*dataCursor;
          if ((int)dataCursor - (int)data < (int)size) {
            dataCursor = dataCursor + 1;
          }
          else {
            curByte = 0;
          }
          checksum = checksum + curByte;
          do {
            uVar1 = local_2038 & curByte;
            curByteBitIdx2 = curByteBitIdx2 >> 1;
            if (curByteBitIdx2 == 0) {
              local_2038._0_1_ = 0x80;
              curByteBitIdx2 = (byte)local_2038;
            }
            local_2038 = (uint)curByteBitIdx2;
            matchOffset = 0;
            if (uVar1 == 0) {
              idx = (int)dataCursor - (int)data;
                    /* Reads 13 bits for the offset */
              uVar1 = 0x1000;
              do {
                c = curByteBitIdx2;
                if (curByteBitIdx2 == 0x80) {
                  curByte = (uint)*dataCursor;
                  if (idx < (int)size) {
                    dataCursor = dataCursor + 1;
                    idx = idx + 1;
                  }
                  else {
                    curByte = 0;
                  }
                  checksum = checksum + curByte;
                  c = (byte)local_2038;
                }
                if (((byte)curByte & c) != 0) {
                  matchOffset = matchOffset | uVar1;
                }
                uVar1 = uVar1 >> 1;
                curByteBitIdx2 = c >> 1;
                if (c >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  curByteBitIdx2 = (byte)local_2038;
                }
                local_2038 = (uint)curByteBitIdx2;
              } while (uVar1 != 0);
              if (matchOffset == 0) goto joined_r0x0043cdcd;
              uVar1 = 8;
              idx = (int)dataCursor - (int)data;
              value = 0;
              do {
                if (curByteBitIdx2 == 0x80) {
                  curByte = (uint)*dataCursor;
                  if (idx < (int)size) {
                    dataCursor = dataCursor + 1;
                    idx = idx + 1;
                  }
                  else {
                    curByte = 0;
                  }
                  checksum = checksum + curByte;
                }
                if (((byte)curByte & curByteBitIdx2) != 0) {
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
              idx = 0;
              do {
                c = dict[matchOffset + idx & 0x1fff];
                *curByteInOutData = c;
                curByteInOutData = curByteInOutData + 1;
                dict[dict_head] = c;
                dict_head = dict_head + 1 & 0x1fff;
                idx = idx + 1;
              } while (idx <= (int)(value + 2));
            }
            else {
              curByteBitIdx = 0x80;
              value = 0;
              idx = (int)dataCursor - (int)data;
              do {
                if (curByteBitIdx2 == 0x80) {
                  curByte = (uint)*dataCursor;
                  if (idx < (int)size) {
                    dataCursor = dataCursor + 1;
                    idx = idx + 1;
                  }
                  else {
                    curByte = 0;
                  }
                  checksum = checksum + curByte;
                }
                c = curByteBitIdx2;
                if (((byte)curByte & curByteBitIdx2) != 0) {
                  value = value | curByteBitIdx;
                  c = (byte)local_2038;
                }
                curByteBitIdx = curByteBitIdx >> 1;
                curByteBitIdx2 = c >> 1;
                if (c >> 1 == 0) {
                  local_2038._0_1_ = 0x80;
                  curByteBitIdx2 = (byte)local_2038;
                }
                local_2038 = (uint)curByteBitIdx2;
              } while (curByteBitIdx != 0);
              *curByteInOutData = (byte)value;
              curByteInOutData = curByteInOutData + 1;
              dict[dict_head] = (byte)value;
              dict_head = dict_head + 1 & 0x1fff;
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


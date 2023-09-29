
undefined4 __thiscall Pbg3Archive::GetEntrySize(Pbg3Archive *this,uint param_1)

{
  if ((uint)this->numOfEntries <= param_1) {
    return 0;
  }
  return this->entries[param_1].uncompressedSize;
}


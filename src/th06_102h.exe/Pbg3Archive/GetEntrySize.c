
uint __thiscall th06::Pbg3Archive::GetEntrySize(Pbg3Archive *this,uint entryIdx)

{
  if ((uint)this->numOfEntries <= entryIdx) {
    return 0;
  }
  return this->entries[entryIdx].uncompressedSize;
}


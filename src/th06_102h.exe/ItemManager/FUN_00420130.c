
void __thiscall ItemManager::FUN_00420130(void *this)

{
  void *local_c;
  int local_8;
  
  local_c = this;
  for (local_8 = 0; local_8 < 0x200; local_8 = local_8 + 1) {
    if (*(char *)((int)local_c + 0x141) != '\0') {
      *(undefined *)((int)local_c + 0x143) = 1;
    }
    local_c = (void *)((int)local_c + 0x144);
  }
  return;
}


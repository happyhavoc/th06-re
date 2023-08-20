
void FUN_00412240(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0xe52) & 1) != 0) {
    if (*(float *)(in_ECX + 0xc6c) < *(float *)(in_ECX + 0xe60) ==
        (NAN(*(float *)(in_ECX + 0xc6c)) || NAN(*(float *)(in_ECX + 0xe60)))) {
      if (*(float *)(in_ECX + 0xe68) < *(float *)(in_ECX + 0xc6c)) {
        *(undefined4 *)(in_ECX + 0xc6c) = *(undefined4 *)(in_ECX + 0xe68);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0xc6c) = *(undefined4 *)(in_ECX + 0xe60);
    }
    if (*(float *)(in_ECX + 0xc70) < *(float *)(in_ECX + 0xe64) ==
        (NAN(*(float *)(in_ECX + 0xc70)) || NAN(*(float *)(in_ECX + 0xe64)))) {
      if (*(float *)(in_ECX + 0xe6c) < *(float *)(in_ECX + 0xc70)) {
        *(undefined4 *)(in_ECX + 0xc70) = *(undefined4 *)(in_ECX + 0xe6c);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0xc70) = *(undefined4 *)(in_ECX + 0xe64);
    }
  }
  return;
}


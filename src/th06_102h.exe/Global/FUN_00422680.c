
void FUN_00422680(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  MidiOutput *in_ECX;
  uint uVar4;
  undefined8 uVar5;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar2 = false;
  uVar5 = __allmul(*(undefined4 *)&in_ECX->field_0x128,*(undefined4 *)&in_ECX->field_0x12c,
                   in_ECX->field135_0x11c,in_ECX->field135_0x11c >> 0x1f);
  uVar5 = __allmul(uVar5,1000,0);
  uVar5 = __aulldiv(uVar5,in_ECX->field136_0x120,in_ECX->field136_0x120 >> 0x1f);
  local_14 = *(uint *)&in_ECX->field_0x130 + (uint)uVar5;
  local_10 = *(int *)&in_ECX->field_0x134 + (int)((ulonglong)uVar5 >> 0x20) +
             (uint)CARRY4(*(uint *)&in_ECX->field_0x130,(uint)uVar5);
  if (*(int *)&in_ECX->field_0x2e0 != 0) {
    if (*(int *)&in_ECX->field_0x2e4 <= *(int *)&in_ECX->field_0x2e8) {
      in_ECX->field551_0x2c8 = 0.0;
      return;
    }
    in_ECX->field551_0x2c8 =
         1.0 - (float)*(int *)&in_ECX->field_0x2e8 / (float)*(int *)&in_ECX->field_0x2e4;
    lVar3 = __ftol2((double)(in_ECX->field551_0x2c8 * 128.0));
    if (lVar3 != *(int *)&in_ECX->field_0x2cc) {
      FUN_00423260((int)in_ECX,0);
    }
    lVar3 = __ftol2((double)(in_ECX->field551_0x2c8 * 128.0));
    *(long *)&in_ECX->field_0x2cc = lVar3;
    *(int *)&in_ECX->field_0x2e8 = *(int *)&in_ECX->field_0x2e8 + 1;
  }
  local_8 = 0;
  do {
    if (in_ECX->field130_0x114 <= local_8) {
      uVar1 = *(uint *)&in_ECX->field_0x128;
      *(uint *)&in_ECX->field_0x128 = uVar1 + 1;
      *(uint *)&in_ECX->field_0x12c = *(int *)&in_ECX->field_0x12c + (uint)(0xfffffffe < uVar1);
      if (!bVar2) {
        MidiOutput::FUN_004223c0(in_ECX);
      }
      return;
    }
    if (*(int *)(in_ECX->unk + local_8) != 0) {
      bVar2 = true;
      while (*(int *)(in_ECX->unk + local_8) != 0) {
        uVar1 = *(uint *)&in_ECX->unk[local_8].field_0x4;
        uVar4 = (int)uVar1 >> 0x1f;
        if ((local_10 < uVar4) || ((local_10 <= uVar4 && (local_14 < uVar1)))) break;
        MidiOutput::FUN_00422900(in_ECX,(undefined4 *)(in_ECX->unk + local_8));
        uVar5 = __allmul(*(undefined4 *)&in_ECX->field_0x128,*(undefined4 *)&in_ECX->field_0x12c,
                         in_ECX->field135_0x11c,in_ECX->field135_0x11c >> 0x1f);
        uVar5 = __allmul(uVar5,1000,0);
        uVar5 = __aulldiv(uVar5,in_ECX->field136_0x120,in_ECX->field136_0x120 >> 0x1f);
        local_14 = *(uint *)&in_ECX->field_0x130 + (uint)uVar5;
        local_10 = *(int *)&in_ECX->field_0x134 + (int)((ulonglong)uVar5 >> 0x20) +
                   (uint)CARRY4(*(uint *)&in_ECX->field_0x130,(uint)uVar5);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}



undefined4 Ending::OnDraw(Ending *ending)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int i;
  
  uVar4 = 0x1e0;
  uVar3 = 0x280;
  lVar1 = __ftol2((double)(ending->anmTimer4).subFrame);
  lVar2 = __ftol2((double)(float)(ending->anmTimer4).previous);
  FUN_004354c0(0,0,0,lVar2,lVar1,uVar3,uVar4);
  for (i = 0; i < 16; i = i + 1) {
    if (ending->AnmVm[i].anmFileIndex != 0) {
      AnmManager::FUN_00432ad0(g_AnmManager,ending->AnmVm + i);
    }
  }
  FUN_0040f550(ending);
  return 1;
}


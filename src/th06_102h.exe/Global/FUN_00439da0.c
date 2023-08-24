
undefined4 FUN_00439da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  FUN_00424375(3,&DAT_0046c570);
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    FUN_00432030(local_8);
  }
  iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x15,"data/title01.anm",0x100);
  if (iVar1 == 0) {
    iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x18,"data/title02.anm",0x11b);
    if (iVar1 == 0) {
      iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x19,"data/title03.anm",0x11f);
      if (iVar1 == 0) {
        iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x1a,"data/title04.anm",0x122);
        if (iVar1 == 0) {
          iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x16,"data/title01s.anm",0x17a);
          if (iVar1 == 0) {
            iVar1 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x17,"data/title04s.anm",0x195);
            if (iVar1 == 0) {
              for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
                FUN_004051b0(param_1 + local_8 * 0x110,local_8 + 0x100);
                *(uint *)(param_1 + 0x80 + local_8 * 0x110) =
                     *(uint *)(param_1 + 0x80 + local_8 * 0x110) & 0xfffffffe;
                *(undefined2 *)(param_1 + 0xb2 + local_8 * 0x110) =
                     *(undefined2 *)(param_1 + 0xb0 + local_8 * 0x110);
                *(uint *)(param_1 + 0x80 + local_8 * 0x110) =
                     *(uint *)(param_1 + 0x80 + local_8 * 0x110) | 0x1000;
              }
              iVar1 = VeryBigStruct::LogoStuff(VERY_BIG_STRUCT,0,"data/title/title00.jpg");
              if (iVar1 == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


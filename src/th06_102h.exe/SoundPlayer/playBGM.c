
undefined4 __thiscall SoundPlayer::playBGM(SoundPlayer *this,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  DebugPrint2("play BGM\n");
  if (*(int *)&this->field_0x62c == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0043b8e0(*(int *)&this->field_0x62c);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      piVar3 = (int *)FUN_0043b200(*(int *)&this->field_0x62c,0);
      iVar2 = FUN_0043aea0(*(int *)&this->field_0x62c,piVar3,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        iVar2 = FUN_0043b240(*(int *)&this->field_0x62c,0,1);
        if (iVar2 < 0) {
          uVar1 = 0xffffffff;
        }
        else {
          DebugPrint2("comp\n");
          *(int *)&this[1].field_0x4 = param_2;
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}


undefined4 __thiscall GameManager::FUN_00407340(GameManager *this,char *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int local_8;
  
  pbVar1 = FileSystem::OpenPath(param_1,0);
  this->field0_0x0 = pbVar1;
  if (this->field0_0x0 == 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "敵データの読み込みに失敗しました、データが壊れてるか失われています\n"
                       );
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(this->field0_0x0 + 4) = *(int *)(this->field0_0x0 + 4) + this->field0_0x0;
    this->score = this->field0_0x0 + 0x10;
    for (local_8 = 0; local_8 < *(short *)this->field0_0x0; local_8 = local_8 + 1) {
      *(int *)(this->score + local_8 * 4) = *(int *)(this->score + local_8 * 4) + this->field0_0x0;
    }
    this->field2_0x8 = *(undefined4 *)(this->field0_0x0 + 4);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00423b14(int param_1)

{
  LONG LVar1;
  undefined4 uVar2;
  int iVar3;
  
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x44),-6);
  if ((*(uint *)(param_1 + 0x148) >> 0xb & 1) == 0) {
    iVar3 = DirectInput8Create(LVar1,0x800,&DAT_0046fec0,param_1 + 0xc,0);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      GameErrorContextLog(&g_GameErrorContext,"DirectInput が使用できません\n");
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                        (*(undefined4 *)(param_1 + 0xc),&DAT_0046fe20,param_1 + 0x10,0);
      if (iVar3 < 0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        GameErrorContextLog(&g_GameErrorContext,"DirectInput が使用できません\n");
        uVar2 = 0xffffffff;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                          (*(undefined4 *)(param_1 + 0x10),&DAT_0046d004);
        if (iVar3 < 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x10));
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
          if (*(int *)(param_1 + 0xc) != 0) {
            (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
          GameErrorContextLog(&g_GameErrorContext,
                              "DirectInput SetDataFormat が使用できません\n");
          uVar2 = 0xffffffff;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))
                            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x44),0x16);
          if (iVar3 < 0) {
            if (*(int *)(param_1 + 0x10) != 0) {
              (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x10));
              *(undefined4 *)(param_1 + 0x10) = 0;
            }
            if (*(int *)(param_1 + 0xc) != 0) {
              (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(undefined4 *)(param_1 + 0xc));
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
            GameErrorContextLog(&g_GameErrorContext,
                                "DirectInput SetCooperativeLevel が使用できません\n");
            uVar2 = 0xffffffff;
          }
          else {
            (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))(*(undefined4 *)(param_1 + 0x10));
            GameErrorContextLog(&g_GameErrorContext,
                                "DirectInput は正常に初期化されました\n");
            (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                      (*(undefined4 *)(param_1 + 0xc),4,FUN_00423da0,0,1);
            if (*(int *)(param_1 + 0x14) != 0) {
              (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                        (*(undefined4 *)(param_1 + 0x14),&DAT_0046cdfc);
              (**(code **)(**(int **)(param_1 + 0x14) + 0x34))
                        (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x44),5);
              g_GameContext._24_4_ = 0x2c;
              (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
                        (*(undefined4 *)(param_1 + 0x14),0x6c6d30);
              (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                        (*(undefined4 *)(param_1 + 0x14),FUN_00423801,0,0);
              GameErrorContextLog(&g_GameErrorContext,"有効なパッドを発見しました\n");
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


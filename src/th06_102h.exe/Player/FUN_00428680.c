
float10 * __thiscall
Player::FUN_00428680(Player *this,float10 *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  float fVar2;
  float10 *pfVar3;
  undefined2 uVar4;
  
  fVar1 = *(float *)__return_storage_ptr__ - (this->position).x;
  fVar2 = *(float *)((int)__return_storage_ptr__ + 4) - (this->position).y;
  uVar4 = (undefined2)((uint)this >> 0x10);
  pfVar3 = (float10 *)
           CONCAT22(uVar4,(ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                          (ushort)(fVar2 == 0.0) << 0xe);
  if ((NAN(fVar2) == (fVar2 == 0.0)) ||
     (pfVar3 = (float10 *)
               CONCAT22(uVar4,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0) << 0xe), NAN(fVar1) == (fVar1 == 0.0))) {
    FUN_0045be40(SUB84((double)fVar2,0),(int)((ulonglong)(double)fVar2 >> 0x20),
                 SUB84((double)fVar1,0),(int)((ulonglong)(double)fVar1 >> 0x20));
  }
  return pfVar3;
}


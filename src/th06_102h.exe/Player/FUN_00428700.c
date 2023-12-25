
float10 * __thiscall
Player::FUN_00428700(Player *this,float10 *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  float fVar2;
  float10 *pfVar3;
  
  fVar1 = (this->position).x - *(float *)__return_storage_ptr__;
  fVar2 = (this->position).y - *(float *)((int)__return_storage_ptr__ + 4);
  if ((NAN(fVar2) == (fVar2 == 0.0)) ||
     (pfVar3 = (float10 *)
               CONCAT22((short)((uint)__return_storage_ptr__ >> 0x10),
                        (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                        (ushort)(fVar1 == 0.0) << 0xe), NAN(fVar1) == (fVar1 == 0.0))) {
    pfVar3 = (float10 *)FUN_0045be40((double)fVar2,(double)fVar1);
  }
  return pfVar3;
}


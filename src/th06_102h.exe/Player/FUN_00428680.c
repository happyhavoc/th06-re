
float10 * __thiscall Player::FUN_00428680(Player *this,D3DXVECTOR3 *bulletPos,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 *pfVar3;
  undefined2 uVar4;
  
  fVar1 = bulletPos->x - (this->positionCenter).x;
  fVar2 = bulletPos->y - (this->positionCenter).y;
  uVar4 = (undefined2)((uint)this >> 0x10);
  pfVar3 = (float10 *)
           CONCAT22(uVar4,(ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                          (ushort)(fVar2 == 0.0) << 0xe);
  if ((NAN(fVar2) == (fVar2 == 0.0)) ||
     (pfVar3 = (float10 *)
               CONCAT22(uVar4,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0) << 0xe), NAN(fVar1) == (fVar1 == 0.0))) {
    atan2((double)fVar2,(double)fVar1);
  }
  return pfVar3;
}


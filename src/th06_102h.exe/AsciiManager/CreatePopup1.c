
void __thiscall
AsciiManager::CreatePopup1(AsciiManager *this,D3DXVECTOR3 *position,int value,D3DCOLOR color)

{
  AsciiManagerPopup *pAVar1;
  int local_c;
  
  if (0x1ff < this->nextPopupIndex1) {
    this->nextPopupIndex1 = 0;
  }
  pAVar1 = this->popups0 + this->nextPopupIndex1;
  pAVar1->inUse = '\x01';
  local_c = 0;
  if (value < 0) {
    pAVar1->digits[0] = '\n';
    local_c = 1;
  }
  else {
    for (; value != 0; value = value / 10) {
      pAVar1->digits[local_c] = (char)(value % 10);
      local_c = local_c + 1;
    }
  }
  if (local_c == 0) {
    pAVar1->digits[0] = '\0';
    local_c = 1;
  }
  pAVar1->characterCount = (uchar)local_c;
  pAVar1->color = color;
  (pAVar1->timer).current = 0;
  (pAVar1->timer).subFrame = 0.0;
  (pAVar1->timer).previous = -999;
  (pAVar1->position).x = position->x;
  (pAVar1->position).y = position->y;
  (pAVar1->position).z = position->z;
  this->nextPopupIndex1 = this->nextPopupIndex1 + 1;
  return;
}


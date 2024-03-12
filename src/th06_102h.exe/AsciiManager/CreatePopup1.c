
void __thiscall
AsciiManager::CreatePopup1(AsciiManager *this,D3DXVECTOR3 *position,int value,D3DCOLOR color)

{
  int characterCount;
  AsciiManagerPopup *popup;
  
  if (0x1ff < this->nextPopupIndex1) {
    this->nextPopupIndex1 = 0;
  }
  popup = this->popups + this->nextPopupIndex1;
  popup->inUse = '\x01';
  characterCount = 0;
  if (value < 0) {
    popup->digits[0] = '\n';
    characterCount = 1;
  }
  else {
    for (; value != 0; value = value / 10) {
      popup->digits[characterCount] = (char)(value % 10);
      characterCount = characterCount + 1;
    }
  }
  if (characterCount == 0) {
    popup->digits[0] = '\0';
    characterCount = 1;
  }
  popup->characterCount = (uchar)characterCount;
  popup->color = color;
  (popup->timer).current = 0;
  (popup->timer).subFrame = 0.0;
  (popup->timer).previous = -999;
  (popup->position).x = position->x;
  (popup->position).y = position->y;
  (popup->position).z = position->z;
  this->nextPopupIndex1 = this->nextPopupIndex1 + 1;
  return;
}


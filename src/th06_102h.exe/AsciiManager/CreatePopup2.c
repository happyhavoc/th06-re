
void __thiscall
AsciiManager::CreatePopup2(AsciiManager *this,undefined4 *param_1,int param_2,D3DCOLOR param_3)

{
  AsciiManagerPopup *pAVar1;
  int local_c;
  
  if (2 < this->nextPopupIndex2) {
    this->nextPopupIndex2 = 0;
  }
  pAVar1 = this->popups1 + this->nextPopupIndex2;
  pAVar1->inUse = '\x01';
  local_c = 0;
  if (param_2 < 0) {
    pAVar1->digits[0] = '\n';
    local_c = 1;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 / 10) {
      pAVar1->digits[local_c] = (char)(param_2 % 10);
      local_c = local_c + 1;
    }
  }
  if (local_c == 0) {
    pAVar1->digits[0] = '\0';
    local_c = 1;
  }
  pAVar1->characterCount = (uchar)local_c;
  pAVar1->color = param_3;
  (pAVar1->timer).current = 0;
  (pAVar1->timer).subFrame = 0.0;
  (pAVar1->timer).previous = -999;
  (pAVar1->position).x = (float)*param_1;
  (pAVar1->position).y = (float)param_1[1];
  (pAVar1->position).z = (float)param_1[2];
  this->nextPopupIndex2 = this->nextPopupIndex2 + 1;
  return;
}


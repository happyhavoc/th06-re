
void __thiscall AsciiManager::DrawText(AsciiManager *this,D3DXVECTOR3 *param_1,char *param_2)

{
  AsciiManagerString *pAVar1;
  char cVar2;
  AsciiManagerString *local_14;
  char *local_10;
  
  if (this->numStrings < 0x100) {
    pAVar1 = this->strings + this->numStrings;
    this->numStrings = this->numStrings + 1;
    local_10 = param_2;
    local_14 = pAVar1;
    do {
      cVar2 = *local_10;
      local_14->text[0] = cVar2;
      local_10 = local_10 + 1;
      local_14 = (AsciiManagerString *)(local_14->text + 1);
    } while (cVar2 != '\0');
    (pAVar1->position).x = param_1->x;
    (pAVar1->position).y = param_1->y;
    (pAVar1->position).z = param_1->z;
    pAVar1->color = this->color;
    (pAVar1->scale).x = (this->scale).x;
    (pAVar1->scale).y = (this->scale).y;
    *(undefined4 *)&pAVar1->field_0x5c = *(undefined4 *)&this->field_0x6230;
    if ((g_GameContext.cfg.opts >> NO_COLOR_COMP & 1 | g_GameContext.cfg.opts & 1) == 0) {
      *(undefined4 *)&pAVar1->field_0x58 = 0;
    }
    else {
      *(undefined4 *)&pAVar1->field_0x58 = this->field10_0x6234;
    }
  }
  return;
}


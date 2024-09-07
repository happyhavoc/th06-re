
void __thiscall th06::AsciiManager::AddString(AsciiManager *this,D3DXVECTOR3 *position,char *text)

{
  char cVar1;
  AsciiManagerString *local_14;
  char *local_10;
  AsciiManager *self;
  AsciiManagerString *curString;
  AsciiManagerString *curString2;
  
  if (this->numStrings < 0x100) {
    curString2 = this->strings + this->numStrings;
    this->numStrings = this->numStrings + 1;
    local_10 = text;
    local_14 = curString2;
    do {
      cVar1 = *local_10;
      local_14->text[0] = cVar1;
      local_10 = local_10 + 1;
      local_14 = (AsciiManagerString *)(local_14->text + 1);
    } while (cVar1 != '\0');
    (curString2->position).x = position->x;
    (curString2->position).y = position->y;
    (curString2->position).z = position->z;
    curString2->color = this->color;
    (curString2->scale).x = (this->scale).x;
    (curString2->scale).y = (this->scale).y;
    curString2->isGui = this->isGui;
    if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1 | g_Supervisor.cfg.opts & 1) ==
        USE_D3D_HW_TEXTURE_BLENDING) {
      curString2->isSelected = 0;
    }
    else {
      curString2->isSelected = this->isSelected;
    }
  }
  return;
}


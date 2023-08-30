
void __thiscall FUN_00432030(VeryBigStruct *this,int param_2)

{
  int *piVar2;
  int iVar3;
  VeryBigStruct0tbl *pVVar4;
  Anm0 *after_hdr;
  int local_14;
  int piVar1;
  
  if (this->animData[param_2] != (Anm0 *)0x0) {
    piVar1 = (int)this->field18790_0x20b34[param_2];
    after_hdr = this->animData[param_2] + 1;
    for (local_14 = 0; local_14 < this->animData[param_2]->numSprites; local_14 = local_14 + 1) {
      piVar2 = (int *)((int)&this->animData[param_2]->numSprites + after_hdr->numSprites);
      pVVar4 = this->field0_0x0 + *piVar2 + piVar1;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        pVVar4->field0_0x0 = 0;
        pVVar4 = (VeryBigStruct0tbl *)&pVVar4->field_0x4;
      }
      this->field0_0x0[*piVar2 + piVar1].field0_0x0 = -1;
      after_hdr = (Anm0 *)&after_hdr->numScripts;
    }
    for (local_14 = 0; local_14 < this->animData[param_2]->numScripts; local_14 = local_14 + 1) {
      *(undefined4 *)(&this->field_0x1c934 + (after_hdr->numSprites + piVar1) * 4) = 0;
      *(undefined4 *)(&this->field_0x1e934 + (after_hdr->numSprites + piVar1) * 4) = 0;
      after_hdr = (Anm0 *)&after_hdr->textureIdx;
    }
    this->field18790_0x20b34[param_2] = (int *)0x0;
    FUN_004321e0(this,this->animData[param_2]->textureIdx);
    _free(this->animData[param_2]);
    this->animData[param_2] = (Anm0 *)0x0;
    this->field_0x210bc = 0xff;
    this->field_0x210bd = 0xff;
    this->field_0x210be = 0xff;
    this->curTexture = 0;
  }
  return;
}


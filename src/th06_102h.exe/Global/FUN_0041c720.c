
ChainElem * __fastcall FUN_0041c720(ChainElem *this)

{
  this->field5_0x10 = 0;
  this->field6_0x14 = 0;
  this->callback = 0;
  this->field7_0x18 = &this->priority;
  this->field3_0x8 = 0;
  this->field4_0xc = 0;
  this->priority = 0;
  this->field1_0x2 = this->field1_0x2 & 0xfffe;
  return this;
}


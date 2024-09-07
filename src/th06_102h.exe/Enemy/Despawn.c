
void __thiscall th06::Enemy::Despawn(Enemy *this)

{
  if (this->flags2 >> 5 == 0) {
    this->flags1 = this->flags1 & 0x7f;
  }
  else {
    this->flags2 = this->flags2 & 0xfe;
  }
  if ((this->flags2 >> 3 & 1) != 0) {
    g_Gui.boss_present = 0;
  }
  if (this->effectsNum != 0) {
    ResetEffectArray(this);
  }
  return;
}


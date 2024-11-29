
AnmVm * __thiscall th06::BulletTypeSprites::BulletTypeSprites(BulletTypeSprites *this)

{
  AnmVm::AnmVm(&this->spriteBullet);
  AnmVm::AnmVm(&this->spriteSpawnEffectFast);
  AnmVm::AnmVm(&this->spriteSpawnEffectNormal);
  AnmVm::AnmVm(&this->spriteSpawnEffectSlow);
  AnmVm::AnmVm(&this->spriteSpawnEffectDonut);
  return &this->spriteBullet;
}


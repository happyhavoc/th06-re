
AnmVm * __thiscall BulletTypeVms::BulletTypeVms(BulletTypeVms *this)

{
  AnmVm::AnmVm(&this->vm0);
  AnmVm::AnmVm(&this->spawn_effect_short);
  AnmVm::AnmVm(&this->spawn_effect_medium);
  AnmVm::AnmVm(&this->spawn_effect_long);
  AnmVm::AnmVm(&this->spawn_effect_short_with_memset);
  return &this->vm0;
}


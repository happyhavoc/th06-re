
void __thiscall th06::BulletManager::InitializeToZero(BulletManager *this)

{
  int iVar1;
  
                    /* memset(this, 0, sizeof(BulletManager)) */
  for (iVar1 = 0x3d706; iVar1 != 0; iVar1 = iVar1 + -1) {
    this->bullet_type_templates[0].spriteBullet.rotation.x = 0.0;
    this = (BulletManager *)&this->bullet_type_templates[0].spriteBullet.rotation.y;
  }
  return;
}



void __cdecl th06::Enemy::ExInsCirnoRainbowBallJank(Enemy *param_1,EclRawInstr *insn)

{
  float10 add_y;
  float fVar2;
  Bullet *bullets;
  int local_8;
  int fVar1;
  float10 add_x;
  
  bullets = g_BulletManager.bullets;
  fVar1 = (int)(insn->args).float_var_1;
  EffectManager::SpawnParticles(&g_EffectManager,0xc,&param_1->position,1,(ZunColor)0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((bullets->state != 0) && (bullets->state != 5)) {
      bullets->color = 0xf;
      AnmManager::SetActiveSprite
                (g_AnmManager,(AnmVm *)bullets,
                 (int)(bullets->sprites).bulletSprite.baseSpriteIndex + (int)(short)bullets->color);
      if (fVar1 == 0) {
        bullets->speed = 0.0;
        (bullets->velocity).x = 0.0;
        (bullets->velocity).y = 0.0;
        (bullets->velocity).z = 0.0;
      }
      else if (fVar1 == 1) {
        bullets->ex_flags = bullets->ex_flags | 0x10;
        bullets->ex_5_int_0 = 0xdc;
        (bullets->timer).current = 0;
        (bullets->timer).subFrame = 0.0;
        (bullets->timer).previous = -999;
        fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        add_y = (float10)(fVar2 * 6.283185 - 3.141593);
        add_x = (float10)fcos(add_y);
        add_y = (float10)fsin(add_y);
        (bullets->ex_4_acceleration).x = (float)(add_x * (float10)0.01);
        (bullets->ex_4_acceleration).y = (float)(add_y * (float10)0.01);
      }
    }
    bullets = bullets + 1;
  }
  return;
}



void __thiscall th06::Enemy::Move(Enemy *this)

{
  if ((this->flags1 >> 6 & 1) == 0) {
    (this->position).x =
         g_Supervisor.effectiveFramerateMultiplier * (this->axis_speed).x + (this->position).x;
  }
  else {
    (this->position).x =
         (this->position).x - g_Supervisor.effectiveFramerateMultiplier * (this->axis_speed).x;
  }
  (this->position).y =
       g_Supervisor.effectiveFramerateMultiplier * (this->axis_speed).y + (this->position).y;
  (this->position).z =
       g_Supervisor.effectiveFramerateMultiplier * (this->axis_speed).z + (this->position).z;
  return;
}


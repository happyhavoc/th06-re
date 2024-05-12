
void Rotate(D3DXVECTOR3 *out_data,D3DXVECTOR3 *point,float angle)

{
  double dVar1;
  double dVar2;
  
  dVar1 = sin((double)angle);
  dVar2 = cos((double)angle);
  out_data->x = (float)dVar1 * point->y + (float)dVar2 * point->x;
  out_data->y = (float)dVar2 * point->y - (float)dVar1 * point->x;
  return;
}


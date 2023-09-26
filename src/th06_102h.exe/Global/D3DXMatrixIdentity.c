
D3DMATRIX * __cdecl D3DXMatrixIdentity(D3DMATRIX *matrix)

{
  matrix->m[3][2] = 0.0;
  matrix->m[3][1] = 0.0;
  matrix->m[3][0] = 0.0;
  matrix->m[2][3] = 0.0;
  matrix->m[2][1] = 0.0;
  matrix->m[2][0] = 0.0;
  matrix->m[1][3] = 0.0;
  matrix->m[1][2] = 0.0;
  matrix->m[1][0] = 0.0;
  matrix->m[0][3] = 0.0;
  matrix->m[0][2] = 0.0;
  matrix->m[0][1] = 0.0;
  matrix->m[3][3] = 1.0;
  matrix->m[2][2] = 1.0;
  matrix->m[1][1] = 1.0;
  matrix->m[0][0] = 1.0;
  return matrix;
}


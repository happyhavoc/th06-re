
/* centerX < 0 && (x - (width / 2)) <= VIEW_WIDTH && centerY < 0 && (y - (height / 2)) <=
   VIEW_HEIGHT */

int GameManager::IsInBounds(float x,float y,float width,float height)

{
  int iVar1;
  float centerX;
  
  centerX = width / 2.0 + x;
  if (centerX < 0.0 == NAN(centerX)) {
    if (x - width / 2.0 <= g_GameManager.arcade_region_size.x) {
      centerX = height / 2.0 + y;
      if (centerX < 0.0 == NAN(centerX)) {
        if (y - height / 2.0 <= g_GameManager.arcade_region_size.y) {
          iVar1 = 1;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


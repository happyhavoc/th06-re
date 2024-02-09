
/* centerX < 0 && (x - (width / 2)) <= VIEW_WIDTH && centerY < 0 && (y - (height / 2)) <=
   VIEW_HEIGHT */

undefined4 GameManager::FUN_0041b5e1(float x,float y,float width,float height)

{
  undefined4 uVar1;
  float centerX;
  
  centerX = width / 2.0 + x;
  if (centerX < 0.0 == NAN(centerX)) {
    if (x - width / 2.0 <= g_GameManager.arcade_region_size.x) {
      centerX = height / 2.0 + y;
      if (centerX < 0.0 == NAN(centerX)) {
        if (y - height / 2.0 <= g_GameManager.arcade_region_size.y) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


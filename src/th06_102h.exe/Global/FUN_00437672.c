
void FUN_00437672(MainMenu *menu,short param_2,short param_3,BOOL param_4)

{
  if ((param_4 == 0) && ((menu->controlMapping).shootButton == param_2)) {
    (menu->controlMapping).shootButton = param_3;
  }
  if ((menu->controlMapping).bombButton == param_2) {
    (menu->controlMapping).bombButton = param_3;
  }
  if ((param_4 == 0) && ((menu->controlMapping).focusButton == param_2)) {
    (menu->controlMapping).focusButton = param_3;
  }
  if ((menu->controlMapping).upButton == param_2) {
    (menu->controlMapping).upButton = param_3;
  }
  if ((menu->controlMapping).downButton == param_2) {
    (menu->controlMapping).downButton = param_3;
  }
  if ((menu->controlMapping).leftButton == param_2) {
    (menu->controlMapping).leftButton = param_3;
  }
  if ((menu->controlMapping).rightButton == param_2) {
    (menu->controlMapping).rightButton = param_3;
  }
  if ((menu->controlMapping).menuButton == param_2) {
    (menu->controlMapping).menuButton = param_3;
  }
  if ((menu->controlMapping).skipButton == param_2) {
    (menu->controlMapping).skipButton = param_3;
  }
  return;
}



void MainMenu::FUN_00437672(MainMenu *menu,short param_2,short button_pressed,BOOL param_4)

{
                    /* I'm pretty sure this function handles going to the bottom when you press the
                       bomb button or escape */
  if ((param_4 == 0) && ((menu->controlMapping).shootButton == param_2)) {
    (menu->controlMapping).shootButton = button_pressed;
  }
  if ((menu->controlMapping).bombButton == param_2) {
    (menu->controlMapping).bombButton = button_pressed;
  }
  if ((param_4 == 0) && ((menu->controlMapping).focusButton == param_2)) {
    (menu->controlMapping).focusButton = button_pressed;
  }
  if ((menu->controlMapping).upButton == param_2) {
    (menu->controlMapping).upButton = button_pressed;
  }
  if ((menu->controlMapping).downButton == param_2) {
    (menu->controlMapping).downButton = button_pressed;
  }
  if ((menu->controlMapping).leftButton == param_2) {
    (menu->controlMapping).leftButton = button_pressed;
  }
  if ((menu->controlMapping).rightButton == param_2) {
    (menu->controlMapping).rightButton = button_pressed;
  }
  if ((menu->controlMapping).menuButton == param_2) {
    (menu->controlMapping).menuButton = button_pressed;
  }
  if ((menu->controlMapping).skipButton == param_2) {
    (menu->controlMapping).skipButton = button_pressed;
  }
  return;
}


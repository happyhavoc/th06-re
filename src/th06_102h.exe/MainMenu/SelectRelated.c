
void MainMenu::SelectRelated(MainMenu *menu,ushort btn_pressed,ushort old_mapping,BOOL param_4)

{
                    /* I'm pretty sure this function handles going to the bottom when you press the
                       bomb button or escape */
  if ((param_4 == 0) && (menu->controlMapping[0] == btn_pressed)) {
    menu->controlMapping[0] = old_mapping;
  }
  if (menu->controlMapping[1] == btn_pressed) {
    menu->controlMapping[1] = old_mapping;
  }
  if ((param_4 == 0) && (menu->controlMapping[2] == btn_pressed)) {
    menu->controlMapping[2] = old_mapping;
  }
  if (menu->controlMapping[4] == btn_pressed) {
    menu->controlMapping[4] = old_mapping;
  }
  if (menu->controlMapping[5] == btn_pressed) {
    menu->controlMapping[5] = old_mapping;
  }
  if (menu->controlMapping[6] == btn_pressed) {
    menu->controlMapping[6] = old_mapping;
  }
  if (menu->controlMapping[7] == btn_pressed) {
    menu->controlMapping[7] = old_mapping;
  }
  if (menu->controlMapping[3] == btn_pressed) {
    menu->controlMapping[3] = old_mapping;
  }
  if (menu->controlMapping[8] == btn_pressed) {
    menu->controlMapping[8] = old_mapping;
  }
  return;
}


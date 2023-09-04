
uint SetButtonFromControllerInputs
               (ushort *outButtons,short controllerButtonToTest,ushort touhouButton,
               uint inputButtons)

{
  uint mask;
  uint local_10;
  ushort tmpButton;
  
  if (controllerButtonToTest < 0) {
    local_10 = 0;
  }
  else {
    mask = 1 << ((byte)controllerButtonToTest & 0x1f);
    tmpButton = touhouButton;
    if ((inputButtons & mask) == 0) {
      tmpButton = 0;
    }
    *outButtons = *outButtons | tmpButton;
    if ((inputButtons & mask) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = (uint)touhouButton;
    }
  }
  return local_10;
}


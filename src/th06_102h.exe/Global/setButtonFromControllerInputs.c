
ushort setButtonFromControllerInputs
                 (ushort *outButtons,short controllerButtonToTest,ushort touhouButton,
                 uint inputButtons)

{
  ushort uVar1;
  uint uVar2;
  
  if (controllerButtonToTest < 0) {
    touhouButton = 0;
  }
  else {
    uVar2 = 1 << ((byte)controllerButtonToTest & 0x1f);
    uVar1 = touhouButton;
    if ((inputButtons & uVar2) == 0) {
      uVar1 = 0;
    }
    *outButtons = *outButtons | uVar1;
    if ((inputButtons & uVar2) == 0) {
      touhouButton = 0;
    }
  }
  return touhouButton;
}


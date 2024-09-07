
DWORD th06::SetButtonFromControllerInputs
                (WORD *outButtons,short controllerButtonToTest,DWORD touhouButton,DWORD inputButtons
                )

{
  uint mask;
  DWORD local_10;
  ushort local_c;
  
  if (controllerButtonToTest < 0) {
    local_10 = 0;
  }
  else {
    mask = 1 << ((byte)controllerButtonToTest & 0x1f);
    if ((inputButtons & mask) == 0) {
      local_c = 0;
    }
    else {
      local_c = (ushort)touhouButton;
    }
    *outButtons = *outButtons | local_c;
    if ((inputButtons & mask) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = touhouButton & 0xffff;
    }
  }
  return local_10;
}


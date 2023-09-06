
DWORD SetButtonFromDirectInputJoystate
                (WORD *outButtons,short controllerButtonToTest,DWORD touhouButton,BYTE *inputButtons
                )

{
  DWORD local_c;
  ushort local_8;
  
  if (controllerButtonToTest < 0) {
    local_c = 0;
  }
  else {
    if ((inputButtons[controllerButtonToTest] & 0x80) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = (ushort)touhouButton;
    }
    *outButtons = *outButtons | local_8;
    if ((inputButtons[controllerButtonToTest] & 0x80) == 0) {
      local_c = 0;
    }
    else {
      local_c = touhouButton & 0xffff;
    }
  }
  return local_c;
}


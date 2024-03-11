
void __thiscall Ending::parseEndFile(Ending *this,Ending *ending)

{
  float fVar1;
  int iVar2;
  AnmManager *pAVar3;
  ZunResult ZVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  AnmVm *pAVar9;
  undefined4 *puVar10;
  uint unaff_retaddr;
  short local_ac;
  short local_90;
  int local_58;
  int local_54;
  int local_50;
  int local_38;
  undefined4 local_34;
  uint local_c;
  int local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_8 = 0;
  local_38 = 0;
  puVar10 = &local_34;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  if (0 < (this->Timer3).current) {
    ZunTimer::Decrement(&this->Timer3,1);
    if (*(int *)&this->field_0x1140 == 0) {
      if ((((g_CurFrameInput & 0x1001) != 0) &&
          ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
         ((*(int *)&this->field_0x1118 != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
        (this->Timer3).current = 0;
        (this->Timer3).subFrame = 0.0;
        (this->Timer3).previous = -999;
      }
    }
    else {
      *(int *)&this->field_0x1140 = *(int *)&this->field_0x1140 + -1;
    }
    if (0 < (this->Timer3).current) goto LAB_00410546;
    pAVar9 = this->AnmVm;
    for (iVar8 = 0x440; iVar8 != 0; iVar8 = iVar8 + -1) {
      (pAVar9->rotation).x = 0.0;
      pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
    }
    *(undefined4 *)&this->field_0x1154 = 0;
  }
  if ((this->Timer2).current < 1) {
    do {
      pAVar3 = g_AnmManager;
      switch(*(undefined *)this->endFileDataPtr) {
      case 0:
      case 10:
      case 0xd:
        goto switchD_0040fa32_caseD_0;
      default:
        *(undefined *)((int)&local_34 + local_38) = *(undefined *)this->endFileDataPtr;
        *(undefined *)((int)&local_34 + local_38 + 1) =
             *(undefined *)((int)this->endFileDataPtr + 1);
        local_38 = local_38 + 2;
        this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 2);
        pAVar3 = g_AnmManager;
        if (0x1f < local_38) {
          iVar8 = *(int *)&this->field_0x1154;
          local_ac = (short)local_8 + 0x708 + (short)iVar8 * 2;
          iVar2 = *(int *)&this->field_0x1154;
          this->AnmVm[local_8 + iVar2 * 2].anmFileIndex = local_ac;
          AnmManager::SetAndExecuteScript
                    (pAVar3,this->AnmVm + local_8 + iVar2 * 2,
                     pAVar3->scripts[iVar8 * 2 + local_8 + 0x708]);
          AnmManager::FUN_00434b60
                    (g_AnmManager,(int)(this->AnmVm + local_8 + *(int *)&this->field_0x1154 * 2),
                     *(undefined4 *)&this->field_0x1158,0xc0d0d0,(char *)&local_34);
          if (local_8 != 0) goto LAB_00410546;
          local_8 = 1;
          local_38 = 0;
          puVar10 = &local_34;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = 0;
        }
        break;
      case 0x40:
                    /* If there is an @ symbol, that means we have an opcode to read. */
        this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
        switch(*(undefined *)this->endFileDataPtr) {
        case 0x30:
                    /* fadeinblack(frames). UNUSED */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          *(undefined4 *)&this->field_0x1168 = 1;
          *(undefined4 *)&this->field_0x1160 = 0;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1164 = lVar7;
          break;
        case 0x31:
                    /* fadeoutblack(frames). UNUSED */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          *(undefined4 *)&this->field_0x1168 = 2;
          *(undefined4 *)&this->field_0x1160 = 0;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1164 = lVar7;
          break;
        case 0x32:
                    /* fadein(frames) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          *(undefined4 *)&this->field_0x1168 = 3;
          *(undefined4 *)&this->field_0x1160 = 0;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1164 = lVar7;
          break;
        case 0x33:
                    /* fadeout(frames) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          *(undefined4 *)&this->field_0x1168 = 4;
          *(undefined4 *)&this->field_0x1160 = 0;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1164 = lVar7;
          break;
        case 0x46:
                    /* exec(endfile) */
          ZVar4 = loadEnding(this,(char *)((int)this->endFileDataPtr + 1));
          if (ZVar4 == ZUN_SUCCESS) {
            local_38 = 0;
            local_8 = 0;
            for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
              for (local_54 = 0; local_54 < 4; local_54 = local_54 + 1) {
                if ((*(char *)(local_50 * 0x18 + 0x69ccdc + local_54) == 'c') ||
                   (*(char *)(local_50 * 0x18 + 0x69cce1 + local_54) == 'c')) {
                  *(undefined4 *)&this->field_0x1118 = 1;
                  break;
                }
              }
            }
            goto switchD_0040fa93_caseD_52;
          }
          goto LAB_004105d3;
        case 0x4d:
                    /* musicfade(duration) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          Supervisor::fadeOutMusic(&g_Supervisor,(float)lVar7);
          break;
        case 0x52:
switchD_0040fa93_caseD_52:
                    /* staffroll() */
          for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
            this->AnmVm[local_58].anmFileIndex = 0;
          }
          break;
        case 0x56:
                    /* scrollbg(distance, duration) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          lVar5 = readEndFileParameter(this);
          (this->anmTimer4).current = (int)((float)lVar7 / (float)lVar5);
          break;
        case 0x61:
                    /* anm(???, script_index?, sprite_index?) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          lVar5 = readEndFileParameter(this);
          lVar6 = readEndFileParameter(this);
          AnmManager::ExecuteAnmIdx(g_AnmManager,this->AnmVm + lVar7,lVar5 + 0x600);
          AnmManager::SetActiveSprite(g_AnmManager,this->AnmVm + lVar7,lVar6 + 0x600);
          break;
        case 0x62:
                    /* background(jpg_file) */
          ZVar4 = AnmManager::LoadSurface(g_AnmManager,0,(char *)((int)this->endFileDataPtr + 1));
          if (ZVar4 != ZUN_SUCCESS) goto LAB_004105d3;
          break;
        case 99:
                    /* color(bgr_color) */
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1158 = lVar7;
          break;
        case 0x6d:
                    /* musicplay(file) */
          Supervisor::PlayAudio((char *)((int)this->endFileDataPtr + 1));
          break;
        case 0x72:
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          (this->Timer3).current = lVar7;
          (this->Timer3).subFrame = 0.0;
          (this->Timer3).previous = -999;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1140 = lVar7;
          while ((*(char *)this->endFileDataPtr != '\n' && (*(char *)this->endFileDataPtr != '\r')))
          {
            this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          }
          while ((*(char *)this->endFileDataPtr == '\n' || (*(char *)this->endFileDataPtr == '\r')))
          {
            this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          }
          goto LAB_00410546;
        case 0x73:
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1148 = lVar7;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x114c = lVar7;
          break;
        case 0x76:
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          (this->anmTimer4).subFrame = (float)lVar7;
          break;
        case 0x77:
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          lVar7 = readEndFileParameter(this);
          (this->Timer2).current = lVar7;
          (this->Timer2).subFrame = 0.0;
          (this->Timer2).previous = -999;
          lVar7 = readEndFileParameter(this);
          *(long *)&this->field_0x1144 = lVar7;
          while ((*(char *)this->endFileDataPtr != '\n' && (*(char *)this->endFileDataPtr != '\r')))
          {
            this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          }
          while ((*(char *)this->endFileDataPtr == '\n' || (*(char *)this->endFileDataPtr == '\r')))
          {
            this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
          }
          goto LAB_00410546;
        case 0x7a:
          goto LAB_004105d3;
        }
        while ((*(char *)this->endFileDataPtr != '\n' && (*(char *)this->endFileDataPtr != '\r'))) {
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
        }
        while ((*(char *)this->endFileDataPtr == '\n' || (*(char *)this->endFileDataPtr == '\r'))) {
          this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
        }
      }
    } while( true );
  }
  ZunTimer::Decrement(&this->Timer2,1);
  if (*(int *)&this->field_0x1144 == 0) {
    if ((((g_CurFrameInput & 0x1001) != 0) &&
        ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
       ((*(int *)&this->field_0x1118 != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
      (this->Timer2).current = 0;
      (this->Timer2).subFrame = 0.0;
      (this->Timer2).previous = -999;
    }
  }
  else {
    *(int *)&this->field_0x1144 = *(int *)&this->field_0x1144 + -1;
  }
  goto LAB_00410546;
switchD_0040fa32_caseD_0:
  if (local_38 != 0) {
    iVar8 = *(int *)&this->field_0x1154;
    local_90 = (short)local_8 + 0x708 + (short)iVar8 * 2;
    iVar2 = *(int *)&this->field_0x1154;
    this->AnmVm[local_8 + iVar2 * 2].anmFileIndex = local_90;
    AnmManager::SetAndExecuteScript
              (pAVar3,this->AnmVm + local_8 + iVar2 * 2,pAVar3->scripts[iVar8 * 2 + local_8 + 0x708]
              );
    AnmManager::FUN_00434b60
              (g_AnmManager,(int)(this->AnmVm + local_8 + *(int *)&this->field_0x1154 * 2),
               *(undefined4 *)&this->field_0x1158,0xc0d0d0,(char *)&local_34);
  }
  while (((*(char *)this->endFileDataPtr == '\n' || (*(char *)this->endFileDataPtr == '\0')) ||
         (*(char *)this->endFileDataPtr == '\r'))) {
    this->endFileDataPtr = (int *)((int)this->endFileDataPtr + 1);
  }
  if ((g_CurFrameInput & 0x1001) == 0) {
    (this->Timer2).current = *(int *)&this->field_0x1148;
    (this->Timer2).subFrame = 0.0;
    (this->Timer2).previous = -999;
    *(undefined4 *)&this->field_0x1144 = *(undefined4 *)&this->field_0x1148;
  }
  else {
    (this->Timer2).current = *(int *)&this->field_0x114c;
    (this->Timer2).subFrame = 0.0;
    (this->Timer2).previous = -999;
    *(undefined4 *)&this->field_0x1144 = *(undefined4 *)&this->field_0x114c;
  }
  *(int *)&this->field_0x1154 = *(int *)&this->field_0x1154 + 1;
LAB_00410546:
  (this->Timer1).previous = (this->Timer1).current;
  Supervisor::TickTimer(&g_Supervisor,&(this->Timer1).current,&(this->Timer1).subFrame);
  (this->anmTimer4).subFrame = (this->anmTimer4).subFrame - (float)(this->anmTimer4).current;
  fVar1 = (this->anmTimer4).subFrame;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    (this->anmTimer4).subFrame = 0.0;
    (this->anmTimer4).current = 0;
  }
LAB_004105d3:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


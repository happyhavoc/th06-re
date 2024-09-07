
void __thiscall th06::Ending::ParseEndFile(Ending *this)

{
  float fVar1;
  int iVar2;
  AnmManager *pAVar3;
  ZunResult backgroundSurface;
  long anmUnk;
  long anmScriptIdx;
  long anmSpriteIdx;
  long scrollBGDistance;
  long scrollBGDuration;
  long newVertCoordinate;
  long musicFadeFrames;
  long newColor;
  long maxWRFrames;
  long minWRFrames;
  long maxFrames;
  long minFrames;
  long fadeInBlackFrames;
  long fadeOutBlackFrames;
  long fadeInFrames;
  long fadeOutFrames;
  int i;
  AnmVm *anmvm_ref;
  undefined4 *puVar4;
  uint unaff_retaddr;
  short local_ac;
  short local_90;
  int staffroll_loop;
  int exec_inner;
  int exec_outer;
  int local_38;
  char local_34;
  char acStack_33 [39];
  uint local_c;
  int local_8;
  
  local_c = __security_cookie ^ unaff_retaddr;
  local_8 = 0;
  local_38 = 0;
  puVar4 = (undefined4 *)&local_34;
  for (i = 9; i != 0; i = i + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  if (0 < (this->Timer3).current) {
    ZunTimer::Decrement(&this->Timer3,1);
    if (this->minWaitResetFrames == 0) {
      if ((((g_CurFrameInput & 0x1001) != 0) &&
          ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
         ((*(int *)&this->unk_dependent_on_clrd != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
        (this->Timer3).current = 0;
        (this->Timer3).subFrame = 0.0;
        (this->Timer3).previous = -999;
      }
    }
    else {
                    /* I hate how ghidra refuses to do - 1 and instead does + -1 *sigh* */
      this->minWaitResetFrames = this->minWaitResetFrames + -1;
    }
    if (0 < (this->Timer3).current) goto LAB_00410546;
    anmvm_ref = &this->AnmVm;
    for (i = 1088; i != 0; i = i + -1) {
      (anmvm_ref->rotation).x = 0.0;
      anmvm_ref = (AnmVm *)&(anmvm_ref->rotation).y;
    }
    this->possibly_times_file_parsed = 0;
  }
  if ((this->Timer2).current < 1) {
    do {
      pAVar3 = g_AnmManager;
      switch(*this->endFileDataPtr) {
      case '\0':
      case '\n':
      case '\r':
        goto switchD_0040fa32_caseD_0;
      default:
        acStack_33[local_38 + -1] = *this->endFileDataPtr;
        acStack_33[local_38] = this->endFileDataPtr[1];
        local_38 = local_38 + 2;
        this->endFileDataPtr = this->endFileDataPtr + 2;
        pAVar3 = g_AnmManager;
        if (31 < local_38) {
          i = this->possibly_times_file_parsed;
          local_ac = (short)local_8 + 1800 + (short)i * 2;
          iVar2 = this->possibly_times_file_parsed;
          (&this->AnmVm)[local_8 + iVar2 * 2].anmFileIndex = local_ac;
          AnmManager::SetAndExecuteScript
                    ((AnmManager *)pAVar3,&this->AnmVm + local_8 + iVar2 * 2,
                     pAVar3->scripts[i * 2 + local_8 + 0x708]);
          AnmManager::DrawVmTextFmt
                    (g_AnmManager,&this->AnmVm + local_8 + this->possibly_times_file_parsed * 2,
                     this->textColor,0xc0d0d0,&local_34);
          if (local_8 != 0) goto LAB_00410546;
          local_8 = 1;
          local_38 = 0;
          puVar4 = (undefined4 *)&local_34;
          for (i = 9; i != 0; i = i + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          *(undefined2 *)puVar4 = 0;
        }
        break;
      case '@':
                    /* If there is an @ symbol, that means we have an opcode to read. */
        this->endFileDataPtr = this->endFileDataPtr + 1;
        switch(*this->endFileDataPtr) {
        case '0':
                    /* fadeinblack(frames). UNUSED */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 1;
          this->timeFading = 0;
          fadeInBlackFrames = readEndFileParameter(this);
          this->fadeFrames = fadeInBlackFrames;
          break;
        case '1':
                    /* fadeoutblack(frames). UNUSED */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 2;
          this->timeFading = 0;
          fadeOutBlackFrames = readEndFileParameter(this);
          this->fadeFrames = fadeOutBlackFrames;
          break;
        case '2':
                    /* fadein(frames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 3;
          this->timeFading = 0;
          fadeInFrames = readEndFileParameter(this);
          this->fadeFrames = fadeInFrames;
          break;
        case '3':
                    /* fadeout(frames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 4;
          this->timeFading = 0;
          fadeOutFrames = readEndFileParameter(this);
          this->fadeFrames = fadeOutFrames;
          break;
        case 'F':
                    /* exec(endfile) */
          backgroundSurface = loadEnding(this,this->endFileDataPtr + 1);
          if (backgroundSurface == ZUN_SUCCESS) {
            local_38 = 0;
            local_8 = 0;
            for (exec_outer = 0; exec_outer < 4; exec_outer = exec_outer + 1) {
              for (exec_inner = 0; exec_inner < 4; exec_inner = exec_inner + 1) {
                    /* The big hex number is actually an address, that address being
                       Clrd->difficulty_cleared_with_retries, the second one is
                       Clrd->difficulty_cleared_without_retries */
                if ((*(char *)(exec_outer * 0x18 + 0x69ccdc + exec_inner) == 99) ||
                   (*(char *)(exec_outer * 0x18 + 0x69cce1 + exec_inner) == 99)) {
                  *(undefined4 *)&this->unk_dependent_on_clrd = 1;
                  break;
                }
              }
            }
            goto switchD_0040fa93_caseD_52;
          }
          goto endParsing;
        case 'M':
                    /* musicfade(duration) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          musicFadeFrames = readEndFileParameter(this);
          Supervisor::fadeOutMusic(&g_Supervisor,(float)musicFadeFrames);
          break;
        case 'R':
switchD_0040fa93_caseD_52:
                    /* staffroll()
                       Assumingly this clears the entire anm stack allocated for Ending. */
          for (staffroll_loop = 0; staffroll_loop < 16; staffroll_loop = staffroll_loop + 1) {
            (&this->AnmVm)[staffroll_loop].anmFileIndex = 0;
          }
          break;
        case 'V':
                    /* scrollbg(distance, duration) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          scrollBGDistance = readEndFileParameter(this);
          scrollBGDuration = readEndFileParameter(this);
          (this->anmTimer4).current = (int)((float)scrollBGDistance / (float)scrollBGDuration);
          break;
        case 'a':
                    /* anm(???, script_index?, sprite_index?) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          anmUnk = readEndFileParameter(this);
          anmScriptIdx = readEndFileParameter(this);
          anmSpriteIdx = readEndFileParameter(this);
          AnmManager::ExecuteAnmIdx
                    ((AnmManager *)g_AnmManager,&this->AnmVm + anmUnk,anmScriptIdx + 0x600);
          AnmManager::SetActiveSprite
                    ((AnmManager *)g_AnmManager,&this->AnmVm + anmUnk,anmSpriteIdx + 0x600);
          break;
        case 'b':
                    /* background(jpg_file) */
          backgroundSurface = AnmManager::LoadSurface(g_AnmManager,0,this->endFileDataPtr + 1);
          if (backgroundSurface != ZUN_SUCCESS) goto endParsing;
          break;
        case 'c':
                    /* color(bgr_color) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          newColor = readEndFileParameter(this);
          this->textColor = newColor;
          break;
        case 'm':
                    /* musicplay(file) */
          Supervisor::PlayAudio(&g_Supervisor,this->endFileDataPtr + 1);
          break;
        case 'r':
                    /* waitreset(minframes, maxframes) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          maxWRFrames = readEndFileParameter(this);
          (this->Timer3).current = maxWRFrames;
          (this->Timer3).subFrame = 0.0;
          (this->Timer3).previous = -999;
          minWRFrames = readEndFileParameter(this);
          this->minWaitResetFrames = minWRFrames;
          while ((*this->endFileDataPtr != '\n' && (*this->endFileDataPtr != '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          while ((*this->endFileDataPtr == '\n' || (*this->endFileDataPtr == '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          goto LAB_00410546;
        case 's':
                    /* setdelay(line2Delay, topLineDelay) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          anmUnk = readEndFileParameter(this);
          this->line2Delay = anmUnk;
          anmUnk = readEndFileParameter(this);
          this->topLineDelay = anmUnk;
          break;
        case 'v':
                    /* setscroll(newVertCoordinate) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          newVertCoordinate = readEndFileParameter(this);
          (this->anmTimer4).subFrame = (float)newVertCoordinate;
          break;
        case 'w':
                    /* wait(maxFrames, minFrames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          maxFrames = readEndFileParameter(this);
          (this->Timer2).current = maxFrames;
          (this->Timer2).subFrame = 0.0;
          (this->Timer2).previous = -999;
          minFrames = readEndFileParameter(this);
          this->minWaitFrames = minFrames;
          while ((*this->endFileDataPtr != '\n' && (*this->endFileDataPtr != '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          while ((*this->endFileDataPtr == '\n' || (*this->endFileDataPtr == '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          goto LAB_00410546;
        case 'z':
          goto endParsing;
        }
        while ((*this->endFileDataPtr != '\n' && (*this->endFileDataPtr != '\r'))) {
          this->endFileDataPtr = this->endFileDataPtr + 1;
        }
        while ((*this->endFileDataPtr == '\n' || (*this->endFileDataPtr == '\r'))) {
          this->endFileDataPtr = this->endFileDataPtr + 1;
        }
      }
    } while( true );
  }
  ZunTimer::Decrement(&this->Timer2,1);
  if (this->minWaitFrames == 0) {
    if ((((g_CurFrameInput & 0x1001) != 0) &&
        ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
       ((*(int *)&this->unk_dependent_on_clrd != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
      (this->Timer2).current = 0;
      (this->Timer2).subFrame = 0.0;
      (this->Timer2).previous = -999;
    }
  }
  else {
    this->minWaitFrames = this->minWaitFrames + -1;
  }
  goto LAB_00410546;
switchD_0040fa32_caseD_0:
  if (local_38 != 0) {
    i = this->possibly_times_file_parsed;
    local_90 = (short)local_8 + 0x708 + (short)i * 2;
    iVar2 = this->possibly_times_file_parsed;
    (&this->AnmVm)[local_8 + iVar2 * 2].anmFileIndex = local_90;
    AnmManager::SetAndExecuteScript
              ((AnmManager *)pAVar3,&this->AnmVm + local_8 + iVar2 * 2,
               pAVar3->scripts[i * 2 + local_8 + 0x708]);
    AnmManager::DrawVmTextFmt
              (g_AnmManager,&this->AnmVm + local_8 + this->possibly_times_file_parsed * 2,
               this->textColor,0xc0d0d0,&local_34);
  }
  while (((*this->endFileDataPtr == '\n' || (*this->endFileDataPtr == '\0')) ||
         (*this->endFileDataPtr == '\r'))) {
    this->endFileDataPtr = this->endFileDataPtr + 1;
  }
                    /* If skip button is being held... */
  if ((g_CurFrameInput & 0x1001) == 0) {
    (this->Timer2).current = this->line2Delay;
    (this->Timer2).subFrame = 0.0;
    (this->Timer2).previous = -999;
    this->minWaitFrames = this->line2Delay;
  }
  else {
    (this->Timer2).current = this->topLineDelay;
    (this->Timer2).subFrame = 0.0;
    (this->Timer2).previous = -999;
    this->minWaitFrames = this->topLineDelay;
  }
  this->possibly_times_file_parsed = this->possibly_times_file_parsed + 1;
LAB_00410546:
  (this->Timer1).previous = (this->Timer1).current;
  Supervisor::TickTimer(&g_Supervisor,&(this->Timer1).current,&(this->Timer1).subFrame);
  (this->anmTimer4).subFrame = (this->anmTimer4).subFrame - (float)(this->anmTimer4).current;
  fVar1 = (this->anmTimer4).subFrame;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    (this->anmTimer4).subFrame = 0.0;
    (this->anmTimer4).current = 0;
  }
endParsing:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}


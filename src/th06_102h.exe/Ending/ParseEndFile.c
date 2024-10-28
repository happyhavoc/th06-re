
ZunResult __thiscall th06::Ending::ParseEndFile(Ending *this)

{
  float fVar1;
  AnmManager *pAVar2;
  ZunResult backgroundSurface;
  int anmUnk;
  int anmScriptIdx;
  int anmSpriteIdx;
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
  AnmVm *anmvm_ref;
  undefined4 *puVar3;
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
  puVar3 = (undefined4 *)&local_34;
  for (anmUnk = 9; anmUnk != 0; anmUnk = anmUnk + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  if (0 < (this->Timer3).current) {
    ZunTimer::Decrement(&this->Timer3,1);
    if (this->minWaitResetFrames == 0) {
      if ((((g_CurFrameInput & 0x1001) != 0) &&
          ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
         ((this->hasSeenEnding != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
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
    anmvm_ref = this->sprites;
    for (anmUnk = 1088; anmUnk != 0; anmUnk = anmUnk + -1) {
      (anmvm_ref->rotation).x = 0.0;
      anmvm_ref = (AnmVm *)&(anmvm_ref->rotation).y;
    }
    this->possibly_times_file_parsed = 0;
  }
  if ((this->Timer2).current < 1) {
    do {
      pAVar2 = g_AnmManager;
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
        pAVar2 = g_AnmManager;
        if (31 < local_38) {
          anmUnk = this->possibly_times_file_parsed;
          local_ac = (short)local_8 + 1800 + (short)anmUnk * 2;
          anmScriptIdx = this->possibly_times_file_parsed;
          this->sprites[local_8 + anmScriptIdx * 2].anmFileIndex = local_ac;
          AnmManager::SetAndExecuteScript
                    (pAVar2,this->sprites + local_8 + anmScriptIdx * 2,
                     pAVar2->scripts[anmUnk * 2 + local_8 + 0x708]);
          AnmManager::DrawVmTextFmt
                    (g_AnmManager,this->sprites + local_8 + this->possibly_times_file_parsed * 2,
                     (ZunColor)this->textColor,(ZunColor)0xc0d0d0,&local_34);
          if (local_8 != 0) goto LAB_00410546;
          local_8 = 1;
          local_38 = 0;
          puVar3 = (undefined4 *)&local_34;
          for (anmUnk = 9; anmUnk != 0; anmUnk = anmUnk + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          *(undefined2 *)puVar3 = 0;
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
          fadeInBlackFrames = ReadEndFileParameter(this);
          this->fadeFrames = fadeInBlackFrames;
          break;
        case '1':
                    /* fadeoutblack(frames). UNUSED */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 2;
          this->timeFading = 0;
          fadeOutBlackFrames = ReadEndFileParameter(this);
          this->fadeFrames = fadeOutBlackFrames;
          break;
        case '2':
                    /* fadein(frames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 3;
          this->timeFading = 0;
          fadeInFrames = ReadEndFileParameter(this);
          this->fadeFrames = fadeInFrames;
          break;
        case '3':
                    /* fadeout(frames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          this->fadeType = 4;
          this->timeFading = 0;
          fadeOutFrames = ReadEndFileParameter(this);
          this->fadeFrames = fadeOutFrames;
          break;
        case 'F':
                    /* exec(endfile) */
          backgroundSurface = LoadEnding(this,this->endFileDataPtr + 1);
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
                  this->hasSeenEnding = 1;
                  break;
                }
              }
            }
            goto switchD_0040fa93_caseD_52;
          }
          backgroundSurface = ZUN_ERROR;
          goto endParsing;
        case 'M':
                    /* musicfade(duration) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          musicFadeFrames = ReadEndFileParameter(this);
          Supervisor::FadeOutMusic(&g_Supervisor,(float)musicFadeFrames);
          break;
        case 'R':
switchD_0040fa93_caseD_52:
                    /* staffroll()
                       Assumingly this clears the entire anm stack allocated for Ending. */
          for (staffroll_loop = 0; staffroll_loop < 16; staffroll_loop = staffroll_loop + 1) {
            this->sprites[staffroll_loop].anmFileIndex = 0;
          }
          break;
        case 'V':
                    /* scrollbg(distance, duration) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          scrollBGDistance = ReadEndFileParameter(this);
          scrollBGDuration = ReadEndFileParameter(this);
          this->backgroundScrollSpeed = (float)scrollBGDistance / (float)scrollBGDuration;
          break;
        case 'a':
                    /* anm(???, script_index?, sprite_index?) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          anmUnk = ReadEndFileParameter(this);
          anmScriptIdx = ReadEndFileParameter(this);
          anmSpriteIdx = ReadEndFileParameter(this);
          AnmManager::ExecuteAnmIdx(g_AnmManager,this->sprites + anmUnk,anmScriptIdx + 0x600);
          AnmManager::SetActiveSprite(g_AnmManager,this->sprites + anmUnk,anmSpriteIdx + 0x600);
          break;
        case 'b':
                    /* background(jpg_file) */
          backgroundSurface = AnmManager::LoadSurface(g_AnmManager,0,this->endFileDataPtr + 1);
          if (backgroundSurface != ZUN_SUCCESS) {
            backgroundSurface = ZUN_ERROR;
            goto endParsing;
          }
          break;
        case 'c':
                    /* color(bgr_color) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          newColor = ReadEndFileParameter(this);
          this->textColor = newColor;
          break;
        case 'm':
                    /* musicplay(file) */
          Supervisor::PlayAudio(&g_Supervisor,this->endFileDataPtr + 1);
          break;
        case 'r':
                    /* waitreset(minframes, maxframes) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          maxWRFrames = ReadEndFileParameter(this);
          (this->Timer3).current = maxWRFrames;
          (this->Timer3).subFrame = 0.0;
          (this->Timer3).previous = -999;
          minWRFrames = ReadEndFileParameter(this);
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
          anmUnk = ReadEndFileParameter(this);
          this->line2Delay = anmUnk;
          anmUnk = ReadEndFileParameter(this);
          this->topLineDelay = anmUnk;
          break;
        case 'v':
                    /* setscroll(newVertCoordinate) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          newVertCoordinate = ReadEndFileParameter(this);
          (this->backgroundPos).y = (float)newVertCoordinate;
          break;
        case 'w':
                    /* wait(maxFrames, minFrames) */
          this->endFileDataPtr = this->endFileDataPtr + 1;
          maxFrames = ReadEndFileParameter(this);
          (this->Timer2).current = maxFrames;
          (this->Timer2).subFrame = 0.0;
          (this->Timer2).previous = -999;
          minFrames = ReadEndFileParameter(this);
          this->minWaitFrames = minFrames;
          while ((*this->endFileDataPtr != '\n' && (*this->endFileDataPtr != '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          while ((*this->endFileDataPtr == '\n' || (*this->endFileDataPtr == '\r'))) {
            this->endFileDataPtr = this->endFileDataPtr + 1;
          }
          goto LAB_00410546;
        case 'z':
          backgroundSurface = ZUN_ERROR;
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
       ((this->hasSeenEnding != 0 && ((g_CurFrameInput & 0x100) != 0)))) {
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
    anmUnk = this->possibly_times_file_parsed;
    local_90 = (short)local_8 + 0x708 + (short)anmUnk * 2;
    anmScriptIdx = this->possibly_times_file_parsed;
    this->sprites[local_8 + anmScriptIdx * 2].anmFileIndex = local_90;
    AnmManager::SetAndExecuteScript
              (pAVar2,this->sprites + local_8 + anmScriptIdx * 2,
               pAVar2->scripts[anmUnk * 2 + local_8 + 0x708]);
    AnmManager::DrawVmTextFmt
              (g_AnmManager,this->sprites + local_8 + this->possibly_times_file_parsed * 2,
               (ZunColor)this->textColor,(ZunColor)0xc0d0d0,&local_34);
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
  (this->backgroundPos).y = (this->backgroundPos).y - this->backgroundScrollSpeed;
  fVar1 = (this->backgroundPos).y;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    (this->backgroundPos).y = 0.0;
    this->backgroundScrollSpeed = 0.0;
  }
  backgroundSurface = ZUN_SUCCESS;
endParsing:
  __security_check_cookie(local_c ^ unaff_retaddr);
  return backgroundSurface;
}


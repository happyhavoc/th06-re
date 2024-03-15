
ZunResult __fastcall Gui::FUN_00417d29(Gui *gui)

{
  ZunResult loadAnm;
  AnmVm *vm;
  int iVar1;
  int unaff_EDI;
  short local_14;
  int local_8;
  AnmManager *anm_mgr;
  GuiImpl *gui_impl;
  
  anm_mgr = g_AnmManager;
  if (g_Supervisor.curState == 3) {
    gui_impl = gui->impl;
    (gui_impl->vm9).anmFileIndex = 0x619;
    AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm9,anm_mgr->scripts[0x619]);
    (gui->impl->vm9).pendingInterrupt = 1;
  }
  else {
    gui_impl = gui->impl;
    for (iVar1 = 0xb11; iVar1 != 0; iVar1 = iVar1 + -1) {
      gui_impl->vms[0].rotation.x = 0.0;
      gui_impl = (GuiImpl *)&gui_impl->vms[0].rotation.y;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0xd,"data/front.anm",0x600);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0xe,"data/loading.anm",0x619);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    (gui->impl->vm9).spriteNumber = -1;
    if (g_GameManager.character == 0) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face00a.anm",0x4a0);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face00b.anm",0x4a2);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face00c.anm",0x4a4);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
    else if (g_GameManager.character == 1) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face01a.anm",0x4a0);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face01b.anm",0x4a2);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face01c.anm",0x4a4);
      if (loadAnm != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
  }
                    /* Clearly you know that switch cases exist zun.. */
  if (g_GameManager.current_stage == 1) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face03a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face03b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg1.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 2) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face05a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg2.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 3) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face06a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face06b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg3.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 4) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face08b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg4.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 5) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face09b.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg5.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.current_stage == 6) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09b.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face10a.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face10b.anm",0x4ab);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg6.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  else {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face12a.anm",0x4aa);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face12b.anm",0x4ab);
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    loadAnm = FUN_00418665(gui,"data/msg7.dat");
    if (loadAnm != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  if (g_Supervisor.curState != 3) {
    for (local_8 = 0; anm_mgr = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
      local_14 = (short)local_8 + 0x600;
      vm = gui->impl->vms + local_8;
      vm->anmFileIndex = local_14;
      AnmManager::SetAndExecuteScript(anm_mgr,vm,anm_mgr->scripts[local_8 + 0x600]);
    }
  }
  gui->boss_present = false;
  gui->impl->field1_0x1ba0 = 0;
  gui->boss_health_bar1 = 0.0;
  gui->boss_health_bar2 = 0.0;
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm3).anmFileIndex = 0x4a1;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm3,anm_mgr->scripts[0x4a1]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm4).anmFileIndex = 0x4a3;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm4,anm_mgr->scripts[0x4a3]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm5).anmFileIndex = 0x706;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm5,anm_mgr->scripts[0x706]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm6).anmFileIndex = 0x707;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm6,anm_mgr->scripts[0x707]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm7).anmFileIndex = 0x617;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm7,anm_mgr->scripts[0x617]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm8).anmFileIndex = 0x618;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm8,anm_mgr->scripts[0x618]);
  (gui->impl->vm3).currentInstruction = (AnmRawInstr *)0x0;
  (gui->impl->vm5).currentInstruction = (AnmRawInstr *)0x0;
  (gui->impl->vm4).currentInstruction = (AnmRawInstr *)0x0;
  (gui->impl->vm6).currentInstruction = (AnmRawInstr *)0x0;
  *(uint *)&(gui->impl->vm3).flags = *(uint *)&(gui->impl->vm3).flags & 0xfffffffe;
  *(uint *)&(gui->impl->vm5).flags = *(uint *)&(gui->impl->vm5).flags & 0xfffffffe;
  *(uint *)&(gui->impl->vm4).flags = *(uint *)&(gui->impl->vm4).flags & 0xfffffffe;
  *(uint *)&(gui->impl->vm6).flags = *(uint *)&(gui->impl->vm6).flags & 0xfffffffe;
  (gui->impl->vm5).fontWidth = '\x0f';
  (gui->impl->vm5).fontHeight = '\x0f';
  (gui->impl->vm6).fontWidth = '\x0f';
  (gui->impl->vm6).fontHeight = '\x0f';
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm1).anmFileIndex = 0x700;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm1,anm_mgr->scripts[0x700]);
  anm_mgr = g_AnmManager;
  gui_impl = gui->impl;
  (gui_impl->vm2).anmFileIndex = 0x701;
  AnmManager::SetAndExecuteScript(anm_mgr,&gui_impl->vm2,anm_mgr->scripts[0x701]);
  AnmManager::FUN_00434e20
            (g_AnmManager,&gui->impl->vm1,0xe0ffff,0,(char *)(g_Stage.stdData + 0x10),unaff_EDI);
  (gui->impl->vm2).fontWidth = '\x10';
  (gui->impl->vm2).fontHeight = '\x10';
  AnmManager::FUN_00434c40(g_AnmManager,&gui->impl->vm2,0xe0ffff,0,"♪%s",g_Stage.stdData + 0x90);
  (gui->impl->msg).current_msg_idx = 0xffffffff;
  gui->impl->field13_0x2bdc = 0;
  (gui->impl->field15_0x2be4).field2_0x10 = 0;
  (gui->impl->field16_0x2c04).field2_0x10 = 0;
  (gui->impl->field17_0x2c24).field2_0x10 = 0;
  gui->flags = gui->flags & 0xfffffffc | 2;
  gui->flags = gui->flags & 0xfffffff3 | 8;
  gui->flags = gui->flags & 0xffffff3f | 0x80;
  gui->flags = gui->flags & 0xfffffcff | 0x200;
  gui->flags = gui->flags & 0xffffffcf | 0x20;
  return ZUN_SUCCESS;
}


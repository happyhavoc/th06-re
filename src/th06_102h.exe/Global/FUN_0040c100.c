
void FUN_0040c100(int param_1)

{
  *(undefined4 *)(param_1 + 0x9a8) =
       *(undefined4 *)
        (&DAT_00476264 + (uint)g_GameManager.shottype * 0xc + (uint)g_GameManager.character * 0x18);
  *(undefined4 *)(param_1 + 0x9ac) =
       *(undefined4 *)
        (&DAT_00476268 + (uint)g_GameManager.shottype * 0xc + (uint)g_GameManager.character * 0x18);
  *(undefined4 *)(param_1 + 0x9b0) =
       *(undefined4 *)
        (&DAT_0047626c + (uint)g_GameManager.shottype * 0xc + (uint)g_GameManager.character * 0x18);
  return;
}


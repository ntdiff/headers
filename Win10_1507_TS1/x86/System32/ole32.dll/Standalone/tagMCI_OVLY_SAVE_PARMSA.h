struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagMCI_OVLY_SAVE_PARMSA
{
  /* 0x0000 */ unsigned long dwCallback;
  /* 0x0004 */ const char* lpfilename;
  /* 0x0008 */ struct tagRECT rc;
}; /* size: 0x0018 */


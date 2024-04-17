struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagMCI_OVLY_LOAD_PARMSW
{
  /* 0x0000 */ unsigned __int64 dwCallback;
  /* 0x0008 */ const wchar_t* lpfilename;
  /* 0x0010 */ struct tagRECT rc;
}; /* size: 0x0020 */


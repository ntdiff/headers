struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagHELPINFO
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ int iContextType;
  /* 0x0008 */ int iCtrlId;
  /* 0x0010 */ void* hItemHandle;
  /* 0x0018 */ unsigned __int64 dwContextId;
  /* 0x0020 */ struct tagPOINT MousePos;
}; /* size: 0x0028 */


typedef struct _ADDJOB_INFO_1W
{
  /* 0x0000 */ wchar_t* Path;
  /* 0x0008 */ unsigned long JobId;
  /* 0x000c */ long __PADDING__[1];
} ADDJOB_INFO_1W, *PADDJOB_INFO_1W; /* size: 0x0010 */


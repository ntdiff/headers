typedef struct _OSVERSIONINFOEX3W
{
  /* 0x0000 */ unsigned long dwOSVersionInfoSize;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ unsigned long dwMinorVersion;
  /* 0x000c */ unsigned long dwBuildNumber;
  union
  {
    /* 0x0010 */ unsigned long dwPlatformId;
    /* 0x0010 */ unsigned long dwQfeNumber;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0014 */ wchar_t szCSDVersion[128];
    /* 0x0014 */ wchar_t szLayerAttrib[128];
  }; /* size: 0x0100 */
  /* 0x0114 */ unsigned short wServicePackMajor;
  /* 0x0116 */ unsigned short wServicePackMinor;
  /* 0x0118 */ unsigned short wSuiteMask;
  /* 0x011a */ unsigned char wProductType;
  /* 0x011b */ unsigned char wReserved;
  /* 0x011c */ unsigned long wSuiteMaskEx;
  /* 0x0120 */ unsigned long wReserved2;
  union
  {
    union
    {
      /* 0x0124 */ unsigned short wRawInput16;
      struct /* bitfield */
      {
        /* 0x0124 */ unsigned short wLayerNumber : 12; /* bit position: 0 */
        /* 0x0124 */ unsigned short wAttribSelector : 4; /* bit position: 12 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Input;
  /* 0x0126 */ unsigned short wLayerCount;
  /* 0x0128 */ unsigned long dwLayerFlags;
} OSVERSIONINFOEX3W, *POSVERSIONINFOEX3W; /* size: 0x012c */


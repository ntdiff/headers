typedef struct _OSVERSIONINFOEX3A
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
    /* 0x0014 */ char szCSDVersion[128];
    /* 0x0014 */ char szLayerAttrib[128];
  }; /* size: 0x0080 */
  /* 0x0094 */ unsigned short wServicePackMajor;
  /* 0x0096 */ unsigned short wServicePackMinor;
  /* 0x0098 */ unsigned short wSuiteMask;
  /* 0x009a */ unsigned char wProductType;
  /* 0x009b */ unsigned char wReserved;
  /* 0x009c */ unsigned long wSuiteMaskEx;
  /* 0x00a0 */ unsigned long wReserved2;
  union
  {
    union
    {
      /* 0x00a4 */ unsigned short wRawInput16;
      struct /* bitfield */
      {
        /* 0x00a4 */ unsigned short wLayerNumber : 12; /* bit position: 0 */
        /* 0x00a4 */ unsigned short wAttribSelector : 4; /* bit position: 12 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Input;
  /* 0x00a6 */ unsigned short wLayerCount;
  /* 0x00a8 */ unsigned long dwLayerFlags;
} OSVERSIONINFOEX3A, *POSVERSIONINFOEX3A; /* size: 0x00ac */


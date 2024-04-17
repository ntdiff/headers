struct DelayLoadProc
{
  /* 0x0000 */ int fImportByName;
  union
  {
    /* 0x0008 */ const char* szProcName;
    struct
    {
      /* 0x0008 */ unsigned long dwOrdinal;
      /* 0x000c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

struct DelayLoadInfo
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0008 */ const struct ImgDelayDescrV2* pidd;
  /* 0x0010 */ void** ppfn /* function */;
  /* 0x0018 */ const char* szDll;
  /* 0x0020 */ struct DelayLoadProc dlp;
  /* 0x0030 */ struct HINSTANCE__* hmodCur;
  /* 0x0038 */ void* pfnCur /* function */;
  /* 0x0040 */ unsigned long dwLastError;
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */


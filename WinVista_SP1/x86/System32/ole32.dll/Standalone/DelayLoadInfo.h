struct DelayLoadProc
{
  /* 0x0000 */ int fImportByName;
  union
  {
    /* 0x0004 */ const char* szProcName;
    /* 0x0004 */ unsigned long dwOrdinal;
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

struct DelayLoadInfo
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ const struct ImgDelayDescrV2* pidd;
  /* 0x0008 */ void** ppfn /* function */;
  /* 0x000c */ const char* szDll;
  /* 0x0010 */ struct DelayLoadProc dlp;
  /* 0x0018 */ struct HINSTANCE__* hmodCur;
  /* 0x001c */ void* pfnCur /* function */;
  /* 0x0020 */ unsigned long dwLastError;
}; /* size: 0x0024 */


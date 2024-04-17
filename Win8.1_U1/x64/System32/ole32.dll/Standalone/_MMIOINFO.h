typedef struct _MMIOINFO
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long fccIOProc;
  /* 0x0008 */ void* pIOProc /* function */;
  /* 0x0010 */ unsigned int wErrorRet;
  /* 0x0014 */ struct HTASK__* htask;
  /* 0x001c */ long cchBuffer;
  /* 0x0020 */ char* pchBuffer;
  /* 0x0028 */ char* pchNext;
  /* 0x0030 */ char* pchEndRead;
  /* 0x0038 */ char* pchEndWrite;
  /* 0x0040 */ long lBufOffset;
  /* 0x0044 */ long lDiskOffset;
  /* 0x0048 */ unsigned long adwInfo[3];
  /* 0x0054 */ unsigned long dwReserved1;
  /* 0x0058 */ unsigned long dwReserved2;
  /* 0x005c */ struct HMMIO__* hmmio;
} MMIOINFO, *PMMIOINFO; /* size: 0x0064 */


typedef struct _MMIOINFO
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long fccIOProc;
  /* 0x0008 */ void* pIOProc /* function */;
  /* 0x000c */ unsigned int wErrorRet;
  /* 0x0010 */ struct HTASK__* htask;
  /* 0x0014 */ long cchBuffer;
  /* 0x0018 */ char* pchBuffer;
  /* 0x001c */ char* pchNext;
  /* 0x0020 */ char* pchEndRead;
  /* 0x0024 */ char* pchEndWrite;
  /* 0x0028 */ long lBufOffset;
  /* 0x002c */ long lDiskOffset;
  /* 0x0030 */ unsigned long adwInfo[3];
  /* 0x003c */ unsigned long dwReserved1;
  /* 0x0040 */ unsigned long dwReserved2;
  /* 0x0044 */ struct HMMIO__* hmmio;
} MMIOINFO, *PMMIOINFO; /* size: 0x0048 */


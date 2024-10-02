typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

struct WINTRUST_DETACHED_SIG_BLOBS_
{
  /* 0x0000 */ union _LARGE_INTEGER cbContentObject;
  /* 0x0008 */ unsigned char* pbContentObject;
  /* 0x0010 */ unsigned long cbSignatureObject;
  /* 0x0018 */ unsigned char* pbSignatureObject;
}; /* size: 0x0020 */


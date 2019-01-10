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

typedef struct _HBIN
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long FileOffset;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Reserved1[2];
  /* 0x0014 */ union _LARGE_INTEGER TimeStamp;
  /* 0x001c */ unsigned long Spare;
} HBIN, *PHBIN; /* size: 0x0020 */


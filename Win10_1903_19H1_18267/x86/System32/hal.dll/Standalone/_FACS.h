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

typedef struct _FACS
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long HardwareSignature;
  /* 0x000c */ unsigned long pFirmwareWakingVector;
  /* 0x0010 */ unsigned long GlobalLock;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ union _LARGE_INTEGER x_FirmwareWakingVector;
  /* 0x0020 */ unsigned char version;
  /* 0x0021 */ unsigned char Reserved[31];
} FACS, *PFACS; /* size: 0x0040 */


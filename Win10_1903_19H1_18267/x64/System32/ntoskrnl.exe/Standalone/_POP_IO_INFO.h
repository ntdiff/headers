typedef enum _POP_IO_STATUS
{
  IoReady = 0,
  IoPending = 1,
  IoDone = 2,
} POP_IO_STATUS, *PPOP_IO_STATUS;

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

typedef struct _POP_IO_INFO
{
  /* 0x0000 */ struct _MDL* DumpMdl;
  /* 0x0008 */ enum _POP_IO_STATUS IoStatus;
  /* 0x0010 */ unsigned __int64 IoStartCount;
  /* 0x0018 */ unsigned __int64 IoBytesCompleted;
  /* 0x0020 */ unsigned __int64 IoBytesInProgress;
  /* 0x0028 */ unsigned __int64 RequestSize;
  /* 0x0030 */ union _LARGE_INTEGER IoLocation;
  /* 0x0038 */ unsigned __int64 FileOffset;
  /* 0x0040 */ void* Buffer;
  /* 0x0048 */ unsigned char AsyncCapable;
  /* 0x0050 */ unsigned __int64 BytesToRead;
  /* 0x0058 */ unsigned long Pages;
  /* 0x0060 */ unsigned __int64 HighestChecksumIndex;
  /* 0x0068 */ unsigned short PreviousChecksum;
  /* 0x006a */ char __PADDING__[6];
} POP_IO_INFO, *PPOP_IO_INFO; /* size: 0x0070 */


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

typedef struct _FSRTL_COMMON_FCB_HEADER
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned char Flags;
  /* 0x0005 */ unsigned char IsFastIoPossible;
  /* 0x0006 */ unsigned char Flags2;
  struct /* bitfield */
  {
    /* 0x0007 */ unsigned char Reserved : 4; /* bit position: 0 */
    /* 0x0007 */ unsigned char Version : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0008 */ struct _ERESOURCE* Resource;
  /* 0x0010 */ struct _ERESOURCE* PagingIoResource;
  /* 0x0018 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0020 */ union _LARGE_INTEGER FileSize;
  /* 0x0028 */ union _LARGE_INTEGER ValidDataLength;
} FSRTL_COMMON_FCB_HEADER, *PFSRTL_COMMON_FCB_HEADER; /* size: 0x0030 */


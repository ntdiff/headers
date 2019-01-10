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

typedef struct _RSDP
{
  /* 0x0000 */ unsigned __int64 Signature;
  /* 0x0008 */ unsigned char Checksum;
  /* 0x0009 */ unsigned char OEMID[6];
  /* 0x000f */ unsigned char Revision;
  /* 0x0010 */ unsigned long RsdtAddress;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ union _LARGE_INTEGER XsdtAddress;
  /* 0x0020 */ unsigned char XChecksum;
  /* 0x0021 */ unsigned char Reserved[3];
} RSDP, *PRSDP; /* size: 0x0024 */


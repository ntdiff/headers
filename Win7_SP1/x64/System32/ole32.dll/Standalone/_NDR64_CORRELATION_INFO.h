typedef struct _NDR64_CORRELATION_INFO_DATA
{
  /* 0x0000 */ unsigned char* pMemoryObject;
  /* 0x0008 */ const void* pCorrDesc;
  /* 0x0010 */ __int64 Value;
  /* 0x0018 */ long CheckKind;
  /* 0x001c */ long __PADDING__[1];
} NDR64_CORRELATION_INFO_DATA, *PNDR64_CORRELATION_INFO_DATA; /* size: 0x0020 */

typedef struct _NDR64_CORRELATION_INFO
{
  /* 0x0000 */ struct _NDR64_CORRELATION_INFO* pNext;
  /* 0x0008 */ unsigned int SlotsUsed;
  /* 0x0010 */ struct _NDR64_CORRELATION_INFO_DATA Data[5];
} NDR64_CORRELATION_INFO, *PNDR64_CORRELATION_INFO; /* size: 0x00b0 */


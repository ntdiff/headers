typedef struct _NDR_CORRELATION_INFO_HEADER
{
  /* 0x0000 */ struct _NDR_CORRELATION_INFO* pCache;
  /* 0x0008 */ struct _NDR_CORRELATION_INFO* pInfo;
  /* 0x0010 */ long DataSize;
  /* 0x0014 */ long DataLen;
} NDR_CORRELATION_INFO_HEADER, *PNDR_CORRELATION_INFO_HEADER; /* size: 0x0018 */

typedef struct _NDR_CORRELATION_INFO_DATA
{
  /* 0x0000 */ unsigned char* pMemoryObject;
  /* 0x0008 */ const unsigned char* pCorrDesc;
  /* 0x0010 */ __int64 Value;
  /* 0x0018 */ long CheckKind;
  /* 0x001c */ long Reserve64;
} NDR_CORRELATION_INFO_DATA, *PNDR_CORRELATION_INFO_DATA; /* size: 0x0020 */

typedef struct _NDR_CORRELATION_INFO
{
  /* 0x0000 */ struct _NDR_CORRELATION_INFO_HEADER Header;
  /* 0x0018 */ struct _NDR_CORRELATION_INFO_DATA Data[1];
} NDR_CORRELATION_INFO, *PNDR_CORRELATION_INFO; /* size: 0x0038 */


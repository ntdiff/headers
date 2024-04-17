typedef struct _NDR_CORRELATION_INFO_HEADER
{
  /* 0x0000 */ struct _NDR_CORRELATION_INFO* pCache;
  /* 0x0004 */ struct _NDR_CORRELATION_INFO* pInfo;
  /* 0x0008 */ long DataSize;
  /* 0x000c */ long DataLen;
} NDR_CORRELATION_INFO_HEADER, *PNDR_CORRELATION_INFO_HEADER; /* size: 0x0010 */

typedef struct _NDR_CORRELATION_INFO_DATA
{
  /* 0x0000 */ unsigned char* pMemoryObject;
  /* 0x0004 */ const unsigned char* pCorrDesc;
  /* 0x0008 */ long Value;
  /* 0x000c */ long CheckKind;
} NDR_CORRELATION_INFO_DATA, *PNDR_CORRELATION_INFO_DATA; /* size: 0x0010 */

typedef struct _NDR_CORRELATION_INFO
{
  /* 0x0000 */ struct _NDR_CORRELATION_INFO_HEADER Header;
  /* 0x0010 */ struct _NDR_CORRELATION_INFO_DATA Data[1];
} NDR_CORRELATION_INFO, *PNDR_CORRELATION_INFO; /* size: 0x0020 */


typedef struct _NDR_CORRELATION_INFO_HEADER
{
  /* 0x0000 */ struct _NDR_CORRELATION_INFO* pCache;
  /* 0x0008 */ struct _NDR_CORRELATION_INFO* pInfo;
  /* 0x0010 */ long DataSize;
  /* 0x0014 */ long DataLen;
} NDR_CORRELATION_INFO_HEADER, *PNDR_CORRELATION_INFO_HEADER; /* size: 0x0018 */


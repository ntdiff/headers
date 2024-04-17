typedef struct _NDR_CORRELATION_INFO_DATA
{
  /* 0x0000 */ unsigned char* pMemoryObject;
  /* 0x0008 */ const unsigned char* pCorrDesc;
  /* 0x0010 */ __int64 Value;
  /* 0x0018 */ long CheckKind;
  /* 0x001c */ long Reserve64;
} NDR_CORRELATION_INFO_DATA, *PNDR_CORRELATION_INFO_DATA; /* size: 0x0020 */


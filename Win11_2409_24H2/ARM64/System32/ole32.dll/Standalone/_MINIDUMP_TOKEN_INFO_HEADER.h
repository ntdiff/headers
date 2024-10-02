typedef struct _MINIDUMP_TOKEN_INFO_HEADER
{
  /* 0x0000 */ unsigned long TokenSize;
  /* 0x0004 */ unsigned long TokenId;
  /* 0x0008 */ unsigned __int64 TokenHandle;
} MINIDUMP_TOKEN_INFO_HEADER, *PMINIDUMP_TOKEN_INFO_HEADER; /* size: 0x0010 */


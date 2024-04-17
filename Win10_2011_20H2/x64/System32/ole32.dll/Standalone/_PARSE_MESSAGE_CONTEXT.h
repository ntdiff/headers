typedef struct _PARSE_MESSAGE_CONTEXT
{
  /* 0x0000 */ unsigned long fFlags;
  /* 0x0004 */ unsigned long cwSavColumn;
  /* 0x0008 */ unsigned __int64 iwSrc;
  /* 0x0010 */ unsigned __int64 iwDst;
  /* 0x0018 */ unsigned __int64 iwDstSpace;
  /* 0x0020 */ char* lpvArgStart;
} PARSE_MESSAGE_CONTEXT, *PPARSE_MESSAGE_CONTEXT; /* size: 0x0028 */


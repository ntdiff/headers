typedef struct _PARSE_MESSAGE_CONTEXT
{
  /* 0x0000 */ unsigned long fFlags;
  /* 0x0004 */ unsigned long cwSavColumn;
  /* 0x0008 */ unsigned long iwSrc;
  /* 0x000c */ unsigned long iwDst;
  /* 0x0010 */ unsigned long iwDstSpace;
  /* 0x0014 */ char* lpvArgStart;
} PARSE_MESSAGE_CONTEXT, *PPARSE_MESSAGE_CONTEXT; /* size: 0x0018 */


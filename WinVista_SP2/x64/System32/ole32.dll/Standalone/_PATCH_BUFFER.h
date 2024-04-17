typedef struct _PATCH_BUFFER
{
  /* 0x0000 */ unsigned short PointerIndex;
  /* 0x0002 */ unsigned short Fill1;
  /* 0x0004 */ unsigned short BufferSize;
  /* 0x0006 */ unsigned short Fill2;
  /* 0x0008 */ unsigned __int64 Buffer[31];
} PATCH_BUFFER, *PPATCH_BUFFER; /* size: 0x0100 */


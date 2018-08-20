typedef struct _PEB_FREE_BLOCK
{
  /* 0x0000 */ struct _PEB_FREE_BLOCK* Next;
  /* 0x0004 */ unsigned long Size;
} PEB_FREE_BLOCK, *PPEB_FREE_BLOCK; /* size: 0x0008 */


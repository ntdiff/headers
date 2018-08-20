typedef struct _PEB_FREE_BLOCK
{
  /* 0x0000 */ struct _PEB_FREE_BLOCK* Next;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ long __PADDING__[1];
} PEB_FREE_BLOCK, *PPEB_FREE_BLOCK; /* size: 0x0010 */


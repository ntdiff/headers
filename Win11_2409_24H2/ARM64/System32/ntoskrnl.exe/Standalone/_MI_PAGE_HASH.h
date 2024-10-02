typedef struct _MI_PAGE_HASH
{
  /* 0x0000 */ unsigned long HashValue;
  /* 0x0004 */ unsigned long PageFileOffset;
  /* 0x0008 */ struct _MMPTE* OwningPte;
} MI_PAGE_HASH, *PMI_PAGE_HASH; /* size: 0x0010 */


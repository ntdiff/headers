typedef struct _ALPC_DATA_VIEW_ATTR
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ void* SectionHandle;
  /* 0x0008 */ void* ViewBase;
  /* 0x000c */ unsigned long ViewSize;
} ALPC_DATA_VIEW_ATTR, *PALPC_DATA_VIEW_ATTR; /* size: 0x0010 */


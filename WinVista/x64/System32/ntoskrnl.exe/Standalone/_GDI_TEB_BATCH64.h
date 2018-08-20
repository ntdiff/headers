typedef struct _GDI_TEB_BATCH64
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0008 */ unsigned __int64 HDC;
  /* 0x0010 */ unsigned long Buffer[310];
} GDI_TEB_BATCH64, *PGDI_TEB_BATCH64; /* size: 0x04e8 */


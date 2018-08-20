typedef struct _GDI_TEB_BATCH
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long HDC;
  /* 0x0008 */ unsigned long Buffer[310];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH; /* size: 0x04e0 */


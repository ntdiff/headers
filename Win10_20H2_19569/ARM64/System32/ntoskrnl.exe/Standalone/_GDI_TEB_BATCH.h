typedef struct _GDI_TEB_BATCH
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Offset : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long HasRenderingCommand : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0008 */ unsigned __int64 HDC;
  /* 0x0010 */ unsigned long Buffer[310];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH; /* size: 0x04e8 */


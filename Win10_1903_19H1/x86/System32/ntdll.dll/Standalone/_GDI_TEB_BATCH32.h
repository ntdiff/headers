typedef struct _GDI_TEB_BATCH32
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Offset : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long HasRenderingCommand : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long HDC;
  /* 0x0008 */ unsigned long Buffer[310];
} GDI_TEB_BATCH32, *PGDI_TEB_BATCH32; /* size: 0x04e0 */


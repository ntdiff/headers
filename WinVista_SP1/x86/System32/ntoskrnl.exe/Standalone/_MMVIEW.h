typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned long Entry;
  union
  {
    /* 0x0004 */ unsigned long Writable : 1; /* bit position: 0 */
    /* 0x0004 */ struct _CONTROL_AREA* ControlArea;
  }; /* size: 0x0004 */
} MMVIEW, *PMMVIEW; /* size: 0x0008 */


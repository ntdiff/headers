typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned __int64 Entry;
  union
  {
    /* 0x0008 */ unsigned __int64 Writable : 1; /* bit position: 0 */
    /* 0x0008 */ struct _CONTROL_AREA* ControlArea;
  }; /* size: 0x0008 */
} MMVIEW, *PMMVIEW; /* size: 0x0010 */


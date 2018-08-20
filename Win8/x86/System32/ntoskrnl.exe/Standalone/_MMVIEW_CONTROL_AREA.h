typedef union _MMVIEW_CONTROL_AREA
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Writable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ExceptionForInPageErrors : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UsedForControlArea : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MMVIEW_CONTROL_AREA, *PMMVIEW_CONTROL_AREA; /* size: 0x0004 */


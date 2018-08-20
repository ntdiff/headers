typedef union _MMVIEW_CONTROL_AREA
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Writable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ExceptionForInPageErrors : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 UsedForControlArea : 61; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} MMVIEW_CONTROL_AREA, *PMMVIEW_CONTROL_AREA; /* size: 0x0008 */


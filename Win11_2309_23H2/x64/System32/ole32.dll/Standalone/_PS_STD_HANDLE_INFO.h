typedef struct _PS_STD_HANDLE_INFO
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long StdHandleState : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long PseudoHandleMask : 3; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long StdHandleSubsystemType;
} PS_STD_HANDLE_INFO, *PPS_STD_HANDLE_INFO; /* size: 0x0008 */


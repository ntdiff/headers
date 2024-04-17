typedef struct _PROCESS_MITIGATION_DEP_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Enable : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long DisableAtlThunkEmulation : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedFlags : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned char Permanent;
  /* 0x0005 */ char __PADDING__[3];
} PROCESS_MITIGATION_DEP_POLICY, *PPROCESS_MITIGATION_DEP_POLICY; /* size: 0x0008 */


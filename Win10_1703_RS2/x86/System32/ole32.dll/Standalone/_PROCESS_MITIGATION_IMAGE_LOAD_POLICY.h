typedef struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long NoRemoteImages : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long NoLowMandatoryLabelImages : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PreferSystem32Images : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_IMAGE_LOAD_POLICY, *PPROCESS_MITIGATION_IMAGE_LOAD_POLICY; /* size: 0x0004 */


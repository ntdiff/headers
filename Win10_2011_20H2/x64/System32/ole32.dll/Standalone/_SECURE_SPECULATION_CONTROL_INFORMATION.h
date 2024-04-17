typedef struct _SECURE_SPECULATION_CONTROL_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long KvaShadowSupported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long KvaShadowEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long KvaShadowUserGlobal : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long KvaShadowPcid : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long MbClearEnabled : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Reserved : 27; /* bit position: 5 */
    }; /* bitfield */
  } /* size: 0x0004 */ SecureSpeculationFlags;
} SECURE_SPECULATION_CONTROL_INFORMATION, *PSECURE_SPECULATION_CONTROL_INFORMATION; /* size: 0x0004 */


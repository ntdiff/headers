typedef struct _SYSTEM_SECURITY_MODEL_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ReservedFlag : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AllowDeviceOwnerProtectionDowngrade : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0004 */ SecurityModelFlags;
} SYSTEM_SECURITY_MODEL_INFORMATION, *PSYSTEM_SECURITY_MODEL_INFORMATION; /* size: 0x0004 */


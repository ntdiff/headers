typedef struct _SYSTEM_TRUSTEDAPPS_RUNTIME_INFORMATION
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Supported : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Spare : 63; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0008 */ Flags;
  /* 0x0008 */ void* RemoteBreakingRoutine;
} SYSTEM_TRUSTEDAPPS_RUNTIME_INFORMATION, *PSYSTEM_TRUSTEDAPPS_RUNTIME_INFORMATION; /* size: 0x0010 */


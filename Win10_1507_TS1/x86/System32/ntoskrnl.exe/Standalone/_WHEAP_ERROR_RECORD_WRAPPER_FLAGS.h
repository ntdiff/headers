typedef union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Preallocated : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FromPersistentStore : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PlatformPfaControl : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long PlatformDirectedOffline : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEAP_ERROR_RECORD_WRAPPER_FLAGS, *PWHEAP_ERROR_RECORD_WRAPPER_FLAGS; /* size: 0x0004 */


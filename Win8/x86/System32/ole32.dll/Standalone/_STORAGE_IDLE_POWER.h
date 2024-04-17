typedef struct _STORAGE_IDLE_POWER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long WakeCapableHint : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned long D3ColdSupported : 1; /* bit position: 1 */
    /* 0x0008 */ unsigned long Reserved : 30; /* bit position: 2 */
  }; /* bitfield */
  /* 0x000c */ unsigned long D3IdleTimeout;
} STORAGE_IDLE_POWER, *PSTORAGE_IDLE_POWER; /* size: 0x0010 */


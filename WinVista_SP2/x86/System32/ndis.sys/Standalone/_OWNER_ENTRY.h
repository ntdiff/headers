typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned long OwnerThread;
  union
  {
    /* 0x0004 */ long OwnerCount;
    /* 0x0004 */ unsigned long TableSize;
  }; /* size: 0x0004 */
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0008 */


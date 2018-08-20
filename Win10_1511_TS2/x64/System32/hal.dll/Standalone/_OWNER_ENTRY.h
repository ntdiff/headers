typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long OwnerCount : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */


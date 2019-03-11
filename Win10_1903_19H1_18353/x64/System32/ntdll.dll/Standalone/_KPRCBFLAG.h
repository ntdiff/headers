typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 2; /* bit position: 2 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KPRCBFLAG, *PKPRCBFLAG; /* size: 0x0004 */


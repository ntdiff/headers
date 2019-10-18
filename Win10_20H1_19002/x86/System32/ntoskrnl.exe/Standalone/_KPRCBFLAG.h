typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 2; /* bit position: 8 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 21; /* bit position: 11 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KPRCBFLAG, *PKPRCBFLAG; /* size: 0x0004 */


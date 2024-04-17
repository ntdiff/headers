typedef struct _GROUP_FAULT_REFERENCE
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned long Count;
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long Pending : 1; /* bit position: 0 */
          /* 0x0004 */ unsigned long Asid : 20; /* bit position: 1 */
          /* 0x0004 */ unsigned long LastInGroupSeen : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Error : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Unused : 9; /* bit position: 23 */
        }; /* bitfield */
      }; /* size: 0x0008 */
      /* 0x0000 */ unsigned __int64 Long;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} GROUP_FAULT_REFERENCE, *PGROUP_FAULT_REFERENCE; /* size: 0x0008 */


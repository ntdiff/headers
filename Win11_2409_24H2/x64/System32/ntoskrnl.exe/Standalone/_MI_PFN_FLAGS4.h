typedef struct _MI_PFN_FLAGS4
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 PteFrame : 40; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ResidentPage : 1; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 ResidentPageContainsBadPages : 1; /* bit position: 41 */
      /* 0x0000 */ unsigned __int64 Unused1 : 1; /* bit position: 42 */
      /* 0x0000 */ unsigned __int64 Partition : 10; /* bit position: 43 */
      /* 0x0000 */ unsigned __int64 FileOnly : 1; /* bit position: 53 */
      /* 0x0000 */ unsigned __int64 PfnExists : 1; /* bit position: 54 */
      /* 0x0000 */ unsigned __int64 NodeFlinkHigh : 5; /* bit position: 55 */
      /* 0x0000 */ unsigned __int64 PageIdentity : 3; /* bit position: 60 */
      /* 0x0000 */ unsigned __int64 PrototypePte : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_PFN_FLAGS4, *PMI_PFN_FLAGS4; /* size: 0x0008 */


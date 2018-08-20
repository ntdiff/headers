typedef struct _MMVAD_FLAGS3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 PreferredNode : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Teb : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 Spare : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 SequentialAccess : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 LastSequentialTrim : 15; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Spare2 : 8; /* bit position: 24 */
    /* 0x0000 */ unsigned __int64 LargePageCreating : 1; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 Spare3 : 31; /* bit position: 33 */
  }; /* bitfield */
} MMVAD_FLAGS3, *PMMVAD_FLAGS3; /* size: 0x0008 */


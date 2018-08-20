typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 8 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long PrivateFixup : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ManySubsections : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long Enclave : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long PageSize64K : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long RfgControlStack : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long Spare : 10; /* bit position: 22 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */


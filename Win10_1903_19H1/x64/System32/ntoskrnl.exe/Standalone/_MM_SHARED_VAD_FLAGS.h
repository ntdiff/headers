typedef struct _MM_SHARED_VAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Lock : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 7 */
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 12 */
    /* 0x0000 */ unsigned long PageSize : 2; /* bit position: 18 */
    /* 0x0000 */ unsigned long PrivateMemoryAlwaysClear : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long PrivateFixup : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long HotPatchAllowed : 1; /* bit position: 22 */
  }; /* bitfield */
} MM_SHARED_VAD_FLAGS, *PMM_SHARED_VAD_FLAGS; /* size: 0x0004 */


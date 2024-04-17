typedef union _SYSDBG_LIVEDUMP_CONTROL_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long UseDumpStorageStack : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long CompressMemoryPagesData : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long IncludeUserSpaceMemoryPages : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} SYSDBG_LIVEDUMP_CONTROL_FLAGS, *PSYSDBG_LIVEDUMP_CONTROL_FLAGS; /* size: 0x0004 */


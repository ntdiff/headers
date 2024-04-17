typedef union _SYSDBG_LIVEDUMP_CONTROL_ADDPAGES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long HypervisorPages : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} SYSDBG_LIVEDUMP_CONTROL_ADDPAGES, *PSYSDBG_LIVEDUMP_CONTROL_ADDPAGES; /* size: 0x0004 */


typedef struct _SYSDBG_LIVEDUMP_SELECTIVE_CONTROL
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned __int64 ThreadKernelStacks : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned __int64 ReservedFlags : 63; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0008 */ unsigned __int64 Flags;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned __int64 Reserved[4];
} SYSDBG_LIVEDUMP_SELECTIVE_CONTROL, *PSYSDBG_LIVEDUMP_SELECTIVE_CONTROL; /* size: 0x0030 */


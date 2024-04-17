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

typedef struct _SYSDBG_LIVEDUMP_CONTROL
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long BugCheckCode;
  /* 0x0008 */ unsigned long BugCheckParam1;
  /* 0x000c */ unsigned long BugCheckParam2;
  /* 0x0010 */ unsigned long BugCheckParam3;
  /* 0x0014 */ unsigned long BugCheckParam4;
  /* 0x0018 */ void* DumpFileHandle;
  /* 0x001c */ void* CancelEventHandle;
  /* 0x0020 */ union _SYSDBG_LIVEDUMP_CONTROL_FLAGS Flags;
  /* 0x0024 */ union _SYSDBG_LIVEDUMP_CONTROL_ADDPAGES AddPagesControl;
} SYSDBG_LIVEDUMP_CONTROL, *PSYSDBG_LIVEDUMP_CONTROL; /* size: 0x0028 */


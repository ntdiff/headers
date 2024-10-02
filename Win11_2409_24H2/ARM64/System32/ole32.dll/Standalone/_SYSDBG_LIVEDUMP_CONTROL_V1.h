typedef union _SYSDBG_LIVEDUMP_CONTROL_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long UseDumpStorageStack : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long CompressMemoryPagesData : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long IncludeUserSpaceMemoryPages : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AbortIfMemoryPressure : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long SelectiveDump : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Reserved : 27; /* bit position: 5 */
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
      /* 0x0000 */ unsigned long NonEssentialHypervisorPages : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} SYSDBG_LIVEDUMP_CONTROL_ADDPAGES, *PSYSDBG_LIVEDUMP_CONTROL_ADDPAGES; /* size: 0x0004 */

typedef struct _SYSDBG_LIVEDUMP_CONTROL_V1
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long BugCheckCode;
  /* 0x0008 */ unsigned __int64 BugCheckParam1;
  /* 0x0010 */ unsigned __int64 BugCheckParam2;
  /* 0x0018 */ unsigned __int64 BugCheckParam3;
  /* 0x0020 */ unsigned __int64 BugCheckParam4;
  /* 0x0028 */ void* DumpFileHandle;
  /* 0x0030 */ void* CancelEventHandle;
  /* 0x0038 */ union _SYSDBG_LIVEDUMP_CONTROL_FLAGS Flags;
  /* 0x003c */ union _SYSDBG_LIVEDUMP_CONTROL_ADDPAGES AddPagesControl;
} SYSDBG_LIVEDUMP_CONTROL_V1, *PSYSDBG_LIVEDUMP_CONTROL_V1; /* size: 0x0040 */


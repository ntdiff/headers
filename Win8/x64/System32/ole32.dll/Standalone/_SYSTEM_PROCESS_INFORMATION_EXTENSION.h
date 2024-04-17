typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef struct _SYSTEM_PROCESS_INFORMATION_EXTENSION
{
  /* 0x0000 */ struct _PROCESS_DISK_COUNTERS DiskCounters;
  /* 0x0028 */ unsigned __int64 ContextSwitches;
  union
  {
    /* 0x0030 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0030 */ unsigned long HasStrongId : 1; /* bit position: 0 */
      /* 0x0030 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0034 */ unsigned long UserSidOffset;
} SYSTEM_PROCESS_INFORMATION_EXTENSION, *PSYSTEM_PROCESS_INFORMATION_EXTENSION; /* size: 0x0038 */


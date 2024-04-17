enum RTLWOW64_CROSSPROCESS_WORK_OPERATION
{
  CrossProcOperationMemoryAllocPreNotify = 0,
  CrossProcOperationMemoryAllocPostNotify = 1,
  CrossProcOperationMemoryFreePreNotify = 2,
  CrossProcOperationMemoryFreePostNotify = 3,
  CrossProcOperationMemoryProtectPreNotify = 4,
  CrossProcOperationMemoryProtectPostNotify = 5,
  CrossProcOperationInstructionCacheFlush = 6,
};

struct RTLWOW64_CROSSPROCESS_WORK_ITEM
{
  /* 0x0000 */ unsigned long Next;
  /* 0x0004 */ enum RTLWOW64_CROSSPROCESS_WORK_OPERATION Operation;
  union
  {
    struct
    {
      /* 0x0008 */ void* BaseAddress;
      /* 0x0010 */ unsigned __int64 RegionSize;
      /* 0x0018 */ unsigned long AllocationType;
      /* 0x001c */ unsigned long Protect;
      /* 0x0020 */ long SyscallStatus;
      /* 0x0024 */ long __PADDING__[1];
    } /* size: 0x0020 */ MemoryAllocData;
    struct
    {
      /* 0x0008 */ void* BaseAddress;
      /* 0x0010 */ unsigned __int64 RegionSize;
      /* 0x0018 */ unsigned long FreeType;
      /* 0x001c */ long SyscallStatus;
    } /* size: 0x0018 */ MemoryFreeData;
    struct
    {
      /* 0x0008 */ void* BaseAddress;
      /* 0x0010 */ unsigned __int64 RegionSize;
      /* 0x0018 */ unsigned long NewProtect;
      /* 0x001c */ long SyscallStatus;
    } /* size: 0x0018 */ MemoryProtectData;
    struct
    {
      struct
      {
        /* 0x0008 */ void* BaseAddress;
        /* 0x0010 */ unsigned __int64 Length;
      } /* size: 0x0010 */ InstructionCacheFlushData;
      /* 0x0018 */ long __PADDING__[4];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
}; /* size: 0x0028 */


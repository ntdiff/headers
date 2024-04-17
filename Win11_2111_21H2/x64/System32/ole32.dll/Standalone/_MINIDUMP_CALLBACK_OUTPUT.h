typedef struct _MINIDUMP_MEMORY_INFO
{
  /* 0x0000 */ unsigned __int64 BaseAddress;
  /* 0x0008 */ unsigned __int64 AllocationBase;
  /* 0x0010 */ unsigned int AllocationProtect;
  /* 0x0014 */ unsigned int __alignment1;
  /* 0x0018 */ unsigned __int64 RegionSize;
  /* 0x0020 */ unsigned int State;
  /* 0x0024 */ unsigned int Protect;
  /* 0x0028 */ unsigned int Type;
  /* 0x002c */ unsigned int __alignment2;
} MINIDUMP_MEMORY_INFO, *PMINIDUMP_MEMORY_INFO; /* size: 0x0030 */

typedef struct _MINIDUMP_CALLBACK_OUTPUT
{
  union
  {
    /* 0x0000 */ unsigned long ModuleWriteFlags;
    /* 0x0000 */ unsigned long ThreadWriteFlags;
    /* 0x0000 */ unsigned long SecondaryFlags;
    struct
    {
      /* 0x0000 */ unsigned __int64 MemoryBase;
      /* 0x0008 */ unsigned long MemorySize;
    }; /* size: 0x000c */
    struct
    {
      /* 0x0000 */ int CheckCancel;
      /* 0x0004 */ int Cancel;
    }; /* size: 0x0008 */
    /* 0x0000 */ void* Handle;
    struct
    {
      /* 0x0000 */ struct _MINIDUMP_MEMORY_INFO VmRegion;
      /* 0x0030 */ int Continue;
    }; /* size: 0x0034 */
    struct
    {
      /* 0x0000 */ HRESULT VmQueryStatus;
      /* 0x0004 */ struct _MINIDUMP_MEMORY_INFO VmQueryResult;
    }; /* size: 0x0034 */
    struct
    {
      /* 0x0000 */ HRESULT VmReadStatus;
      /* 0x0004 */ unsigned long VmReadBytesCompleted;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ HRESULT Status;
      /* 0x0004 */ long __PADDING__[12];
    }; /* size: 0x0034 */
  }; /* size: 0x0034 */
} MINIDUMP_CALLBACK_OUTPUT, *PMINIDUMP_CALLBACK_OUTPUT; /* size: 0x0034 */


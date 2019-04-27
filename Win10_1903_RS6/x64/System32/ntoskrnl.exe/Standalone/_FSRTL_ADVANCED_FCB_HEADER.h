typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _FSRTL_ADVANCED_FCB_HEADER
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned char Flags;
  /* 0x0005 */ unsigned char IsFastIoPossible;
  /* 0x0006 */ unsigned char Flags2;
  struct /* bitfield */
  {
    /* 0x0007 */ unsigned char Reserved : 4; /* bit position: 0 */
    /* 0x0007 */ unsigned char Version : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0008 */ struct _ERESOURCE* Resource;
  /* 0x0010 */ struct _ERESOURCE* PagingIoResource;
  /* 0x0018 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0020 */ union _LARGE_INTEGER FileSize;
  /* 0x0028 */ union _LARGE_INTEGER ValidDataLength;
  /* 0x0030 */ struct _FAST_MUTEX* FastMutex;
  /* 0x0038 */ struct _LIST_ENTRY FilterContexts;
  /* 0x0048 */ struct _EX_PUSH_LOCK PushLock;
  /* 0x0050 */ void** FileContextSupportPointer;
  union
  {
    /* 0x0058 */ void* Oplock;
    /* 0x0058 */ void* ReservedForRemote;
  }; /* size: 0x0008 */
  /* 0x0060 */ void* ReservedContext;
} FSRTL_ADVANCED_FCB_HEADER, *PFSRTL_ADVANCED_FCB_HEADER; /* size: 0x0068 */


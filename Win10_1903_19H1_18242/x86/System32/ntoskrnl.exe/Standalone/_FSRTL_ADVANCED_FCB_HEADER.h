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
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

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
  /* 0x000c */ struct _ERESOURCE* PagingIoResource;
  /* 0x0010 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0018 */ union _LARGE_INTEGER FileSize;
  /* 0x0020 */ union _LARGE_INTEGER ValidDataLength;
  /* 0x0028 */ struct _FAST_MUTEX* FastMutex;
  /* 0x002c */ struct _LIST_ENTRY FilterContexts;
  /* 0x0034 */ struct _EX_PUSH_LOCK PushLock;
  /* 0x0038 */ void** FileContextSupportPointer;
  union
  {
    /* 0x003c */ void* Oplock;
    /* 0x003c */ void* ReservedForRemote;
  }; /* size: 0x0004 */
  /* 0x0040 */ void* ReservedContext;
  /* 0x0044 */ long __PADDING__[1];
} FSRTL_ADVANCED_FCB_HEADER, *PFSRTL_ADVANCED_FCB_HEADER; /* size: 0x0048 */


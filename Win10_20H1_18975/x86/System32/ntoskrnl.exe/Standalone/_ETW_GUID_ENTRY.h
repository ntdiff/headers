typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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

typedef struct _ETW_LAST_ENABLE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER EnableFlags;
  /* 0x0008 */ unsigned short LoggerId;
  /* 0x000a */ unsigned char Level;
  struct /* bitfield */
  {
    /* 0x000b */ unsigned char Enabled : 1; /* bit position: 0 */
    /* 0x000b */ unsigned char InternalFlag : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000c */ long __PADDING__[1];
} ETW_LAST_ENABLE_INFO, *PETW_LAST_ENABLE_INFO; /* size: 0x0010 */

typedef struct _TRACE_ENABLE_INFO
{
  /* 0x0000 */ unsigned long IsEnabled;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short LoggerId;
  /* 0x0008 */ unsigned long EnableProperty;
  /* 0x000c */ unsigned long Reserved2;
  /* 0x0010 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0018 */ unsigned __int64 MatchAllKeyword;
} TRACE_ENABLE_INFO, *PTRACE_ENABLE_INFO; /* size: 0x0020 */

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

typedef struct _ETW_GUID_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY GuidList;
  /* 0x0008 */ struct _LIST_ENTRY SiloGuidList;
  /* 0x0010 */ volatile long RefCount;
  /* 0x0014 */ struct _GUID Guid;
  /* 0x0024 */ struct _LIST_ENTRY RegListHead;
  /* 0x002c */ void* SecurityDescriptor;
  union
  {
    /* 0x0030 */ struct _ETW_LAST_ENABLE_INFO LastEnable;
    /* 0x0030 */ unsigned __int64 MatchId;
  }; /* size: 0x0010 */
  /* 0x0040 */ struct _TRACE_ENABLE_INFO ProviderEnableInfo;
  /* 0x0060 */ struct _TRACE_ENABLE_INFO EnableInfo[8];
  /* 0x0160 */ struct _ETW_FILTER_HEADER* FilterData;
  /* 0x0164 */ struct _ETW_SILODRIVERSTATE* SiloState;
  /* 0x0168 */ struct _ETW_GUID_ENTRY* HostEntry;
  /* 0x016c */ struct _EX_PUSH_LOCK Lock;
  /* 0x0170 */ struct _ETHREAD* LockOwner;
  /* 0x0174 */ long __PADDING__[1];
} ETW_GUID_ENTRY, *PETW_GUID_ENTRY; /* size: 0x0178 */


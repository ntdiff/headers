typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

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

typedef enum _LDR_DLL_LOAD_REASON
{
  LoadReasonStaticDependency = 0,
  LoadReasonStaticForwarderDependency = 1,
  LoadReasonDynamicForwarderDependency = 2,
  LoadReasonDelayloadDependency = 3,
  LoadReasonDynamicLoad = 4,
  LoadReasonAsImageLoad = 5,
  LoadReasonAsDataLoad = 6,
  LoadReasonEnclavePrimary = 7,
  LoadReasonEnclaveDependency = 8,
  LoadReasonUnknown = -1,
} LDR_DLL_LOAD_REASON, *PLDR_DLL_LOAD_REASON;

typedef struct _LDR_DATA_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY InLoadOrderLinks;
  /* 0x0008 */ struct _LIST_ENTRY InMemoryOrderLinks;
  /* 0x0010 */ struct _LIST_ENTRY InInitializationOrderLinks;
  /* 0x0018 */ void* DllBase;
  /* 0x001c */ void* EntryPoint;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ struct _UNICODE_STRING FullDllName;
  /* 0x002c */ struct _UNICODE_STRING BaseDllName;
  union
  {
    /* 0x0034 */ unsigned char FlagGroup[4];
    /* 0x0034 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0034 */ unsigned long PackagedBinary : 1; /* bit position: 0 */
      /* 0x0034 */ unsigned long MarkedForRemoval : 1; /* bit position: 1 */
      /* 0x0034 */ unsigned long ImageDll : 1; /* bit position: 2 */
      /* 0x0034 */ unsigned long LoadNotificationsSent : 1; /* bit position: 3 */
      /* 0x0034 */ unsigned long TelemetryEntryProcessed : 1; /* bit position: 4 */
      /* 0x0034 */ unsigned long ProcessStaticImport : 1; /* bit position: 5 */
      /* 0x0034 */ unsigned long InLegacyLists : 1; /* bit position: 6 */
      /* 0x0034 */ unsigned long InIndexes : 1; /* bit position: 7 */
      /* 0x0034 */ unsigned long ShimDll : 1; /* bit position: 8 */
      /* 0x0034 */ unsigned long InExceptionTable : 1; /* bit position: 9 */
      /* 0x0034 */ unsigned long ReservedFlags1 : 2; /* bit position: 10 */
      /* 0x0034 */ unsigned long LoadInProgress : 1; /* bit position: 12 */
      /* 0x0034 */ unsigned long LoadConfigProcessed : 1; /* bit position: 13 */
      /* 0x0034 */ unsigned long EntryProcessed : 1; /* bit position: 14 */
      /* 0x0034 */ unsigned long ProtectDelayLoad : 1; /* bit position: 15 */
      /* 0x0034 */ unsigned long ReservedFlags3 : 2; /* bit position: 16 */
      /* 0x0034 */ unsigned long DontCallForThreads : 1; /* bit position: 18 */
      /* 0x0034 */ unsigned long ProcessAttachCalled : 1; /* bit position: 19 */
      /* 0x0034 */ unsigned long ProcessAttachFailed : 1; /* bit position: 20 */
      /* 0x0034 */ unsigned long CorDeferredValidate : 1; /* bit position: 21 */
      /* 0x0034 */ unsigned long CorImage : 1; /* bit position: 22 */
      /* 0x0034 */ unsigned long DontRelocate : 1; /* bit position: 23 */
      /* 0x0034 */ unsigned long CorILOnly : 1; /* bit position: 24 */
      /* 0x0034 */ unsigned long ChpeImage : 1; /* bit position: 25 */
      /* 0x0034 */ unsigned long ReservedFlags5 : 2; /* bit position: 26 */
      /* 0x0034 */ unsigned long Redirected : 1; /* bit position: 28 */
      /* 0x0034 */ unsigned long ReservedFlags6 : 2; /* bit position: 29 */
      /* 0x0034 */ unsigned long CompatDatabaseProcessed : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0038 */ unsigned short ObsoleteLoadCount;
  /* 0x003a */ unsigned short TlsIndex;
  /* 0x003c */ struct _LIST_ENTRY HashLinks;
  /* 0x0044 */ unsigned long TimeDateStamp;
  /* 0x0048 */ struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
  /* 0x004c */ void* Lock;
  /* 0x0050 */ struct _LDR_DDAG_NODE* DdagNode;
  /* 0x0054 */ struct _LIST_ENTRY NodeModuleLink;
  /* 0x005c */ struct _LDRP_LOAD_CONTEXT* LoadContext;
  /* 0x0060 */ void* ParentDllBase;
  /* 0x0064 */ void* SwitchBackContext;
  /* 0x0068 */ struct _RTL_BALANCED_NODE BaseAddressIndexNode;
  /* 0x0074 */ struct _RTL_BALANCED_NODE MappingInfoIndexNode;
  /* 0x0080 */ unsigned long OriginalBase;
  /* 0x0088 */ union _LARGE_INTEGER LoadTime;
  /* 0x0090 */ unsigned long BaseNameHashValue;
  /* 0x0094 */ enum _LDR_DLL_LOAD_REASON LoadReason;
  /* 0x0098 */ unsigned long ImplicitPathOptions;
  /* 0x009c */ unsigned long ReferenceCount;
  /* 0x00a0 */ unsigned long DependentLoadFlags;
  /* 0x00a4 */ unsigned char SigningLevel;
  /* 0x00a5 */ char __PADDING__[3];
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY; /* size: 0x00a8 */


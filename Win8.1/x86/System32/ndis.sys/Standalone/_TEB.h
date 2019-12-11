typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0004 */ void* StackBase;
  /* 0x0008 */ void* StackLimit;
  /* 0x000c */ void* SubSystemTib;
  union
  {
    /* 0x0010 */ void* FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ void* ArbitraryUserPointer;
  /* 0x0018 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x001c */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _GDI_TEB_BATCH
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Offset : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long HasRenderingCommand : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long HDC;
  /* 0x0008 */ unsigned long Buffer[310];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH; /* size: 0x04e0 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _TEB
{
  /* 0x0000 */ struct _NT_TIB NtTib;
  /* 0x001c */ void* EnvironmentPointer;
  /* 0x0020 */ struct _CLIENT_ID ClientId;
  /* 0x0028 */ void* ActiveRpcHandle;
  /* 0x002c */ void* ThreadLocalStoragePointer;
  /* 0x0030 */ struct _PEB* ProcessEnvironmentBlock;
  /* 0x0034 */ unsigned long LastErrorValue;
  /* 0x0038 */ unsigned long CountOfOwnedCriticalSections;
  /* 0x003c */ void* CsrClientThread;
  /* 0x0040 */ void* Win32ThreadInfo;
  /* 0x0044 */ unsigned long User32Reserved[26];
  /* 0x00ac */ unsigned long UserReserved[5];
  /* 0x00c0 */ void* WOW32Reserved;
  /* 0x00c4 */ unsigned long CurrentLocale;
  /* 0x00c8 */ unsigned long FpSoftwareStatusRegister;
  /* 0x00cc */ void* SystemReserved1[54];
  /* 0x01a4 */ long ExceptionCode;
  /* 0x01a8 */ struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;
  /* 0x01ac */ unsigned char SpareBytes[36];
  /* 0x01d0 */ unsigned long TxFsContext;
  /* 0x01d4 */ struct _GDI_TEB_BATCH GdiTebBatch;
  /* 0x06b4 */ struct _CLIENT_ID RealClientId;
  /* 0x06bc */ void* GdiCachedProcessHandle;
  /* 0x06c0 */ unsigned long GdiClientPID;
  /* 0x06c4 */ unsigned long GdiClientTID;
  /* 0x06c8 */ void* GdiThreadLocalInfo;
  /* 0x06cc */ unsigned long Win32ClientInfo[62];
  /* 0x07c4 */ void* glDispatchTable[233];
  /* 0x0b68 */ unsigned long glReserved1[29];
  /* 0x0bdc */ void* glReserved2;
  /* 0x0be0 */ void* glSectionInfo;
  /* 0x0be4 */ void* glSection;
  /* 0x0be8 */ void* glTable;
  /* 0x0bec */ void* glCurrentRC;
  /* 0x0bf0 */ void* glContext;
  /* 0x0bf4 */ unsigned long LastStatusValue;
  /* 0x0bf8 */ struct _UNICODE_STRING StaticUnicodeString;
  /* 0x0c00 */ wchar_t StaticUnicodeBuffer[261];
  /* 0x0e0c */ void* DeallocationStack;
  /* 0x0e10 */ void* TlsSlots[64];
  /* 0x0f10 */ struct _LIST_ENTRY TlsLinks;
  /* 0x0f18 */ void* Vdm;
  /* 0x0f1c */ void* ReservedForNtRpc;
  /* 0x0f20 */ void* DbgSsReserved[2];
  /* 0x0f28 */ unsigned long HardErrorMode;
  /* 0x0f2c */ void* Instrumentation[9];
  /* 0x0f50 */ struct _GUID ActivityId;
  /* 0x0f60 */ void* SubProcessTag;
  /* 0x0f64 */ void* PerflibData;
  /* 0x0f68 */ void* EtwTraceData;
  /* 0x0f6c */ void* WinSockData;
  /* 0x0f70 */ unsigned long GdiBatchCount;
  union
  {
    /* 0x0f74 */ struct _PROCESSOR_NUMBER CurrentIdealProcessor;
    /* 0x0f74 */ unsigned long IdealProcessorValue;
    struct
    {
      /* 0x0f74 */ unsigned char ReservedPad0;
      /* 0x0f75 */ unsigned char ReservedPad1;
      /* 0x0f76 */ unsigned char ReservedPad2;
      /* 0x0f77 */ unsigned char IdealProcessor;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0f78 */ unsigned long GuaranteedStackBytes;
  /* 0x0f7c */ void* ReservedForPerf;
  /* 0x0f80 */ void* ReservedForOle;
  /* 0x0f84 */ unsigned long WaitingOnLoaderLock;
  /* 0x0f88 */ void* SavedPriorityState;
  /* 0x0f8c */ unsigned long ReservedForCodeCoverage;
  /* 0x0f90 */ void* ThreadPoolData;
  /* 0x0f94 */ void** TlsExpansionSlots;
  /* 0x0f98 */ unsigned long MuiGeneration;
  /* 0x0f9c */ unsigned long IsImpersonating;
  /* 0x0fa0 */ void* NlsCache;
  /* 0x0fa4 */ void* pShimData;
  /* 0x0fa8 */ unsigned short HeapVirtualAffinity;
  /* 0x0faa */ unsigned short LowFragHeapDataSlot;
  /* 0x0fac */ void* CurrentTransactionHandle;
  /* 0x0fb0 */ struct _TEB_ACTIVE_FRAME* ActiveFrame;
  /* 0x0fb4 */ void* FlsData;
  /* 0x0fb8 */ void* PreferredLanguages;
  /* 0x0fbc */ void* UserPrefLanguages;
  /* 0x0fc0 */ void* MergedPrefLanguages;
  /* 0x0fc4 */ unsigned long MuiImpersonation;
  union
  {
    /* 0x0fc8 */ volatile unsigned short CrossTebFlags;
    /* 0x0fc8 */ unsigned short SpareCrossTebBits : 16; /* bit position: 0 */
  }; /* size: 0x0002 */
  union
  {
    /* 0x0fca */ unsigned short SameTebFlags;
    struct /* bitfield */
    {
      /* 0x0fca */ unsigned short SafeThunkCall : 1; /* bit position: 0 */
      /* 0x0fca */ unsigned short InDebugPrint : 1; /* bit position: 1 */
      /* 0x0fca */ unsigned short HasFiberData : 1; /* bit position: 2 */
      /* 0x0fca */ unsigned short SkipThreadAttach : 1; /* bit position: 3 */
      /* 0x0fca */ unsigned short WerInShipAssertCode : 1; /* bit position: 4 */
      /* 0x0fca */ unsigned short RanProcessInit : 1; /* bit position: 5 */
      /* 0x0fca */ unsigned short ClonedThread : 1; /* bit position: 6 */
      /* 0x0fca */ unsigned short SuppressDebugMsg : 1; /* bit position: 7 */
      /* 0x0fca */ unsigned short DisableUserStackWalk : 1; /* bit position: 8 */
      /* 0x0fca */ unsigned short RtlExceptionAttached : 1; /* bit position: 9 */
      /* 0x0fca */ unsigned short InitialThread : 1; /* bit position: 10 */
      /* 0x0fca */ unsigned short SessionAware : 1; /* bit position: 11 */
      /* 0x0fca */ unsigned short SpareSameTebBits : 4; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0fcc */ void* TxnScopeEnterCallback;
  /* 0x0fd0 */ void* TxnScopeExitCallback;
  /* 0x0fd4 */ void* TxnScopeContext;
  /* 0x0fd8 */ unsigned long LockCount;
  /* 0x0fdc */ unsigned long SpareUlong0;
  /* 0x0fe0 */ void* ResourceRetValue;
  /* 0x0fe4 */ void* ReservedForWdf;
} TEB, *PTEB; /* size: 0x0fe8 */


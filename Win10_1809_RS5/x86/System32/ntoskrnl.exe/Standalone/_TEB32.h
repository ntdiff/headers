typedef struct _NT_TIB32
{
  /* 0x0000 */ unsigned long ExceptionList;
  /* 0x0004 */ unsigned long StackBase;
  /* 0x0008 */ unsigned long StackLimit;
  /* 0x000c */ unsigned long SubSystemTib;
  union
  {
    /* 0x0010 */ unsigned long FiberData;
    /* 0x0010 */ unsigned long Version;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long ArbitraryUserPointer;
  /* 0x0018 */ unsigned long Self;
} NT_TIB32, *PNT_TIB32; /* size: 0x001c */

typedef struct _CLIENT_ID32
{
  /* 0x0000 */ unsigned long UniqueProcess;
  /* 0x0004 */ unsigned long UniqueThread;
} CLIENT_ID32, *PCLIENT_ID32; /* size: 0x0008 */

struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_STACK32
{
  /* 0x0000 */ unsigned long ActiveFrame;
  /* 0x0004 */ struct LIST_ENTRY32 FrameListCache;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long NextCookieSequenceNumber;
  /* 0x0014 */ unsigned long StackId;
} ACTIVATION_CONTEXT_STACK32, *PACTIVATION_CONTEXT_STACK32; /* size: 0x0018 */

typedef struct _GDI_TEB_BATCH32
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Offset : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long HasRenderingCommand : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long HDC;
  /* 0x0008 */ unsigned long Buffer[310];
} GDI_TEB_BATCH32, *PGDI_TEB_BATCH32; /* size: 0x04e0 */

typedef struct _STRING32
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned long Buffer;
} STRING32, *PSTRING32; /* size: 0x0008 */

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

typedef struct _TEB32
{
  /* 0x0000 */ struct _NT_TIB32 NtTib;
  /* 0x001c */ unsigned long EnvironmentPointer;
  /* 0x0020 */ struct _CLIENT_ID32 ClientId;
  /* 0x0028 */ unsigned long ActiveRpcHandle;
  /* 0x002c */ unsigned long ThreadLocalStoragePointer;
  /* 0x0030 */ unsigned long ProcessEnvironmentBlock;
  /* 0x0034 */ unsigned long LastErrorValue;
  /* 0x0038 */ unsigned long CountOfOwnedCriticalSections;
  /* 0x003c */ unsigned long CsrClientThread;
  /* 0x0040 */ unsigned long Win32ThreadInfo;
  /* 0x0044 */ unsigned long User32Reserved[26];
  /* 0x00ac */ unsigned long UserReserved[5];
  /* 0x00c0 */ unsigned long WOW32Reserved;
  /* 0x00c4 */ unsigned long CurrentLocale;
  /* 0x00c8 */ unsigned long FpSoftwareStatusRegister;
  /* 0x00cc */ unsigned long ReservedForDebuggerInstrumentation[16];
  /* 0x010c */ unsigned long SystemReserved1[26];
  /* 0x0174 */ char PlaceholderCompatibilityMode;
  /* 0x0175 */ unsigned char PlaceholderHydrationAlwaysExplicit;
  /* 0x0176 */ char PlaceholderReserved[10];
  /* 0x0180 */ unsigned long ProxiedProcessId;
  /* 0x0184 */ struct _ACTIVATION_CONTEXT_STACK32 _ActivationStack;
  /* 0x019c */ unsigned char WorkingOnBehalfTicket[8];
  /* 0x01a4 */ long ExceptionCode;
  /* 0x01a8 */ unsigned long ActivationContextStackPointer;
  /* 0x01ac */ unsigned long InstrumentationCallbackSp;
  /* 0x01b0 */ unsigned long InstrumentationCallbackPreviousPc;
  /* 0x01b4 */ unsigned long InstrumentationCallbackPreviousSp;
  /* 0x01b8 */ unsigned char InstrumentationCallbackDisabled;
  /* 0x01b9 */ unsigned char SpareBytes[23];
  /* 0x01d0 */ unsigned long TxFsContext;
  /* 0x01d4 */ struct _GDI_TEB_BATCH32 GdiTebBatch;
  /* 0x06b4 */ struct _CLIENT_ID32 RealClientId;
  /* 0x06bc */ unsigned long GdiCachedProcessHandle;
  /* 0x06c0 */ unsigned long GdiClientPID;
  /* 0x06c4 */ unsigned long GdiClientTID;
  /* 0x06c8 */ unsigned long GdiThreadLocalInfo;
  /* 0x06cc */ unsigned long Win32ClientInfo[62];
  /* 0x07c4 */ unsigned long glDispatchTable[233];
  /* 0x0b68 */ unsigned long glReserved1[29];
  /* 0x0bdc */ unsigned long glReserved2;
  /* 0x0be0 */ unsigned long glSectionInfo;
  /* 0x0be4 */ unsigned long glSection;
  /* 0x0be8 */ unsigned long glTable;
  /* 0x0bec */ unsigned long glCurrentRC;
  /* 0x0bf0 */ unsigned long glContext;
  /* 0x0bf4 */ unsigned long LastStatusValue;
  /* 0x0bf8 */ struct _STRING32 StaticUnicodeString;
  /* 0x0c00 */ wchar_t StaticUnicodeBuffer[261];
  /* 0x0e0c */ unsigned long DeallocationStack;
  /* 0x0e10 */ unsigned long TlsSlots[64];
  /* 0x0f10 */ struct LIST_ENTRY32 TlsLinks;
  /* 0x0f18 */ unsigned long Vdm;
  /* 0x0f1c */ unsigned long ReservedForNtRpc;
  /* 0x0f20 */ unsigned long DbgSsReserved[2];
  /* 0x0f28 */ unsigned long HardErrorMode;
  /* 0x0f2c */ unsigned long Instrumentation[9];
  /* 0x0f50 */ struct _GUID ActivityId;
  /* 0x0f60 */ unsigned long SubProcessTag;
  /* 0x0f64 */ unsigned long PerflibData;
  /* 0x0f68 */ unsigned long EtwTraceData;
  /* 0x0f6c */ unsigned long WinSockData;
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
  /* 0x0f7c */ unsigned long ReservedForPerf;
  /* 0x0f80 */ unsigned long ReservedForOle;
  /* 0x0f84 */ unsigned long WaitingOnLoaderLock;
  /* 0x0f88 */ unsigned long SavedPriorityState;
  /* 0x0f8c */ unsigned long ReservedForCodeCoverage;
  /* 0x0f90 */ unsigned long ThreadPoolData;
  /* 0x0f94 */ unsigned long TlsExpansionSlots;
  /* 0x0f98 */ unsigned long MuiGeneration;
  /* 0x0f9c */ unsigned long IsImpersonating;
  /* 0x0fa0 */ unsigned long NlsCache;
  /* 0x0fa4 */ unsigned long pShimData;
  /* 0x0fa8 */ unsigned long HeapData;
  /* 0x0fac */ unsigned long CurrentTransactionHandle;
  /* 0x0fb0 */ unsigned long ActiveFrame;
  /* 0x0fb4 */ unsigned long FlsData;
  /* 0x0fb8 */ unsigned long PreferredLanguages;
  /* 0x0fbc */ unsigned long UserPrefLanguages;
  /* 0x0fc0 */ unsigned long MergedPrefLanguages;
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
      /* 0x0fca */ unsigned short LoadOwner : 1; /* bit position: 12 */
      /* 0x0fca */ unsigned short LoaderWorker : 1; /* bit position: 13 */
      /* 0x0fca */ unsigned short SkipLoaderInit : 1; /* bit position: 14 */
      /* 0x0fca */ unsigned short SpareSameTebBits : 1; /* bit position: 15 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0fcc */ unsigned long TxnScopeEnterCallback;
  /* 0x0fd0 */ unsigned long TxnScopeExitCallback;
  /* 0x0fd4 */ unsigned long TxnScopeContext;
  /* 0x0fd8 */ unsigned long LockCount;
  /* 0x0fdc */ long WowTebOffset;
  /* 0x0fe0 */ unsigned long ResourceRetValue;
  /* 0x0fe4 */ unsigned long ReservedForWdf;
  /* 0x0fe8 */ unsigned __int64 ReservedForCrt;
  /* 0x0ff0 */ struct _GUID EffectiveContainerId;
} TEB32, *PTEB32; /* size: 0x1000 */


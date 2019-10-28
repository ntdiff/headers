typedef struct _NT_TIB64
{
  /* 0x0000 */ unsigned __int64 ExceptionList;
  /* 0x0008 */ unsigned __int64 StackBase;
  /* 0x0010 */ unsigned __int64 StackLimit;
  /* 0x0018 */ unsigned __int64 SubSystemTib;
  union
  {
    /* 0x0020 */ unsigned __int64 FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ unsigned __int64 ArbitraryUserPointer;
  /* 0x0030 */ unsigned __int64 Self;
} NT_TIB64, *PNT_TIB64; /* size: 0x0038 */

typedef struct _CLIENT_ID64
{
  /* 0x0000 */ unsigned __int64 UniqueProcess;
  /* 0x0008 */ unsigned __int64 UniqueThread;
} CLIENT_ID64, *PCLIENT_ID64; /* size: 0x0010 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _ACTIVATION_CONTEXT_STACK64
{
  /* 0x0000 */ unsigned __int64 ActiveFrame;
  /* 0x0008 */ struct LIST_ENTRY64 FrameListCache;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long NextCookieSequenceNumber;
  /* 0x0020 */ unsigned long StackId;
  /* 0x0024 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_STACK64, *PACTIVATION_CONTEXT_STACK64; /* size: 0x0028 */

typedef struct _GDI_TEB_BATCH64
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Offset : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long HasRenderingCommand : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0008 */ unsigned __int64 HDC;
  /* 0x0010 */ unsigned long Buffer[310];
} GDI_TEB_BATCH64, *PGDI_TEB_BATCH64; /* size: 0x04e8 */

typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

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

typedef struct _TEB64
{
  /* 0x0000 */ struct _NT_TIB64 NtTib;
  /* 0x0038 */ unsigned __int64 EnvironmentPointer;
  /* 0x0040 */ struct _CLIENT_ID64 ClientId;
  /* 0x0050 */ unsigned __int64 ActiveRpcHandle;
  /* 0x0058 */ unsigned __int64 ThreadLocalStoragePointer;
  /* 0x0060 */ unsigned __int64 ProcessEnvironmentBlock;
  /* 0x0068 */ unsigned long LastErrorValue;
  /* 0x006c */ unsigned long CountOfOwnedCriticalSections;
  /* 0x0070 */ unsigned __int64 CsrClientThread;
  /* 0x0078 */ unsigned __int64 Win32ThreadInfo;
  /* 0x0080 */ unsigned long User32Reserved[26];
  /* 0x00e8 */ unsigned long UserReserved[5];
  /* 0x0100 */ unsigned __int64 WOW32Reserved;
  /* 0x0108 */ unsigned long CurrentLocale;
  /* 0x010c */ unsigned long FpSoftwareStatusRegister;
  /* 0x0110 */ unsigned __int64 ReservedForDebuggerInstrumentation[16];
  /* 0x0190 */ unsigned __int64 SystemReserved1[30];
  /* 0x0280 */ char PlaceholderCompatibilityMode;
  /* 0x0281 */ unsigned char PlaceholderHydrationAlwaysExplicit;
  /* 0x0282 */ char PlaceholderReserved[10];
  /* 0x028c */ unsigned long ProxiedProcessId;
  /* 0x0290 */ struct _ACTIVATION_CONTEXT_STACK64 _ActivationStack;
  /* 0x02b8 */ unsigned char WorkingOnBehalfTicket[8];
  /* 0x02c0 */ long ExceptionCode;
  /* 0x02c4 */ unsigned char Padding0[4];
  /* 0x02c8 */ unsigned __int64 ActivationContextStackPointer;
  /* 0x02d0 */ unsigned __int64 InstrumentationCallbackSp;
  /* 0x02d8 */ unsigned __int64 InstrumentationCallbackPreviousPc;
  /* 0x02e0 */ unsigned __int64 InstrumentationCallbackPreviousSp;
  /* 0x02e8 */ unsigned long TxFsContext;
  /* 0x02ec */ unsigned char InstrumentationCallbackDisabled;
  /* 0x02ed */ unsigned char UnalignedLoadStoreExceptions;
  /* 0x02ee */ unsigned char Padding1[2];
  /* 0x02f0 */ struct _GDI_TEB_BATCH64 GdiTebBatch;
  /* 0x07d8 */ struct _CLIENT_ID64 RealClientId;
  /* 0x07e8 */ unsigned __int64 GdiCachedProcessHandle;
  /* 0x07f0 */ unsigned long GdiClientPID;
  /* 0x07f4 */ unsigned long GdiClientTID;
  /* 0x07f8 */ unsigned __int64 GdiThreadLocalInfo;
  /* 0x0800 */ unsigned __int64 Win32ClientInfo[62];
  /* 0x09f0 */ unsigned __int64 glDispatchTable[233];
  /* 0x1138 */ unsigned __int64 glReserved1[29];
  /* 0x1220 */ unsigned __int64 glReserved2;
  /* 0x1228 */ unsigned __int64 glSectionInfo;
  /* 0x1230 */ unsigned __int64 glSection;
  /* 0x1238 */ unsigned __int64 glTable;
  /* 0x1240 */ unsigned __int64 glCurrentRC;
  /* 0x1248 */ unsigned __int64 glContext;
  /* 0x1250 */ unsigned long LastStatusValue;
  /* 0x1254 */ unsigned char Padding2[4];
  /* 0x1258 */ struct _STRING64 StaticUnicodeString;
  /* 0x1268 */ wchar_t StaticUnicodeBuffer[261];
  /* 0x1472 */ unsigned char Padding3[6];
  /* 0x1478 */ unsigned __int64 DeallocationStack;
  /* 0x1480 */ unsigned __int64 TlsSlots[64];
  /* 0x1680 */ struct LIST_ENTRY64 TlsLinks;
  /* 0x1690 */ unsigned __int64 Vdm;
  /* 0x1698 */ unsigned __int64 ReservedForNtRpc;
  /* 0x16a0 */ unsigned __int64 DbgSsReserved[2];
  /* 0x16b0 */ unsigned long HardErrorMode;
  /* 0x16b4 */ unsigned char Padding4[4];
  /* 0x16b8 */ unsigned __int64 Instrumentation[11];
  /* 0x1710 */ struct _GUID ActivityId;
  /* 0x1720 */ unsigned __int64 SubProcessTag;
  /* 0x1728 */ unsigned __int64 PerflibData;
  /* 0x1730 */ unsigned __int64 EtwTraceData;
  /* 0x1738 */ unsigned __int64 WinSockData;
  /* 0x1740 */ unsigned long GdiBatchCount;
  union
  {
    /* 0x1744 */ struct _PROCESSOR_NUMBER CurrentIdealProcessor;
    /* 0x1744 */ unsigned long IdealProcessorValue;
    struct
    {
      /* 0x1744 */ unsigned char ReservedPad0;
      /* 0x1745 */ unsigned char ReservedPad1;
      /* 0x1746 */ unsigned char ReservedPad2;
      /* 0x1747 */ unsigned char IdealProcessor;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x1748 */ unsigned long GuaranteedStackBytes;
  /* 0x174c */ unsigned char Padding5[4];
  /* 0x1750 */ unsigned __int64 ReservedForPerf;
  /* 0x1758 */ unsigned __int64 ReservedForOle;
  /* 0x1760 */ unsigned long WaitingOnLoaderLock;
  /* 0x1764 */ unsigned char Padding6[4];
  /* 0x1768 */ unsigned __int64 SavedPriorityState;
  /* 0x1770 */ unsigned __int64 ReservedForCodeCoverage;
  /* 0x1778 */ unsigned __int64 ThreadPoolData;
  /* 0x1780 */ unsigned __int64 TlsExpansionSlots;
  /* 0x1788 */ unsigned __int64 DeallocationBStore;
  /* 0x1790 */ unsigned __int64 BStoreLimit;
  /* 0x1798 */ unsigned long MuiGeneration;
  /* 0x179c */ unsigned long IsImpersonating;
  /* 0x17a0 */ unsigned __int64 NlsCache;
  /* 0x17a8 */ unsigned __int64 pShimData;
  /* 0x17b0 */ unsigned long HeapData;
  /* 0x17b4 */ unsigned char Padding7[4];
  /* 0x17b8 */ unsigned __int64 CurrentTransactionHandle;
  /* 0x17c0 */ unsigned __int64 ActiveFrame;
  /* 0x17c8 */ unsigned __int64 FlsData;
  /* 0x17d0 */ unsigned __int64 PreferredLanguages;
  /* 0x17d8 */ unsigned __int64 UserPrefLanguages;
  /* 0x17e0 */ unsigned __int64 MergedPrefLanguages;
  /* 0x17e8 */ unsigned long MuiImpersonation;
  union
  {
    /* 0x17ec */ volatile unsigned short CrossTebFlags;
    /* 0x17ec */ unsigned short SpareCrossTebBits : 16; /* bit position: 0 */
  }; /* size: 0x0002 */
  union
  {
    /* 0x17ee */ unsigned short SameTebFlags;
    struct /* bitfield */
    {
      /* 0x17ee */ unsigned short SafeThunkCall : 1; /* bit position: 0 */
      /* 0x17ee */ unsigned short InDebugPrint : 1; /* bit position: 1 */
      /* 0x17ee */ unsigned short HasFiberData : 1; /* bit position: 2 */
      /* 0x17ee */ unsigned short SkipThreadAttach : 1; /* bit position: 3 */
      /* 0x17ee */ unsigned short WerInShipAssertCode : 1; /* bit position: 4 */
      /* 0x17ee */ unsigned short RanProcessInit : 1; /* bit position: 5 */
      /* 0x17ee */ unsigned short ClonedThread : 1; /* bit position: 6 */
      /* 0x17ee */ unsigned short SuppressDebugMsg : 1; /* bit position: 7 */
      /* 0x17ee */ unsigned short DisableUserStackWalk : 1; /* bit position: 8 */
      /* 0x17ee */ unsigned short RtlExceptionAttached : 1; /* bit position: 9 */
      /* 0x17ee */ unsigned short InitialThread : 1; /* bit position: 10 */
      /* 0x17ee */ unsigned short SessionAware : 1; /* bit position: 11 */
      /* 0x17ee */ unsigned short LoadOwner : 1; /* bit position: 12 */
      /* 0x17ee */ unsigned short LoaderWorker : 1; /* bit position: 13 */
      /* 0x17ee */ unsigned short SkipLoaderInit : 1; /* bit position: 14 */
      /* 0x17ee */ unsigned short SpareSameTebBits : 1; /* bit position: 15 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x17f0 */ unsigned __int64 TxnScopeEnterCallback;
  /* 0x17f8 */ unsigned __int64 TxnScopeExitCallback;
  /* 0x1800 */ unsigned __int64 TxnScopeContext;
  /* 0x1808 */ unsigned long LockCount;
  /* 0x180c */ long WowTebOffset;
  /* 0x1810 */ unsigned __int64 ResourceRetValue;
  /* 0x1818 */ unsigned __int64 ReservedForWdf;
  /* 0x1820 */ unsigned __int64 ReservedForCrt;
  /* 0x1828 */ struct _GUID EffectiveContainerId;
} TEB64, *PTEB64; /* size: 0x1838 */


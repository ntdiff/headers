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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_STACK
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NextCookieSequenceNumber;
  /* 0x0008 */ void* ActiveFrame;
  /* 0x000c */ struct _LIST_ENTRY FrameListCache;
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK; /* size: 0x0014 */

typedef struct _GDI_TEB_BATCH
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long HDC;
  /* 0x0008 */ unsigned long Buffer[310];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH; /* size: 0x04e0 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _Wx86ThreadState
{
  /* 0x0000 */ unsigned long* CallBx86Eip;
  /* 0x0004 */ void* DeallocationCpu;
  /* 0x0008 */ unsigned char UseKnownWx86Dll;
  /* 0x0009 */ char OleStubInvoked;
  /* 0x000a */ char __PADDING__[2];
} Wx86ThreadState, *PWx86ThreadState; /* size: 0x000c */

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
  /* 0x01a8 */ struct _ACTIVATION_CONTEXT_STACK ActivationContextStack;
  /* 0x01bc */ unsigned char SpareBytes1[24];
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
  /* 0x0c00 */ unsigned short StaticUnicodeBuffer[261];
  /* 0x0e0c */ void* DeallocationStack;
  /* 0x0e10 */ void* TlsSlots[64];
  /* 0x0f10 */ struct _LIST_ENTRY TlsLinks;
  /* 0x0f18 */ void* Vdm;
  /* 0x0f1c */ void* ReservedForNtRpc;
  /* 0x0f20 */ void* DbgSsReserved[2];
  /* 0x0f28 */ unsigned long HardErrorsAreDisabled;
  /* 0x0f2c */ void* Instrumentation[16];
  /* 0x0f6c */ void* WinSockData;
  /* 0x0f70 */ unsigned long GdiBatchCount;
  /* 0x0f74 */ unsigned char InDbgPrint;
  /* 0x0f75 */ unsigned char FreeStackOnTermination;
  /* 0x0f76 */ unsigned char HasFiberData;
  /* 0x0f77 */ unsigned char IdealProcessor;
  /* 0x0f78 */ unsigned long Spare3;
  /* 0x0f7c */ void* ReservedForPerf;
  /* 0x0f80 */ void* ReservedForOle;
  /* 0x0f84 */ unsigned long WaitingOnLoaderLock;
  /* 0x0f88 */ struct _Wx86ThreadState Wx86Thread;
  /* 0x0f94 */ void** TlsExpansionSlots;
  /* 0x0f98 */ unsigned long ImpersonationLocale;
  /* 0x0f9c */ unsigned long IsImpersonating;
  /* 0x0fa0 */ void* NlsCache;
  /* 0x0fa4 */ void* pShimData;
  /* 0x0fa8 */ unsigned long HeapVirtualAffinity;
  /* 0x0fac */ void* CurrentTransactionHandle;
  /* 0x0fb0 */ struct _TEB_ACTIVE_FRAME* ActiveFrame;
  /* 0x0fb4 */ unsigned char SafeThunkCall;
  /* 0x0fb5 */ unsigned char BooleanSpare[3];
} TEB, *PTEB; /* size: 0x0fb8 */


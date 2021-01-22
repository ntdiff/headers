typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

typedef struct _OBP_SYSTEM_DOS_DEVICE_STATE
{
  /* 0x0000 */ unsigned long GlobalDeviceMap;
  /* 0x0004 */ unsigned long LocalDeviceCount[26];
} OBP_SYSTEM_DOS_DEVICE_STATE, *POBP_SYSTEM_DOS_DEVICE_STATE; /* size: 0x006c */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _OBJECT_NAMESPACE_LOOKUPTABLE
{
  /* 0x0000 */ struct _LIST_ENTRY HashBuckets[37];
  /* 0x0250 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0258 */ unsigned long NumberOfPrivateSpaces;
  /* 0x025c */ long __PADDING__[1];
} OBJECT_NAMESPACE_LOOKUPTABLE, *POBJECT_NAMESPACE_LOOKUPTABLE; /* size: 0x0260 */

typedef struct _OBP_SILODRIVERSTATE
{
  /* 0x0000 */ struct _EX_FAST_REF SystemDeviceMap;
  /* 0x0008 */ struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;
  /* 0x0078 */ struct _EX_PUSH_LOCK DeviceMapLock;
  /* 0x0080 */ struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;
} OBP_SILODRIVERSTATE, *POBP_SILODRIVERSTATE; /* size: 0x02e0 */

typedef struct _SEP_SILOSTATE
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
  /* 0x0008 */ struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
  /* 0x0010 */ void* AnonymousLogonToken;
  /* 0x0018 */ void* AnonymousLogonTokenNoEveryone;
  /* 0x0020 */ struct _UNICODE_STRING* UncSystemPaths;
  /* 0x0028 */ struct _CI_NGEN_PATHS* NgenPaths;
} SEP_SILOSTATE, *PSEP_SILOSTATE; /* size: 0x0030 */

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

typedef struct _SEP_RM_LSA_CONNECTION_STATE
{
  /* 0x0000 */ void* LsaProcessHandle;
  /* 0x0008 */ void* LsaCommandPortHandle;
  /* 0x0010 */ void* SepRmThreadHandle;
  /* 0x0018 */ void* RmCommandPortHandle;
  /* 0x0020 */ void* RmCommandServerPortHandle;
  /* 0x0028 */ void* LsaCommandPortSectionHandle;
  /* 0x0030 */ union _LARGE_INTEGER LsaCommandPortSectionSize;
  /* 0x0038 */ void* LsaViewPortMemory;
  /* 0x0040 */ void* RmViewPortMemory;
  /* 0x0048 */ long LsaCommandPortMemoryDelta;
  /* 0x004c */ unsigned char LsaCommandPortActive;
  /* 0x004d */ char __PADDING__[3];
} SEP_RM_LSA_CONNECTION_STATE, *PSEP_RM_LSA_CONNECTION_STATE; /* size: 0x0050 */

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0008 */

typedef struct _WNF_SILODRIVERSTATE
{
  /* 0x0000 */ struct _WNF_SCOPE_MAP* ScopeMap;
  /* 0x0008 */ void* volatile PermanentNameStoreRootKey;
  /* 0x0010 */ void* volatile PersistentNameStoreRootKey;
  /* 0x0018 */ volatile __int64 PermanentNameSequenceNumber;
  /* 0x0020 */ struct _WNF_LOCK PermanentNameSequenceNumberLock;
  /* 0x0028 */ volatile __int64 PermanentNameSequenceNumberPool;
  /* 0x0030 */ volatile __int64 RuntimeNameSequenceNumber;
} WNF_SILODRIVERSTATE, *PWNF_SILODRIVERSTATE; /* size: 0x0038 */

typedef struct _DBGK_SILOSTATE
{
  /* 0x0000 */ struct _EX_PUSH_LOCK ErrorPortLock;
  /* 0x0008 */ struct _DBGKP_ERROR_PORT* ErrorPort;
  /* 0x0010 */ struct _EPROCESS* ErrorProcess;
  /* 0x0018 */ struct _KEVENT* ErrorPortRegisteredEvent;
} DBGK_SILOSTATE, *PDBGK_SILOSTATE; /* size: 0x0020 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _CPTABLEINFO
{
  /* 0x0000 */ unsigned short CodePage;
  /* 0x0002 */ unsigned short MaximumCharacterSize;
  /* 0x0004 */ unsigned short DefaultChar;
  /* 0x0006 */ unsigned short UniDefaultChar;
  /* 0x0008 */ unsigned short TransDefaultChar;
  /* 0x000a */ unsigned short TransUniDefaultChar;
  /* 0x000c */ unsigned short DBCSCodePage;
  /* 0x000e */ unsigned char LeadByte[12];
  /* 0x0020 */ wchar_t* MultiByteTable;
  /* 0x0028 */ void* WideCharTable;
  /* 0x0030 */ wchar_t* DBCSRanges;
  /* 0x0038 */ wchar_t* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x0040 */

typedef struct _RTL_NLS_STATE
{
  /* 0x0000 */ struct _CPTABLEINFO DefaultAcpTableInfo;
  /* 0x0040 */ struct _CPTABLEINFO DefaultOemTableInfo;
  /* 0x0080 */ wchar_t* ActiveCodePageData;
  /* 0x0088 */ wchar_t* OemCodePageData;
  /* 0x0090 */ wchar_t* LeadByteInfo;
  /* 0x0098 */ wchar_t* OemLeadByteInfo;
  /* 0x00a0 */ wchar_t* CaseMappingData;
  /* 0x00a8 */ wchar_t* UnicodeUpcaseTable844;
  /* 0x00b0 */ wchar_t* UnicodeLowercaseTable844;
} RTL_NLS_STATE, *PRTL_NLS_STATE; /* size: 0x00b8 */

typedef enum _SERVERSILO_STATE
{
  SERVERSILO_INITING = 0,
  SERVERSILO_STARTED = 1,
  SERVERSILO_SHUTTING_DOWN = 2,
  SERVERSILO_TERMINATING = 3,
  SERVERSILO_TERMINATED = 4,
} SERVERSILO_STATE, *PSERVERSILO_STATE;

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _TIME_FIELDS
{
  /* 0x0000 */ short Year;
  /* 0x0002 */ short Month;
  /* 0x0004 */ short Day;
  /* 0x0006 */ short Hour;
  /* 0x0008 */ short Minute;
  /* 0x000a */ short Second;
  /* 0x000c */ short Milliseconds;
  /* 0x000e */ short Weekday;
} TIME_FIELDS, *PTIME_FIELDS; /* size: 0x0010 */

typedef struct _RTL_TIME_ZONE_INFORMATION
{
  /* 0x0000 */ long Bias;
  /* 0x0004 */ wchar_t StandardName[32];
  /* 0x0044 */ struct _TIME_FIELDS StandardStart;
  /* 0x0054 */ long StandardBias;
  /* 0x0058 */ wchar_t DaylightName[32];
  /* 0x0098 */ struct _TIME_FIELDS DaylightStart;
  /* 0x00a8 */ long DaylightBias;
} RTL_TIME_ZONE_INFORMATION, *PRTL_TIME_ZONE_INFORMATION; /* size: 0x00ac */

typedef struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION
{
  /* 0x0000 */ struct _RTL_TIME_ZONE_INFORMATION tzi;
  /* 0x00ac */ wchar_t TimeZoneKeyName[128];
  /* 0x01ac */ unsigned char DynamicDaylightTimeDisabled;
  /* 0x01ad */ char __PADDING__[3];
} RTL_DYNAMIC_TIME_ZONE_INFORMATION, *PRTL_DYNAMIC_TIME_ZONE_INFORMATION; /* size: 0x01b0 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ union _ULARGE_INTEGER DueTime;
  /* 0x0020 */ struct _LIST_ENTRY TimerListEntry;
  /* 0x0030 */ struct _KDPC* Dpc;
  /* 0x0038 */ unsigned short Processor;
  /* 0x003a */ unsigned short TimerType;
  /* 0x003c */ unsigned long Period;
} KTIMER, *PKTIMER; /* size: 0x0040 */

typedef struct _ESERVERSILO_GLOBALS
{
  /* 0x0000 */ struct _OBP_SILODRIVERSTATE ObSiloState;
  /* 0x02e0 */ struct _SEP_SILOSTATE SeSiloState;
  /* 0x0310 */ struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;
  /* 0x0360 */ struct _ETW_SILODRIVERSTATE* EtwSiloState;
  /* 0x0368 */ struct _EPROCESS* MiSessionLeaderProcess;
  /* 0x0370 */ struct _EPROCESS* ExpDefaultErrorPortProcess;
  /* 0x0378 */ void* ExpDefaultErrorPort;
  /* 0x0380 */ unsigned long HardErrorState;
  /* 0x0388 */ struct _EXP_LICENSE_STATE* ExpLicenseState;
  /* 0x0390 */ struct _WNF_SILODRIVERSTATE WnfSiloState;
  /* 0x03c8 */ struct _DBGK_SILOSTATE DbgkSiloState;
  /* 0x03e8 */ struct _UNICODE_STRING PsProtectedCurrentDirectory;
  /* 0x03f8 */ struct _UNICODE_STRING PsProtectedEnvironment;
  /* 0x0408 */ void* ApiSetSection;
  /* 0x0410 */ void* ApiSetSchema;
  /* 0x0418 */ unsigned char OneCoreForwardersEnabled;
  /* 0x0420 */ struct _NLS_STATE* NlsState;
  /* 0x0428 */ struct _RTL_NLS_STATE RtlNlsState;
  /* 0x04e0 */ struct _UNICODE_STRING NtSystemRoot;
  /* 0x04f0 */ struct _UNICODE_STRING SiloRootDirectoryName;
  /* 0x0500 */ struct _PSP_STORAGE* Storage;
  /* 0x0508 */ enum _SERVERSILO_STATE State;
  /* 0x050c */ long ExitStatus;
  /* 0x0510 */ struct _KEVENT* DeleteEvent;
  /* 0x0518 */ struct _SILO_USER_SHARED_DATA* UserSharedData;
  /* 0x0520 */ void* UserSharedSection;
  /* 0x0528 */ struct _WORK_QUEUE_ITEM TerminateWorkItem;
  /* 0x0548 */ unsigned char IsDownlevelContainer;
  /* 0x054c */ struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION ExpTimeZoneInformation;
  /* 0x06fc */ unsigned long ExpCurrentTimeZoneId;
  /* 0x0700 */ long ExpLastTimeZoneBias;
  /* 0x0708 */ struct _KDPC ExpTimeZoneDpc;
  /* 0x0748 */ struct _KTIMER ExpTimeZoneTimer;
  /* 0x0788 */ struct _WORK_QUEUE_ITEM ExpTimeZoneWorkItem;
  /* 0x07a8 */ struct _KDPC ExpCenturyDpc;
  /* 0x07e8 */ struct _KTIMER ExpCenturyTimer;
  /* 0x0828 */ struct _WORK_QUEUE_ITEM ExpCenturyWorkItem;
  /* 0x0848 */ struct _KDPC ExpNextYearDpc;
  /* 0x0888 */ struct _KTIMER ExpNextYearTimer;
  /* 0x08c8 */ struct _WORK_QUEUE_ITEM ExpNextYearWorkItem;
  /* 0x08e8 */ long ExpOkToTimeZoneRefresh;
  /* 0x08f0 */ union _LARGE_INTEGER ExpNextCenturyTimeInUTC;
  /* 0x08f8 */ struct _TIME_FIELDS ExpNextCenturyTimeFieldsInLocalTime;
  /* 0x0908 */ union _LARGE_INTEGER ExpNextYearTimeInUTC;
  /* 0x0910 */ struct _TIME_FIELDS ExpNextYearTimeFieldsInLocalTime;
  /* 0x0920 */ short ExpLastDynamicTimeZoneYear;
  /* 0x0928 */ union _LARGE_INTEGER ExpNextSystemCutoverInUTC;
  /* 0x0930 */ unsigned long ExpRefreshFailures;
  /* 0x0934 */ long __PADDING__[1];
} ESERVERSILO_GLOBALS, *PESERVERSILO_GLOBALS; /* size: 0x0938 */


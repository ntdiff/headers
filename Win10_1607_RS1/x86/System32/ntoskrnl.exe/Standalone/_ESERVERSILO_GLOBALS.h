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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _OBJECT_NAMESPACE_LOOKUPTABLE
{
  /* 0x0000 */ struct _LIST_ENTRY HashBuckets[37];
  /* 0x0128 */ struct _EX_PUSH_LOCK Lock;
  /* 0x012c */ unsigned long NumberOfPrivateSpaces;
} OBJECT_NAMESPACE_LOOKUPTABLE, *POBJECT_NAMESPACE_LOOKUPTABLE; /* size: 0x0130 */

typedef struct _OBP_SILODRIVERSTATE
{
  /* 0x0000 */ struct _DEVICE_MAP* SystemDeviceMap;
  /* 0x0004 */ struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;
  /* 0x0070 */ struct _EX_PUSH_LOCK DeviceMapLock;
  /* 0x0074 */ struct _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;
} OBP_SILODRIVERSTATE, *POBP_SILODRIVERSTATE; /* size: 0x01a4 */

typedef struct _SEP_SILOSTATE
{
  /* 0x0000 */ struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;
  /* 0x0004 */ struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;
  /* 0x0008 */ void* AnonymousLogonToken;
  /* 0x000c */ void* AnonymousLogonTokenNoEveryone;
} SEP_SILOSTATE, *PSEP_SILOSTATE; /* size: 0x0010 */

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
  /* 0x0004 */ void* LsaCommandPortHandle;
  /* 0x0008 */ void* SepRmThreadHandle;
  /* 0x000c */ void* RmCommandPortHandle;
  /* 0x0010 */ void* RmCommandServerPortHandle;
  /* 0x0014 */ void* LsaCommandPortSectionHandle;
  /* 0x0018 */ union _LARGE_INTEGER LsaCommandPortSectionSize;
  /* 0x0020 */ void* LsaViewPortMemory;
  /* 0x0024 */ void* RmViewPortMemory;
  /* 0x0028 */ long LsaCommandPortMemoryDelta;
  /* 0x002c */ unsigned char LsaCommandPortActive;
  /* 0x002d */ char __PADDING__[3];
} SEP_RM_LSA_CONNECTION_STATE, *PSEP_RM_LSA_CONNECTION_STATE; /* size: 0x0030 */

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0004 */

typedef struct _WNF_SILODRIVERSTATE
{
  /* 0x0000 */ struct _WNF_SCOPE_MAP* ScopeMap;
  /* 0x0004 */ void* volatile PermanentNameStoreRootKey;
  /* 0x0008 */ void* volatile PersistentNameStoreRootKey;
  /* 0x0010 */ volatile __int64 PermanentNameSequenceNumber;
  /* 0x0018 */ struct _WNF_LOCK PermanentNameSequenceNumberLock;
  /* 0x0020 */ volatile __int64 PermanentNameSequenceNumberPool;
  /* 0x0028 */ volatile __int64 RuntimeNameSequenceNumber;
} WNF_SILODRIVERSTATE, *PWNF_SILODRIVERSTATE; /* size: 0x0030 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef enum _SERVERSILO_STATE
{
  SERVERSILO_INITING = 0,
  SERVERSILO_STARTED = 1,
  SERVERSILO_SHUTTING_DOWN = 2,
  SERVERSILO_TERMINATING = 3,
  SERVERSILO_TERMINATED = 4,
} SERVERSILO_STATE, *PSERVERSILO_STATE;

typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef struct _SILO_USER_SHARED_DATA
{
  /* 0x0000 */ unsigned long ServiceSessionId;
  /* 0x0004 */ unsigned long ActiveConsoleId;
  /* 0x0008 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0010 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0014 */ unsigned long SuiteMask;
  /* 0x0018 */ unsigned char IsMultiSessionSku;
  /* 0x0019 */ char __PADDING__[7];
} SILO_USER_SHARED_DATA, *PSILO_USER_SHARED_DATA; /* size: 0x0020 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _ESERVERSILO_GLOBALS
{
  /* 0x0000 */ struct _OBP_SILODRIVERSTATE ObSiloState;
  /* 0x01a4 */ struct _SEP_SILOSTATE SeSiloState;
  /* 0x01b8 */ struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;
  /* 0x01e8 */ struct _ETW_SILODRIVERSTATE* EtwSiloState;
  /* 0x01ec */ struct _EPROCESS* MiSessionLeaderProcess;
  /* 0x01f0 */ struct _EPROCESS* ExpDefaultErrorPortProcess;
  /* 0x01f4 */ void* ExpDefaultErrorPort;
  /* 0x01f8 */ unsigned long HardErrorState;
  /* 0x0200 */ struct _WNF_SILODRIVERSTATE WnfSiloState;
  /* 0x0230 */ void* ApiSetSection;
  /* 0x0234 */ void* ApiSetSchema;
  /* 0x0238 */ unsigned char OneCoreForwardersEnabled;
  /* 0x023c */ struct _UNICODE_STRING SiloRootDirectoryName;
  /* 0x0244 */ struct _PSP_STORAGE* Storage;
  /* 0x0248 */ enum _SERVERSILO_STATE State;
  /* 0x024c */ long ExitStatus;
  /* 0x0250 */ struct _KEVENT* DeleteEvent;
  /* 0x0258 */ struct _SILO_USER_SHARED_DATA UserSharedData;
  /* 0x0278 */ struct _WORK_QUEUE_ITEM TerminateWorkItem;
} ESERVERSILO_GLOBALS, *PESERVERSILO_GLOBALS; /* size: 0x0288 */


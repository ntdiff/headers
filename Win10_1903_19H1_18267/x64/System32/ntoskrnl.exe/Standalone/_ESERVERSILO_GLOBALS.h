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
  /* 0x0000 */ struct _DEVICE_MAP* SystemDeviceMap;
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
  /* 0x0388 */ struct _WNF_SILODRIVERSTATE WnfSiloState;
  /* 0x03c0 */ struct _DBGK_SILOSTATE DbgkSiloState;
  /* 0x03e0 */ struct _UNICODE_STRING PsProtectedCurrentDirectory;
  /* 0x03f0 */ struct _UNICODE_STRING PsProtectedEnvironment;
  /* 0x0400 */ void* ApiSetSection;
  /* 0x0408 */ void* ApiSetSchema;
  /* 0x0410 */ unsigned char OneCoreForwardersEnabled;
  /* 0x0418 */ struct _UNICODE_STRING NtSystemRoot;
  /* 0x0428 */ struct _UNICODE_STRING SiloRootDirectoryName;
  /* 0x0438 */ struct _PSP_STORAGE* Storage;
  /* 0x0440 */ enum _SERVERSILO_STATE State;
  /* 0x0444 */ long ExitStatus;
  /* 0x0448 */ struct _KEVENT* DeleteEvent;
  /* 0x0450 */ struct _SILO_USER_SHARED_DATA* UserSharedData;
  /* 0x0458 */ void* UserSharedSection;
  /* 0x0460 */ struct _WORK_QUEUE_ITEM TerminateWorkItem;
} ESERVERSILO_GLOBALS, *PESERVERSILO_GLOBALS; /* size: 0x0480 */


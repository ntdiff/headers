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

typedef struct _SEP_RM_LSA_CONNECTION_STATE
{
  /* 0x0000 */ void* LsaProcessHandle;
  /* 0x0008 */ void* LsaCommandPortHandle;
  /* 0x0010 */ void* SepRmThreadHandle;
  /* 0x0018 */ void* RmCommandPortHandle;
  /* 0x0020 */ void* RmCommandServerPortHandle;
  /* 0x0028 */ unsigned char LsaCommandPortActive;
  /* 0x0029 */ char __PADDING__[7];
} SEP_RM_LSA_CONNECTION_STATE, *PSEP_RM_LSA_CONNECTION_STATE; /* size: 0x0030 */

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
  /* 0x0020 */ unsigned short* MultiByteTable;
  /* 0x0028 */ void* WideCharTable;
  /* 0x0030 */ unsigned short* DBCSRanges;
  /* 0x0038 */ unsigned short* DBCSOffsets;
} CPTABLEINFO, *PCPTABLEINFO; /* size: 0x0040 */

typedef struct _RTL_NLS_STATE
{
  /* 0x0000 */ struct _CPTABLEINFO DefaultAcpTableInfo;
  /* 0x0040 */ struct _CPTABLEINFO DefaultOemTableInfo;
  /* 0x0080 */ unsigned short* ActiveCodePageData;
  /* 0x0088 */ unsigned short* OemCodePageData;
  /* 0x0090 */ unsigned short* LeadByteInfo;
  /* 0x0098 */ unsigned short* OemLeadByteInfo;
  /* 0x00a0 */ unsigned short* CaseMappingData;
  /* 0x00a8 */ unsigned short* UnicodeUpcaseTable844;
  /* 0x00b0 */ unsigned short* UnicodeLowercaseTable844;
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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CRITICAL_PROCESS_EXCEPTION_DATA
{
  /* 0x0000 */ struct _GUID ReportId;
  /* 0x0010 */ struct _UNICODE_STRING ModuleName;
  /* 0x0020 */ unsigned long ModuleTimestamp;
  /* 0x0024 */ unsigned long ModuleSize;
  /* 0x0028 */ unsigned __int64 Offset;
} CRITICAL_PROCESS_EXCEPTION_DATA, *PCRITICAL_PROCESS_EXCEPTION_DATA; /* size: 0x0030 */

typedef struct _ESERVERSILO_GLOBALS
{
  /* 0x0000 */ struct _OBP_SILODRIVERSTATE ObSiloState;
  /* 0x02e0 */ struct _SEP_SILOSTATE SeSiloState;
  /* 0x0310 */ struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;
  /* 0x0340 */ struct _ETW_SILODRIVERSTATE* EtwSiloState;
  /* 0x0348 */ struct _EPROCESS* PspSessionLeaderProcess;
  /* 0x0350 */ struct _EPROCESS* ExpDefaultErrorPortProcess;
  /* 0x0358 */ void* ExpDefaultErrorPort;
  /* 0x0360 */ unsigned long HardErrorState;
  /* 0x0368 */ struct _EXP_LICENSE_STATE* ExpLicenseState;
  /* 0x0370 */ struct _WNF_SILODRIVERSTATE WnfSiloState;
  /* 0x03a8 */ struct _DBGK_SILOSTATE DbgkSiloState;
  /* 0x03c8 */ struct _UNICODE_STRING PsProtectedCurrentDirectory;
  /* 0x03d8 */ struct _UNICODE_STRING PsProtectedEnvironment;
  /* 0x03e8 */ void* ApiSetSection;
  /* 0x03f0 */ void* ApiSetSchema;
  /* 0x03f8 */ unsigned char OneCoreForwardersEnabled;
  /* 0x0400 */ struct _NLS_STATE* NlsState;
  /* 0x0408 */ struct _RTL_NLS_STATE RtlNlsState;
  /* 0x04c0 */ void* ImgFileExecOptions;
  /* 0x04c8 */ struct _EX_TIMEZONE_STATE* ExTimeZoneState;
  /* 0x04d0 */ struct _UNICODE_STRING NtSystemRoot;
  /* 0x04e0 */ struct _UNICODE_STRING SiloRootDirectoryName;
  /* 0x04f0 */ struct _PSP_STORAGE* Storage;
  /* 0x04f8 */ enum _SERVERSILO_STATE State;
  /* 0x04fc */ long ExitStatus;
  /* 0x0500 */ struct _KEVENT* DeleteEvent;
  /* 0x0508 */ struct _SILO_USER_SHARED_DATA* UserSharedData;
  /* 0x0510 */ void* UserSharedSection;
  /* 0x0518 */ struct _WORK_QUEUE_ITEM TerminateWorkItem;
  /* 0x0538 */ unsigned long ContainerBuildNumber;
  /* 0x053c */ long CriticalProcessExited;
  /* 0x0540 */ long CriticalProcessStatus;
  /* 0x0544 */ unsigned char CriticalProcessName[15];
  /* 0x0558 */ struct _CRITICAL_PROCESS_EXCEPTION_DATA CriticalProcessExceptionData;
  /* 0x0588 */ unsigned long RtlFunctionalityCache[4];
} ESERVERSILO_GLOBALS, *PESERVERSILO_GLOBALS; /* size: 0x0598 */


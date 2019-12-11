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

typedef enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileIdGlobalTxDirectoryInformation = 50,
  FileIsRemoteDeviceInformation = 51,
  FileUnusedInformation = 52,
  FileNumaNodeInformation = 53,
  FileStandardLinkInformation = 54,
  FileRemoteProtocolInformation = 55,
  FileRenameInformationBypassAccessCheck = 56,
  FileLinkInformationBypassAccessCheck = 57,
  FileVolumeNameInformation = 58,
  FileIdInformation = 59,
  FileIdExtdDirectoryInformation = 60,
  FileReplaceCompletionInformation = 61,
  FileHardLinkFullIdInformation = 62,
  FileIdExtdBothDirectoryInformation = 63,
  FileDispositionInformationEx = 64,
  FileRenameInformationEx = 65,
  FileRenameInformationExBypassAccessCheck = 66,
  FileDesiredStorageClassInformation = 67,
  FileStatInformation = 68,
  FileMemoryPartitionInformation = 69,
  FileStatLxInformation = 70,
  FileCaseSensitiveInformation = 71,
  FileLinkInformationEx = 72,
  FileLinkInformationExBypassAccessCheck = 73,
  FileStorageReserveIdInformation = 74,
  FileCaseSensitiveInformationForceAccessCheck = 75,
  FileMaximumInformation = 76,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
  DirectoryNotifyInformation = 1,
  DirectoryNotifyExtendedInformation = 2,
} DIRECTORY_NOTIFY_INFORMATION_CLASS, *PDIRECTORY_NOTIFY_INFORMATION_CLASS;

typedef enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsVolumeFlagsInformation = 10,
  FileFsSectorSizeInformation = 11,
  FileFsDataCopyInformation = 12,
  FileFsMetadataSizeInformation = 13,
  FileFsFullSizeInformationEx = 14,
  FileFsMaximumInformation = 15,
} FSINFOCLASS, *PFSINFOCLASS;

typedef enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
  TransportRelations = 6,
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

enum BUS_QUERY_ID_TYPE
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4,
  BusQueryContainerID = 5,
};

enum DEVICE_TEXT_TYPE
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1,
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
  DeviceUsageTypeBoot = 4,
  DeviceUsageTypePostDisplay = 5,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long PseudoTransition : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long KernelSoftReboot : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long DirectedDripsTransition : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Reserved2 : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

enum POWER_ACTION
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
};

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short FileAttributes;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ unsigned long EaLength;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Create;
      struct
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short Reserved;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0020 */ CreatePipe;
      struct
      {
        /* 0x0008 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0010 */ unsigned long Options;
        /* 0x0018 */ unsigned short Reserved;
        /* 0x001a */ unsigned short ShareAccess;
        /* 0x0020 */ struct _MAILSLOT_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0020 */ CreateMailslot;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0014 */ unsigned long Flags;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Read;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0014 */ unsigned long Flags;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ Write;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ struct _UNICODE_STRING* FileName;
        /* 0x0018 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0020 */ unsigned long FileIndex;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ QueryDirectory;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long CompletionFilter;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ NotifyDirectory;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ unsigned long CompletionFilter;
        /* 0x0018 */ enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
        /* 0x001c */ long __PADDING__[1];
      } /* size: 0x0018 */ NotifyDirectoryEx;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryFile;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0018 */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0020 */ unsigned char ReplaceIfExists;
            /* 0x0021 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0020 */ unsigned long ClusterCount;
          /* 0x0020 */ void* DeleteHandle;
        }; /* size: 0x0008 */
      } /* size: 0x0020 */ SetFile;
      struct
      {
        /* 0x0008 */ unsigned long Length;
        /* 0x0010 */ enum _FSINFOCLASS FsInformationClass;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryVolume;
      struct
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x0018 */ unsigned long FsControlCode;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ FileSystemControl;
      struct
      {
        /* 0x0008 */ union _LARGE_INTEGER* Length;
        /* 0x0010 */ unsigned long Key;
        /* 0x0018 */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0018 */ LockControl;
      struct
      {
        /* 0x0008 */ unsigned long OutputBufferLength;
        /* 0x0010 */ unsigned long InputBufferLength;
        /* 0x0018 */ unsigned long IoControlCode;
        /* 0x0020 */ void* Type3InputBuffer;
      } /* size: 0x0020 */ DeviceIoControl;
      struct
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0010 */ unsigned long Length;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QuerySecurity;
      struct
      {
        /* 0x0008 */ unsigned long SecurityInformation;
        /* 0x0010 */ void* SecurityDescriptor;
      } /* size: 0x0010 */ SetSecurity;
      struct
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ MountVolume;
      struct
      {
        /* 0x0008 */ struct _VPB* Vpb;
        /* 0x0010 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0010 */ VerifyVolume;
      struct
      {
        /* 0x0008 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0008 */ Scsi;
      struct
      {
        /* 0x0008 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct
      {
        /* 0x0008 */ const struct _GUID* InterfaceType;
        /* 0x0010 */ unsigned short Size;
        /* 0x0012 */ unsigned short Version;
        /* 0x0018 */ struct _INTERFACE* Interface;
        /* 0x0020 */ void* InterfaceSpecificData;
      } /* size: 0x0020 */ QueryInterface;
      struct
      {
        /* 0x0008 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0008 */ DeviceCapabilities;
      struct
      {
        /* 0x0008 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0008 */ FilterResourceRequirements;
      struct
      {
        /* 0x0008 */ unsigned long WhichSpace;
        /* 0x0010 */ void* Buffer;
        /* 0x0018 */ unsigned long Offset;
        /* 0x0020 */ unsigned long Length;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ ReadWriteConfig;
      struct
      {
        /* 0x0008 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct
      {
        /* 0x0008 */ enum BUS_QUERY_ID_TYPE IdType;
      } /* size: 0x0004 */ QueryId;
      struct
      {
        /* 0x0008 */ enum DEVICE_TEXT_TYPE DeviceTextType;
        /* 0x0010 */ unsigned long LocaleId;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ QueryDeviceText;
      struct
      {
        /* 0x0008 */ unsigned char InPath;
        /* 0x0009 */ unsigned char Reserved[3];
        /* 0x0010 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0010 */ UsageNotification;
      struct
      {
        /* 0x0008 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct
      {
        /* 0x0008 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0008 */ PowerSequence;
      struct
      {
        union
        {
          /* 0x0008 */ unsigned long SystemContext;
          /* 0x0008 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0010 */ enum _POWER_STATE_TYPE Type;
        /* 0x0018 */ union _POWER_STATE State;
        /* 0x0020 */ enum POWER_ACTION ShutdownType;
        /* 0x0024 */ long __PADDING__[1];
      } /* size: 0x0020 */ Power;
      struct
      {
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0010 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0010 */ StartDevice;
      struct
      {
        /* 0x0008 */ unsigned __int64 ProviderId;
        /* 0x0010 */ void* DataPath;
        /* 0x0018 */ unsigned long BufferSize;
        /* 0x0020 */ void* Buffer;
      } /* size: 0x0020 */ WMI;
      struct
      {
        /* 0x0008 */ void* Argument1;
        /* 0x0010 */ void* Argument2;
        /* 0x0018 */ void* Argument3;
        /* 0x0020 */ void* Argument4;
      } /* size: 0x0020 */ Others;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ Parameters;
  /* 0x0028 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0030 */ struct _FILE_OBJECT* FileObject;
  /* 0x0038 */ void* CompletionRoutine /* function */;
  /* 0x0040 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0048 */


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

typedef enum _CREATE_FILE_TYPE
{
  CreateFileTypeNone = 0,
  CreateFileTypeNamedPipe = 1,
  CreateFileTypeMailslot = 2,
} CREATE_FILE_TYPE, *PCREATE_FILE_TYPE;

typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0004 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0008 */ void* DeviceObjectHint;
  /* 0x000c */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
  /* 0x0010 */ struct _EJOB* SiloContext;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0014 */

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

typedef struct _OPEN_PACKET
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _FILE_OBJECT* FileObject;
  /* 0x0008 */ long FinalStatus;
  /* 0x000c */ unsigned long Information;
  /* 0x0010 */ unsigned long ParseCheck;
  union
  {
    /* 0x0014 */ struct _FILE_OBJECT* RelatedFileObject;
    /* 0x0014 */ struct _DEVICE_OBJECT* ReferencedDeviceObject;
  }; /* size: 0x0004 */
  /* 0x0018 */ struct _OBJECT_ATTRIBUTES* OriginalAttributes;
  /* 0x0020 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0028 */ unsigned long CreateOptions;
  /* 0x002c */ unsigned short FileAttributes;
  /* 0x002e */ unsigned short ShareAccess;
  /* 0x0030 */ void* EaBuffer;
  /* 0x0034 */ unsigned long EaLength;
  /* 0x0038 */ unsigned long Options;
  /* 0x003c */ unsigned long Disposition;
  /* 0x0040 */ struct _FILE_BASIC_INFORMATION* BasicInformation;
  /* 0x0044 */ struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;
  /* 0x0048 */ void* FileInformation;
  /* 0x004c */ enum _CREATE_FILE_TYPE CreateFileType;
  /* 0x0050 */ void* MailslotOrPipeParameters;
  /* 0x0054 */ unsigned char Override;
  /* 0x0055 */ unsigned char QueryOnly;
  /* 0x0056 */ unsigned char DeleteOnly;
  /* 0x0057 */ unsigned char FullAttributes;
  /* 0x0058 */ struct _DUMMY_FILE_OBJECT* LocalFileObject;
  /* 0x005c */ unsigned long InternalFlags;
  /* 0x0060 */ char AccessMode;
  /* 0x0064 */ struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;
  /* 0x0078 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
  /* 0x007c */ unsigned long FileInformationLength;
  /* 0x0080 */ unsigned char FilterQuery;
  /* 0x0081 */ char __PADDING__[7];
} OPEN_PACKET, *POPEN_PACKET; /* size: 0x0088 */


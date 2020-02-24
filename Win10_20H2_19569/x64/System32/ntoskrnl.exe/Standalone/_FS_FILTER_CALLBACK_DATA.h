typedef enum _FS_FILTER_SECTION_SYNC_TYPE
{
  SyncTypeOther = 0,
  SyncTypeCreateSection = 1,
} FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;

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

typedef union _FS_FILTER_PARAMETERS
{
  union
  {
    struct
    {
      /* 0x0000 */ union _LARGE_INTEGER* EndingOffset;
      /* 0x0008 */ struct _ERESOURCE** ResourceToRelease;
    } /* size: 0x0010 */ AcquireForModifiedPageWriter;
    struct
    {
      /* 0x0000 */ struct _ERESOURCE* ResourceToRelease;
    } /* size: 0x0008 */ ReleaseForModifiedPageWriter;
    struct
    {
      /* 0x0000 */ enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;
      /* 0x0004 */ unsigned long PageProtection;
      /* 0x0008 */ struct _FS_FILTER_SECTION_SYNC_OUTPUT* OutputInformation;
      /* 0x0010 */ unsigned long Flags;
      /* 0x0014 */ long __PADDING__[1];
    } /* size: 0x0018 */ AcquireForSectionSynchronization;
    struct
    {
      /* 0x0000 */ struct _IRP* Irp;
      /* 0x0008 */ void* FileInformation;
      /* 0x0010 */ unsigned long* Length;
      /* 0x0018 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
      /* 0x001c */ long CompletionStatus;
    } /* size: 0x0020 */ QueryOpen;
    struct
    {
      /* 0x0000 */ void* Argument1;
      /* 0x0008 */ void* Argument2;
      /* 0x0010 */ void* Argument3;
      /* 0x0018 */ void* Argument4;
      /* 0x0020 */ void* Argument5;
    } /* size: 0x0028 */ Others;
  }; /* size: 0x0028 */
} FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS; /* size: 0x0028 */

typedef struct _FS_FILTER_CALLBACK_DATA
{
  /* 0x0000 */ unsigned long SizeOfFsFilterCallbackData;
  /* 0x0004 */ unsigned char Operation;
  /* 0x0005 */ unsigned char Reserved;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _FILE_OBJECT* FileObject;
  /* 0x0018 */ union _FS_FILTER_PARAMETERS Parameters;
} FS_FILTER_CALLBACK_DATA, *PFS_FILTER_CALLBACK_DATA; /* size: 0x0040 */


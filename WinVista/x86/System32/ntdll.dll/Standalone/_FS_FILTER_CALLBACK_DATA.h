typedef enum _FS_FILTER_SECTION_SYNC_TYPE
{
  SyncTypeOther = 0,
  SyncTypeCreateSection = 1,
} FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;

typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
{
  NotifyTypeCreate = 0,
  NotifyTypeRetired = 1,
} FS_FILTER_STREAM_FO_NOTIFICATION_TYPE, *PFS_FILTER_STREAM_FO_NOTIFICATION_TYPE;

typedef union _FS_FILTER_PARAMETERS
{
  union
  {
    struct // _TAG_UNNAMED_15
    {
      /* 0x0000 */ union _LARGE_INTEGER* EndingOffset;
      /* 0x0004 */ struct _ERESOURCE** ResourceToRelease;
    } /* size: 0x0008 */ AcquireForModifiedPageWriter;
    struct // _TAG_UNNAMED_16
    {
      /* 0x0000 */ struct _ERESOURCE* ResourceToRelease;
    } /* size: 0x0004 */ ReleaseForModifiedPageWriter;
    struct // _TAG_UNNAMED_17
    {
      /* 0x0000 */ enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;
      /* 0x0004 */ unsigned long PageProtection;
    } /* size: 0x0008 */ AcquireForSectionSynchronization;
    struct // _TAG_UNNAMED_18
    {
      /* 0x0000 */ enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
      /* 0x0004 */ unsigned char SafeToRecurse;
      /* 0x0005 */ char __PADDING__[3];
    } /* size: 0x0008 */ NotifyStreamFileObject;
    struct // _TAG_UNNAMED_19
    {
      /* 0x0000 */ void* Argument1;
      /* 0x0004 */ void* Argument2;
      /* 0x0008 */ void* Argument3;
      /* 0x000c */ void* Argument4;
      /* 0x0010 */ void* Argument5;
    } /* size: 0x0014 */ Others;
  }; /* size: 0x0014 */
} FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS; /* size: 0x0014 */

typedef struct _FS_FILTER_CALLBACK_DATA
{
  /* 0x0000 */ unsigned long SizeOfFsFilterCallbackData;
  /* 0x0004 */ unsigned char Operation;
  /* 0x0005 */ unsigned char Reserved;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x000c */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ union _FS_FILTER_PARAMETERS Parameters;
} FS_FILTER_CALLBACK_DATA, *PFS_FILTER_CALLBACK_DATA; /* size: 0x0024 */


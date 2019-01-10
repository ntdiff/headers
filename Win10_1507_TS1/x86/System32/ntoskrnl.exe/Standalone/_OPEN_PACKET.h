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
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0010 */

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
  /* 0x0048 */ enum _CREATE_FILE_TYPE CreateFileType;
  /* 0x004c */ void* MailslotOrPipeParameters;
  /* 0x0050 */ unsigned char Override;
  /* 0x0051 */ unsigned char QueryOnly;
  /* 0x0052 */ unsigned char DeleteOnly;
  /* 0x0053 */ unsigned char FullAttributes;
  /* 0x0054 */ struct _DUMMY_FILE_OBJECT* LocalFileObject;
  /* 0x0058 */ unsigned long InternalFlags;
  /* 0x005c */ char AccessMode;
  /* 0x0060 */ struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;
} OPEN_PACKET, *POPEN_PACKET; /* size: 0x0070 */


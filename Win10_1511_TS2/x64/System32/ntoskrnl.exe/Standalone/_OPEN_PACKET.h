typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0008 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0010 */ void* DeviceObjectHint;
  /* 0x0018 */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
  /* 0x0020 */ struct _EJOB* SiloContext;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0028 */

typedef struct _OPEN_PACKET
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ long FinalStatus;
  /* 0x0018 */ unsigned __int64 Information;
  /* 0x0020 */ unsigned long ParseCheck;
  union
  {
    /* 0x0028 */ struct _FILE_OBJECT* RelatedFileObject;
    /* 0x0028 */ struct _DEVICE_OBJECT* ReferencedDeviceObject;
  }; /* size: 0x0008 */
  /* 0x0030 */ struct _OBJECT_ATTRIBUTES* OriginalAttributes;
  /* 0x0038 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0040 */ unsigned long CreateOptions;
  /* 0x0044 */ unsigned short FileAttributes;
  /* 0x0046 */ unsigned short ShareAccess;
  /* 0x0048 */ void* EaBuffer;
  /* 0x0050 */ unsigned long EaLength;
  /* 0x0054 */ unsigned long Options;
  /* 0x0058 */ unsigned long Disposition;
  /* 0x0060 */ struct _FILE_BASIC_INFORMATION* BasicInformation;
  /* 0x0068 */ struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;
  /* 0x0070 */ enum _CREATE_FILE_TYPE CreateFileType;
  /* 0x0078 */ void* MailslotOrPipeParameters;
  /* 0x0080 */ unsigned char Override;
  /* 0x0081 */ unsigned char QueryOnly;
  /* 0x0082 */ unsigned char DeleteOnly;
  /* 0x0083 */ unsigned char FullAttributes;
  /* 0x0088 */ struct _DUMMY_FILE_OBJECT* LocalFileObject;
  /* 0x0090 */ unsigned long InternalFlags;
  /* 0x0094 */ char AccessMode;
  /* 0x0098 */ struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;
} OPEN_PACKET, *POPEN_PACKET; /* size: 0x00c0 */


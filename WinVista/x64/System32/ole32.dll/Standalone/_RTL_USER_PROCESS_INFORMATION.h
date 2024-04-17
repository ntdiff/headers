typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _SECTION_IMAGE_INFORMATION
{
  /* 0x0000 */ void* TransferAddress;
  /* 0x0008 */ unsigned long ZeroBits;
  /* 0x0010 */ unsigned __int64 MaximumStackSize;
  /* 0x0018 */ unsigned __int64 CommittedStackSize;
  /* 0x0020 */ unsigned long SubSystemType;
  union
  {
    struct
    {
      /* 0x0024 */ unsigned short SubSystemMinorVersion;
      /* 0x0026 */ unsigned short SubSystemMajorVersion;
    }; /* size: 0x0004 */
    /* 0x0024 */ unsigned long SubSystemVersion;
  }; /* size: 0x0004 */
  /* 0x0028 */ unsigned long GpValue;
  /* 0x002c */ unsigned short ImageCharacteristics;
  /* 0x002e */ unsigned short DllCharacteristics;
  /* 0x0030 */ unsigned short Machine;
  /* 0x0032 */ unsigned char ImageContainsCode;
  union
  {
    /* 0x0033 */ unsigned char ImageFlags;
    struct /* bitfield */
    {
      /* 0x0033 */ unsigned char ComPlusNativeReady : 1; /* bit position: 0 */
      /* 0x0033 */ unsigned char ComPlusILOnly : 1; /* bit position: 1 */
      /* 0x0033 */ unsigned char ImageDynamicallyRelocated : 1; /* bit position: 2 */
      /* 0x0033 */ unsigned char Reserved : 5; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0034 */ unsigned long LoaderFlags;
  /* 0x0038 */ unsigned long ImageFileSize;
  /* 0x003c */ unsigned long CheckSum;
} SECTION_IMAGE_INFORMATION, *PSECTION_IMAGE_INFORMATION; /* size: 0x0040 */

typedef struct _RTL_USER_PROCESS_INFORMATION
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ void* Process;
  /* 0x0010 */ void* Thread;
  /* 0x0018 */ struct _CLIENT_ID ClientId;
  /* 0x0028 */ struct _SECTION_IMAGE_INFORMATION ImageInformation;
} RTL_USER_PROCESS_INFORMATION, *PRTL_USER_PROCESS_INFORMATION; /* size: 0x0068 */


typedef union _WHEA_ERROR_PACKET_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved1 : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long HypervisorError : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PlatformPfaControl : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PlatformDirectedOffline : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved2 : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS; /* size: 0x0004 */

typedef enum _WHEA_ERROR_TYPE
{
  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
  WheaErrTypeGeneric = 6,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef enum _WHEA_ERROR_SEVERITY
{
  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevInformational = 3,
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_SOURCE_TYPE
{
  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeGenericV2 = 12,
  WheaErrSrcTypeSCIGenericV2 = 13,
  WheaErrSrcTypeMax = 14,
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT
{
  WheaDataFormatIPFSalRecord = 0,
  WheaDataFormatXPFMCA = 1,
  WheaDataFormatMemory = 2,
  WheaDataFormatPCIExpress = 3,
  WheaDataFormatNMIPort = 4,
  WheaDataFormatPCIXBus = 5,
  WheaDataFormatPCIXDevice = 6,
  WheaDataFormatGeneric = 7,
  WheaDataFormatMax = 8,
} WHEA_ERROR_PACKET_DATA_FORMAT, *PWHEA_ERROR_PACKET_DATA_FORMAT;

typedef struct _WHEA_ERROR_PACKET_V2
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ union _WHEA_ERROR_PACKET_FLAGS Flags;
  /* 0x0010 */ enum _WHEA_ERROR_TYPE ErrorType;
  /* 0x0014 */ enum _WHEA_ERROR_SEVERITY ErrorSeverity;
  /* 0x0018 */ unsigned long ErrorSourceId;
  /* 0x001c */ enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
  /* 0x0020 */ struct _GUID NotifyType;
  /* 0x0030 */ unsigned __int64 Context;
  /* 0x0038 */ enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
  /* 0x003c */ unsigned long Reserved1;
  /* 0x0040 */ unsigned long DataOffset;
  /* 0x0044 */ unsigned long DataLength;
  /* 0x0048 */ unsigned long PshedDataOffset;
  /* 0x004c */ unsigned long PshedDataLength;
} WHEA_ERROR_PACKET_V2, *PWHEA_ERROR_PACKET_V2; /* size: 0x0050 */


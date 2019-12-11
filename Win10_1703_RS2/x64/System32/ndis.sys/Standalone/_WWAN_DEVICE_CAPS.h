typedef enum _WWAN_DEVICE_TYPE
{
  WwanDeviceTypeUnknown = 0,
  WwanDeviceTypeEmbedded = 1,
  WwanDeviceTypeRemovable = 2,
  WwanDeviceTypeRemote = 3,
  WwanDeviceTypeMax = 4,
} WWAN_DEVICE_TYPE, *PWWAN_DEVICE_TYPE;

typedef enum _WWAN_CELLULAR_CLASS
{
  WwanCellularClassUnknown = 0,
  WwanCellularClassGsm = 1,
  WwanCellularClassCdma = 2,
  WwanCellularClassMax = 3,
} WWAN_CELLULAR_CLASS, *PWWAN_CELLULAR_CLASS;

typedef enum _WWAN_VOICE_CLASS
{
  WwanVoiceClassUnknown = 0,
  WwanVoiceClassNoVoice = 1,
  WwanVoiceClassSeparateVoiceData = 2,
  WwanVoiceClassSimultaneousVoiceData = 3,
  WwanVoiceClassMax = 4,
} WWAN_VOICE_CLASS, *PWWAN_VOICE_CLASS;

typedef enum _WWAN_SIM_CLASS
{
  WwanSimClassUnknown = 0,
  WwanSimClassSimLogical = 1,
  WwanSimClassSimRemovable = 2,
  WwanSimClassSimRemote = 3,
  WwanSimClassMax = 4,
} WWAN_SIM_CLASS, *PWWAN_SIM_CLASS;

typedef enum _WWAN_STRUCT_TYPE
{
  WwanStructTN = 0,
  WwanStructContext = 1,
  WwanStructProvider = 2,
  WwanStructSmsPdu = 3,
  WwanStructReserved0 = 4,
  WwanStructReserved1 = 5,
  WwanStructReserved2 = 6,
  WwanStructSmsCdma = 7,
  WwanStructReserved3 = 8,
  WwanStructDeviceServiceEntry = 9,
  WwanStructProvider2 = 10,
  WwanStructDeviceServiceGuid = 11,
  WwanStructDeviceServiceCommandId = 12,
  WwanStructCellularClass = 13,
  WwanStructDeviceSlotMap = 14,
  WwanStructUiccApplication = 15,
  WwanStructRegisterAcquisitionOrder = 16,
  WwanStructRegistrationState = 17,
  WwanStructSignalState = 18,
  WwanStructUiccTerminalCapability = 19,
  WwanStructSarConfig = 20,
  WwanStructContextV2 = 21,
  WwanStructNetworkBlacklistProvider = 22,
  WwanStructMax = 23,
} WWAN_STRUCT_TYPE, *PWWAN_STRUCT_TYPE;

typedef struct _WWAN_LIST_HEADER
{
  /* 0x0000 */ enum _WWAN_STRUCT_TYPE ElementType;
  /* 0x0004 */ unsigned long ElementCount;
} WWAN_LIST_HEADER, *PWWAN_LIST_HEADER; /* size: 0x0008 */

typedef struct _WWAN_DEVICE_CAPS
{
  /* 0x0000 */ enum _WWAN_DEVICE_TYPE WwanDeviceType;
  /* 0x0004 */ enum _WWAN_CELLULAR_CLASS WwanCellularClass;
  /* 0x0008 */ enum _WWAN_VOICE_CLASS WwanVoiceClass;
  /* 0x000c */ enum _WWAN_SIM_CLASS WwanSimClass;
  /* 0x0010 */ unsigned long WwanDataClass;
  /* 0x0014 */ wchar_t CustomDataClass[12];
  /* 0x002c */ unsigned long WwanGsmBandClass;
  /* 0x0030 */ unsigned long WwanCdmaBandClass;
  /* 0x0034 */ wchar_t CustomBandClass[20];
  /* 0x005c */ unsigned long WwanSmsCaps;
  /* 0x0060 */ unsigned long WwanControlCaps;
  /* 0x0064 */ wchar_t DeviceId[18];
  /* 0x0088 */ wchar_t Manufacturer[32];
  /* 0x00c8 */ wchar_t Model[32];
  /* 0x0108 */ wchar_t FirmwareInfo[32];
  /* 0x0148 */ unsigned long MaxActivatedContexts;
  /* 0x014c */ unsigned long WwanAuthAlgoCaps;
  /* 0x0150 */ struct _WWAN_LIST_HEADER CellularClassListHeader;
} WWAN_DEVICE_CAPS, *PWWAN_DEVICE_CAPS; /* size: 0x0158 */


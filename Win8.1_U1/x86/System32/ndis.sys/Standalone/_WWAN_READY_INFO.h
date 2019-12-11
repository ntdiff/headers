typedef enum _WWAN_READY_STATE
{
  WwanReadyStateOff = 0,
  WwanReadyStateInitialized = 1,
  WwanReadyStateSimNotInserted = 2,
  WwanReadyStateBadSim = 3,
  WwanReadyStateFailure = 4,
  WwanReadyStateNotActivated = 5,
  WwanReadyStateDeviceLocked = 6,
} WWAN_READY_STATE, *PWWAN_READY_STATE;

typedef enum _WWAN_EMERGENCY_MODE
{
  WwanEmergencyModeOff = 0,
  WwanEmergencyModeOn = 1,
  WwanEmergencyModeMax = 2,
} WWAN_EMERGENCY_MODE, *PWWAN_EMERGENCY_MODE;

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
  WwanStructMax = 14,
} WWAN_STRUCT_TYPE, *PWWAN_STRUCT_TYPE;

typedef struct _WWAN_LIST_HEADER
{
  /* 0x0000 */ enum _WWAN_STRUCT_TYPE ElementType;
  /* 0x0004 */ unsigned long ElementCount;
} WWAN_LIST_HEADER, *PWWAN_LIST_HEADER; /* size: 0x0008 */

typedef struct _WWAN_READY_INFO
{
  /* 0x0000 */ enum _WWAN_READY_STATE ReadyState;
  /* 0x0004 */ enum _WWAN_EMERGENCY_MODE EmergencyMode;
  /* 0x0008 */ wchar_t SubscriberId[16];
  /* 0x0028 */ wchar_t SimIccId[21];
  /* 0x0052 */ unsigned char CdmaShortMsgSize;
  /* 0x0054 */ struct _WWAN_LIST_HEADER TNListHeader;
} WWAN_READY_INFO, *PWWAN_READY_INFO; /* size: 0x005c */


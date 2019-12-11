typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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
  WwanStructMax = 19,
} WWAN_STRUCT_TYPE, *PWWAN_STRUCT_TYPE;

typedef struct _WWAN_LIST_HEADER
{
  /* 0x0000 */ enum _WWAN_STRUCT_TYPE ElementType;
  /* 0x0004 */ unsigned long ElementCount;
} WWAN_LIST_HEADER, *PWWAN_LIST_HEADER; /* size: 0x0008 */

typedef struct _NDIS_WWAN_PREFERRED_PROVIDERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uStatus;
  /* 0x0008 */ struct _WWAN_LIST_HEADER PreferredListHeader;
} NDIS_WWAN_PREFERRED_PROVIDERS, *PNDIS_WWAN_PREFERRED_PROVIDERS; /* size: 0x0010 */


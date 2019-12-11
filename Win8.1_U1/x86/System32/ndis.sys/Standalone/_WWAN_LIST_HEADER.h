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


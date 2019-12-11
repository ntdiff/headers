typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_WDF_CX_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* EvtCxPowerReference /* function */;
  /* 0x0010 */ void* EvtCxPowerDereference /* function */;
  /* 0x0018 */ void* EvtCxGetDeviceObject /* function */;
  /* 0x0020 */ void* EvtCxGetNextDeviceObject /* function */;
  /* 0x0028 */ void* EvtCxGetAssignedFdoIndex /* function */;
  /* 0x0030 */ void* EvtCxGetNdisHandleFromDeviceObject /* function */;
  /* 0x0038 */ void* EvtCxUpdatePMParameters /* function */;
} NDIS_WDF_CX_CHARACTERISTICS, *PNDIS_WDF_CX_CHARACTERISTICS; /* size: 0x0040 */

typedef enum _NDIS_WDF_CX_DRIVER_STATE
{
  NdisCxDriverStateInvalid = 0,
  NdisCxDriverStateRegistered = 1,
  NdisCxDriverStateDeregistered = 2,
} NDIS_WDF_CX_DRIVER_STATE, *PNDIS_WDF_CX_DRIVER_STATE;

typedef struct _NDIS_WDF_CX_DRIVER_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0010 */ struct _UNICODE_STRING* RegistryPath;
  /* 0x0018 */ struct NDIS_WDF_CX_DRIVER_CONTEXT__* CxDriverContext;
  /* 0x0020 */ struct _NDIS_WDF_CX_CHARACTERISTICS Chars;
  /* 0x0060 */ unsigned long ClientCount;
  /* 0x0064 */ enum _NDIS_WDF_CX_DRIVER_STATE State;
  /* 0x0065 */ char __PADDING__[3];
} NDIS_WDF_CX_DRIVER_BLOCK, *PNDIS_WDF_CX_DRIVER_BLOCK; /* size: 0x0068 */


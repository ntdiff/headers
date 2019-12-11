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
  /* 0x0018 */ void* EvtCxPowerAoAcEngage /* function */;
  /* 0x0020 */ void* EvtCxPowerAoAcDisengage /* function */;
  /* 0x0028 */ void* EvtCxGetDeviceObject /* function */;
  /* 0x0030 */ void* EvtCxGetNextDeviceObject /* function */;
  /* 0x0038 */ void* EvtCxGetAssignedFdoName /* function */;
  /* 0x0040 */ void* EvtCxGetNdisHandleFromDeviceObject /* function */;
  /* 0x0048 */ void* EvtCxUpdatePMParameters /* function */;
  /* 0x0050 */ void* EvtCxAllocateMiniportBlock /* function */;
  /* 0x0058 */ void* EvtCxMiniportCompleteAdd /* function */;
  /* 0x0060 */ void* EvtCxDeviceStartComplete /* function */;
  /* 0x0068 */ void* EvtCxMiniportDeviceReset /* function */;
  /* 0x0070 */ void* EvtCxMiniportQueryDeviceResetSupport /* function */;
  /* 0x0078 */ void* EvtCxGetWmiEventGuid /* function */;
} NDIS_WDF_CX_CHARACTERISTICS, *PNDIS_WDF_CX_CHARACTERISTICS; /* size: 0x0080 */


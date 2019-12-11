typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_WDF_CX_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ void* EvtCxPowerReference /* function */;
  /* 0x0008 */ void* EvtCxPowerDereference /* function */;
  /* 0x000c */ void* EvtCxPowerAoAcEngage /* function */;
  /* 0x0010 */ void* EvtCxPowerAoAcDisengage /* function */;
  /* 0x0014 */ void* EvtCxGetDeviceObject /* function */;
  /* 0x0018 */ void* EvtCxGetNextDeviceObject /* function */;
  /* 0x001c */ void* EvtCxGetAssignedFdoName /* function */;
  /* 0x0020 */ void* EvtCxGetNdisHandleFromDeviceObject /* function */;
  /* 0x0024 */ void* EvtCxUpdatePMParameters /* function */;
  /* 0x0028 */ void* EvtCxAllocateMiniportBlock /* function */;
  /* 0x002c */ void* EvtCxMiniportCompleteAdd /* function */;
  /* 0x0030 */ void* EvtCxDeviceStartComplete /* function */;
} NDIS_WDF_CX_CHARACTERISTICS, *PNDIS_WDF_CX_CHARACTERISTICS; /* size: 0x0034 */


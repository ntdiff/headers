typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_COMPOSITE_BUS_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceId;
  /* 0x0008 */ unsigned long NumberOfInternalBindings;
  /* 0x000c */ struct _UNICODE_STRING SymbolicLinkName[32];
  /* 0x010c */ struct _UNICODE_STRING InstanceId[32];
  /* 0x020c */ struct _UNICODE_STRING HardwareIds;
  /* 0x0214 */ struct _UNICODE_STRING CompatibleIds;
} NDIS_COMPOSITE_BUS_INFORMATION, *PNDIS_COMPOSITE_BUS_INFORMATION; /* size: 0x021c */


typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS_COMPOSITE_BUS_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceId;
  /* 0x0010 */ unsigned long NumberOfInternalBindings;
  /* 0x0018 */ struct _UNICODE_STRING SymbolicLinkName[32];
  /* 0x0218 */ struct _UNICODE_STRING InstanceId[32];
  /* 0x0418 */ struct _UNICODE_STRING HardwareIds;
  /* 0x0428 */ struct _UNICODE_STRING CompatibleIds;
} NDIS_COMPOSITE_BUS_INFORMATION, *PNDIS_COMPOSITE_BUS_INFORMATION; /* size: 0x0438 */


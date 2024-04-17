typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_DEVICE_OBJECT_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _UNICODE_STRING* DeviceName;
  /* 0x0008 */ struct _UNICODE_STRING* SymbolicName;
  /* 0x000c */ void** MajorFunctions /* function */;
  /* 0x0010 */ unsigned long ExtensionSize;
  /* 0x0014 */ const struct _UNICODE_STRING* DefaultSDDLString;
  /* 0x0018 */ const struct _GUID* DeviceClassGuid;
} NDIS_DEVICE_OBJECT_ATTRIBUTES, *PNDIS_DEVICE_OBJECT_ATTRIBUTES; /* size: 0x001c */


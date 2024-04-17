typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SL_HWID_DEVICE_INFO
{
  /* 0x0000 */ unsigned long SizeBytes;
  /* 0x0004 */ unsigned char Type;
  /* 0x0005 */ unsigned char DeviceRemovalPolicy;
  /* 0x0006 */ unsigned char AuthenticationStatus;
  /* 0x0007 */ unsigned char Disposition;
  /* 0x0008 */ unsigned long DeviceNodeLevel;
  /* 0x000c */ struct _GUID Guid;
  /* 0x001c */ unsigned char Data[1];
  /* 0x001d */ char __PADDING__[3];
} SL_HWID_DEVICE_INFO, *PSL_HWID_DEVICE_INFO; /* size: 0x0020 */


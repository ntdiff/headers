typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _VARIABLE_NAME_AND_VALUE
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long ValueOffset;
  /* 0x0008 */ unsigned long ValueLength;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ struct _GUID VendorGuid;
  /* 0x0020 */ wchar_t Name[1];
  /* 0x0022 */ char __PADDING__[2];
} VARIABLE_NAME_AND_VALUE, *PVARIABLE_NAME_AND_VALUE; /* size: 0x0024 */


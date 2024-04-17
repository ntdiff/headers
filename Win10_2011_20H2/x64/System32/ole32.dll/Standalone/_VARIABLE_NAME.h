typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _VARIABLE_NAME
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ struct _GUID VendorGuid;
  /* 0x0014 */ wchar_t Name[1];
  /* 0x0016 */ char __PADDING__[2];
} VARIABLE_NAME, *PVARIABLE_NAME; /* size: 0x0018 */


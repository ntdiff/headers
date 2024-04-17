typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RESOURCEMANAGER_BASIC_INFORMATION
{
  /* 0x0000 */ struct _GUID ResourceManagerId;
  /* 0x0010 */ unsigned long DescriptionLength;
  /* 0x0014 */ wchar_t Description[1];
  /* 0x0016 */ char __PADDING__[2];
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION; /* size: 0x0018 */


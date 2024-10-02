typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_GDI_DRIVER_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING DriverName;
  /* 0x0010 */ void* ImageAddress;
  /* 0x0018 */ void* SectionPointer;
  /* 0x0020 */ void* EntryPoint;
  /* 0x0028 */ unsigned long ImageLength;
  /* 0x002c */ long __PADDING__[1];
} SYSTEM_GDI_DRIVER_INFORMATION, *PSYSTEM_GDI_DRIVER_INFORMATION; /* size: 0x0030 */


typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSTEM_GDI_DRIVER_INFORMATION
{
  /* 0x0000 */ struct _UNICODE_STRING DriverName;
  /* 0x0008 */ void* ImageAddress;
  /* 0x000c */ void* SectionPointer;
  /* 0x0010 */ void* EntryPoint;
  /* 0x0014 */ struct _IMAGE_EXPORT_DIRECTORY* ExportSectionPointer;
  /* 0x0018 */ unsigned long ImageLength;
} SYSTEM_GDI_DRIVER_INFORMATION, *PSYSTEM_GDI_DRIVER_INFORMATION; /* size: 0x001c */


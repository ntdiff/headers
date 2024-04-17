typedef struct _LDR_SECTION_INFO
{
  /* 0x0000 */ void* SectionHandle;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x0010 */ struct _OBJECT_ATTRIBUTES* ObjA;
  /* 0x0018 */ unsigned long SectionPageProtection;
  /* 0x001c */ unsigned long AllocationAttributes;
} LDR_SECTION_INFO, *PLDR_SECTION_INFO; /* size: 0x0020 */


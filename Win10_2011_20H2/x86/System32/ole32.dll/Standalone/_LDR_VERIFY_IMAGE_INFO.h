typedef struct _LDR_IMPORT_CALLBACK_INFO
{
  /* 0x0000 */ void* ImportCallbackRoutine /* function */;
  /* 0x0004 */ void* ImportCallbackParameter;
} LDR_IMPORT_CALLBACK_INFO, *PLDR_IMPORT_CALLBACK_INFO; /* size: 0x0008 */

typedef struct _LDR_SECTION_INFO
{
  /* 0x0000 */ void* SectionHandle;
  /* 0x0004 */ unsigned long DesiredAccess;
  /* 0x0008 */ struct _OBJECT_ATTRIBUTES* ObjA;
  /* 0x000c */ unsigned long SectionPageProtection;
  /* 0x0010 */ unsigned long AllocationAttributes;
} LDR_SECTION_INFO, *PLDR_SECTION_INFO; /* size: 0x0014 */

typedef struct _LDR_VERIFY_IMAGE_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _LDR_IMPORT_CALLBACK_INFO CallbackInfo;
  /* 0x0010 */ struct _LDR_SECTION_INFO SectionInfo;
  /* 0x0024 */ unsigned short ImageCharacteristics;
  /* 0x0026 */ char __PADDING__[2];
} LDR_VERIFY_IMAGE_INFO, *PLDR_VERIFY_IMAGE_INFO; /* size: 0x0028 */

